#library "samsara"
#include "zcommon.acs"

#include "commonFuncs.h"

#include "samsaraDefs.h"
#include "samsaraWeps.h"
#include "samsaraSounds.h"
#include "samsaraMsgs.h"
#include "samsaraStrife.h"
#include "Strifeguy.h"
#include "rebelmoon.h"
#include "wanghead.h"
#include "bitterman.acs"

int array_wolfmove[PLAYERMAX];
int array_vanillaAnim[PLAYERMAX];
int array_ballgag[PLAYERMAX];
int array_weaponBar[PLAYERMAX];
int array_pickupswitch[PLAYERMAX];
int array_rottbar[PLAYERMAX];
int DukeQuoteCooldown[PLAYERMAX];
int LeonardQuoteCooldown[PLAYERMAX];
int ServerEnterTimes[PLAYERMAX];
int WolfenEnterTimes[PLAYERMAX];
int ClientEnterTimes[PLAYERMAX];
int ClientTipboxes[PLAYERMAX];
int ResonantTimes[PLAYERMAX][RESCOUNT];
int ScheduledTimes[PLAYERMAX][3];

int SamsaraWepType, SamsaraClientClass, SamsaraItemFlash, SamsaraAlternativeClass;
int SamsaraClientWeps[SLOTCOUNT] = {0};
int SamsaraClientWepFlashes[SLOTCOUNT] = {0};
int IsServer = 0;
int LMSMessaged = 0;
int UnloadingNow = 0;
int ArmorMode = -1;
int MapArmors[ARMORCOUNT] = {-1};
int ClientTipboxModifier, ClientTipClassModifier;

global int 0:SamsaraGlobal[];

#include "samsaraFuncs.h"

#include "script_auto.h"
#include "script_pickup.h"
#include "script_marathon.h"
#include "script_quake.h"
#include "script_tipbox.h"
#include "script_strife.h"
#include "script_scheduled.h"
#include "script_pdwtak.h"
#include "script_doom64.h"
#include "script_compendium.h"

script "SamsaraDecorate" (int choice, int arg1, int arg2) //215 - SAMSARA_DECORATE
{
    int clipcount;
    int result;
    int i, j, k;
    int x, y, z;
    int armorIndex, armorToSet;
    int pln = PlayerNumber();
    
    switch (choice)
    {
      case 1:
        result = GetActorProperty(0, APROP_Dropped);
        break;
        
      case 2:
        if (CheckInventory("WolfenMovement") == 1) { SetActorState(0, "Spawn"); }
        break;
        
      case 3:
        result = !(GetCVar("sv_itemrespawn") || GetCVar("sv_weaponstay"));
        break;
        
      case 4:
        result = isInvasion() || !(isCoop() || isSinglePlayer());
        break;

      case 5:
        SetActivatorToTarget(0);
        result = CheckInventory("Cell");
        if (arg1) { TakeInventory("Cell", result); }
        break;

      case 6:
        result = GetCVar("skulltag");
        break;
      
      case 7:
        if (arg2 != 1)
        {
            GiveQuad(arg1);
        }
        else
        {
            if (isLMS())
            {
                if (GetCvar("sams_permaquad") == 1)
                { GiveInventory("QuadDamageItem", 1); }
                break;
            }

            GiveQuad(arg1);

            if (GetCvar("sams_permaquad") == 1)//if (isCoop() || isSinglePlayer())
            { GiveInventory("QuadDamageItem", 1); }
        }
        break;

      case 8:
        result = defaultCVar("sams_cl_expparticles", 0);
        if (!result) { result = 100; }

        result = max(0, result);

        result *= max(arg1, 1);
        result /= max(arg2, 1);

        GiveInventory("QuakeExplosionCounter", result);
        break;

      case 9:
        clipcount = CheckInventory("Clip");

        if (clipcount < 50)
        {
            GiveInventory("Clip", 50 - clipcount);
            TakeInventory("Clip", CheckInventory("Clip") - 50);
            result = 1;
        }
        break;

      case 10:
        TakeInventory("QuakeExplosionCounter", arg1);
        result = CheckInventory("QuakeExplosionCounter");
        break;

      case 15:
        SetActorProperty(0, APROP_Speed, percFloat(arg1, arg2));
        break;
        
      case 16:
        if (GameType () != GAME_SINGLE_PLAYER)
        {
            SetHudSize(400, 300, 0);
            Hudmessage(l:"DUKEDEADMESSAGE";
            HUDMSG_PLAIN,1024,CR_LIGHTBLUE,200.4,9.1,1.75);
            delay(15);

            if (!CheckInventory("DukeBallgag"))
            {
                LocalAmbientSound("duke/mpdeath",127);
                GiveInventory("DukeTauntCooldown",5);
                ACS_NamedExecuteAlways("DukeTauntCooldown",0,0);
            }
        }
        break;

      case 17:
        if (arg1) { result = GetCVar("sams_permault"); }
        else { result = GetCVar("sv_weaponstay"); }
        break;

      case 18:
        if (MapArmors[0] == -1) { CheckMapArmors(); }
        SetArmorMode();

        i = Timer() != 0;

        if (MapArmors[ARMOR_YELLOW] == 1) { i += 2; }

        SetActorState(0, ArmorModeStates[ArmorMode][i]);
        break;

      case 19:
        result = isLMS();
        break;

      case 20:
        SetArmorMode();

        armorIndex = -1;
        armorToSet = arg1;

        for (i = 0; i < ARMORCOUNT; i++)
        {
            if (GetArmorType(ArmorItems[ArmorMode][i][0], pln))
            {
                armorIndex = i;
                break;
            }
        }

        arg1 = middle(0, arg1, ARMORCOUNT-1);
        i = CheckInventory("Armor");
        j = ArmorItems[ArmorMode][arg1][1];

        if (j == 0) { result = 0; break; }


        /* If we're adding armor, always follow through
           Else, if the ending armor count is lower than the current armor count
           and we're not upgrading our armor, give up now */

        if (arg2 > 0)
        {
            if (arg1 <= armorIndex) { armorToSet = armorIndex; }
        }
        else if (((arg2 == 0 && i > j) || (arg2 < 0 && i > -arg2)) && (arg1 <= armorIndex))
        {
            result = 0;
            break;
        }

        if (arg2 <= 0)
        {
            TakeInventory("BasicArmor", i);
            GiveInventory(ArmorItems[ArmorMode][armorToSet][0], 1);

            k = CheckInventory("Armor");

            if (arg2 == 0) { break; }

            TakeInventory("BasicArmor", k-1);
            GiveInventory("InfiniteArmorBonus", -arg2 - 1);
        }
        else
        {
            TakeInventory("BasicArmor", i);
            GiveInventory(ArmorItems[ArmorMode][armorToSet][0], 1);

            k = CheckInventory("Armor");
            TakeInventory("BasicArmor", k-1);

            GiveInventory("InfiniteArmorBonus", (i + arg2) - 1);
        }

        result = 1;
        break;

      case 21:
        i = CheckInventory("Armor");
        if (i < arg1) { result = 0; break; }

        TakeInventory("BasicArmor", i-arg1);
        result = 1;
        break;

      case 22:
        result = GetCVar("sams_nohealthcap");
        break;

      case 23:
        GiveInventory("TimeBombPause", 1);
        Delay(arg1);
        TakeInventory("TimeBombPause", 1);
        break;

      case 24:
        result = GetCVar("sams_noult");
        break;

      case 25:
        if (GameType() == GAME_NET_COOPERATIVE)
		{ AmbientSound("quake/invisannouncer",127); }
		else
		{ LocalAmbientSound("quake/invisannouncer",127); }
        break;
		
	  case 26:
	    if (CheckInventory("PowerInvisibility") == 0)
		{ GiveInventory("PowerInvisibility",1); }
		else
		{ TakeInventory("PowerInvisibility",1); 
		delay(1);
		GiveInventory("PowerShadow",1);
		delay(1);
		GiveInventory("PowerShadow",1); }
	    break;

      case 27:
        result = GetCVar("sams_nounique");
        break;

      case 28:
        result = GetCVar("sams_noinvuln");
        break;

      case 29:
        result = GetCVar("instagib");
        break;

      case 30:
		if (GetCVar("sams_runninginzdoom") == 1)
		{
			result = GetCVar("sams_zd_bloodyhell");
			//log(s:"ZDoom ",i:result);
		} else {
			result = GetCVar("sams_cl_bloodyhell");
			//log(s:"Zandro ",i:result);
		}
        break;

      case 31:
        if (GetCVar("sams_runninginzdoom") == 1)
		{
			result = GetCVar("sams_zd_bloodypersistent");
		} else {
			result = GetCVar("sams_cl_bloodypersistent");
		}
        break;

      case 32:
        result = GetCVar("sams_nohealth");
        break;

      case 33:
        result = GetCVar("sams_vanillaquake");
        break;
		
		case 34:
            if (!CheckInventory("EleenaBallgag"))
            {
                LocalAmbientSound("Eleena/Suicide",127);
                GiveInventory("EleenaTauntCooldown",5);
                ACS_NamedExecuteAlways("EleenaTauntCooldown",0,0);
            }
        break;		
		
	  case 35:
		i = CheckInventory("Clip");
		j = CheckInventory("Shell");
		k = CheckInventory("RocketAmmo");
		x = CheckInventory("Cell");
		
		if(i >= WitchavenSpellCost[arg1][0]
		&& j >= WitchavenSpellCost[arg1][1]
		&& k >= WitchavenSpellCost[arg1][2]
		&& x >= WitchavenSpellCost[arg1][3])
		{	result = 1;
			if(!GetCvar("sv_infiniteammo"))
			{
				TakeInventory("Clip",WitchavenSpellCost[arg1][0]);
				TakeInventory("Shell",WitchavenSpellCost[arg1][1]);
				TakeInventory("RocketAmmo",WitchavenSpellCost[arg1][2]);
				TakeInventory("Cell",WitchavenSpellCost[arg1][3]);}
			}
		else
		{	result = 0;}
		break;
		
	  case 36:
		if(arg1 == 1)
			result = GetCVar("sams_microwavepop");
			
		else
			result = SpawnForced("RPGExplosion", GetActorX(0), GetActorY(0), GetActorZ(0) + (GetActorProperty(0,APROP_Height) * 2), 0, 0);
			
		break;
		
	  case 37:
        if (GameType () != GAME_SINGLE_PLAYER)
        {
            SetHudSize(400, 300, 0);
            Hudmessage(s:"Mash activator key to kill again!"; HUDMSG_PLAIN,1024,CR_WHITE,200.4,9.1,1.75);
            delay(15);

            if (!CheckInventory("LeonardBallgag"))
            {
                LocalAmbientSound("leonard/mpdeath",127);
                GiveInventory("LeonardTauntCooldown",5);
                ACS_NamedExecuteAlways("LeonardTauntCooldown",0,0);
            }
        }
        break;
    }
    
    SetResultValue(result);
}

//+Added
script "SamsaraWitchaven" (int which, int arg1, int arg2) //707
{
	switch(which)
	{
	case 0:
		break;
	case 1:
		if(CheckInventory("WTHealthPhial") > 0)
		{	TakeInventory("WTHealthPhial",1);
			SpawnProjectile(0,"WTHealthPhial",GetActorAngle(0) >> 8, 40, 10, 1, 0);}
		break;
	case 2:
		SetActorProperty(0,APROP_HEALTH, GetActorProperty(0,APROP_HEALTH) - 1);
		break;
	case 3:
		GiveInventory("WTSpellCounter",1);
		if(CheckInventory("WTSpellCounter") > 6)
		{	TakeInventory("WTSpellCounter",999);
			GiveInventory("WTSpellCounter",1);
		}
		int i = CheckInventory("WTSpellCounter");
		SetHUDSize(1240,1024,1);
		SetFont(WitchavenSpellScroll[i][1]);
		HudMessage(s:"A";HUDMSG_PLAIN,554,CR_UNTRANSLATED,330.0,205.0,8.0);
		SetFont("WTFFONT");
		HudMessage(s:WitchavenSpellScroll[i][0];HUDMSG_PLAIN,559,CR_UNTRANSLATED,330.0,275.0,8.0);
		HudMessage(s:"* Usage: Ammo 1: ",d:WitchavenSpellCost[i][0],s:" | Ammo 2: ",d:WitchavenSpellCost[i][1],s:" | Ammo 3: ",d:WitchavenSpellCost[i][2],s:" | Ammo 4: ",d:WitchavenSpellCost[i][3],
					s:"\n* Info: ",s:WitchavenSpellInfo[i];HUDMSG_PLAIN,558,CR_UNTRANSLATED,710.0,205.0,8.0);
		break;
	case 4:
		SetFont("WTFFONT");
		SetHudSize(1240,1024,1);
		HudMessage(s:WitchavenStrings[arg1][0];HUDMSG_PLAIN,556,CR_UNTRANSLATED,WitchavenStrings[arg1][1] << 16,WitchavenStrings[arg1][2] << 16,3.0);
		break;
	default:
		break;
	}
}

//+Added
script "SamsaraWTAutoHealer" (void) //708
{
	while(GetActorProperty(0,APROP_HEALTH) > 0)
	{
		if(GetActorProperty(0,APROP_HEALTH) < 25
		&& GetActorProperty(0,APROP_HEALTH) > 0)
		{
			if(CheckInventory("WTHealthPhial"))
			{
				SetActorProperty(0,APROP_HEALTH, GetActorProperty(0,APROP_HEALTH) + 25);
				TakeInventory("WTHealthPhial",1);
				ActivatorSound("gplayer/drink",127);
			}
			else
			{
				SetFont("WTFFONT");
				SetHudSize(1240,1024,1);
				HudMessage(s:WitchavenStrings[12][0];HUDMSG_PLAIN,556,CR_UNTRANSLATED,WitchavenStrings[12][1] << 16,WitchavenStrings[12][2] << 16,0.5);
			}
		}
		Delay(2);
	}
}

//+Added
script "SamsaraWTClip" (void) //709
{
	int i = 0;
	
	while(GetActorProperty(0,APROP_HEALTH) > 0)
	{
		for(i = 0; i < CLIPAMOUNT; i++)
		{
			if(CheckInventory(WitchavenClips[i]) > 0)
			{
				SetFont("WTFFONT");
				SetHudSize(1240,1024,1);
				HudMessage(s:"Melee mode active";HUDMSG_PLAIN,560,CR_UNTRANSLATED,180.0,215.0,0.1);
				break;
			}
		}
		Delay(2);
	}
}

//+Added
script "HLGaussScript" (void) //622 -- HL_GAUSS_SCRIPT
{
	if((CheckInventory("HLGaussCounter") < 30) && (CheckInventory("HLGaussCharged") >= (CheckInventory("HLGaussCounter") * 10)))
	{
		SetResultValue(1);
		GiveInventory("HLGaussCounter",1);
	}
	else
		SetResultValue(0);
}


script "SamsaraClientDecorate" (int which, int a1, int a2) clientside //212 -- SAMSARA_CLIENT_DECORATE
{
    int i, j, k;
    int x, y, z;
	int result;
    int deathresult;
    int xdeathresult;

    SetFont("SMALLFONT");
    switch (which)
    {
      case 1:
        Print(l:"NOTUNLESSINJURED");
        break;
        
      case 2:
        Print(s:"");
        break;
        
      case 3:
        SetHudSize(400, 300, 0);
        Hudmessage(l:"FOOTENGAGED";
        HUDMSG_PLAIN,1024,CR_LIGHTBLUE,200.4,9.1,1.0);
        break;

      case 4:
        while (1)
        {
            if (defaultCVar("sams_cl_noadditivepickups", 0))
            {
                SetActorProperty(0, APROP_RenderStyle, STYLE_Normal);
                SetActorProperty(0, APROP_Alpha, itof(a1)/100);
            }
            else
            {
                SetActorProperty(0, APROP_RenderStyle, STYLE_Add);
                SetActorProperty(0, APROP_Alpha, itof(a2)/100);
            }

            Delay(35);
        }
        break;
        
      case 5:
        Print(l:"NOFUEL");
        break;
        
      case 6:
        Print(l:"NOPOWER");
        break;
        
      case 7:
        Print(l:"ALREADYFLYING");
        break;

      case 9:
        x = GetActorX(0); y = GetActorY(0); z = GetActorZ(0);
        i = GetActorPitch(0);
        j = GetActorAngle(0);
        k = unusedTID(4000, 14000);

        z += itof(cond(keyDown(BT_CROUCH), random(10, 14), random(30, 34)));
        Spawn("GauntletSparks", x + FixedMul(cos(i), 16 * cos(j)), y + FixedMul(cos(i), 16 * sin(j)), z - (16 * sin(i)), k);
        SetActorVelocity(k, GetActorVelX(0), GetActorVelY(0), GetActorVelZ(0), 0,0);
        break;
		
    case 10:
        if (GetCVar("sams_runninginzdoom") == 1)
		{
			if(GetCvar("sams_zd_bloodyhell") == -1) { SetActorState(0,"XDeathHappyfun"); }
			if(GetCvar("sams_zd_bloodyhell") == 1) { SetActorState(0,"XDeathNashgore"); }
			if(GetCvar("sams_zd_bloodyhell") == 2) { SetActorState(0,"XDeathBrutal"); }
			if(GetCvar("sams_zd_bloodyhell") == 3) { xdeathresult = random(1,2);	
			if(xdeathresult==1) { SetActorState(0,"XDeathNightmare1"); }
			if(xdeathresult==2) { SetActorState(0,"XDeathNightmare2"); } }	
		} else {
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == -1) { SetActorState(0,"XDeathHappyfun"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 1) { SetActorState(0,"XDeathNashgore"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 2) { SetActorState(0,"XDeathBrutal"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 3) { xdeathresult = random(1,2);
			if(xdeathresult==1) { SetActorState(0,"XDeathNightmare1"); }
			if(xdeathresult==2) { SetActorState(0,"XDeathNightmare2"); } }
		}
        break;
		
    case 11:
	    if (GetCVar("sams_runninginzdoom") == 1)
		{
			if(GetCvar("sams_zd_bloodyhell") == -1) { SetActorState(0,"DeathHappyfun"); }
			if(GetCvar("sams_zd_bloodyhell") == 1) { SetActorState(0,"DeathNashgore"); }
			if(GetCvar("sams_zd_bloodyhell") == 2) { SetActorState(0,"DeathBrutal"); }
			if(GetCvar("sams_zd_bloodyhell") == 3) { deathresult = random(1,6);
			if(deathresult==1) { SetActorState(0,"DeathNightmare1"); }
			if(deathresult==2) { SetActorState(0,"DeathNightmare2"); }
			if(deathresult==3) { SetActorState(0,"DeathNightmare3"); }
			if(deathresult==4) { SetActorState(0,"DeathNightmare4"); }
			if(deathresult==5) { SetActorState(0,"DeathNightmare5"); }
			if(deathresult==6) { SetActorState(0,"DeathNightmare6"); } }
			break;
		} else {
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == -1) { SetActorState(0,"DeathHappyfun"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 1) { SetActorState(0,"DeathNashgore"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 2) { SetActorState(0,"DeathBrutal"); }
			if(GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell") == 3) { deathresult = random(1,6);
			if(deathresult==1) { SetActorState(0,"DeathNightmare1"); }
			if(deathresult==2) { SetActorState(0,"DeathNightmare2"); }
			if(deathresult==3) { SetActorState(0,"DeathNightmare3"); }
			if(deathresult==4) { SetActorState(0,"DeathNightmare4"); }
			if(deathresult==5) { SetActorState(0,"DeathNightmare5"); }
			if(deathresult==6) { SetActorState(0,"DeathNightmare6"); } }
			break;
		}
        break;
		
	case 12:
	    if (GetCVar("sams_runninginzdoom") == 1)
		{
			result = GetCVar("sams_zd_bloodyhell");
		} else {
			result = GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodyhell");
		}
        break;
	
	case 13:
	    if (GetCVar("sams_runninginzdoom") == 1)
		{
			result = GetCVar("sams_zd_bloodypersistent");
		} else {
			result = GetUserCVar(ConsolePlayerNumber(), "sams_cl_bloodypersistent");
		}
        break;
	
	case 14:
		if (GetCVar("sams_runninginzdoom") == 1)
			result = GetCVar("sams_cl_dkclab");
			
		else
			result = GetUserCVar(ConsolePlayerNumber(), "sams_cl_dkclab");
			
		break;
    }
    
    SetResultValue(result);
}

script "SamsaraGetSettings" (void) net //676 -- SAMSARA_GETSETTINGS
{
    int lmsLevel = middle(0, GetCVar("sams_lmslife"), LMSMODES-1);
    int lmsHP, lmsArmor;
    int lmsUlt, lmsUnique;
    int ultStay, highLow;

    if (lmsLevel) { lmsHP    = 100*lmsLevel; lmsArmor = 100*lmsLevel; }
    else { lmsHP = 100; lmsArmor = 0; }

    if (GetCVar("sams_lmsunique")) { lmsUnique = "\cdwith"; }
    else { lmsUnique = "\cgwithout"; }

    if (GetCVar("sams_lmsult")) { lmsUlt = "\cdwith"; }
    else { lmsUlt = "\cgwithout"; }

    if (GetCVar("sams_permault")) { ultStay = "\cdstay"; }
    else { ultStay = "\cado not stay"; }

    if (GetCVar("sams_jumpmod") < 0) { highLow = "\calower"; }
    else { highLow = "\cfhigher"; }

    SetHudSize(640, 480, 1);

    if (isLMS())
    {
        HudMessage(s:"Spawning with \ca", d:lmsHP, s:" health\c- and \cd", d:lmsArmor, s:" armor\c-";
            HUDMSG_FADEOUT, 6761, CR_WHITE, 50.1, 80.0, 3.0, 1.0);
        
        HudMessage(s:"You spawn ", s:lmsUnique, s:"\c- your unique and ", s:lmsUlt, s:"\c- your slot 7";
            HUDMSG_FADEOUT, 6762, CR_WHITE, 50.1, 104.0, 3.0, 1.0);
    }
    else
    {
        HudMessage(s:"Slot 7 pickups ", s:ultStay, s:"\c- on pickup";
            HUDMSG_FADEOUT, 6761, CR_WHITE, 50.1, 80.0, 3.0, 1.0);

        HudMessage(s:"Armor mode is \cf", s:ArmorModeNames[ArmorMode];
            HUDMSG_FADEOUT, 6762, CR_WHITE, 50.1, 96.0, 3.0, 1.0);
    }

    if (GetCVar("sams_jumpmod"))
    {
        HudMessage(s:"You jump \cn", d:abs(GetCVar("sams_jumpmod")), s:"\c- units ", s:highLow, s:"\c- than normal";
                HUDMSG_FADEOUT, 6763, CR_WHITE, 50.1, 112.0, 3.0, 1.0);
    }
    else
    {
        HudMessage(s:"Jumping is \cbnormal";
                HUDMSG_FADEOUT, 6763, CR_WHITE, 50.1, 112.0, 3.0, 1.0);
    }


    if (GetCVar("sams_banjetpack"))
    {
        HudMessage(s:"Duke's and Rebel Moon Commando's jetpack is \cgBANNED.";
                HUDMSG_FADEOUT, 6764, CR_WHITE, 50.1, 128.0, 3.0, 1.0);
    }
    else
    {
        HudMessage(s:"Duke's and Rebel Moon Commando's jetpack is \cdALLOWED.";
                HUDMSG_FADEOUT, 6764, CR_WHITE, 50.1, 128.0, 3.0, 1.0);
    }

    if (GetCVar("sams_banwolfmove"))
    {
        HudMessage(s:"Wolfenstein movement is \cgBANNED.";
                HUDMSG_FADEOUT, 6765, CR_WHITE, 50.1, 144.0, 3.0, 1.0);
    }
    else
    {
        HudMessage(s:"Wolfenstein movement is \cdALLOWED.";
                HUDMSG_FADEOUT, 6765, CR_WHITE, 50.1, 144.0, 3.0, 1.0);
    }

    if (GetCVar("sams_nocustomgravity"))
    {
        HudMessage(s:"Custom gravities are \cadisabled.";
                HUDMSG_FADEOUT, 6766, CR_WHITE, 50.1, 160.0, 3.0, 1.0);
    }
    else
    {
        HudMessage(s:"Custom gravities are \cdenabled.";
                HUDMSG_FADEOUT, 6766, CR_WHITE, 50.1, 160.0, 3.0, 1.0);
    }

    HudMessage(s:"Party mode is ", s:cond(GetCVar("sams_peoplediewhentheyarekilled"), "\cdON.", "\caOFF."), s:"\c- (", d:GetCVar("sams_peoplediewhentheyarekilled"), s:")";
            HUDMSG_FADEOUT, 6767, CR_WHITE, 50.1, 176.0, 3.0, 1.0);

    HudMessage(s:"Limitless health is ", s:cond(GetCVar("sams_nohealthcap"), "\cdON.", "\caOFF.");
            HUDMSG_FADEOUT, 6769, CR_WHITE, 50.1, 208.0, 3.0, 1.0);

    HudMessage(s:"Chainsaw/unique start: \ca", d:GetCVar("sams_chainsawstart"), s:"\c- / \cn", d:GetCvar("sams_uniquestart");
            HUDMSG_FADEOUT, 6770, CR_WHITE, 50.1, 224.0, 3.0, 1.0);
}

/*
 *
 * This is still to be converted.
 *
 */

int keys[3][26] = {{0},
    {"RedCard", "YellowCard", "BlueCard", "RedSkull", "YellowSkull", "BlueSkull", "KeyBlue", "KeyGreen", "KeyYellow", "ChexRedCard", "ChexYellowCard", "ChexBlueCard", "RedFlemKey", "YellowFlemKey", "BlueFlemKey", "KeyAxe", "KeyCastle", "KeyCave", "KeyDungeon", "KeyEmerald", "KeyFire", "KeyHorn", "KeyRusted", "KeySilver", "KeySteel", "KeySwamp"},
{"\cgRed Keycard", "\ckYellow Keycard", "\chBlue Keycard", "\cgRed Skull", "\ckYellow Skull", "\chBlue Skull", "\chBlue Prism Key", "\cqGreen Prism Key", "\ckYellow Prism Key", "\cgRed Card", "\ckYellow Card", "\chBlue Card", "\cgRed Flem Key", "\ckYellow Flem Key", "\chBlue Flem Key", "\cuAxe Key", "\cfCastle Key", "\csCave Key", "\cuDungeon Key", "\cdEmerald Key", "\cgFire Key", "\ceHorn Key", "\cbRusted Key", "\cuSilver Key", "\cmSteel Key", "\cpSwamp Key"}};
//0, 1, 2: Doom R/Y/B Keycard. - \cg, \ck, \ch
//3, 4, 5: Doom R/Y/B Skull. - \cg, \ck, \ch
//6, 7, 8: Heretic B/G/Y Prism Key. - \ch, \cq, \ck
//9, 10, 11: Chex Quest R/Y/B Keycard. - \cg, \ck, \ch
//12, 13, 14: Chex Quest R/Y/B Flem Key. - \cg, \ck, \ch
//15: Axe Key - \cu (Grey)
//16: Castle Key - \cf (Gold)
//17: Cave Key - \cs (Brown)
//18: Dungeon Key - \cu (Grey)
//19: Emerald Key - \cd (Light Green)
//20: Fire Key - \cg (Red)
//21: Horn Key - \ce (Beige)
//22: Rusted Key - \cb (Very light off-white)
//23: Silver Key - \cu (Grey)
//24: Steel Key - \cm (Black)
//25: Swamp Key - \cp (Drab green-brown)
//SCRIPTS
//200:
//201: Check if SP/DM/co-op for the Tome of Power/Morph Ovum.
//202: Cooldown for Tome of Power.
//203: Take away all the shit on level ending!
//204: Boss monologues.
//205: Cooldown for Duke's taunts.
//207: Flechette cooldown.
//208: Buddha mode for B.J.'s Extra Life.
//209: Activate Send Full Button Info and activate sv_banjetpack/sv_lmslife/sv_lmsult.
//212: Displaying text.
//214: Duke Jetpack/Visor fuel draining.
//901-902: I'm pretty sure Synert is a wizard, too.
//224: Doomguy's vanilla animations. By Ijon Tichy, transcribed by Llewellyn.
//225: Weapon bar. By Ijon Tichy, transcribed by Llewellyn.
////////////////////
// SHARED KEYS
// (by Synert)
/////////////////

// Give keys as needed, for people joining the game.

script "SamsaraKeyShare" ENTER //901
{
    if (!(IsSinglePlayer() || IsCoop())) { terminate; }

    while (1)
    {
        for (int a = 0; a < 26; a++)
        {
            if (keys[0][a] == 1)
            {
                GiveInventory(keys[1][a], 1);
            }
        }
        delay(10);
    }
}

script "SamsaraKeyBroadcast" (int a) { // Picked up a key, broadcast that shit to the whole world! --902
    if(keys[0][a] == 0 && isCoop() && !isSinglePlayer()) {
        Log(n:0,s:"\c* has picked up the ",s:keys[2][a],s:"\c*."); // Let the server admins know.
        HudMessageBold(n:0,s:"\c* has picked up the ",s:keys[2][a],s:"\c*.";HUDMSG_FADEOUT, 900, CR_GOLD, 0.5, 0.1, 3.0, 0.5);
    }
    keys[0][a] = 1;
	
	if(CheckInventory("HalfLifeClass") && GetCvar("sams_cl_heromusic"))
		ACS_NamedExecuteAlways("SamsaraOST_HalfLifeScriptedMusic", 0, 1, 0, 0);
}

///////////////
// ITEM STUFF
//////////////

script "DukeResourceDrain" (int dukeshit) //214
{
    switch(dukeshit)
    {
      case 1:
        if (CheckInventory("DukeFlying") == 1)
        {
			if(CheckInventory("DukeJPMotor") < 1)
			{
				GiveInventory("DukeJPMotor",1);
				PlaySound(0,"duke/jetpackidle",CHAN_BODY,1.0,true,ATTN_NORM);
			}
            
			if (CheckInventory("DukeJetpackFuel") > 0)
            {
                delay(15);
                TakeInventory("DukeJetpackFuel",1);
                restart;
            }
            else
            {
                TakeInventory("DukeFlying",1);
                TakeInventory("DukePetJack",1);
				TakeInventory("DukeJPMotor",1);
				GiveInventory("DukeJetPackIdleRemover",1);
            }
        }
		else
		{
			if(CheckInventory("DukeJPMotor") > 0)
			{
				TakeInventory("DukeJPMotor",1);
				GiveInventory("DukeJetPackIdleRemover",1);
			}
		}
        break;
        
      case 2:
        if (CheckInventory("DukeVision") == 1)
        {
            if (CheckInventory("DukeVisionFuel") > 0)
            {
                delay(10);
                TakeInventory("DukeVisionFuel",1);
                restart;
            }
            else
            {
                TakeInventory("DukeVision",1);
                TakeInventory("PowerLightAmp",1);
            }
        }
        break;
    }
}

script "TomeOfPowerCooldown" (void) //202
{
    while (CheckInventory("TomeOfPowerCooldown") > 0)
    {
        Delay(35);

        if (CheckInventory("TomeOfPowerCooldown") > 240)
        {
            TakeInventory("TomeOfPowerCooldown",1);
        }
        else
        {
            TakeInventory("TomeOfPowerCooldown",1);
            TakeInventory("RainTracker",1);
        }
    }
}

script "DiscOfRepulsionCooldown" (void) //207
{
    if (CheckInventory("DiscOfRepulsionCooldown") > 0)
    {
        delay(35);
        TakeInventory("DiscOfRepulsionCooldown",1);
        restart;
    }
}

script "SamsaraUnloading" unloading //203
{
    int i;
    UnloadingNow = 1;

    for (i = 0; i < UNLOADCOUNT; i++) { TakeInventory(UnloadRemove[i], 0x7FFFFFFF); }
}

/////////////////
// BOSS STUFF
//////////////

script "SamsaraBossMonologue" (int bossmonologueshit) //204
{
    switch(bossmonologueshit)
    {
      case 1: // KORAX
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX01"; HUDMSG_FADEOUT,15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX02"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX03"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX04"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX05"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX06"; HUDMSG_FADEOUT,15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX07"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX08"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX09"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX10"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KORAX11"; HUDMSG_FADEOUT, 15, CR_RED,320.4, 150.0, 5.5, 1.0);
		}
        break;
        
      case 2: // LORD SNOTFOLUS
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX01"; HUDMSG_FADEOUT,15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX02"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX03"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX04"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX05"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX06"; HUDMSG_FADEOUT,15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX07"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX08"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX09"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX10"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_CHEX11"; HUDMSG_FADEOUT, 15, CR_GREEN,320.4, 150.0, 5.5, 1.0);
		}
        break;
        
      case 3: // D'SPARIL
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_DSPARIL11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
		}
        break;
        
      case 4: // THE ENTITY
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY01"; HUDMSG_FADEOUT,15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY02"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY03"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY04"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY05"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY06"; HUDMSG_FADEOUT,15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY07"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY08"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY09"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY10"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ENTITY11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
		}
        break;
		
      case 5: // THE ICON OF SIN
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ICON11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
		}
        break;
	 Case 6: // Alien Queen (Duke)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN01"; HUDMSG_FADEOUT,15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN02"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN03"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN04"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN05"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN06"; HUDMSG_FADEOUT,15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN07"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN08"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN09"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_QUEEN10"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		}
		break;
	 Case 7: // Pfhor Juggernaut
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR01"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR02"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR03"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR04"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR05"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR06"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR07"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR08"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR09"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PFHOR10"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(120);		
		}
		break;				
	 Case 8: // Mecha Hitler
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF101"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF102"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF103"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF104"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF105"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF106"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF107"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF108"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF109"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
		AmbientSound("hitler/sight", 127);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF110"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);		
		}
		break;			
	 Case 9: // Death Knight (Spear of Destiny)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF201"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF202"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF203"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF204"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF205"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(185);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF206"; HUDMSG_FADEOUT,15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF207"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF208"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF209"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("CMPBWOLF");
        HudMessageBold(l:"BOSS_MONOLOGUE_WOLF210"; HUDMSG_FADEOUT, 15, CR_LIGHTBLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);		
		}
		break;	
	 Case 10: // Shub Niggurath
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY01"; HUDMSG_FADEOUT,15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY02"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY03"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY04"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(180);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY05"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY06"; HUDMSG_FADEOUT,15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY07"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY08"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_SHUBBY09"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		}
		break;		
	 Case 11: // Dr. Goldfire (Blake Stone)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD01"; HUDMSG_FADEOUT,15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD02"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD03"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD04"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(180);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD05"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD06"; HUDMSG_FADEOUT,15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD07"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD08"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD09"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD10"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD11"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);			
		AmbientSound("goldfire/sight", 127);
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOLD12"; HUDMSG_FADEOUT, 15, CR_WHITE,320.4, 150.0, 5.5, 1.0);
        delay(140);				
		}
		break;
	 Case 12: // Tchernobog
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(200);
		AmbientSound("TchernobogLaugh", 127);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		AmbientSound("TchernobogKneel", 127);
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_BLOOD10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(100);	
		}
		break;
	 Case 13: // Makron
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON01"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("Jorg/Voice2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON02"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON03"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON04"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON05"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON06"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON07"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON08"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON09"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);	
		AmbientSound("Jorg/Laugh1", 127);
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MAKRON10"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		}
		break;			
	 Case 14: // El Oscuro
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT01"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT02"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT03"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT04"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT05"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT06"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT07"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT08"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT09"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT10"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(140);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT11"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(100);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT12"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(200);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT13"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);	
		SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ROTT14"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(80);			
		}
		break;	
      case 15: // G'or
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR01"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR02"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR03"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR04"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR05"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR06"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR07"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR08"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR09"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR10"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("gor/see", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_GOR11"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
		}
        break;		
		
      case 16: // Cartoonishly evil lizard man (Corridor 7)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Spawn3");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA01"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA02"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA03"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("tebazile/act2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA04"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(100);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA05"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("solrac/active", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA06"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(75);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("solrac/see", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA07"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("tebazile/act2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA08"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA09"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("tebazile/act2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA10"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("tebazile/see", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_TEBA11"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
		}
        break;			
		
      case 17: // Terran Jump Commando  (RMR)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR01"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR02"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR03"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR04"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR05"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR06"; HUDMSG_FADEOUT,15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR07"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR08"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR09"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR10"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_RMR11"; HUDMSG_FADEOUT, 15, CR_GREY,320.4, 150.0, 5.5, 1.0);
		}
        break;			
      case 18: // General Rom Mohc (Dark Forces)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("enemies/phase3/see2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC12"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_MOHC13"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);		
		}
        break;			
      case 19: // President Krieger (Disruptor)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("ds_president/see", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_KRIEG11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);		
		}
        break;			
      case 20: // Cirae-Argoth
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH01"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH02"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH03"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH04"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH05"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH06"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH07"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH08"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH09"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH10"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("wtargoth/laugh", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_WITCH11"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);		
		}
        break;			
		
      case 21: // Nihilanth
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("nihilanth_act3", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL01"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL02"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("nihilanth_see2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL03"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL04"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL05"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("nihilanth_wander6", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL06"; HUDMSG_FADEOUT,15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL07"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL08"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		//AmbientSound("nihilanth_see4", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL09"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("nihilanth_wander3", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL10"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NIHIL11"; HUDMSG_FADEOUT, 15, CR_ORANGE,320.4, 150.0, 5.5, 1.0);					
		}
        break;	
		
      case 22: // Orochi Zilla
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA01"; HUDMSG_FADEOUT,15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA02"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA03"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA04"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA05"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA06"; HUDMSG_FADEOUT,15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA07"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA08"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA09"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA10"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("Master_Zilla/Activity5", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_ZILLA11"; HUDMSG_FADEOUT, 15, CR_DARKGREEN,320.4, 150.0, 5.5, 1.0);					
		}
        break;		
		
      case 23: // Queen Vixen
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN01"; HUDMSG_FADEOUT,15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN02"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN03"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN04"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(200);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN05"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN06"; HUDMSG_FADEOUT,15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN07"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN08"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("vixen/final", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN09"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN10"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN11"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);					
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN12"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);		
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_VIXEN13"; HUDMSG_FADEOUT, 15, CR_BROWN,320.4, 150.0, 5.5, 1.0);				
		}
        break;			
		
      case 24: // NeCrom
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/welcome1", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM01"; HUDMSG_FADEOUT,15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM02"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM03"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/sight1", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM04"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/active3", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM05"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(190);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM06"; HUDMSG_FADEOUT,15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM07"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM08"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/active7", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM09"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM10"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/active8", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM11"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);					
        delay(105);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM12"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);		
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("cmnecrom/active13", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_NECROM13"; HUDMSG_FADEOUT, 15, CR_PURPLE,320.4, 150.0, 5.5, 1.0);				
		}
        break;		
		
      case 25: // KilmaatiKahn
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("kilmaatikahn/see4", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(120);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(175);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);					
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT12"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);		
        delay(156);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("kilmaatikahn/pain2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_KILMAAT13"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);				
		}
        break;	
		
      case 26: // Eidolon
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("Hexen2/Eidolon/Roar", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_EIDOLON11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);					
		}
        break;		
		
      case 27: // Praevus
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("Hexen2/Buddha/Random1", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
		AmbientSound("Hexen2/Buddha/Random2", 127);
        HudMessageBold(l:"BOSS_MONOLOGUE_PRAEVUS11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);					
		}
        break;		
		
      case 28: // Nemesis (Apocalypse)
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"SpawnLoop");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS01"; HUDMSG_FADEOUT,15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS02"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS03"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS04"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS05"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS06"; HUDMSG_FADEOUT,15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS07"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS08"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS09"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS10"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS11"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);				
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_NEMESIS12"; HUDMSG_FADEOUT, 15, CR_BLUE,320.4, 150.0, 5.5, 1.0);				
		}
        break;		
		
      case 29: // Alec Trevelyan
	  if (GetCVar("sams_nomonologues"))
	  {
		SetActorState(0,"Idle");
	  }
	  else
	  {
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS01"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS02"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS03"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS04"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS05"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS06"; HUDMSG_FADEOUT,15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS07"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS08"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS09"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(154);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS10"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);
        delay(140);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS11"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);				
        delay(90);
        SetHudSize(640, 400, 0);
        SetFont("BIGFONT");
        HudMessageBold(l:"BOSS_MONOLOGUE_JANUS12"; HUDMSG_FADEOUT, 15, CR_GOLD,320.4, 150.0, 5.5, 1.0);				
		}
        break;		
    }
}

script "DukeTauntCooldown" (void)  //205
{
    while (CheckInventory("DukeTauntCooldown") > 0)
    {
        Delay(35);
        TakeInventory("DukeTauntCooldown", 1);
    }
}

script "QuakeGrenade" (int x, int y, int z) //583
{
    if (GetActorZ(0) - GetActorFloorZ(0) > 4.0)
    {
        SetResultValue(1);
    }
    else
    {
        SetResultValue(sqrt(x*x + y*y + z*z) );
    }
}

script "QuakeParticle" (int divI, int divF, int divF1) //586
{
    int div = percFloat2(divI, divF, divF1);

    int x = GetActorVelX(0);
    int y = GetActorVelY(0);
    int z = GetActorVelZ(0);

    SetActorVelocity(0, FixedMul(x, div), FixedMul(y, div), FixedMul(z, div), 0, 1);
}

script "Samsara678" (int which) //678
{
    int x, y, z;

    x = GetActorX(0); y = GetActorY(0); z = GetActorZ(0);
    SetActivatorToTarget(0);

	switch(which)
	{
	case 1:
		ACS_NamedExecuteAlways("Samsara682", 0, x, y, z);
		break;
	case 2:
		ACS_NamedExecuteAlways("Samsara721", 0, x, y, z);
		ACS_NamedExecuteWithResult("Samsara681", x, y, z);
		break;		
	case 3:
		ACS_NamedExecuteAlways("Samsara721", 0, x, y, z);
		break;				
	default:
		ACS_NamedExecuteAlways("Samsara679", 0, x, y, z);
		break;
	}
}

////////////////////////////////
#libdefine PUFF_DIST 8.0
#libdefine PLAYER_VIEWHEIGHT 34.0
script "Samsara721" (int px, int py, int pz) CLIENTSIDE //721
{ 
	int tx, ty, tz;
	int vx, vy, vz;
	int repeat, vl;
	int angle, pitch;
	int i;

	angle = GetActorAngle(0) - 0.05;
	pitch = GetActorPitch(0);
	tx = GetActorX(0) + cos(angle) * ftoi(15 * cos(pitch));
	ty = GetActorY(0) + sin(angle) * ftoi(15 * cos(pitch));
	
	if(pitch <= 0.0)
		tz = GetActorZ(0) + 34.0 + 15 * (1.0 - cos(pitch));
	else
		tz = GetActorZ(0) + 34.0 - 15 * (1.0 - cos(pitch));
	
	vx = px - tx;
	vy = py - ty;
	vz = pz - tz;
	vl = magnitudeThree_f(vx,vy,vz);
	
	vx = FixedMul(FixedDiv(vx,vl),PUFF_DIST);
	vy = FixedMul(FixedDiv(vy,vl),PUFF_DIST);
	vz = FixedMul(FixedDiv(vz,vl),PUFF_DIST);
	
	repeat = (FixedDiv(vl,PUFF_DIST)) >> 16;
	
	if(repeat <= 0)
		terminate;
		
	for(i = 1; i <= repeat; i++)
	{
		Spawn("HLEgonParticle",tx + (i * vx),ty + (i * vy),tz + (i * vz),0,0);
		
		if(i % 125 == 0)
			Delay(1); //Force delay to reduce lag
	}
}

#libdefine D_PUFF_DIST_E1 	5.0
#libdefine D_PUFF_DIST_ROT	2
#libdefine D_PUFF_CHOOSER	2
#libdefine D_PUFF_DELAY		1000
#libdefine PUFF_ROT_UP		100

script "Samsara681" (int px, int py, int pz) CLIENTSIDE //681
{
	int tx, ty, tz;
	int e1x, e1y, e1z, e1l;
	int e2x, e2y, e2z, e2l;
	int e3x, e3y, e3z, e3l;
	int kf1, kf2, kf3, kfd;
	int repeat, helper;
	int angle, pitch, i;
	
	int puff_dist_e1 = GetCVAR("hl_pd_line");
	int puff_dist_rot = GetCVAR("hl_pd_rot");
	int puff_chooser = GetCVAR("hl_puff_chooser");
	int puff_delay = GetCVAR("hl_puff_delay");
	
	if(puff_dist_e1 <= 0)
		puff_dist_e1 = D_PUFF_DIST_E1;
	else
		puff_dist_e1 = puff_dist_e1 << 16;
		
	if(puff_dist_rot <= 0)
		puff_dist_rot = D_PUFF_DIST_ROT;
		
	if(puff_chooser <= 0)
		puff_chooser = D_PUFF_CHOOSER;
		
	if(puff_delay <= 0)
		puff_delay = D_PUFF_DELAY;
	
	angle = GetActorAngle(0) - 0.05;
	pitch = GetActorPitch(0);
	tx = GetActorX(0) + cos(angle) * ftoi(15 * cos(pitch));
	ty = GetActorY(0) + sin(angle) * ftoi(15 * cos(pitch));
	
	if(pitch <= 0.0)
		tz = GetActorZ(0) + 34.0 + 15 * (1.0 - cos(pitch));
	else
		tz = GetActorZ(0) + 34.0 - 15 * (1.0 - cos(pitch));

	e1x = px - tx;
	e1y = py - ty;
	e1z = pz - tz;
	
	e1l = magnitudeThree_f(e1x,e1y,e1z);
	e1x = FixedDiv(e1x,e1l);
	e1y = FixedDiv(e1y,e1l);
	e1z = FixedDiv(e1z,e1l);
	
	kf1 = e1x;
	kf2 = e1y;
	kf3 = e1z;
	
	kfd = FixedMul(tx,kf1);
	kfd += FixedMul(ty,kf2);
	kfd += FixedMul(tz,kf3);
	
	if(kf1 == 0)
	{
		if(kf2 == 0)
		{
			if(kf3 == 0)
				terminate;
			
			e2x = 0;
			e2y = FixedDiv(kfd,kf2);
			e2z = 0;
		}
		else if(kf3 == 0)
		{
			e2x = 0;
			e2y = 0;
			e2z = FixedDiv(kfd,kf3);
		}
		else
		{
			e2x = FixedDiv(kfd,kf1);
			e2y = 0;
			e2z = 0;
		}
	}
	else if(kf2 == 0)
	{
		if(kf3 == 0)
		{
			e2x = 0;
			e2y = 0;
			e2z = FixedDiv(kfd,kf3);
		}
		else
		{
			e2x = 0;
			e2y = FixedDiv(kfd,kf2);
			e2z = 0;
		}
	}
	else if(kf3 == 0)
	{
		e2x = 0;
		e2y = 0;
		e2z = FixedDiv(kfd,kf3);
	}
	else
	{
		e2x = 0;
		e2y = 0;
		e2z = FixedDiv(kfd,kf3);
	}
	
	e2x = e2x - tx;
	e2y = e2y - ty;
	e2z = e2z - tz;
	 
	e2l = magnitudeThree_f(e2x,e2y,e2z);
	e2x = FixedDiv(e2x,e2l);
	e2y = FixedDiv(e2y,e2l);
	e2z = FixedDiv(e2z,e2l);
	
	e3x = FixedMul(e1y,e2z) - FixedMul(e1z,e2y);
	e3y = FixedMul(e1z,e2x) - FixedMul(e1x,e2z);
	e3z = FixedMul(e1x,e2y) - FixedMul(e1y,e2x);
	
	e3l = magnitudeThree_f(e3x,e3y,e3z);
	e3x = FixedDiv(e3x,e3l);
	e3y = FixedDiv(e3y,e3l);
	e3z = FixedDiv(e3z,e3l);
	
	repeat = (FixedDiv(e1l,PUFF_DIST)) >> 16;
	repeat *= 8;
	
	if(repeat <= 0)
		terminate;
		
	for(i = 1; i <= repeat; i++)
	{
		if(i % puff_chooser == 0)
		{
			kf1 = tx;
			kf1 += (i * e1x);
			kf2 = ty;
			kf2 += (i * e1y);
			kf3 = tz;
			kf3 += (i * e1z);
			
			helper = puff_dist_rot * i;
			helper = ((helper + CheckInventory("HLEgonByteIncr")) % 256) << 8;
			
			if(i < PUFF_ROT_UP)
			{
				kf1 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),sin(helper)),e2x);
				kf2 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),sin(helper)),e2y);
				kf3 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),sin(helper)),e2z);
				
				kf1 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),cos(helper)),e3x);
				kf2 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),cos(helper)),e3y);
				kf3 += FixedMul(FixedMul(i * (puff_dist_e1 / PUFF_ROT_UP),cos(helper)),e3z);
			}
			else
			{
				kf1 += FixedMul(FixedMul(puff_dist_e1,sin(helper)),e2x);
				kf2 += FixedMul(FixedMul(puff_dist_e1,sin(helper)),e2y);
				kf3 += FixedMul(FixedMul(puff_dist_e1,sin(helper)),e2z);
				
				kf1 += FixedMul(FixedMul(puff_dist_e1,cos(helper)),e3x);
				kf2 += FixedMul(FixedMul(puff_dist_e1,cos(helper)),e3y);
				kf3 += FixedMul(FixedMul(puff_dist_e1,cos(helper)),e3z);
			}
			
			Spawn("HLEgonParticleHelix",kf1,kf2,kf3,0,0);
		}
		
		if(i % puff_delay == 0)
			Delay(1); //Force delay to reduce lag
	}
}

str lolpages[2] =
{ "HLGaussParticleYellow", "HLGaussParticleWhite" };

script "Samsara682" (int tx, int ty, int tz) clientside //682
{
    int t, i, k = 0, l, angle, pitch;
    int x, y, z;
    int vx, vy, vz, mag, magI;
	str particle;
	
	particle = lolpages[CheckInventory("SamsaraRGPPage")];

	angle = GetActorAngle(0) - 0.1;
	pitch = GetActorPitch(0);
	
	if(angle < 0)
		angle += 1.0;
		
    x = GetActorX(0) + cos(angle) * ftoi(10 * cos(pitch));
	y = GetActorY(0) + sin(angle) * ftoi(10 * cos(pitch));
	
	if(pitch <= 0.0)
		z = GetActorZ(0) + 34.0 + 10 * (1.0 - cos(pitch));
	else
		z = GetActorZ(0) + 34.0 - 10 * (1.0 - cos(pitch));
		

    vx = tx-x; vy = ty-y; vz = tz-z; mag = magnitudeThree_f(vx, vy, vz);
    vx = FixedDiv(vx, mag); vy = FixedDiv(vy, mag); vz = FixedDiv(vz, mag);
    magI = ftoi(mag);

    for (i = 0; i < magI; i += 2)
    {
        Spawn(particle, x+(vx*i), y+(vy*i), z+(vz*i));
		if(i % 1500 == 0)
			Delay(1);
    }
}

////////////////////////////////

script "Samsara802" (void) clientside //without this = bye bye server  //802
{
	int px, py, pz;
	int tx, ty, tz;
	int vx, vy, vz;
	int repeat, vl;
	int angle, pitch;
	int i;
	
	px = GetActorX(0);
	py = GetActorY(0);
	pz = GetActorZ(0);
	
	SetActivatorToTarget(0);
	
	angle = GetActorAngle(0) - 0.05;
	pitch = GetActorPitch(0);
	tx = GetActorX(0) + cos(angle) * ftoi(15 * cos(pitch));
	ty = GetActorY(0) + sin(angle) * ftoi(15 * cos(pitch));
	
	if(pitch <= 0.0)
		tz = GetActorZ(0) + 34.0 + 12 * (1.0 - cos(pitch));
	else
		tz = GetActorZ(0) + 34.0 - 12* (1.0 - cos(pitch));
	
	vx = px - tx;
	vy = py - ty;
	vz = pz - tz;
	vl = magnitudeThree_f(vx,vy,vz);
	
	vx = FixedMul(FixedDiv(vx,vl),2.0);
	vy = FixedMul(FixedDiv(vy,vl),2.0);
	vz = FixedMul(FixedDiv(vz,vl),2.0);
	
	repeat = (FixedDiv(vl,2.0)) >> 16;
	
	if(repeat <= 0)
		terminate;
		
	for(i = 0; i <= repeat; i++)
	{
		Spawn("HLBarnacleTrail",tx + (i * vx),ty + (i * vy),tz + (i * vz),0,0);
		if(i % 500 == 0)
			Delay(1);
	}
}

#libdefine HL_BARNACLE_PULL_FACTOR 25.0
script "Samsara803" (void) clientside //803
{
	int px, py, pz;
	int tx, ty, tz;
	int vx, vy, vz;
	int repeat, vl;
	int angle, pitch;
	int i;
	
	px = GetActorX(0);
	py = GetActorY(0);
	pz = GetActorZ(0) - 32.0;
	
	SetActivatorToTarget(0);
	
	tx = GetActorX(0);
	ty = GetActorY(0);
	tz = GetActorZ(0);
	
	vx = px - tx;
	vy = py - ty;
	vz = pz - tz;
	vl = magnitudeThree_f(vx,vy,vz);
	
	vx = FixedDiv(vx,vl);
	vy = FixedDiv(vy,vl);
	vz = FixedDiv(vz,vl);
	
	SetActorVelocity(0,FixedMul(vx,HL_BARNACLE_PULL_FACTOR),FixedMul(vy,HL_BARNACLE_PULL_FACTOR),FixedMul(vz,HL_BARNACLE_PULL_FACTOR),0,0);
}

//+Modified
script "Samsara679" (int tx, int ty, int tz) clientside //679
{
    int t, i, k = 0, l;
    int x, y, z;
    int vx, vy, vz, mag, magI;
	int particle, dist, hasdelay;
	int classnumb = samsaraClassNum();
	int pagenumb = CheckInventory("SamsaraRGPPage");

	if((classnumb == -1) || (pagenumb >= SAMSARA_RGP_PAGES))
		terminate;
		
	particle = SamsaraRGP[classnumb][pagenumb];
	hasdelay = SamsaraRGPProperties[classnumb][pagenumb][SAMSARA_RGP_HASDELAY];
	dist = SamsaraRGPProperties[classnumb][pagenumb][SAMSARA_RGP_DISTANCE];
	
	if((!StrLen(particle)) || (dist < 1))
		terminate;

    x  = GetActorX(0); y =  GetActorY(0);  z = GetActorZ(0) + 24.0;

    vx = tx-x; vy = ty-y; vz = tz-z; mag = magnitudeThree_f(vx, vy, vz);
    vx = FixedDiv(vx, mag); vy = FixedDiv(vy, mag); vz = FixedDiv(vz, mag);
    magI = ftoi(mag);

    for (i = dist; i < magI; i += dist)
    {
        Spawn(particle, x+(vx*i), y+(vy*i), z+(vz*i));
        
		if(hasDelay)
		{
			l += (i - k);
			Delay(l / 512);
			l %= 512;
			k = i;
		}
    }
}

Script "ExtraDeathFX" (int mode) // Samsara Extra Death Special Effects -- 2530
{
	Switch(mode)
	{
		Case 1:
			SetActorProperty(0, APROP_RenderStyle, STYLE_TRANSLUCENTSTENCIL);
			SetActorProperty(0, APROP_StencilColor, 0x000000);
			break;
		Case 2:
			SetActorProperty(0, APROP_RenderStyle, STYLE_OptFuzzy);
			ThrustThingZ(0,5,0,0);
			break;
	}
}

Script "CellPhoneHax" (int mode) //2560
{
	Switch(mode)
	{
		Case 0:
			Delay(160);
			GiveInventory("AllyCellPhoneHax1",1);
			break;
		Case 1:
			Delay(160);
			GiveInventory("AllyCellPhoneHax2",1);
			break;
	}
}

str gameClassesSTR[CLASSCOUNT] = {
	"DoomguyClass", "ChexClass", "CorvusClass", "WolfenClass", "HexenClass", "DukeClass", "MarathonClass", "QuakeClass", "RottClass", "BlakeClass",
	"CalebClass", "StrifeClass", "EradClass", "C7Class", "RMRClass", "KatarnClass", "POGreedClass", "DisruptorClass", "WitchavenClass", 
	"HalfLifeClass", "SWClass", "CMClass", "JonClass", "RRClass", "BittermanClass", "DemonessClass", "BondClass"
};

Script "TauntButton" (void) NET
{
	if(!GetCVar("sams_runninginzdoom") && GetCVar("sams_runninginzandro"))
		Print(s:"Zandronum detected, use traditional taunt bind instead");
	
	else
		UseInventory("TauntButton");
}

Script "AllyCellPhone" ENTER
{
	If(CheckInventory("HexenClass") || CheckInventory("RoTTClass") || CheckInventory("POGreedClass") || CheckInventory("EradClass") || CheckInventory("RRClass"))
	{
		if(!CheckInventory("AllyCellPhone") && CheckInventory("KillCountBar") == 250 && !CheckInventory("CellPhoneGiven"))
		{
			GiveInventory("AllyCellPhone", 1);
			GiveInventory("CellPhoneGiven", 1);
		}
		else if(CheckInventory("CellPhoneGiven") && !CheckInventory("AllyCellPhone"))
		{
			TakeInventory("CellPhoneGiven", 1);
			TakeInventory("KillCountBar", 250);
		}
		delay(1);
		restart;
	}
	else
	{
		terminate;
	}
}

// Until Zandronum doesn't crash with the old keybindings in KEYCONF, this will be required, I'm afraid

Script "Samsara_Keybinds" (int button) net
{
	Switch(button)
	{
		Case 1:
			SetUserCvar(PlayerNumber(),"sams_cl_vanilladoom", !GetUserCvar(PlayerNumber(),"sams_cl_vanilladoom"));
			break;
		
		Case 2:
			SetUserCvar(PlayerNumber(),"sams_cl_wolfmove", !GetUserCvar(PlayerNumber(),"sams_cl_wolfmove"));
			break;
			
		Case 3:
			SetUserCvar(PlayerNumber(),"sams_cl_ballgag", !GetUserCvar(PlayerNumber(),"sams_cl_ballgag"));
			break;

		Case 4:
			SetUserCvar(PlayerNumber(),"sams_cl_weaponhud", !GetUserCvar(PlayerNumber(),"sams_cl_weaponhud"));
			break;
			
		Case 5:
			SetUserCvar(PlayerNumber(),"sams_cl_moremessages", !GetUserCvar(PlayerNumber(),"sams_cl_moremessages"));
			break;
			
		Case 6:
			SetUserCvar(PlayerNumber(),"sams_cl_printpickup", !GetUserCvar(PlayerNumber(),"sams_cl_printpickup"));
			break;
			
		Case 7:
			SetUserCvar(PlayerNumber(),"sams_cl_norecoil", !GetUserCvar(PlayerNumber(),"sams_cl_norecoil"));
			break;
			
		Case 8:
			SetUserCvar(PlayerNumber(),"sams_cl_heromusic", !GetUserCvar(PlayerNumber(),"sams_cl_heromusic"));
			
			If(GetCvar("sams_cl_heromusic") == false) 
				LocalSetMusic("*",0);
			else 
				ACS_NamedExecuteAlways("SamsaraOST_Enter",0,0,0,0);		
			break;
			
		Case 10:
			SetUserCvar(PlayerNumber(),"sams_cl_rottbar", !GetUserCvar(PlayerNumber(),"sams_cl_rottbar"));
			break;
	}
}

//sigh, this one's handled different

Script "Samsara_PickupMode" (void) net clientside
{
			
	if(GetUserCvar(PlayerNumber(),"sams_cl_pickupmode") < 2)
		SetUserCvar(PlayerNumber(),"sams_cl_pickupmode", GetUserCvar(PlayerNumber(),"sams_cl_pickupmode")+1);
			
	else
		SetUserCvar(PlayerNumber(),"sams_cl_pickupmode", 0);
}

Str modestringsdefault[2] = { "On", "Off" };
Str modestringswolf[4] = { "Classic", "Lost Missons", "Macintosh", "Totenkopf SDL" };
Str modestringshexen[3] = { "Parias", "Daedolon", "Baratus" };
Str modestringsrott[5] = { "Ian Paul Freeley", "Taradino Cassatt", "Thi Barrett", "Lorelei Ni", "Doug Wendt" };

Script "Samsara_ChangeAltClass" (void) net
{
	int mode;
	int pln = PlayerNumber();
	switch(PlayerClass(pln))
	{
		case 0:
			mode = GetUserCvar(pln,"sams_cl_doom64");
			SetUserCvar(pln,"sams_cl_doom64",!mode);
			Log(s:"\cgDoom 64 Mode: ", s:"\ck", s:modestringsdefault[mode]);
			break;
		case 3:
			mode = GetUserCvar(pln,"sams_cl_wolfmode");
			if(mode == 3)
				mode = 0;
			else
				mode++;
				
			Log(s:"\cgWolfenstein 3D Mode: ", s:"\ck", s:modestringswolf[mode]);
			SetUserCvar(pln,"sams_cl_wolfmode",mode);
			break;
		case 4:
			mode = GetUserCvar(pln,"sams_cl_hexclass");
			if(mode == 2)
				mode = 0;
			else
				mode++;
				
			Log(s:"\cgHexen Class: ", s:"\ck", s:modestringshexen[mode]);
			SetUserCvar(pln,"sams_cl_hexclass",mode);
			break;
		case 5:
			mode = GetUserCvar(pln,"sams_cl_dkclab");
			SetUserCvar(pln,"sams_cl_dkclab",!mode);
			Log(s:"\cgDuke Nukem Life's a Beach: ", s:"\ck", s:modestringsdefault[mode]);
			break;
		case 8:
			mode = GetUserCvar(pln,"sams_cl_rottmode");
			if(mode == 4)
				mode = 0;
			else
				mode++;
				
			Log(s:"\cgH.U.N.T. Team Member: ", s:"\ck", s:modestringsrott[mode]);
			SetUserCvar(pln,"sams_cl_rottmode",mode);
			break;
		case 9:
			mode = GetUserCvar(pln,"sams_cl_bsaog");
			SetUserCvar(pln,"sams_cl_bsaog",!mode);
			Log(s:"\cgBlake Stone Aliens of Gold: ", s:"\ck", s:modestringsdefault[mode]);
			break;
		case 19:
			mode = GetUserCvar(pln,"sams_cl_shephardmode");
			SetUserCvar(pln,"sams_cl_shephardmode",!mode);
			Log(s:"\cgHalf Life Opposing Force: ", s:"\ck", s:modestringsdefault[mode]);
			break;
	}
}

//For our unique keys to be consolidated
Script "Samsara_UniqueKeys" (int key)
{
	int pln = PlayerNumber();
	switch(PlayerClass(pln))
	{
		case 19:
			ACS_NamedExecuteWithResult("HL2677",0,0,0);
			if(key == 0)
				ACS_NamedExecuteWithResult("HL2677",0,0,0);
			break;
		case 26:
			ACS_NamedExecuteWithResult("BondActivateWatch",0,0,0);
			if(key == 0)
				ACS_NamedExecuteWithResult("BondActivateWatch",0,0,0);
			break;
		case 28:
			if(key == 1)
				ACS_NamedExecuteWithResult("Painkiller_BlackTarot_Initiate",0,0,0,0);
			else
				ACS_NamedExecuteWithResult("Painkiller_GoldTarot_Activate",0,0,0,0);
			break;
		case 29:
			if(key == 0)
				ACS_NamedExecuteWithResult("Unreal_RevertUpgrade",0,0,0);
			break;
		case 30:
			if(key == 0)
				ACS_NamedExecuteWithResult("RTCW_Kick",0,0,0);
			break;
	}
}

Script "Samsara_Shrinker" (int use, int value)
{
	if(use == 1)
	{
		if(CheckInventory("ShrunkToken") == 0)
		{
			int oldTID, target;
			oldTID = ActivatorTID();
			target = UniqueTID();
			Thing_ChangeTID(0, target);
			SetActivator(0, AAPTR_Master);
			int originalhealth = GetActorProperty(0, APROP_Health);
			int spawnhealth = GetActorProperty(0, APROP_SpawnHealth);
			SetActivator(target);
			Thing_ChangeTID(target, oldTID);
			GiveInventory("ShrunkToken", 1);
			GiveInventory("ShrunkMasterHealthTokens", spawnhealth);
			SetActorProperty(0, APROP_Health, 1);
			for(int c = 0; c < 385; c++)
			{
				if(GetActorProperty(0, APROP_Health) <= 0 || CheckInventory("SquishToken"))
				{
					terminate;
				}
				if(c == 384)
				{
					TakeInventory("ShrunkToken", 1);
					GiveInventory("ShrunkHealthTokens", spawnhealth - originalhealth);
					SetActorState(0, "Grow", true);
					terminate;
				}
				Delay(1);
			}
		}
	}
	else if(use == 2)
	{
		SetResultValue(CheckInventory("ShrunkHealthTokens"));
	}
	else if(use == 3)
	{
		SetActivatorToTarget(0);
		
		if(ClassifyActor(0) != 34)
			SetResultValue(0);
			
		else
			SetResultValue(1);
	}
}

Script "Samsara_Shrinker_Stomp" (void)
{
	int index;
	str weapon = GetWeapon();
	GiveInventory("Mighty Stomp", 1);
	GiveInventory("DukeKicking", 1);
	SetWeapon("Mighty Stomp");
	Delay(20);
	TakeInventory("DukeKicking", 1);
	TakeInventory("DukeStomp", 1);
	SetWeapon(weapon);
	terminate;
}

Script "Samsara_Expander" (int use)
{
	if(use == 0)
	{
		SetActivator(0, AAPTR_Tracer);
		Thing_Damage2(0,15,"ExpanderDMG");
	}
	else if(use == 1)
	{
		SetResultValue(CheckInventory("ExpanderGrowthX"));
	}
	else if(use == 2)
	{
		SetResultValue(CheckInventory("ExpanderGrowthY"));
	}
	else if(use == 3)
	{
		SetResultValue(CheckInventory("ExpanderDoubleX"));
	}
	else if(use == 4)
	{
		SetActivator(0, AAPTR_Master);
		int height = GetActorProperty(0, APROP_Height) * 4;
		int radius = GetActorProperty(0, APROP_Radius);
		int health = GetActorProperty(0, APROP_SpawnHealth);
		int damage = FixedMul((height + radius) / 2,FixedMul(1.75,FixedDiv(health+1000,1000))); 
		SetResultValue(damage>>16);
	}
}

str rottdropstrings[5] = {"DropIan","DropTaradino","DropThi","DropLorelei","DropDoug"};
str hexendropstrings[2] = {"DropFighter","DropMage"};
str hexenmagedropstrings[2] = {"DropFighter","DropCleric"};
str hexenfighterdropstrings[2] = {"DropCleric","DropMage"};
str eradicatordropstrings[3] = {"DropDan","DropKamechak","DropMarine"};
str ipogdropstrings[4] = {"DropCyborg","DropLizard","DropSpecimen","DropDominatrix"};

Script "Samsara2999" (int class, int mode)
{
	int resultcounter = 0;	
	int maxallies = 2;
	if(class == 1)
		mode = ceilZandronum((mode*1.0)/100); //the shit I have to do to cleanup Zandronum's mistakes
	
	Switch(class)
	{
		Case 1:	
		maxallies = 5;
		For(int a = 0; a < 36; a++)
		{
			Delay(1);
			If(a==35)
			{
				if(resultcounter == maxallies)
				{
					SetActorState(0,"Death",TRUE);
					terminate;
				}
				
				if(mode != resultcounter)
				{
					//PrintBold(d:resultcounter);
					SetActorState(0,rottdropstrings[resultcounter],TRUE);
				}
					
				a=0;
				resultcounter++;
			}
		}
		break;
		Case 2:	
		maxallies = 2;
		For(int b = 0; b < 36; b++)
		{
			Delay(1);
			If(b==35)
			{
				If(resultcounter == maxallies)
				{
					SetActorState(0,"Death",TRUE);
					terminate;
				}
				switch(mode)
				{
					case 1:
						SetActorState(0,hexenmagedropstrings[resultcounter],TRUE);
						b=0;
						resultcounter++;
						break;
					case 2:
						SetActorState(0,hexenfighterdropstrings[resultcounter],TRUE);
						b=0;
						resultcounter++;
						break;
					default:
						SetActorState(0,hexendropstrings[resultcounter],TRUE);
						b=0;
						resultcounter++;
						break;
				}
			}
		}
		break;
		Case 3:	
		maxallies = 3;
		For(int c = 0; c < 36; c++)
		{
			Delay(1);
			If(c==35)
			{
				If(resultcounter == maxallies)
				{
					SetActorState(0,"Death",TRUE);
					terminate;
				}
				SetActorState(0,eradicatordropstrings[resultcounter],TRUE);
				c=0;
				resultcounter++;
			}
		}
		break;
		Case 4:	
		maxallies = 4;
		For(int d = 0; d < 36; d++)
		{
			Delay(1);
			If(d==35)
			{
				If(resultcounter == maxallies)
				{
					SetActorState(0,"Death",TRUE);
					terminate;
				}
				SetActorState(0,ipogdropstrings[resultcounter],TRUE);
				d=0;
				resultcounter++;
			}
		}
		break;
	}
}

Script "Samsara_AllyBeaconDrops" (void)
{
	switch (samsaraClassNum())
	{
		case CLASS_ROTT:
			SetResultValue(CheckInventory("RottMode"));
			break;
	}
}

Script "Samsara_AllySwitch" (void)
{
	int activator = ActivatorTid();
	int playeractivator = ActivatorTid();
	int newtid = UniqueTid();
	Thing_ChangeTid(0,newtid);
	SetActivator(0,AAPTR_Master);
	int pln = PlayerNumber();
	int playertid = UniqueTid();
	int newtid2 = UniqueTid();
	Thing_ChangeTid(0,playertid);
	switch(PlayerClass(pln))
	{
		case 4:
			if(GetUserCvar(pln,"sams_cl_hexclass")==0)
			{
				if(CheckActorClass(newtid,"ClericAlly"))
				{
					SpawnSpotFacingForced("FighterAlly",newtid,newtid2);
				}
				else
					terminate;
			}
			else if(GetUserCvar(pln,"sams_cl_hexclass")==1)
			{
				if(CheckActorClass(newtid,"MageAlly"))
				{
					SpawnSpotFacingForced("ClericAlly",newtid,newtid2);
				}
				else
					terminate;
			}
			else if(GetUserCvar(pln,"sams_cl_hexclass")==2)
			{
				if(CheckActorClass(newtid,"FighterAlly"))
				{
					SpawnSpotFacingForced("MageAlly",newtid,newtid2);
				}
				else
					terminate;
			}
			break;
		case 8:
			switch(GetUserCvar(pln,"sams_cl_rottmode"))
			{
				Case 0:
					if(CheckActorClass(newtid,"IanPaulFreeley"))
					{
						SpawnSpotFacingForced("DougWendt",newtid,newtid2);
					}
					else
						terminate;
					break;
				Case 1:
					if(CheckActorClass(newtid,"TaradinoCassatt"))
					{
						SpawnSpotFacingForced("IanPaulFreeley",newtid,newtid2);
					}
					else
						terminate;
					break;
				Case 2:
					if(CheckActorClass(newtid,"ThiBarret"))
					{
						SpawnSpotFacingForced("TaradinoCassatt",newtid,newtid2);
					}
					else
						terminate;
					break;
				Case 3:
					if(CheckActorClass(newtid,"LoreleiNi"))
					{
						SpawnSpotFacingForced("ThiBarret",newtid,newtid2);
					}
					else
						terminate;
					break;
				Case 4:
					if(CheckActorClass(newtid,"DougWendt"))
					{
						SpawnSpotFacingForced("LoreleiNi",newtid,newtid2);
					}
					else
						terminate;
					break;
			}
			break;
	}
	SetActorAngle(newtid2,GetActorAngle(newtid));
	Thing_SetTranslation(newtid2,-1);
	SetActivator(newtid2,AAPTR_DEFAULT);
	SetPointer(AAPTR_MASTER,playertid);
	Thing_Remove(newtid);
	Thing_ChangeTid(playertid,playeractivator);
	Thing_ChangeTid(0,activator);
}

Script "Samsara_BeaconSpawner" (int mode)
{
	int pln = PlayerNumber();
	int newtid = UniqueTid();
	int playertid = UniqueTid();
	int activator = ActivatorTid();
	Thing_ChangeTid(0,playertid);
	switch(PlayerClass(pln))
	{
		case 4:
			switch(mode)
			{
				case 0:
					SpawnForced("StrifeBeaconHexen_Allies",GetActorX(0),GetActorY(0),GetActorZ(0),newtid);
					Thing_SetTranslation(newtid,-1);
					SetActivator(newtid,AAPTR_DEFAULT);
					SetPointer(AAPTR_MASTER,playertid);
					break;
				case 1:
					SpawnForced("StrifeBeaconHexenMage_Allies",GetActorX(0),GetActorY(0),GetActorZ(0),newtid);
					Thing_SetTranslation(newtid,-1);
					SetActivator(newtid,AAPTR_DEFAULT);
					SetPointer(AAPTR_MASTER,playertid);
					break;
				case 2:
					SpawnForced("StrifeBeaconHexenFighter_Allies",GetActorX(0),GetActorY(0),GetActorZ(0),newtid);
					Thing_SetTranslation(newtid,-1);
					SetActivator(newtid,AAPTR_DEFAULT);
					SetPointer(AAPTR_MASTER,playertid);
					break;
			}
			break;
		case 8:
			SpawnSpotForced("StrifeBeaconRott_Allies",0,newtid,0);
			SetActorAngle(newtid,CheckInventory("RottMode")*182);
			Thing_SetTranslation(newtid,-1);
			SetActivator(newtid,AAPTR_DEFAULT);
			SetPointer(AAPTR_MASTER,playertid);
			break;
	}
	Thing_ChangeTid(playertid,activator);
}

Script "Samsara_AllyCheckMaster" (void)
{
	SetResultValue(SetActivator(0,AAPTR_MASTER));
}

int placementmatrices[8][2] = 
{
	{ 64, 0 },
	{ 0, 64 },
	{ 64, 64 },
	{ 64, -64 },
	{ -64, 0 },
	{ 0, -64 },
	{ -64, -64 },
	{ -64, 64 }
};

Script "Duke3DEnemyMinionSpawner" (void)
{
	
	int draw = random(1,28);
	int matrice = random(0,7);
	int newmatrice, newestmatrice; // I'm in a rush, okay?
		
	if(draw < 16)
	{
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));
		
		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0), 0, GetActorAngle(0));	
	}
	else if(draw < 24)
	{
		newmatrice = random(0,7);
		if(newmatrice == matrice)
			{
				if(newmatrice == 7)
					newmatrice = 0;
				else
					newmatrice = matrice-1;
			}
			
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[newmatrice][0], GetActorY(0) + 1.0*placementmatrices[newmatrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));

		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0), 0, GetActorAngle(0));
		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[newmatrice][0], GetActorY(0) + 1.0*placementmatrices[newmatrice][1], GetActorZ(0), 0, GetActorAngle(0));
	}
	else if(draw <= 28)
	{
		newmatrice = random(0,7);
		if(newestmatrice == matrice || newestmatrice == newmatrice)
		{
			if(newmatrice == 7 && matrice == 0)
				newestmatrice = 3;
			else if(newmatrice == 0 && matrice == 7)
				newestmatrice = 3;
			else if(newmatrice+1 == matrice && newmatrice != 0)
				newestmatrice = newmatrice-1;
			else if(matrice+1 == newmatrice && matrice != 0)
				newestmatrice = matrice-1;
			else if(newmatrice+1 == matrice && newmatrice == 0)
				newestmatrice = 7;
			else if(matrice+1 == newmatrice && matrice == 0)
				newestmatrice = 7;
		}
			
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[newmatrice][0], GetActorY(0) + 1.0*placementmatrices[newmatrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));
		Spawn("DukeNukemTeleport", GetActorX(0) + 1.0*placementmatrices[newestmatrice][0], GetActorY(0) + 1.0*placementmatrices[newestmatrice][1], GetActorZ(0) + 24.0, 0, GetActorAngle(0));
		
		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[matrice][0], GetActorY(0) + 1.0*placementmatrices[matrice][1], GetActorZ(0), 0, GetActorAngle(0));
		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[newmatrice][0], GetActorY(0) + 1.0*placementmatrices[newmatrice][1], GetActorZ(0), 0, GetActorAngle(0));
		Spawn("Zombieman", GetActorX(0) + 1.0*placementmatrices[newestmatrice][0], GetActorY(0) + 1.0*placementmatrices[newestmatrice][1], GetActorZ(0), 0, GetActorAngle(0));
	}
}

//Replace this script and inject code into it for other tcs when actors die. Override 1 is for base samsara monsters. Override 2 is shrunk actors to get their parent.

Script "Samsara_KillCount" (int override)
{
	if(!(ClassifyActor(0) & ACTOR_MONSTER))
		terminate;
		
	int HasXDeath; 
	int isBoss = CheckFlag(0,"BOSS");
	
	if(GetPlayerAccountName(0) == 0)
		HasXDeath = CheckActorState(0,"XDeath",1);
	else
		HasXDeath = 1;
		
	if(SpawnForced("StrongHoldLoaded",0,0,0,0))
		ACS_NamedExecuteWithResult("Stronghold_KillCount",0,0,0,0);	
		
	int noblood = CheckFlag(0,"NOBLOOD");
	int health;
	int currentHealth = GetActorProperty(0, APROP_Health);	
	int healthtokens = CheckInventory("ShrunkMasterHealthTokens");

	if(healthtokens == 0)
		health = GetActorProperty(0, APROP_SpawnHealth);	
	else
		health = healthtokens;
	
	int x = GetActorX(0);
	int y = GetActorY(0);
	int z = GetActorZ(0);
	
	//eww
	if(ThingCountName("SamsaraMixerCompendiumToken",0) > 0)
	{
		ACS_NamedExecuteAlways("Samsara_PinataHandler",0,health,GetActorProperty(0,APROP_Radius)>>16,GetActorProperty(0,APROP_Height)>>16);
	}
	
	SetActivatorToTarget(0);
	
	if(override != 1)
		GiveInventory("KillCount", 1);
		
	if(CheckInventory("Hexen2Class"))
	{
		int chance = (0.05+((CheckInventory("Hexen2Level")-4)*0.03));
		if(chance > 0.2)
			chance = 0.2;
					
		GiveInventory("Hexen2Experience", FixedMul((health*2.5)>>16,(1.0+(0.05*CheckInventory("Hexen2Wisdom")))));
		if(random(0.0,1.0) <= chance && !noblood)
			SpawnForced("Hexen2SoulSphere",x,y,z,0,0);
	}
	
	if(CheckInventory("StrifeClass") && !CheckInventory("BlackBirdTauntCooldown"))
	{
		if(isBoss)
			GiveInventory("BlackBirdBossKill",1);
		else if(HasXDeath && currentHealth < -health && random(0,20) <= 3)
		{
			GiveInventory("BlackBirdXDeath",1);
		}
	}
}

Script "Samsara_GZDoomChecker" (void)
{
	if(GetCvar("sams_runninginzdoom"))
		SetResultValue(1);
	
	else
		SetResultValue(0);
}

Script "Samsara_AllyHealthRegen" (void)
{
	While(GetActorProperty(0, APROP_Health) > 0)
	{
		HealThing(1);
		Delay(35);
	}
}

int misccharacterclasses = 8;
int checkclassindices[8] = {19,23,5,11,24,10,25,14};
int activetokenselectors[8];

script "HeroOnMap" Open
{
	int clients = PlayerCount();
	int playervalue;
	for(int a = 0; a < misccharacterclasses; a++)
	{
		activetokenselectors[a] = 0;
	}
	
	for(int p = 0; p < clients; p++)
	{	
		if(PlayerInGame(p) == true)
		{
			for(int b = 0; b < misccharacterclasses; b++)
			{
				if(PlayerClass(p) == checkclassindices[b])
				{
					activetokenselectors[b] = 1;
				}
			}
		}
		else
		{
			clients += 1;
		}
	}
}

int HealthBonusMapCount = 0;
int ArmorBonusMapCount = 0;
int HealthBonusScriptCount = 0;
int ArmorBonusScriptCount = 0;

Script "Samsara2689" (int mode)  //2689
{
	int any;
	int spawnchance = random(0,100);
	SetResultValue(0);
	Switch(mode)
	{	
		Case 1:
			HealthBonusScriptCount++;
			if(HealthBonusScriptCount > HealthBonusMapCount) { SetResultValue(0); terminate; }
					
			break;
		Case 2:
			ArmorBonusScriptCount++;
			if(ArmorBonusScriptCount > ArmorBonusMapCount) { SetResultValue(0); terminate; }
				
			break;
	}

	if(spawnchance > GetCvar("sams_misccharacters") || GetCvar("sams_misccharacters") == 0)
	{
		terminate;
	}
	
	for(int pre = 0; pre < misccharacterclasses; pre++)
	{
		if(activetokenselectors[pre] == 1)
		{
			any = true;
			break;
		}
	}
	
	if(any == false)
	{
		terminate;
	}

	while(true)
	{
		int a, b;
		
		if(activetokenselectors[a] == true)
		{
			if(a == 0)
			{	
				Switch(mode)
				{	
					Case 1:
						SpawnSpotFacing("HLScientist", 0, 0);
						break;
					Case 2:
						SpawnSpotFacing("HLSecurityGuard", 0, 0);
						break;
				}
				terminate;
			}
			else if(a == 1)
			{
				SetResultValue(0);
				b = random(0, 11);
				if(b < 5)
				{
					SpawnSpotFacing("RedneckRampage_Chicken", 0, 0);
					break;
				}
				else if(b < 8)
				{
					SpawnSpotFacing("RedneckRampage_Pig", 0, 0);
					break;
				}
				else if(b <= 10)
				{
					SpawnSpotFacing("RedneckRampage_Cow", 0, 0);
					break;
				}
				else
				{
					SpawnSpotFacing("RRBanjoConcert", 0, 0);
					break;
				}	
				terminate;
			}
			else if(a == 2)
			{
				SetResultValue(0);
				SpawnSpotFacing("Duke3DBabe", 0, 0);
				terminate;
			}
			else if(a == 3)
			{
				SetResultValue(0);
				SpawnSpotFacing("StrifePeasant", 0, 0);		
				terminate;
			}
			else if(a == 4)
			{
				SetResultValue(0);
				SpawnSpotFacing("Q2Insane", 0, 0);
				terminate;
			}
			else if(a == 5)
			{
				b = random(0, 10);
				SetResultValue(0);
				
				if(b < 2)
					SpawnSpotFacing("BloodInnocentMime", 0, 0);
					
				else
					SpawnSpotFacing("BloodInnocentMoron", 0, 0);
				
				terminate;
			}
			else if(a == 6)
			{
				SetResultValue(0);
				SpawnSpotFacing("Hexen2_Sheep", 0, 0);
				terminate;
			}
			else if(a == 7)
			{
				if(mode == 1)
					SpawnSpotFacing("RMRLDFGuard", 0, 0);
				else if(mode == 2)
					SpawnSpotFacing("RMRLDFMilitia", 0, 0);
				terminate;
			}
		}
		
		if(a >= misccharacterclasses-1)
			a = random(-1,misccharacterclasses-1);
		else
			a++;
	}
}

Script "BonusItemCount" Open
{
	HealthBonusScriptCount = 0;
	ArmorBonusScriptCount = 0;
	HealthBonusMapCount = ThingCountName("HealPack0", 0);
	ArmorBonusMapCount = ThingCountName("ArmorScrap200", 0);
}

Script "Samsara_Laser" (int type, int space, int height) clientside
{
	int t, i, k = 0, l, angle, pitch, x, y, z, tx, ty, tz, vx, vy, vz, mag, magI, horz;
	str segment;
	switch(type)
	{
		case 1:
			segment = "Hexen2ForceCubeMissileSegment1";
			break;
		case 2:
			segment = "Hexen2ForceCubeMissileSegment2";
			break;
		case 3:
			segment = "Hexen2ForceCubeMissileSegment3";
			break;
		case 4:
			segment = "Hexen2ForceCubeMissileSegment4";
			break;
		case 5:
			segment = "Hexen2ForceCubeMissileSegment5";
			break;
		case 6:
			i = space;
			segment = "Hexen2TempestStaffPoweredLightningSegment";	
			break;
		case 7:
			segment = "Hexen2FamineBeamSegment";
			break;
		case 8:
			segment = "TentacleProjectileSegment";
			break;
		case 9:
			horz = -11;
			i = 28;
			segment = "LaserProjectileSegment";
			break;
		case 10:
			horz = -2;
			i = 16;
			segment = "LaserProjectileSegment";
			break;
		case 11:
			horz = 2;
			i = 16;
			segment = "LaserProjectileSegment";
			break;
		case 12:
			i = 16;
			segment = "TentacleProjectileSegment";
			break;
		case 13:
			horz = 24;
			i = 64;
			segment = "WidowBeamProjectileSegment";
			break;
		case 14:
			i = space;
			segment = "LGBeam";
			break;
		case 15:
			segment = "Hexen2MedusaGazeSegment1";
			break;			
	}
	

	int newtid = UniqueTid();

	tx = GetActorX(0); ty = GetActorY(0); tz = GetActorZ(0);
	
	SetActivatorToTarget(0);	
	
	int xoff = sin(GetActorAngle(0)) * horz;
	int yoff = cos(GetActorAngle(0)) * horz;
		
    x = GetActorX(0) + xoff;
	y = GetActorY(0) + yoff;
	z = GetActorZ(0) + height*1.0;
	
	int vectorx = tx - x;
	int vectory = ty - y;
	int vectorz = tz - z;
	angle = VectorAngle(vectorx, vectory);
	
	int length = magnitudeTwo(vectorx>>16,vectory>>16);
	pitch = VectorAngle(length<<16, vectorz);

    vx = tx-x; vy = ty-y; vz = tz-z; mag = magnitudeThree_f(vx, vy, vz);
    vx = FixedDiv(vx, mag); vy = FixedDiv(vy, mag); vz = FixedDiv(vz, mag);
    magI = ftoi(mag);
    for (i = i; i < magI; i += space)
    {
        SpawnForced(segment, x+(vx*i), y+(vy*i), z+(vz*i), newtid);
		SetActorPitch(newtid, pitch);
		SetActorAngle(newtid, angle);
		if(i % 1500 == 0)
			Delay(1);
    }
}

Script "DisruptorPlasmaLanceAngle" (void)
{
	SetActivatorToTarget(0);
	SetResultValue(CheckInventory("PlasmaLanceAngle"));
}

Script "DisruptorPlasmaLancePitch" (void)
{
	SetActivatorToTarget(0);
	SetResultValue(GetActorPitch(0));
}

Script "DisruptorPSICooldown" (void)
{
    if (CheckInventory("DisruptorPSICooldown") > 0)
    {
        delay(35);
        TakeInventory("DisruptorPSICooldown",1);
        restart;
    }
}

str HexenWeapons[8] = { "Hammer of Retribution", "Firestorm", "Timon's Axe", "Serpent Staff", "Frost Shards", "Wraithverge", "Sapphire Wand", "Mace of Contrition" };

Script "Hexen_SwitchPriority" (void)
{
	for(int a = 0; a < 8; a++)
	{
		if(CheckInventory(HexenWeapons[a]))
		{
			SetWeapon(HexenWeapons[a]);
			break;
		}
	}
}

Script "DarkServantAutoRemoval" (void)
{
	int newtid = uniquetid();
	if(!Spawn("MinotaurFriend2",GetActorX(0),GetActorY(0),GetActorZ(0),newtid) || !SetActivator(0,AAPTR_Tracer))
	{
		SetResultValue(0);
	}
	else
	{
		Thing_remove(newtid);
		SetResultValue(1);
	}
}

Script "FlechetteCooldown" (void)
{
	if (CheckInventory("FlechetteCooldown") > 0)
    {
        delay(35);
        TakeInventory("FlechetteCooldown",1);
        restart;
    }
}

Script "Samsara_BotAltClassHandler" (int playernum)
{
	str playername;
	switch(PlayerClass(playernum))
	{
		case 0:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Doom 64 Guy") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_doom64",1);
			}
			break;
		case 3:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"B.J. Blazkowicz (Lost)") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_wolfmode",1);
			}
			if(StrCmp(playername,"B.J. Blazkowicz (Mac)") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_wolfmode",2);
			}			
			if(StrCmp(playername,"B.J. Blazkowicz (Totenkopf)") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_wolfmode",3);
			}
			break;
		case 4:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Daedolon") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_hexclass",1);
			}
			if(StrCmp(playername,"Baratus") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_hexclass",2);
			}
			break;
		case 5:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-5);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Duke Nukem (Beach)") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_dkclab",1);
			}
			break;
		case 8:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-8);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Taradino Cassatt") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_rottmode",1);
			}
			if(StrCmp(playername,"Thi Barrett") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_rottmode",2);
			}
			if(StrCmp(playername,"Lorelei Ni") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_rottmode",3);
			}
			if(StrCmp(playername,"Doug Wendt") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_rottmode",4);
			}
			break;
		case 9:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Blake Stone (Planet Strike)") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_bsaog",1);
			}
			break;
		case 16:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Tobias Locke") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_ipogmode",1);
			}
			if(StrCmp(playername,"Xith") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_ipogmode",2);
			}
			if(StrCmp(playername,"Specimen 7") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_ipogmode",3);
			}
			if(StrCmp(playername,"Theola Nom") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_ipogmode",4);
			}
			break;
		case 19:
			playername = GetUserCvarString(playernum,"name");
			playername = StrRight(playername,strlen(playername)-2);
			playername = StrLeft(playername,strlen(playername)-2);
			if(StrCmp(playername,"Shephard") == 0)
			{	
				SetUserCvar(playernum,"sams_cl_shephardmode",1);
			}
			break;
		case 27:
			while(GetActorProperty(0,APROP_Health) > 0)
			{
				int randomweapon = random(0,5);
				switch(randomweapon)
				{
					case 0:
						SetWeapon("Catacomb_WavesQuickSpell");
						break;
					case 1:
						SetWeapon("Catacomb_XTerminatorsQuickSpell");
						break;
					case 2:
						SetWeapon("Catacomb_BurstsQuickSpell");
						break;
					case 3:
						SetWeapon("Catacomb_ZappersQuickSpell");
						break;
					case 4:
						SetWeapon("Catacomb_NukesQuickSpell");
						break;
					case 5:
						SetWeapon("Catacomb_BoltsQuickSpell");
						break;
				}
				Delay(17);
			}
			break;
	}
}

Script "Samsara_PlayerFreezeTranslation" (void)
{
	//SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
	CreateTranslation(7680, 0:255=%[0.078,0.062,0.140]:[1.16,1.16,1.348]);
	Thing_SetTranslation(0,7680);
}

Script "Samsara_ProjectilePredictor" (int type)
{
	str typeactor;
	int speedx = GetActorVelX(0);
	int speedy = GetActorVelY(0);
	int speedz = GetActorVelZ(0);
	int divideamount = FixedDiv(GetActorProperty(0,APROP_Speed),GetActorProperty(0,APROP_Radius))>>16;
	int modifier = 1.0/divideamount;
	int currentmultiplier;
	int newactivator = UniqueTid();
	Thing_ChangeTid(0,newactivator);
	SetActivator(0,AAPTR_Target);
	int player = ActivatorTid();
	int newplayer = UniqueTid();
	Thing_ChangeTid(0,newplayer);
	
	int newtid1 = UniqueTid();
	int newtid2 = UniqueTid();
	int newtid3 = UniqueTid();
	
	switch(type)
	{
		case 1:
			typeactor = "DisruptorGP_12_Explosion";
			break;
		case 2:
			typeactor = "Fwalling_Explosion";
			break;
		case 3:
			typeactor = "RMR-RedPlasma_Explosion";
			break;
		case 4:
			typeactor = "Ksphere_Rott_Explosion";
			break;
	}
	SpawnForced(typeactor,GetActorX(newactivator),GetActorY(newactivator),GetActorZ(newactivator),newtid3);
	SetActivator(newtid3,AAPTR_Default);
	SetPointer(AAPTR_Target,newplayer);
	Thing_ChangeTid(newtid3,0);
	SetActivator(newplayer,AAPTR_Default);
	for(int a = 1; a < divideamount; a++)
	{
		currentmultiplier = a * modifier;
		SpawnForced(typeactor,GetActorX(newactivator) + FixedMul(speedx,currentmultiplier),GetActorY(newactivator) + FixedMul(speedy,currentmultiplier), GetActorZ(newactivator) + FixedMul(speedz,currentmultiplier),newtid1);
		SpawnForced(typeactor,GetActorX(newactivator) - FixedMul(speedx,currentmultiplier),GetActorY(newactivator) - FixedMul(speedy,currentmultiplier), GetActorZ(newactivator) - FixedMul(speedz,currentmultiplier),newtid2);
		SetActivator(newtid1,AAPTR_Default);
		SetPointer(AAPTR_Target,newplayer);
		SetActivator(newtid2,AAPTR_Default);
		SetPointer(AAPTR_Target,newplayer);
		SetActivator(newplayer,AAPTR_Default);
		Thing_ChangeTid(newtid1,0);
		Thing_ChangeTid(newtid2,0);
		
		if(ClassifyActor(0) & ACTOR_WORLD)
			terminate;
	}
}

Script "Samsara_PlayerShrinker" (int condition)
{
	if(!condition)
	{	
		if(CheckInventory("ShrunkPlayer"))
			terminate;
			
		int shrinktimer;
		int activatorstid = ActivatorTid();
		int usertid = UniqueTid();
		int dummytid = UniqueTid();
		int ScaleX = GetActorProperty(0,APROP_ScaleX);
		int ScaleY = GetActorProperty(0,APROP_ScaleY);
		int shrunkenscalex = FixedMul(ScaleX,0.2);
		int shrunkenscaley = FixedMul(ScaleY,0.2);
		int viewheight = GetActorProperty(0,APROP_ViewHeight);
		GiveInventory("ShrunkPlayer",1);	
		SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
		for(int a = 0; a < 10; a++)
		{
			SetActorProperty(0,APROP_ViewHeight,FixedMul(viewheight,1.0-(a*0.08)));
			Delay(2);
		}
		Delay(1);
		SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
		int pln = PlayerNumber();
		
		//Translation helper, because the flag isn't valid
		SpawnSpotForced("TranslationDummy",0,dummytid,0);
		Thing_SetTranslation(dummytid, -1);
		Thing_ChangeTid(0, usertid);
		SetActivator(dummytid, AAPTR_Default);
		MorphActor(usertid,strparam(s:PlayerActors[PlayerClass(pln)],s:"_Shrink"),"Zombieman3",525,MRF_FULLHEALTH|MRF_UNDOBYTOMEOFPOWER|MRF_LOSEACTUALWEAPON|MRF_NEWTIDBEHAVIOUR,"ShrinkFlash","ShrinkFlash");
		Thing_SetTranslation(usertid, -1);
		SetActivator(usertid, AAPTR_Default);
		Thing_ChangeTid(usertid, activatorstid);
		Thing_Remove(dummytid);
		
		SetActorProperty(0,APROP_ScaleX,shrunkenscalex);
		SetActorProperty(0,APROP_ScaleY,shrunkenscaley);
		
		while(shrinktimer <= 420)
		{
			if((ClassifyActor(0) & ACTOR_DEAD))
				terminate;
			
			Delay(1);
			
			shrinktimer++;
		}
		TakeInventory("ShrunkPlayer",1);
		int newtid = UniqueTid();
		if(!Spawn(PlayerActors[PlayerClass(pln)],GetActorX(0),GetActorY(0),GetActorZ(0),newtid))
		{
			Thing_Damage2(0,500000000000,"Explosive");
		}
		else
		{
			Thing_Remove(newtid);
		}
		if((ClassifyActor(0) & ACTOR_DEAD))
				terminate;
			
		SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
		for(a = 0; a < 10; a++)
		{
			SetActorProperty(0,APROP_ScaleX,shrunkenscalex+(FixedMul(ScaleX,0.1)*a));
			SetActorProperty(0,APROP_ScaleY,shrunkenscaley+(FixedMul(ScaleY,0.1)*a));
			SetActorProperty(0,APROP_ViewHeight,FixedMul(viewheight,0.28+(a*0.08)));
			Delay(2);
		}
		UnMorphActor(0,1);
		SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
		SetActorProperty(0,APROP_ViewHeight,viewheight);
		SetActorProperty(0,APROP_ScaleX,ScaleX);
		SetActorProperty(0,APROP_ScaleY,ScaleY);
	}
	else
	{
		SetResultValue(ClassifyActor(0) & ACTOR_PLAYER);
	}
}

script "Catacomb_HourglassCooldown" (void)
{
    if (CheckInventory("Catacomb_HourglassCooldown") > 0)
    {
        delay(35);
        TakeInventory("Catacomb_HourglassCooldown",1);
        restart;
    }
} 

Script "Samsara_ResetInventory" (void)
{
	int pln = PlayerNumber();
	ClearInventory();
	GiveInventory("Clip", 50);
	TakeInventory("GotWeapon0", 999);
	TakeInventory("GotWeapon1", 999);
	TakeInventory("GotWeapon2", 999);
	TakeInventory("GotWeapon3", 999);
	TakeInventory("GotWeapon4", 999);
	TakeInventory("GotWeapon5", 999);
	TakeInventory("GotWeapon6", 999);
	TakeInventory("GotWeapon7", 999);
	switch(PlayerClass(pln))
	{
		case 0:
			TakeInventory(" Chaingun ", 999);
			TakeInventory(" Chainsaw ", 999);
			TakeInventory(" Railgun ", 999);
			
			GiveInventory(" Pistol ", 1);
			GiveInventory(" Fist ", 1);
			GiveInventory("DoomguyClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon(" Pistol ");
			break;
		case 1:
			TakeInventory("Super Bootspork", 999);
			TakeInventory("Rapid Zorcher", 999);
			TakeInventory("Gigazorcher 2100", 999);
			
			GiveInventory("Mini-Zorcher", 1);
			GiveInventory(" Bootspoon ", 1);
			GiveInventory("ChexClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Mini-Zorcher");
			break;
		case 2:
			TakeInventory("Gauntlets of the Necromancer", 999);
			TakeInventory("Dragon Claw", 999);
			TakeInventory("Grim Ballista", 999);
			TakeInventory("PermaRemoteBomb", 999);
			TakeInventory("PermaTimeBomb", 999);
			
			GiveInventory("Elven Wand", 1);
			GiveInventory(" Staff ", 1);
			GiveInventory("CorvusClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("PermaRemoteBomb", 1);
			GiveInventory("PermaTimeBomb", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Elven Wand");
			break;
		case 3:
			TakeInventory("BJSuperKnife", 999);
			TakeInventory("  Chaingun  ", 999);
			TakeInventory("Mauser Rifle", 999);
			
			GiveInventory("Luger", 1);
			GiveInventory("Knife", 1);
			GiveInventory("WolfenClass", 1);
			GiveInventory("CanWolfMovement", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Luger");
			break;
		case 4:
			TakeInventory("PortFlechette", 999);
			TakeInventory("PortMysticAmbit", 999);
			TakeInventory("Serpent Staff", 999);
			TakeInventory("Bloodscourge", 999);
			TakeInventory("Hammer of Retribution", 999);
			TakeInventory("Frost Shards", 999);
			TakeInventory("Timon's Axe", 999);
				
			GiveInventory("Sapphire Wand", 1);
			GiveInventory("Mace of Contrition", 1);
			GiveInventory("HexenClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Sapphire Wand");
			break;
		case 5:
			TakeInventory("Pipebombs", 999);
			TakeInventory("Chaingun Cannon", 999);
			TakeInventory("Golden Desert Eagle", 999);
			TakeInventory("DukePortJetpack", 999);
			TakeInventory("DukePetjack", 999);
			TakeInventory("DukePortNiVi", 999);
			TakeInventory("DukeNightVision", 999);
			TakeInventory("  Shotgun  ", 999);
			TakeInventory("Explosive Shotgun", 999);
			TakeInventory("Chaingun Cannon", 999);
			TakeInventory("RPG", 999);
			TakeInventory("Freezethrower", 999);
			TakeInventory("Devastator", 999);
			
			GiveInventory("Glock 17", 1);
			GiveInventory("Mighty Boot", 1);
			GiveInventory("DukeClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Glock 17");
			
			if (!CheckInventory("DukeBallgag"))
			{
				LocalAmbientSound("duke/mpdeath",127);
				GiveInventory("DukeTauntCooldown",5);
				ACS_NamedExecuteAlways("DukeTauntCooldown",0,0);
			}
			break;
		case 6:
			TakeInventory("KKV-7 SMG Flechette", 999);
			TakeInventory("MA-75B Assault Rifle", 999);
			TakeInventory("SPNKR-25 Auto Cannon", 999);
			TakeInventory("CanDualPistols", 999);
			TakeInventory("CanDualShotties", 999);
			TakeInventory("WSTE-M5 Combat Shotgun", 999);
			TakeInventory("Fusion Pistol", 999);
			TakeInventory("SPNKR-XP SSM Launcher", 999);
			TakeInventory("TOZT-7 Napalm Unit", 999);
			TakeInventory("ONI-71 Wave Motion Cannon", 999);
			TakeInventory("Alien Weapon", 999);
			TakeInventory(" Alien Weapon ", 999);
			TakeInventory(".44 Magnum Mega Class A1", 999);

			GiveInventory("OverMax", 200);
			GiveInventory("OverOverMax", 300);
			GiveInventory(".44 Magnum Mega Class A1", 1);
			GiveInventory("Steel Knuckles", 1);
			GiveInventory("RocketAmmo", 10);
			GiveInventory("Shell", 20);
			GiveInventory("Cell", 50);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("MarathonClass", 1);
			GiveInventory("MagnumBullet", 100);
			GiveInventory("MagnumBulletRight", 100);
			GiveInventory("RifleBullet", 500);
			GiveInventory("SmgBullet", 500);
			GiveInventory("FusionBullet", 500);
			GiveInventory("GrenadeInClip", 500);
			GiveInventory("WMCAmmo", 500);
			GiveInventory("MortarAmmo", 500);
			GiveInventory("NapalmInTank", 500);
			GiveInventory("SpankerAmmo", 2);
			GiveInventory("KnifeAmmo", 2);
			GiveInventory("TauntButton", 1);
			SetWeapon(".44 Magnum Mega Class A1");
			break;
		case 7:
			TakeInventory("Laser Cannon", 999);
			TakeInventory("Nailgun", 999);
			TakeInventory("QuadDamageItem", 999);
			TakeInventory("Thunderbolt", 999);
			TakeInventory("Rocket Powered Impaler", 999);
			TakeInventory("Double Shotgun", 999);
			TakeInventory("Grenade Launcher", 999);
			TakeInventory("  Rocket Launcher  ", 999);
			TakeInventory("Super Nailgun", 999);	
			TakeInventory("Clip", 50);
			
			GiveInventory("QuakeClass", 1);
			GiveInventory("Single Shotgun", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("Shell", 25);
			GiveInventory("Axe", 1);
			SetWeapon("Single Shotgun");
			break;
		case 8:
			TakeInventory("HeatSeeker", 999);
			TakeInventory("Double Pistols", 999);
			TakeInventory("Bazooka", 999);
			TakeInventory("MP40", 999);
			TakeInventory("Firebomb", 999);
			TakeInventory("DrunkMissiles", 999);
			TakeInventory("FlameWall", 999);
			TakeInventory("Split Missile", 999);
			TakeInventory("Excalibat", 999);
			TakeInventory("DarkStaff", 999);
			TakeInventory("God Hand", 999);
			TakeInventory("Doggie", 999);
			TakeInventory("Clip", 50);
			
			GiveInventory("RottClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("RPistol", 1);
			GiveInventory("RottKnife", 1);
			GiveInventory("DisplayMenu", 1);
			GiveInventory("PlayMusic", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("RPistol");
			break;
		case 9:
			TakeInventory("BlakeRefill", 999);
			TakeInventory("BlakeSuperAutoCharge", 999);
			TakeInventory("Slow Fire Protector", 999);
			TakeInventory("Rapid Assault Rifle", 999);
			TakeInventory("Dual Neutron Disruptor", 999);
			TakeInventory("Plasma Discharge Unit", 999);
			TakeInventory("Gatling Fusion Devastator", 999);
			TakeInventory("Anti-Plasma Cannon", 999);
			TakeInventory("BlakeShield", 999);
			TakeInventory("Advanced Auto Charge Pistol", 999);
			
			GiveInventory("BlakeClass", 1);
			GiveInventory("Auto Charge Pistol", 1);
			GiveInventory("CanWolfMovement", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Auto Charge Pistol");
			break;
		case 10:
			TakeInventory("Dynamite", 999);
			TakeInventory("Flaregun", 999);
			TakeInventory("Sawedoff", 999);
			TakeInventory("Tommygun", 999);
			TakeInventory("NapalmLauncher", 999);
			TakeInventory("TeslaCannon", 999);
			TakeInventory("LifeLeech", 999);
			TakeInventory("GunsAkimboP", 999);
			TakeInventory("GunsAkimboItem", 999);
			TakeInventory("VoodooDoll", 999);
			TakeInventory("SprayCan", 999);
			TakeInventory("Flaregun2", 999);
			
			GiveInventory("CalebClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("Pitchfork", 1);
			GiveInventory("   Revolver   ", 1);
			SetWeapon("   Revolver   ");
			break;
		case 11:
			TakeInventory(" Sigil ", 999);
			TakeInventory("StrifeSigilPiece", 999);
			TakeInventory("StrifeBeaconItem5", 999);
			TakeInventory("  Crossbow  ", 999);
			TakeInventory("Mini Missile Launcher", 999);
			TakeInventory("Assault Gun", 999);
			TakeInventory(" Grenade Launcher ", 999);
			TakeInventory("Flame Thrower", 999);
			TakeInventory(" Mauler ", 999);
			TakeInventory("  Sigil  ", 999);
			
			GiveInventory("OverMax", 200);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("StrifeClass", 1);
			GiveInventory("Punch Dagger", 1);
			GiveInventory("   Pistol   ", 1);
			SetWeapon("   Pistol   ");	
			break;
		case 12:
			TakeInventory(" Arachnicator ", 999);
			TakeInventory("  Sonic Shock  ", 999);
			TakeInventory("Pellet Bomb", 999);
			TakeInventory("  Dart Cannon  ", 999);
			TakeInventory("    Missile Launcher    ", 999);
			TakeInventory("Napalm Charge", 999);
			TakeInventory(" Plasma Ball ", 999);
			TakeInventory(" Eradicator Enhancement Chip ", 999);
			TakeInventory(" EvilBuddy ", 999);
			
			GiveInventory("EradClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("  Claw  ", 1);
			GiveInventory("  Ripper Disc  ", 1);
			SetWeapon("  Ripper Disc  ");
			break;
		case 13:
			TakeInventory("M24CAW", 999);
			TakeInventory("M343Vulcan", 999);
			TakeInventory("AssaultShotgun", 999);
			TakeInventory("AlienDualBlaster", 999);
			TakeInventory("AlienPlasmaRifle", 999);
			TakeInventory("AlienAssaultCannon", 999);
			TakeInventory("AlienDisintegrator", 999);
			TakeInventory("SuperVulcan", 999);

			GiveInventory("Taser", 1);
			GiveInventory("CanWolfMovement", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("C7Class", 1);
			SetWeapon("Taser");
			break;
		case 14:
			TakeInventory("DirtShark", 999);
			TakeInventory("ACR Combat Laser", 999);
			TakeInventory("ACR ADD-ON", 999);
			TakeInventory("Cyclops Particle Accelerator", 999);
			TakeInventory("RMR Grenade Launcher", 999);
			TakeInventory("RMR Railgun", 999);
			TakeInventory(" RMR Plasma Cannon ", 999);
			TakeInventory("Subestron Arm", 999);
			TakeInventory("Estron Ball", 999);
			
			GiveInventory(" Laser Pistol ", 1);
			GiveInventory("RMRClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon(" Laser Pistol ");
			break;
		case 15:
			TakeInventory("Thermal Detonator", 999);
			TakeInventory("Stormtrooper Rifle", 999);
			TakeInventory("Fusion Cutter", 999);
			TakeInventory("Imperial Repeater", 999);
			TakeInventory("Mortar Gun", 999);
			TakeInventory("Concussion Rifle", 999);
			TakeInventory("Assault Cannon", 999);
			TakeInventory("DFSuperCharge", 999);
			TakeInventory("Stun Gauntlets", 999);
			TakeInventory("Czerka Adventurer", 999);
			
			GiveInventory("  Fist_2x5  ", 1);
			GiveInventory("Bryar Pistol", 1);
			GiveInventory("KatarnClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);			
			SetWeapon("Bryar Pistol");	
			break;
		case 16:
			TakeInventory(" Toxic Mutant Gun ", 999);
			TakeInventory(" Plasma Shotgun ", 999);
			TakeInventory(" Aldus Flamethrower ", 999);
			TakeInventory(" Fast Chaingun ", 999);
			TakeInventory(" Fast Rocket Launcher ", 999);
			TakeInventory(" Laser Cannon ", 999);
			TakeInventory(" Super Plasma Annihilator ", 999);
			TakeInventory(" Lizard Crossbow ", 999);
			TakeInventory("PGSuperTazer", 999);
			TakeInventory("PGUltraTazer", 999);
			TakeInventory("IPOGGrenadeItem", 999);
			TakeInventory("IPOGTimeBombItem", 999);
			TakeInventory("IPOGProximityMineItem", 999);
			TakeInventory("IPOGCloneItem", 999);
			
			GiveInventory("POGreedClass", 1);
			GiveInventory(" Tazer ", 1);
			GiveInventory(" Aldus Pistol ", 1);
			GiveInventory("OverMax", 200);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon(" Aldus Pistol ");
			break;
		case 17:
			TakeInventory(" 18mm Auto ", 999);
			TakeInventory(" Phase Rifle ", 999);
			TakeInventory(" AM Blaster ", 999);
			TakeInventory("Phase Repeater", 999);
			TakeInventory(" Lock-on Cannon ", 999);
			TakeInventory(" AM Cyclone ", 999);
			TakeInventory(" Disruptor Zodiac ", 999);
			TakeInventory(" Disruptor Plasmalance ", 999);
			TakeInventory("DisruptorPSIEnergy", 999);
			TakeInventory("DisruptorPSICooldown", 999);
		
			GiveInventory(" 18mm Semi ", 1);
			GiveInventory("Disruptor Fist", 1);
			GiveInventory("DisruptorClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("DisruptorDrain", 1);
			GiveInventory("DisruptorHealPSI", 1);
			GiveInventory("DisruptorPSIEnergy", 10);
			GiveInventory("TauntButton", 1);
			SetWeapon(" 18mm Semi ");
			break;
		case 18:
			TakeInventory("WTShieldTrigger", 999);
			TakeInventory("WTShieldUsed", 999);
			TakeInventory("WTWeaponActive", 999);
			TakeInventory("WTShieldDisable", 999);
			TakeInventory("WTShieldCounter", 999);
			TakeInventory("WTSpellCounter", 999);
			TakeInventory("WTCastingSpell", 999);
			TakeInventory("WTHalberdHold", 999);
			TakeInventory("WTBowUpgrade", 999);
			TakeInventory("WTSwordUpgrade", 999);
			TakeInventory("WTFistActive", 999);
			TakeInventory("WTFistAttack", 999);
			
			GiveInventory("Bow and Arrows", 1);
			GiveInventory("Witchaven_Fists", 1);
			GiveInventory("WitchavenClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("GrondovalStarterArmor", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Bow and Arrows");
			break;
		case 19:
			TakeInventory("HalfLifeMusicPlayingToken", 1);
			TakeInventory("HalfLifeOpposingForceSet", 1);
			TakeInventory("HLHEVIsTalking", 1);
			TakeInventory("HLHEVPickupID", 1);
			TakeInventory("HLHEVDamageType", 1);
			TakeInventory("HLSpeedTokens", 1);
			
			GiveInventory("9mm Pistol", 1);
			GiveInventory("Crowbar", 1);
			GiveInventory("HalfLifeClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("Clip", 30);
			GiveInventory("Shell", 15);
			GiveInventory("RocketAmmo", 5);	
			GiveInventory("Flashlightammo", 4200);
			SetWeapon("9mm Pistol");
			break;
		case 20:
			GiveInventory("SWKatana", 1);
			GiveInventory("SWFists", 1);
			GiveInventory("SWShuriken", 1);
			GiveInventory("GuardMode1", 1);
			GiveInventory("SWClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("SWKatana");
			break;
		case 21:
			GiveInventory("CMLaserPistol", 1);
			GiveInventory("MagicFist", 1);
			GiveInventory("CMClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("usingmagicnull", 1);
			GiveInventory("OverMax", 200);
			GiveInventory("MagicMode0", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("CMLaserPistol");
			break;
		case 22:
			GiveInventory("PSMagnum", 1);
			GiveInventory("PSMachete", 1);
			GiveInventory("JonClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("PSMagnum");
			break;
		case 23:
			GiveInventory(" .454 Casull Pistol ", 1);
			GiveInventory(" RR Crowbar ", 1);
			GiveInventory("RRClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon(" .454 Casull Pistol ");
			break;
		case 24:
			TakeInventory("Q2Silencer", 999);
			TakeInventory("Q2EnvironmentSuit", 999);
			TakeInventory("Q2Invulnerability", 999);
			TakeInventory("Q2QuadDamage", 999);
			TakeInventory("Q2DualFireDamage", 999);
			TakeInventory("Q2DoubleDamage", 999);
			
			GiveInventory("Q2Blaster", 1);
			GiveInventory("BittermanClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Q2Blaster");
			break;
		case 25:
			TakeInventory("Hexen2Level", 0x7FFFFFFF);
			TakeInventory("Hexen2Experience", 0x7FFFFFFF);
			TakeInventory("Hexen2Intelligence", 0x7FFFFFFF);
			TakeInventory("Hexen2Wisdom", 0x7FFFFFFF);
			TakeInventory("Hexen2Dexterity", 0x7FFFFFFF);
			TakeInventory("Hexen2Strength", 0x7FFFFFFF);
			TakeInventory("Hexen2BlueManaAdd", 0x7FFFFFFF);
			TakeInventory("Hexen2GreenManaAdd", 0x7FFFFFFF);
			TakeInventory("Hexen2HealthAdd", 0x7FFFFFFF);
			//TakeInventory("Hexen2Started", 1);
			
			GiveInventory("Hexen2BloodFire", 1);
			GiveInventory("Hexen2Sickle", 1);
			GiveInventory("Hexen2Class", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Q2Blaster");
			break;
		case 26:
			GiveInventory("BondClass", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			GiveInventory("Goldeneye_PP7Silenced", 1);
			GiveInventory("Goldeneye_Slapper", 1);
			GiveInventory("Goldeneye_PP7Magazine", 7);
			GiveInventory("Goldeneye_PP7DualMagazine" ,7);
			GiveInventory("Goldeneye_KF7Magazine", 30);
			GiveInventory("Goldeneye_KF7DualMagazine", 30);
			GiveInventory("Goldeneye_AutoShotgunMagazine", 5);
			GiveInventory("Goldeneye_AutoShotgunDualMagazine", 5);
			GiveInventory("Goldeneye_AR33Magazine", 30);
			GiveInventory("Goldeneye_AR33DualMagazine", 30);
			GiveInventory("Goldeneye_RocketLauncherMagazine", 1);
			GiveInventory("Goldeneye_RocketLauncherDualMagazine", 1);
			GiveInventory("Goldeneye_RCP90Magazine", 80);
			GiveInventory("Goldeneye_RCP90DualMagazine", 80);
			GiveInventory("Goldeneye_GoldenGunMagazine", 1);
			GiveInventory("Goldeneye_GoldenGunDualMagazine", 1);
			GiveInventory("Goldeneye_SniperMagazine", 8);
			GiveInventory("Goldeneye_SniperDualMagazine", 8);
			GiveInventory("Goldeneye_D5KMagazine", 80);
			GiveInventory("Goldeneye_D5KDualMagazine", 80);
			GiveInventory("Goldeneye_ThrowingKnivesMagazine", 1);
			GiveInventory("Goldeneye_ThrowingKnivesDualMagazine", 1);
			SetWeapon("Goldeneye_PP7Silenced");
			break;
		case 27:
			TakeInventory("Catacomb_SmallHealthPotion", 999);
			TakeInventory("Catacomb_LargeHealthPotion", 999);
			TakeInventory("Catacomb_Waves", 999);
			TakeInventory("Catacomb_XTerminators", 999);
			TakeInventory("Catacomb_Bursts", 999);
			TakeInventory("Catacomb_Zappers", 999);
			TakeInventory("Catacomb_Nukes", 999);
			TakeInventory("Catacomb_Bolts", 999);
			TakeInventory("Catacomb_Hourglass", 999);
			TakeInventory("Catacomb_HourglassCooldown", 999);	
		
			GiveInventory("Catacomb3D_MagicMissile", 1);
			GiveInventory("CatacombClass", 1);
			GiveInventory("CanWolfMovement", 1);
			GiveInventory("IsSamsaraClass", 1);
			GiveInventory("TauntButton", 1);
			SetWeapon("Catacomb3D_MagicMissile");
			break;
	}
}

Script "Samsara_WeaponHotkeys" (int mode)
{
	int pln = PlayerNumber();
	if(!SetWeapon(ClassHotKeyWeapon[PlayerClass(pln)][CheckInventory("SamsaraModeCounter")][mode]))
		UseInventory(ClassHotKeyWeapon[PlayerClass(pln)][CheckInventory("SamsaraModeCounter")][mode]);
}