script "SamsaraOpen" open  //623 -- SAMSARA_OPEN
{
    IsServer = 1;
    int opd, pd;
    int opdu, pdu;
    int opds, pds;
        
    if (!GetCVar("sams_cvarinfo"))
    {   SetCVar ("sams_cvarinfo", 0);
    //ConsoleCommand("archivecvar samsara_cvarinfo"); 
    }
    
	//ACS_NamedExecuteAlways("sams_RESETPLAYER_COOP",0,0,0,0);
	
    if (SamsaraGlobal[GLOBAL_DONEBITCHING] == 0)
    {
		HudMessage(s:"Reincarnation Changelist ",d:SAMSARA_CHANGELIST; HUDMSG_FADEOUT|HUDMSG_LOG, 93002, CR_GOLD, 1.5, 0.265, 2.0, 0.5);
		HudMessage(s:"Press ",k:"samsara_compendium",s:" for extra information"; HUDMSG_FADEOUT|HUDMSG_LOG, 93003, CR_GOLD, 1.5, 0.285, 2.0, 0.5);
        if (GameType() == GAME_TITLE_MAP) { terminate; }
        if (isSinglePlayer())
        {
            if(GetCvar("sams_cvarinfo") == 0)
            {
			HudMessage(s:"Reincarnation Changelist ",d:SAMSARA_CHANGELIST;
            HUDMSG_FADEOUT, 93002, CR_WHITE, 1.5, 0.2, 2.0, 0.5);
            HudMessage(s:HELPSTR;
            HUDMSG_PLAIN|HUDMSG_LOG, 92712, CR_WHITE, 1.5, 0.225, 2.5);
            HudMessage(s:HELPSTR_CL;
            HUDMSG_PLAIN|HUDMSG_LOG, 92713, CR_WHITE, 1.5, 0.25, 2.5);
            HudMessage(s:"\cjSee the console for \cacvar information\c-.";
            HUDMSG_FADEOUT, 92712, CR_WHITE, 1.5, 0.275, 2.0, 0.5);
			HudMessage(s:"Press ",k:"samsara_compendium",s:" for extra information";
            HUDMSG_PLAIN|HUDMSG_LOG, 93003, CR_WHITE, 1.5, 0.375, 3.0, 0.5);
            SetCVar ("sams_cvarinfo", 1);
            //ConsoleCommand("archivecvar samsara_cvarinfo");
            }
        }
        else
        {
            Log(s:HELPSTR);
        }
        
        SamsaraGlobal[GLOBAL_DONEBITCHING] = 1;
    }

    ArmorMode = middle(0, GetCVar("sams_armormode"), ARMORMODES-1);
    CheckMapArmors();
    
    while (1)
    {
        // I'd use defaultCVar but best-ever breaks on it for some reason :/
        
        // KINSNOTE - I'm pretty sure that this effectively sets the default settings, so nothing that
        // CVARINFO doesn't already do. Let's comment it out and see if we can get away with it.

        /*
        if (!GetCVar("sams_banjetpack"))
        {   SetCVar ("sams_banjetpack", 0);
        //ConsoleCommand("archivecvar samsara_banjetpack"); 
        }
        
        if (!GetCVar("sams_banwolfmove"))
        {   SetCVar ("sams_banwolfmove", 0);
        //ConsoleCommand("archivecvar samsara_banwolfmove");  
        }
        
        if (!GetCVar("sams_lmslife"))
        {   SetCVar ("sams_lmslife", 0);
        //ConsoleCommand("archivecvar samsara_lmslife"); 
        }
        
        if (GetCVar("sams_lmsunique"))
        {
            //ConsoleCommand("unset samsara_lmsunique");

            if (!GetCVar("sams_uniquestart"))
            {
                SetCVar ("sams_uniquestart", 2);
                //ConsoleCommand("archivecvar samsara_uniquestart");
            }
        }
        
        if (!GetCVar("sams_lmsult"))
        {   SetCVar ("sams_lmsult", 0);
        //ConsoleCommand("archivecvar samsara_lmsult");  
        }
        
        if (!GetCVar("sams_nocustomgravity"))
        {   SetCVar ("sams_nocustomgravity", 0);
        //ConsoleCommand("archivecvar samsara_nocustomgravity");  
        }
        
        if (!GetCVar("sams_permault"))
        {   SetCVar ("sams_permault", 0);
        //ConsoleCommand("archivecvar samsara_permault");  
        }
        
        if (!GetCVar("sams_jumpmod"))
        {   SetCVar ("sams_jumpmod", 0);
        //ConsoleCommand("archivecvar samsara_jumpmod");  
        }
        
        if (!GetCVar("sams_peoplediewhentheyarekilled"))
        {   SetCVar ("sams_peoplediewhentheyarekilled", 0);
        //ConsoleCommand("archivecvar samsara_peoplediewhentheyarekilled");  
        }
        
        if (!GetCVar("compat_clientssendfullbuttoninfo"))
        {   SetCVar ("compat_clientssendfullbuttoninfo", 1);
        //ConsoleCommand("archivecvar compat_clientssendfullbuttoninfo");  
        }
        
        if (!GetCVar("sams_armormode"))
        {   SetCVar ("sams_armormode", 0);
        //ConsoleCommand("archivecvar samsara_armormode");  
        }
        
        if (!GetCVar("sams_nohealthcap"))
        {   SetCVar ("sams_nohealthcap", 0);
        //ConsoleCommand("archivecvar samsara_nohealthcap");  
        }
        
        if (!GetCVar("sams_chainsawstart"))
        {   SetCVar ("sams_chainsawstart", 0);
        //ConsoleCommand("archivecvar samsara_chainsawstart");  
        }
        
        if (!GetCVar("sams_uniquestart"))
        {   SetCVar ("sams_uniquestart", 0);
        //ConsoleCommand("archivecvar samsara_uniquestart");  
        }
        
        if (!GetCVar("sams_punchdrunk"))
        {   SetCVar ("sams_punchdrunk", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunk");  
        }
        
        if (!GetCVar("sams_nomonologues"))
        {   SetCVar ("sams_nomonologues", 0);
        //ConsoleCommand("archivecvar samsara_nomonologues");  
        }
        
        if (!GetCVar("sams_punchdrunkuniques"))
        {   SetCVar ("sams_punchdrunkuniques", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunkuniques");  
        }
        
        if (!GetCVar("sams_punchdrunksaws"))
        {   SetCVar ("sams_punchdrunksaws", 0);
        //ConsoleCommand("archivecvar samsara_punchdrunksaws");  
        }
        
        if (!GetCVar("sams_noult"))
        {   SetCVar ("sams_noult", 0);
        //ConsoleCommand("archivecvar samsara_noult");  
        }
        
        if (!GetCVar("sams_backpackstart"))
        {   SetCVar ("sams_backpackstart", 0);
        //ConsoleCommand("archivecvar samsara_backpackstart");  
        }
        
        if (!GetCVar("sams_superturboturkeypuncher3000"))
        {   SetCVar ("sams_superturboturkeypuncher3000", 0);
        //ConsoleCommand("archivecvar samsara_superturboturkeypuncher3000");  
        }
        
        if (!GetCVar("sams_superturboturkeylimit"))
        {   SetCVar ("sams_superturboturkeylimit", 0);
        //ConsoleCommand("archivecvar samsara_superturboturkeylimit");  
        }
        
        if (!GetCVar("sams_superturboturkeyfrequency"))
        {   SetCVar ("sams_superturboturkeyfrequency", 35);
        //ConsoleCommand("archivecvar samsara_superturboturkeyfrequency");  
        }
        
        if (!GetCVar("sams_classiclaz"))
        {   SetCVar ("sams_classiclaz", 0);
        //ConsoleCommand("archivecvar samsara_classiclaz");  
        }
        
        if (!GetCVar("sams_allcanrj"))
        {   SetCVar ("sams_allcanrj", 0);
        //ConsoleCommand("archivecvar samsara_allcanrj");  
        }
        
        if (!GetCVar("sams_nounique"))
        {   SetCVar ("sams_nounique", 0);
        //ConsoleCommand("archivecvar samsara_nounique");  
        }
        
        if (!GetCVar("sams_noinvuln"))
        {   SetCVar ("sams_noinvuln", 0);
        //ConsoleCommand("archivecvar samsara_noinvuln");  
        }
        
        if (!GetCVar("sams_bandoomguy"))
        {   SetCVar ("sams_bandoomguy", 0);
        //ConsoleCommand("archivecvar samsara_bandoomguy");  
        }
        
        if (!GetCVar("sams_banchex"))
        {   SetCVar ("sams_banchex", 0);
        //ConsoleCommand("archivecvar samsara_banchex");  
        }
        
        if (!GetCVar("sams_bancorvus"))
        {   SetCVar ("sams_bancorvus", 0);
        //ConsoleCommand("archivecvar samsara_bancorvus");  
        }
        
        if (!GetCVar("sams_banbj"))
        {   SetCVar ("sams_banbj", 0);
        //ConsoleCommand("archivecvar samsara_banbj");  
        }
        
        if (!GetCVar("sams_banparias"))
        {   SetCVar ("sams_banparias", 0);
        //ConsoleCommand("archivecvar samsara_banparias");  
        }
        
        if (!GetCVar("sams_banduke"))
        {   SetCVar ("sams_banduke", 0);
        //ConsoleCommand("archivecvar samsara_banduke");  
        }
        
        if (!GetCVar("sams_banso"))
        {   SetCVar ("sams_banso", 0);
        //ConsoleCommand("archivecvar samsara_banso");  
        }
        
        if (!GetCVar("sams_banranger"))
        {   SetCVar ("sams_banranger", 0);
        //ConsoleCommand("archivecvar samsara_banranger");  
        }
        
        if (!GetCVar("sams_lmsrules"))
        {   SetCVar ("sams_lmsrules", 0);
        //ConsoleCommand("archivecvar samsara_lmsrules");  
        }
        
        if (!GetCVar("sams_doomguydamage"))
        {   SetCVar ("sams_doomguydamage", 0);
        //ConsoleCommand("archivecvar samsara_doomguydamage");  
        }
        
        if (!GetCVar("sams_doomguydefense"))
        {   SetCVar ("sams_doomguydefense", 0);
        //ConsoleCommand("archivecvar samsara_doomguydefense");  
        }
        
        if (!GetCVar("sams_chexdamage"))
        {   SetCVar ("sams_chexdamage", 0);
        //ConsoleCommand("archivecvar samsara_chexdamage");  
        }
        
        if (!GetCVar("sams_chexdefense"))
        {   SetCVar ("sams_chexdefense", 0);
        //ConsoleCommand("archivecvar samsara_chexdefense");  
        }
        
        if (!GetCVar("sams_corvusdamage"))
        {   SetCVar ("sams_corvusdamage", 0);
        //ConsoleCommand("archivecvar samsara_corvusdamage");  
        }
        
        if (!GetCVar("sams_corvusdefense"))
        {   SetCVar ("sams_corvusdefense", 0);
        //ConsoleCommand("archivecvar samsara_corvusdefense");  
        }
        
        if (!GetCVar("sams_bjdamage"))
        {   SetCVar ("sams_bjdamage", 0);
        //ConsoleCommand("archivecvar samsara_bjdamage");  
        }
        
        if (!GetCVar("sams_bjdefense"))
        {   SetCVar ("sams_bjdefense", 0);
        //ConsoleCommand("archivecvar samsara_bjdefense");  
        }
        
        if (!GetCVar("sams_pariasdamage"))
        {   SetCVar ("sams_pariasdamage", 0);
        //ConsoleCommand("archivecvar samsara_pariasdamage");  
        }
        
        if (!GetCVar("sams_pariasdefense"))
        {   SetCVar ("sams_pariasdefense", 0);
        //ConsoleCommand("archivecvar samsara_pariasdefense");  
        }
        
        if (!GetCVar("sams_dukedamage"))
        {   SetCVar ("sams_dukedamage", 0);
        //ConsoleCommand("archivecvar samsara_dukedamage");  
        }
        
        if (!GetCVar("sams_dukedefense"))
        {   SetCVar ("sams_dukedefense", 0);
        //ConsoleCommand("archivecvar samsara_dukedefense");  
        }
        
        if (!GetCVar("sams_sodamage"))
        {   SetCVar ("sams_sodamage", 0);
        //ConsoleCommand("archivecvar samsara_sodamage");  
        }
        
        if (!GetCVar("sams_sodefense"))
        {   SetCVar ("sams_sodefense", 0);
        //ConsoleCommand("archivecvar samsara_sodefense");  
        }
        
        if (!GetCVar("sams_rangerdamage"))
        {   SetCVar ("sams_rangerdamage", 0);
        //ConsoleCommand("archivecvar samsara_rangerdamage");  
        }
        
        if (!GetCVar("sams_rangerdefense"))
        {   SetCVar ("sams_rangerdefense", 0);
        //ConsoleCommand("archivecvar samsara_rangerdefense");  
        }
        
        if (!GetCVar("sams_permaquad"))
        {   SetCVar ("sams_permaquad", 0);
        //ConsoleCommand("archivecvar samsara_permaquad");  
        }
        
        if (!GetCVar("sams_pistolammo"))
        {   SetCVar ("sams_pistolammo", 0);
        //ConsoleCommand("archivecvar samsara_pistolammo");  
        }
        
        if (!GetCVar("sams_dukesoundboard"))
        {   SetCVar ("sams_dukesoundboard", 0);
        //ConsoleCommand("archivecvar samsara_dukesoundboard");  
        }
        
        if (!GetCVar("sams_nohealth"))
        {   SetCVar ("sams_nohealth", 0);
        //ConsoleCommand("archivecvar samsara_nohealth");  
        }
        
        if (!GetCVar("sams_vanillaquake"))
        {   SetCVar ("sams_vanillaquake", 0);
        //ConsoleCommand("archivecvar samsara_vanillaquake");  
        }
        */

        Delay(1);
    }
}

script "SamsaraEnter" enter { ACS_NamedExecuteWithResult("SamsaraSpawn", 0,0,0); } //611 -- SAMSARA_ENTER
script "SamsaraRespawn" respawn { ACS_NamedExecuteWithResult("SamsaraSpawn", 1,0,0); } //618 -- SAMSARA_RESPAWN
script "SamsaraReturn" return { UnloadingNow = 0; ACS_NamedExecuteWithResult("SamsaraSpawn", 0,0,0); } //613 -- SAMSARA_RETURN

script "SamsaraSpawn" (int respawning) //624 -- SAMSARA_SPAWN
{
	if(GameType() == GAME_TITLE_MAP)
		terminate;
		
    int pln = PlayerNumber();
    int pcount, opcount;
    int startTime = Timer();
    int endloop;
    int canbuddha;
    int wsteSide;
    int armor, oarmor, type, otype;
    int i;
	int doommode, dukemode, hexmode, wolfmode, rottmode, blakemode, ipogmode, halflifemode, previousvalue, cvalue;
	int targettid;
	int bot = PlayerIsBot(pln);
	int strifeCeilingHeight = GetActorCeilingZ(0); //strife related
	int strifeLastKillCount;
	int strifeDead;
	
	if(bot)
		ACS_NamedExecuteAlways("Samsara_BotAltClassHandler",0,pln,0,0);
	
	TakeInventory("Doom64MonsterSet", 0x7FFFFFFF);
	TakeInventory("WolfLostMonsterSet", 0x7FFFFFFF);
	TakeInventory("TotenkopfMonsterSet", 0x7FFFFFFF);
	TakeInventory("DukeLABMonsterSet", 0x7FFFFFFF);
	TakeInventory("HalfLifeOpposingForceSet", 0x7FFFFFFF);
	//ACS_NamedExecuteAlways("SAMSARA_RESETPLAYER_COOP",0,0,0,0);
    ServerEnterTimes[pln] = startTime;
    ACS_NamedExecuteWithResult("SamsaraSynthFire", startTime);

    if (!CheckInventory("IsSamsaraClass")) { terminate; }


    ACS_NamedExecuteAlways("SamsaraEnterClient", 0, startTime,0,0);
    ACS_NamedExecuteWithResult("SamsaraWolfMove", startTime,0,0);
    ACS_NamedExecuteWithResult("SamsaraQPowers",  startTime,0,0);
    
    if (isLMS()) { ApplyLMS(); }
    if (GetCvar("sams_lmsrules") == 1)
    {
        ApplyLMS();
        GiveInventory("CanDualShotties",1);
    }
    if (isSinglePlayer()) { SamsaraWepType = samsaraClassNum()+1; }

    if (!respawning)
    {
        ClientTipboxes[pln] = 0;
        ACS_NamedExecuteAlways("SamsaraScheduled", 0, respawning,1,0);

        if (GetCVar("sv_shotgunstart") > 0) { GiveClassWeapon(samsaraClassNum(), 3, 3);}
        if (GetCvar("sams_backpackstart") == 1) { GiveInventory("Backpack",1); }
    }
    else
    { if (GameType() != GAME_NET_COOPERATIVE)
    {
        if (GetCVar("sv_shotgunstart") > 0) { GiveClassWeapon(samsaraClassNum(), 3, 3);}
        if (GetCvar("sams_backpackstart") == 1) { GiveInventory("Backpack",1); }
    }}

    HandleChainsawSpawn(respawning);
    HandleUniqueSpawn(respawning);
	HandleInstagib(respawning);

    ACS_NamedExecuteAlways("SamsaraScheduled", 0, respawning,0,0);

    switch (samsaraClassNum())
    {
      case CLASS_DUKE:
        if (!respawning) { GiveInventory("DukeReady", 1); }
        break;
        
      case CLASS_CALEB:
        if (!respawning) { GiveInventory("CalebReady", 1); }
        break;
		
	  case CLASS_STRIFE:
	    if (!respawning) { If(ThingCountName("Candle",0) > 0 ) { GiveInventory("BlackBirdInStrife", 1); } if(!GetUserCvar(pln,"sams_cl_ballgag")) GiveInventory("BlackBirdReady", 1); }
        break;
      
	  case CLASS_ERAD:
        if (!respawning) { GiveInventory("EleenaReady", 1); }
        break;
		
	  case CLASS_C7:
        if (!respawning) { GiveInventory("Allmap", 1); }
        break;

	  case CLASS_SW:
        if (!respawning) { GiveInventory("LoWangReady", 1); }
        break;

	  case CLASS_RR:
        if (!respawning) { 
			GiveInventory("LeonardReady", 1); 
			if(CheckInventory("BubbaGivesYouMotorcycle"))
			{
				TakeInventory("BubbaGivesYouMotorcycle",1);
				SpawnSpotFacingForced("LeonardMotorcycle",0,0);
			}
		}
        break;

      case CLASS_DOOM:
        if (!respawning) { if (GetCVar("sams_unmakerartifacts") == 1) { GiveInventory("Doom64UnmakerArtifact", 1); } else if (GetCVar("sams_unmakerartifacts") == 2) { GiveInventory("Doom64UnmakerArtifact", 2); } else if (GetCVar("sams_unmakerartifacts") >= 3) { GiveInventory("Doom64UnmakerArtifact", 3); } else {}}
        break;		
	  
	  case CLASS_MARATHON:
        if (isInvasion()) { GiveInventory("InvasionDualShottyCheck", 1); }
        break;
    }

    if (isSinglePlayer())
    {
        GiveInventory("SPModeOn", 1);
    }
	else if (isDeathMatch())
	{
		GiveInventory("DMModeOn", 1);
	}	
    else if (isCoop())
    {
        GiveInventory("CoopModeOn", 1);
        SetActorState(0, "CoOpModeOn");
    }
	
    pcount = PlayerCount();
	
    while (!endloop && ServerEnterTimes[pln] == startTime)
    {			
        if (GetUserCvar(pln,"sams_cl_wolfmove")) { GiveInventory("WolfenMovement", 1); }
        else { TakeInventory("WolfenMovement", 0x7FFFFFFF); }
		
		if(bot && random(0,1024) == 0)
			PlaySound(0,"*taunt",CHAN_VOICE,1.0,0,ATTN_NORM);
			
		if(CheckInventory("ShrunkPlayer"))
			GiveInventory("StepDeathLogic1",1);
        
        if (GetUserCvar(pln,"sams_cl_ballgag") || CheckInventory("IsMorphed")) 
		{ 
			switch (samsaraClassNum())
			{
				case CLASS_DUKE:
					GiveInventory("DukeBallgag", 1); 
					break;
					
				case CLASS_CALEB:
					GiveInventory("CalebBallgag", 1); 
					break;
					
				case CLASS_Strife:
					GiveInventory("BlackBirdBallgag", 1); 
					break;
				
				case CLASS_ERAD:
					GiveInventory("EleenaBallgag", 1); 
					break;
					
				case CLASS_SW:
					GiveInventory("LoWangBallgag", 1); 
					break;
					
				case CLASS_Jon:
					GiveInventory("JonBallgag", 1); 
					break;
				
				case CLASS_RR:
					GiveInventory("LeonardBallgag", 1); 
					break;
			}
		}
        else 
		{ 
			TakeInventory("DukeBallgag", 0x7FFFFFFF); 
			TakeInventory("CalebBallgag", 0x7FFFFFFF);
			TakeInventory("EleenaBallgag", 0x7FFFFFFF);
			TakeInventory("LoWangBallgag", 0x7FFFFFFF);
			TakeInventory("JonBallgag", 0x7FFFFFFF);
			TakeInventory("LeonardBallgag", 0x7FFFFFFF);
			TakeInventory("BlackBirdBallgag", 0x7FFFFFFF);
		}
				
		if (GetUserCvar(pln,"sams_cl_vanilladoom")) { GiveInventory("VanillaDoom", 1); }
        else { TakeInventory("VanillaDoom", 0x7FFFFFFF); }
        
        if (GetUserCvar(pln,"sams_cl_weaponhud")) { GiveInventory("ExpandedHud", 1); }
        else { TakeInventory("ExpandedHud", 0x7FFFFFFF); }
		
		if (GetUserCvar(pln, "sams_hlnoreload")) { GiveInventory("HLNoReload", 1); }
		else { TakeInventory("HLNoReload", 0x7FFFFFFF); }
		
		switch (samsaraClassNum())
		{
			case CLASS_DOOM:
				doommode = GetUserCvar(pln,"sams_cl_doom64");
				TakeInventory("SamsaraModeCounter",999);
				GiveInventory("SamsaraModeCounter",doommode);
				if(doommode != previousvalue || CheckInventory("Samsara_ModeWeaponChange"))
				{
					int skillmultiplier = (GameSkill() == 0 || GameSkill() == 4);
					TakeInventory("Samsara_ModeWeaponChange",1);
					if((GetUserCvar(pln,"sams_cl_doom64")))
					{ 
						GiveInventory("Doom64GuyScalar",1);
						if(CheckInventory("Doom64_IHaveUnmaker") && (!CheckInventory("Unmaker"))) 
							GiveInventory("Unmaker", 1);
							
						if(CheckInventory("DGHasMinigun"))
						{
							GiveInventory("GotWeapon4", 1);
							GiveInventory(" Chaingun ", 1);
							TakeInventory("Clip", 20 * (5 - skillmultiplier));
						}
						if(CheckInventory("DGHasGrenadeLauncher"))
						{
							GiveInventory("GotWeapon5", 1);
							GiveInventory(" GrenadeLauncher ", 1);
							TakeInventory("RocketAmmo", 2 * (5 - skillmultiplier));
						}
						if(CheckInventory("DGHasRailGun"))
						{
							GiveInventory("GotWeapon6", 1);
							GiveInventory(" Railgun ", 1);
							TakeInventory("Cell", 40 * (5 - skillmultiplier));
						}
						if(CheckInventory("DGHasBFG10K"))
						{
							GiveInventory("GotWeapon7", 1);
							GiveInventory(" BFG10K ", 1);
							TakeInventory("Cell", 40 * (5 - skillmultiplier));
						}
						
						TakeInventory(" Minigun ", 1);
						TakeInventory(" GrenadeLauncher ", 1);
						TakeInventory(" RailGun ", 1);
						TakeInventory(" BFG10K ", 1);
							
						GiveInventory("Doom64Mode", 1); 
						if(!CheckInventory("Doom64MonsterSet")) 
						{	
							SetActorProperty(0,APROP_SoundClass,"Doom64Guy");
							GiveInventory("Doom64MonsterSet", 1); 
							targettid = UniqueTid();
							SpawnForced("Doom64GuyMapDummy",0,0,0,targettid);
							SetPointerExt(AAPTR_TARGET, 0, targettid);
							Thing_ChangeTID(targettid, 0);
						}
					}
					else 
					{ 
						if(CheckInventory("DGHasMinigun"))
						{
							GiveInventory(" Minigun ", 1);
							TakeInventory("Clip", 20 * (1 + skillmultiplier));
						}			
						if(CheckInventory("DGHasGrenadeLauncher"))
						{
							GiveInventory(" GrenadeLauncher ", 1);
							TakeInventory("RocketAmmo", 2 * (1 + skillmultiplier));
						}					
						if(CheckInventory("DGHasRailGun"))
						{
							GiveInventory(" RailGun ", 1);
							TakeInventory("Cell", 40 * (1 + skillmultiplier));
						}		
						if(CheckInventory("DGHasBFG10K"))
						{
							GiveInventory(" BFG10K ", 1);
							TakeInventory("Cell", 40 * (1 + skillmultiplier));
						}
						
						if(!CheckInventory("DGHasChaingun"))
						{
							TakeInventory("GotWeapon4", 1);
							TakeInventory(" Chaingun ", 1);
						}
						if(!CheckInventory("DGHasRocketLauncher"))
						{
							TakeInventory("GotWeapon5", 1);
							TakeInventory(" Rocket Launcher ", 1);
						}
						if(!CheckInventory("DGHasPlasmaRifle"))
						{
							TakeInventory("GotWeapon6", 1);
							TakeInventory(" Plasma Rifle ", 1);
						}
						if(!CheckInventory("DGHasBF9000"))
						{
							TakeInventory("GotWeapon7", 1);
							TakeInventory(" BFG9000 ", 1);
						}
							
						GiveInventory("DoomGuyScalar",1);
						SetActorProperty(0,APROP_SoundClass,"DoomGuy");
						TakeInventory("Doom64Mode", 0x7FFFFFFF); 
						TakeInventory("Doom64MonsterSet", 0x7FFFFFFF); 
						TakeInventory("Unmaker", 0x7FFFFFFF);  
					}
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, doommode, pln); 
					previousvalue = doommode;
				}
				break;
			case CLASS_WOLFEN:
				wolfmode = GetUserCvar(pln,"sams_cl_wolfmode");
				if(wolfmode != previousvalue || CheckInventory("Samsara_ModeWeaponChange"))
				{
					TakeInventory("SamsaraModeCounter",999);
					GiveInventory("SamsaraModeCounter",wolfmode);
					TakeInventory("Samsara_ModeWeaponChange",1);
					if (wolfmode >= 0) 
					{ 
						TakeInventory("WolfenClassMode", 2); 
						GiveInventory("WolfenClassMode", wolfmode); 
						if(wolfmode == 2)
						{
							TakeInventory("WolfExtraLife", 0x7FFFFFFF); if(CheckInventory("Totenkopf_IHaveMauser") && (!CheckInventory("Totenkopf_Mauser"))) { GiveInventory("Totenkopf_Mauser", 1); }
							if(CheckInventory("Totenkopf_IHaveDualMausers") && (!CheckInventory("Totenkopf_MauserDual"))) { GiveInventory("Totenkopf_MauserDual", 1); }
							if(CheckInventory("Totenkopf_IHaveDualPistols") && (!CheckInventory("Totenkopf_PistolDual"))) { GiveInventory("Totenkopf_PistolDual", 1); }
							if(CheckInventory("Totenkopf_IHaveDualMP40s") && (!CheckInventory("Totenkopf_MP40Dual"))) { GiveInventory("Totenkopf_MP40Dual", 1); }
							if(CheckInventory("Totenkopf_IHaveSTG44") && (!CheckInventory("Totenkopf_STG44"))) { GiveInventory("GotWeapon3", 1); GiveInventory("Totenkopf_STG44", 1); }
							if(CheckInventory("Totenkopf_IHaveFlameThrower") && (!CheckInventory("Totenkopf_FlameThrower"))) { GiveInventory("Totenkopf_FlameThrower", 1); }
							if(CheckInventory("Totenkopf_IHaveMG42") && (!CheckInventory("Totenkopf_MG42"))) { GiveInventory("Totenkopf_MG42", 1); }
							if(CheckInventory("Totenkopf_IHaveScope") && (!CheckInventory("Totenkopf_Sniper"))) { GiveInventory("Totenkopf_Sniper", 1); }
							if(CheckInventory("Totenkopf_IHavePowerArmor") && (!CheckInventory("TotenkopfHasPowerArmor"))) { GiveInventory("TotenkopfHasPowerArmor", 1); }
							if(CheckInventory("Totenkopf_IAmWolverine") && (!CheckInventory("TotenkopfHasHealingOrb"))) { GiveInventory("TotenkopfHasHealingOrb", 1); }
						}	
						else if(wolfmode <= 1)
						{
							if(CheckInventory("Wolfen_IHaveExtraLife") && (!CheckInventory("WolfExtraLife"))) { GiveInventory("WolfExtraLife", 1); }
							if(CheckInventory("Totenkopf_IHaveSTG44") && (!CheckInventory("Machine Gun"))) { GiveInventory("Machine Gun", 1); }
							TakeInventory("Totenkopf_PistolDual", 0x7FFFFFFF); TakeInventory("Totenkopf_Mauser", 0x7FFFFFFF); TakeInventory("Totenkopf_MauserDual", 0x7FFFFFFF); TakeInventory("Totenkopf_MP40Dual", 0x7FFFFFFF); TakeInventory("Totenkopf_STG44", 0x7FFFFFFF); TakeInventory("Totenkopf_FlameThrower", 0x7FFFFFFF);  TakeInventory("Totenkopf_MG42", 0x7FFFFFFF);  TakeInventory("Totenkopf_Sniper", 0x7FFFFFFF); TakeInventory("TotenkopfHasPowerArmor", 0x7FFFFFFF);  TakeInventory("TotenkopfHasHealingOrb", 0x7FFFFFFF); 
						}
						
						if(!CheckInventory("WolfLostMonsterSet") && wolfmode == 1) 
						{	
							TakeInventory("TotenkopfMonsterSet", 0x7FFFFFFF);
							GiveInventory("WolfLostMonsterSet", 1); 
							targettid = UniqueTid();
							SpawnForced("WolfLostMapDummy",0,0,0,targettid);
							SetPointerExt(AAPTR_TARGET, 0, targettid);
							Thing_ChangeTID(targettid, 0);
						}
						if(!CheckInventory("TotenkopfMonsterSet") && wolfmode == 2) 
						{	
							TakeInventory("WolfLostMonsterSet", 0x7FFFFFFF);
							GiveInventory("TotenkopfMonsterSet", 1); 
							targettid = UniqueTid();
							SpawnForced("TotenkopfMapDummy",0,0,0,targettid);
							SetPointerExt(AAPTR_TARGET, 0, targettid);
							Thing_ChangeTID(targettid, 0);
						}
					} 
					else 
					{ 
						TakeInventory("WolfLostMonsterSet", 0x7FFFFFFF); 
						TakeInventory("TotenkopfMonsterSet", 0x7FFFFFFF); 
						TakeInventory("WolfenClassMode", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_PistolDual", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_Mauser", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_MauserDual", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_MP40Dual", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_STG44", 0x7FFFFFFF); 
						TakeInventory("Totenkopf_FlameThrower", 0x7FFFFFFF);  
						TakeInventory("Totenkopf_MG42", 0x7FFFFFFF);  
						TakeInventory("Totenkopf_Sniper", 0x7FFFFFFF); 
						TakeInventory("TotenkopfHasPowerArmor", 0x7FFFFFFF);  
						TakeInventory("TotenkopfHasHealingOrb", 0x7FFFFFFF); 
					}
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, wolfmode, pln);
					previousvalue = wolfmode;
					//if(CheckInventory("Wolfen_IHaveExtraLife") && (!CheckInventory("WolfExtraLife"))) { GiveInventory("WolfExtraLife", 1);  }	
					//if(CheckInventory("Totenkopf_IHaveSTG44") && (!CheckInventory("Machine Gun"))) { GiveInventory("Machine Gun", 1); } 
				}
				break;
				
			case CLASS_HEXEN:
				hexmode = GetUserCvar(pln,"sams_cl_hexclass");
				if(hexmode != previousvalue)
				{
					TakeInventory("SamsaraModeCounter",999);
					GiveInventory("SamsaraModeCounter",hexmode);
					GiveInventory("SamsaraAllySwitchCaller",1);
					if (hexmode > 0) 
					{ 
						TakeInventory("HexenClassMode", 2); 
						GiveInventory("HexenClassMode", hexmode); 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, hexmode, pln); 
						if(hexmode == 1)
						{
							SetActorProperty(0,APROP_SoundClass,"HexenDaedalon");
							TakeInventory("Mace of Contrition", 0x7FFFFFFF); 
						}
						else
						{
							SetActorProperty(0,APROP_SoundClass,"HexenBaratus");
							GiveInventory("Mace of Contrition", 1);
						}
					}
					else 
					{ 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, hexmode, pln); 
						SetActorProperty(0,APROP_SoundClass,"HexenPlayer");
						TakeInventory("HexenClassMode", 0x7FFFFFFF); 
						GiveInventory("Mace of Contrition", 1); 
					}	
					previousvalue = hexmode;
				}
				break;
			case CLASS_DUKE:
				dukemode = GetUserCvar(pln,"sams_cl_dkclab");
				if(dukemode != previousvalue)
				{
					TakeInventory("SamsaraModeCounter",999);
					GiveInventory("SamsaraModeCounter",dukemode);
					if(dukemode) 
					{ 
						if(!CheckInventory("DukeLabMonsterSet")) 
						{	
							GiveInventory("DukeLabMonsterSet", 1); 
							targettid = UniqueTid();
							SpawnForced("DukeLabMapDummy",0,0,0,targettid);
							SetPointerExt(AAPTR_TARGET, 0, targettid);
							Thing_ChangeTID(targettid, 0);
						}
						GiveInventory("DukeLabToken", 1); 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 1, pln); 
					}
					else 
					{ 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 0, pln); 
						TakeInventory("DukeLabToken", 0x7FFFFFFF); 
						TakeInventory("DukeLabMonsterSet", 0x7FFFFFFF); 
					}
					previousvalue = dukemode;
				}
				break;
			case CLASS_ROTT:
				rottmode = GetUserCvar(pln,"sams_cl_rottmode");
				//only run these actions if the value changes
				if(rottmode != previousvalue)
				{
					GiveInventory("SamsaraAllySwitchCaller",1);
					TakeInventory("RottMode", 4);
					GiveInventory("RottMode",rottmode);
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, rottmode, pln); 
					switch(rottmode)
					{				
						default:
							SetActorProperty(0,APROP_SoundClass,"Freely");
							break;
						case 1:	
							SetActorProperty(0,APROP_SoundClass,"Cassatt");
							break;
						case 2:
							SetActorProperty(0,APROP_SoundClass,"Barrett");
							break;
						case 3:
							SetActorProperty(0,APROP_SoundClass,"Ni");
							break;
						case 4:
							SetActorProperty(0,APROP_SoundClass,"Wendt");
							break;
					}
					previousvalue = rottmode;
				}
				break;
			case CLASS_BLAKE:
				blakemode = GetUserCvar(pln,"sams_cl_bsaog");
				if(blakemode != previousvalue)
				{
					TakeInventory("SamsaraModeCounter",999);
					GiveInventory("SamsaraModeCounter",blakemode);
					if(blakemode) 
					{ 
						GiveInventory("BlakeAOGToken", 1); 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 1, pln); 
					}
					else 
					{ 
						ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 0, pln); 
						TakeInventory("BlakeAOGToken", 0x7FFFFFFF); 
					}
					previousvalue = blakemode;
				}
				break;	
			case CLASS_STRIFE:
			{
				if(!CheckInventory("BlackBirdBallgag") && !CheckInventory("BlackBirdTauntCooldown") && !CheckInventory("BlackBirdInStrife"))
				{
					if(strifeCeilingHeight != GetActorCeilingZ(0) && random(0,50) <= 1)
					{
						GiveInventory("BlackBirdTauntCooldown",5);
						ACS_NamedExecuteWithResult("BlackBirdTauntCooldown",0,0,0,0);
						ACS_NamedExecuteWithResult("StrifeBlackBirdQuote",1);			
					}
					else if(CheckInventory("KillCountAmount") > strifeLastKillCount && random(0,20) <= 3)
					{
						GiveInventory("BlackBirdTauntCooldown",5);
						ACS_NamedExecuteWithResult("BlackBirdTauntCooldown",0,0,0,0);
						ACS_NamedExecuteWithResult("StrifeBlackBirdQuote",2);
					}
					else if(GetActorProperty(0,APROP_Health) <= 0 && strifeDead == 0)
					{
						GiveInventory("BlackBirdTauntCooldown",5);
						ACS_NamedExecuteWithResult("BlackBirdTauntCooldown",0,0,0,0);
						ACS_NamedExecuteWithResult("StrifeBlackBirdQuote",5);
					}
				}
				strifeDead = GetActorProperty(0,APROP_Health) <= 0;
				strifeCeilingHeight = GetActorCeilingZ(0);
				strifeLastKillCount = CheckInventory("KillCountAmount");
			}
			break;
			case CLASS_POGREED:
				ipogmode = GetUserCvar(pln,"sams_cl_ipogmode");
				//only run these actions if the value changes
				if(ipogmode != previousvalue)
				{
					GiveInventory("SamsaraAllySwitchCaller",1);
					TakeInventory("IpogMode", 4);
					GiveInventory("IpogMode",ipogmode);
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, ipogmode, pln); 
					switch(ipogmode)
					{				
						default:
							SetActorProperty(0,APROP_SoundClass,"Mooman");
							break;
						case 1:	
							SetActorProperty(0,APROP_SoundClass,"Cyborg");
							break;
						case 2:
							SetActorProperty(0,APROP_SoundClass,"Lizard");
							break;
						case 3:
							SetActorProperty(0,APROP_SoundClass,"Specimen");
							break;
						case 4:
							SetActorProperty(0,APROP_SoundClass,"Dominatrix");
							break;
					}
					previousvalue = ipogmode;
				}
				break;
			case CLASS_HALFLIFE:
				halflifemode = GetUserCvar(pln,"sams_cl_shephardmode");
				if(halflifemode != previousvalue)
				{
					TakeInventory("SamsaraModeCounter",999);
					GiveInventory("SamsaraModeCounter",halflifemode);
					if(halflifemode) 
					{ 
						GiveInventory("HalfLifeOpposingForce", 1); 
						if(!CheckInventory("HalfLifeOpposingForceSet")) 
						{	
							targettid = UniqueTid();
							SpawnForced("HalfLifeAdrianModeMapDummy",0,0,0,targettid);//SetActorState(0, "AdrianModeOn", true); 
							SetPointerExt(AAPTR_TARGET, 0, targettid);
							Thing_ChangeTID(targettid, 0);
						}
					}
					else 
					{ 
						TakeInventory("HalfLifeOpposingForce", 0x7FFFFFFF); 
						TakeInventory("HalfLifeOpposingForceSet", 0x7FFFFFFF); 
					}
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, halflifemode, pln); 
					previousvalue = halflifemode;
				}
				break;
				
			case CLASS_RR:
				if(CheckInventory(" RR Hunting Crossbow ") && CheckInventory(" Dyn 'O' Mites ") && CheckInventory("RocketAmmo")) { if(!CheckInventory(" RR Dynomite Crossbow ")) GiveInventory(" RR Dynomite Crossbow ", 1); }
				else
					TakeInventory(" RR Dynomite Crossbow ", 1);
					
				if(CheckInventory(" RR Hunting Crossbow ") && CheckInventory("ChickenAmmo")) { if(!CheckInventory(" Chicken Crossbow ")) GiveInventory(" Chicken Crossbow ", 1); }
				else
					TakeInventory(" Chicken Crossbow ", 1);
				break;
				
			case CLASS_CATACOMB:
				if(CheckInventory("Catacomb_Waves")) { if(!CheckInventory("Catacomb_WavesQuickSpell")) GiveInventory("Catacomb_WavesQuickSpell",1); }
				else { TakeInventory("Catacomb_WavesQuickSpell",1); }				
				if(CheckInventory("Catacomb_XTerminators")) { if(!CheckInventory("Catacomb_XTerminatorsQuickSpell")) GiveInventory("Catacomb_XTerminatorsQuickSpell",1); }
				else { TakeInventory("Catacomb_XTerminatorsQuickSpell",1); }		
				if(CheckInventory("Catacomb_Bursts")) { if(!CheckInventory("Catacomb_BurstsQuickSpell")) GiveInventory("Catacomb_BurstsQuickSpell",1); }
				else { TakeInventory("Catacomb_BurstsQuickSpell",1); }		
				if(CheckInventory("Catacomb_Zappers")) { if(!CheckInventory("Catacomb_ZappersQuickSpell")) GiveInventory("Catacomb_ZappersQuickSpell",1); }
				else { TakeInventory("Catacomb_ZappersQuickSpell",1); }		
				if(CheckInventory("Catacomb_Nukes")) { if(!CheckInventory("Catacomb_NukesQuickSpell")) GiveInventory("Catacomb_NukesQuickSpell",1); }
				else { TakeInventory("Catacomb_NukesQuickSpell",1); }	
				if(CheckInventory("Catacomb_Bolts")) { if(!CheckInventory("Catacomb_BoltsQuickSpell")) GiveInventory("Catacomb_BoltsQuickSpell",1); }
				else { TakeInventory("Catacomb_BoltsQuickSpell",1); }
				break;
				
			default:
				if(cvalue != 1)
				{
					ACS_NamedExecuteAlways("SAMSARA_CLIENT_ALTERNATIVECLASS", 0, 0, pln);
					cvalue = 1;
				}
				break;
		}
	
        if (GetCVar("sams_runninginzdoom") == 1) 
		{
			if (GetCVar("sv_nobfgaim") == 1) { GiveInventory("DoomNoBFGAim", 1); }
			else { TakeInventory("DoomNoBFGAim",  0x7FFFFFFF); }
		}
		
		if (GetCVar("sams_runninginzandro") == 1)
        {
			if (GetCVar("sv_bfgfreeaim") == 0) { GiveInventory("DoomNoBFGAim", 1); }
			else { TakeInventory("DoomNoBFGAim",  0x7FFFFFFF); }
		}
		
        if (GetCVar("sams_classiclaz") == 1) { GiveInventory("ChexClassicLaz", 1); }
        else { TakeInventory("ChexClassicLaz", 0x7FFFFFFF); }

        if (GetCVar("sams_allcanrj") == 1) { GiveInventory("RJingModeOn", 1); }
        else { TakeInventory("RJingModeOn", 0x7FFFFFFF); }

        if (GetCVar("sams_pistolammo") == 1) { GiveInventory("PistolModeOn", 1); }
        else { TakeInventory("PistolModeOn", 0x7FFFFFFF); }

        if (GetUserCvar(pln,"sams_vanillaquake") == 1) { GiveInventory("QuakeModeOn", 1); }
        else { TakeInventory("QuakeModeOn", 0x7FFFFFFF); }
		
        if (GetCVar("sams_dukesoundboard") == 1) { if (CheckInventory("DukeClass") == 1) {
		GiveInventory("Soundboard - Boss Kill",1);
		GiveInventory("Soundboard - Deathmatch Kill",1);
		GiveInventory("Soundboard - Dukematch Kill",1);
		GiveInventory("Soundboard - Boss Sight",1);
		GiveInventory("Soundboard - Enemy Kill",1);
		GiveInventory("Soundboard - Boot Kill",1);
		GiveInventory("Soundboard - Gib Kill",1);
		GiveInventory("Soundboard - Weapon Acquired",1);
		GiveInventory("Soundboard - Level Intro",1);
		GiveInventory("Soundboard - Idle Taunt",1);
		GiveInventory("Soundboard - Critical Heal",1);
		GiveInventory("Soundboard - Death Taunt",1);
		GiveInventory("Soundboard - Doug Huggem",1); }}
        else { TakeInventory("Soundboard - Boss Kill",1);
		TakeInventory("Soundboard - Deathmatch Kill",1);
		TakeInventory("Soundboard - Dukematch Kill",1);
		TakeInventory("Soundboard - Boss Sight",1);
		TakeInventory("Soundboard - Enemy Kill",1);
		TakeInventory("Soundboard - Boot Kill",1);
		TakeInventory("Soundboard - Gib Kill",1);
		TakeInventory("Soundboard - Weapon Acquired",1);
		TakeInventory("Soundboard - Level Intro",1);
		TakeInventory("Soundboard - Idle Taunt",1);
		TakeInventory("Soundboard - Critical Heal",1);
		TakeInventory("Soundboard - Death Taunt",1);
		TakeInventory("Soundboard - Doug Huggem",1); }
        
        HandleBans();
        HandleBuffCVars(respawning);
        
        TakeInventory("WeaponGetYaaaay",  1);
        TakeInventory("WeaponGetYaaaay2", 1);
        TakeInventory("Mace", 1);
        TakeInventory("MacePowered", 1);
		//if (GetCvar("sams_lmsrules") == 0) { ConvertClassWeapons(-1); } seems pointless to have this, but will leave commented for now

        if (GetCVar("sams_banjetpack") && CheckInventory("DukePortJetpack"))
        {
            GiveInventory("DukeBootserk", 1);
            TakeInventory("DukePortJetpack", 0x7FFFFFFF);
            TakeInventory("DukeJetpackFuel", 0x7FFFFFFF);
            Print(s:"The jetpack is banned on this server. Have 8x boot damage instead.");
        }

		if (GetCVar("sams_banjetpack") && CheckInventory("RMRJetPack"))
        {
            GiveInventory("RMROxygenRecycler", 1);
            TakeInventory("RMRJetPack", 0x7FFFFFFF);
            Print(s:"The jetpack is banned on this server. Have an oxygen tank instead.");
        }

        for (i = 0; i < 10; i++)
        {
            if (CheckInventory("DoomZerkCounter") > i && !CheckInventory(DoomAccuracyZerks[i]))
            {
                GiveInventory(DoomAccuracyZerks[i], 1);
            }
        }

        for (i = 0; i < SIGILCOUNT; i++)
        {
            if (SamsaraGlobal[GLOBAL_SIGILBASE+1+i])
            {
                if (!SamsaraGlobal[GLOBAL_SIGILBASE+i+2]) { GiveInventory(SpectralTogglers[i], 1); }
                else { TakeInventory(SpectralTogglers[i], 0x7FFFFFFF); }
                GiveInventory(SigilSplinters[i], 1);
				if(samsaraClassNum() == CLASS_STRIFE)
					GiveInventory("StrifeSigilPiece", 1);
           }
            else
            {
                TakeInventory(SigilSplinters[i], 0x7FFFFFFF);
                TakeInventory(SpectralTogglers[i], 0x7FFFFFFF);
            }
        }

        // useless but harmless in Zandro - triggers buddha mode when Blazko has an extra life in ZDoom
        if (CheckInventory("WolfExtraLife") && !canbuddha) { SetPlayerProperty(0, 1, 16); }
        if (!CheckInventory("WolfExtraLife") && canbuddha) { SetPlayerProperty(0, 0, 16); }
        canbuddha = CheckInventory("WolfExtraLife");

        i = CheckInventory("Shell");

        if (CheckInventory("RWastemUnloaded")) { wsteSide = 1; }
        if (CheckInventory("LWastemUnloaded")) { wsteSide = 0; }

        if (i <= 2)
        {
            if (!CheckInventory("WastemEmpty"))  { GiveInventory("WastemEmpty", 1); };
            if (!CheckInventory("LWastemEmpty")) { GiveInventory("LWastemEmpty", 1); };
            if (!CheckInventory("RWastemEmpty")) { GiveInventory("RWastemEmpty", 1); };
        }
        else if (i <= 4)
        {
            if (CheckInventory("WastemEmpty"))  { TakeInventory("WastemEmpty", 0x7FFFFFFF); };

            if (!wsteSide)
            {
                if (!CheckInventory("LWastemEmpty")) { GiveInventory("LWastemEmpty", 1); };
                if (CheckInventory("RWastemEmpty")) { TakeInventory("RWastemEmpty", 0x7FFFFFFF); };
            }
            else
            {
                if (!CheckInventory("RWastemEmpty")) { GiveInventory("RWastemEmpty", 1); };
                if (CheckInventory("LWastemEmpty")) { TakeInventory("LWastemEmpty", 0x7FFFFFFF); };
            }
        }
        else
        {
            if (CheckInventory("WastemEmpty"))  { TakeInventory("WastemEmpty", 0x7FFFFFFF); };
            if (CheckInventory("LWastemEmpty") && !wsteSide) { TakeInventory("LWastemEmpty", 0x7FFFFFFF); };
            if (CheckInventory("RWastemEmpty") &&  wsteSide) { TakeInventory("RWastemEmpty", 0x7FFFFFFF); };
        }

        oarmor = armor;
        otype = type;
        armor = CheckInventory("Armor");
        type = SamsaraArmorType();

        if (oarmor > armor && otype == 3)
        {
            if (samsaraClassNum() == CLASS_MARATHON)
            {
                ActivatorSound("marathon/shieldhit", 127);
                FadeRange(255, 255, 255, 0.4, 0, 0, 0, 0.0, 8.0 / 35);
            }
            else
            {
                ActivatorSound("samsara/shieldhit", 127);
                FadeRange(255, 255, 0, min(0.5, (oarmor - armor) * 0.015), 0, 0, 0, 0.0, min(35.0, 1.5 * (oarmor - armor)) / 35);
            }
        }

        /*
         * Jumping and miscellaneous shit
         */

        switch (samsaraClassNum())
        {
		  case CLASS_HEXEN:
			int boosted, damagefactor, damagefactormod;
			if(CheckInventory("HexenClassMode")==2)
			{
				damagefactormod = 0.5;
				if(ACS_NamedExecuteWithResult("SAMSARA_BARATUSRANGECHECK")==1)
				{
					if(!boosted) { damagefactor = GetActorProperty(0,APROP_DamageFactor); boosted = true; SetActorProperty(0,APROP_DamageFactor,FixedMul(damagefactor,damagefactormod)); }
				}
				else
				{
					boosted = false;
					SetActorProperty(0,APROP_DamageFactor,1.0);
				}
			}
			else
			{
				boosted = false;
				damagefactor = GetActorProperty(0,APROP_DamageFactor);
				SetActorProperty(0,APROP_DamageFactor,1.0);
			}
			break;
          case CLASS_MARATHON:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.15); }
            break;

          case CLASS_QUAKE:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.75); }
            break;

	      case CLASS_ERAD:
            if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            else { SetActorProperty(0, APROP_Gravity, 0.68); }
            break;

		  case CLASS_DEMONESS:
		    if (GetCVar("sams_nocustomgravity")) { SetActorProperty(0, APROP_Gravity, 1.0); }
            break;
		
          default:
            SetActorProperty(0, APROP_Gravity, 1.0);
            break;
        }

        if (CheckInventory("ForceRangerGravity")) { SetActorProperty(0, APROP_Gravity, 0.75); }
        if (CheckInventory("ForceSOGravity")) { SetActorProperty(0, APROP_Gravity, 0.15); }
		if (CheckInventory("ForceEleenaGravity")) { SetActorProperty(0, APROP_Gravity, 0.68); }

        // THIS WAS GOING RENEGADE AND KILLING JUMPING FOREVER - COMMENTED OUT UNTIL SOMEONE LOOKS AT IT

        if (samsaraClassNum() == CLASS_HEXEN) 
            { 
                i = JumpZFromHeight(41 + GetCVar("sams_jumpmod"), GetActorProperty(0, APROP_Gravity)); 
            }
        else if(CheckWeapon("RedneckMotorcycle") || CheckInventory("ShrunkPlayer") || CheckInventory("IsMorphed"))
			{
				i = 0;
			}
		else 
            { 
                i = JumpZFromHeight(32 + GetCVar("sams_jumpmod"), GetActorProperty(0, APROP_Gravity));
            }

        SetActorProperty(0, APROP_JumpZ, max(i,0));

        
        //if (isDead(0)) { endloop = 1; }
        
        Delay(1);

        opcount = pcount;
        pcount  = PlayerCount();
    }
}

script "SamsaraTurkeyPuncher" ENTER //677
{
    delay(GetCvar("sams_superturboturkeyfrequency"));
    if (GetCvar("sams_superturboturkeypuncher3000") > 0)
    { GiveInventory("ChickenModeOn",1);
    
        if (GetCvar("sams_superturboturkeypuncher3000") == 3)
        { str ChickenClass = "SuperFriendlyChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultFriendlyChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveFriendlyChicken"; }}
    
        if (GetCvar("sams_superturboturkeypuncher3000") == 2)
        { ChickenClass = "SuperDMChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveChicken"; }}
        
        if (GetCvar("sams_superturboturkeypuncher3000") == 1)
        { ChickenClass = "SuperCoopChicken";
        if (!random(0, 15))
        { ChickenClass = "AssaultChicken";
        if (!random(0, 2))
        ChickenClass = "ExplosiveChicken"; }}
     
        do
        {
           delay(1);
           int x = GetActorX(0) + random(-128.0, 128.0);
           int y = GetActorY(0) + random(-128.0, 128.0);
           int z = GetActorCeilingZ(0) - 38.0;
           int angle = GetActorAngle(0) >> 8;
        }
        until (Spawn(ChickenClass, x, y, z, 0, angle));
        
        
        if (GetCvar("sams_superturboturkeylimit") > 0)
        {
            if(CheckInventory("ChickenKillCount") >= (GetCvar("sams_superturboturkeylimit")))
            { SetFont("BIGFONT");
            HudMessageBold(n:0,s:" \cjhit the kill limit!";
            HUDMSG_PLAIN, 0, CR_WHITE, 0.5, 0.2, 5.0);
            if(CheckInventory("ChickenKillCount") < (GetCvar("sams_superturboturkeylimit")))
            {
                TakeInventory("ChickenKillCount",999); }
                Delay(35*5);
                Exit_Normal(0);
            }       
        }
        
    }
    else
    { TakeInventory("ChickenModeOn",999); }
    restart;
    //}
}

/*script 678 (int respawning)
{
    int punchdrunkloop;
    //punchdrunkloop = 0;
    
    print(s:"678 is being called");
    if (!respawning)
    {
        if (!punchdrunkloop)
        { delay(15);
          print(s:"punchdrunkloop 0 is being called");
          punchdrunkloop = 1; }
        else
        { HandlePunchdrunk(respawning);
        print(s:"handlepunchdrunk is being called");
        HandleInstagib(respawning); }
    }
    delay(1);
    restart;
}*/

script "SamsaraSynthFire" (int startTime) //607 -- SAMSARA_SYNTHFIRE
{
    int pln = PlayerNumber();

    while (ServerEnterTimes[pln] == startTime)
    {
        if (CheckInventory("Health") > 0)
        {
        if (keyDown(BT_ATTACK)) { GiveInventory("SynthFireLeft", 1); }
        else { TakeInventory("SynthFireLeft", 0x7FFFFFFF); }
        
        if (keyDown(BT_ALTATTACK)) { GiveInventory("SynthFireRight", 1); }
        else { TakeInventory("SynthFireRight", 0x7FFFFFFF); }
        }

        Delay(1);
    }

    TakeInventory("SynthFireLeft", 0x7FFFFFFF);
    TakeInventory("SynthFireRight", 0x7FFFFFFF);
}

script "SamsaraConfirmClass" (int which) { SetResultValue(SamsaraWepType == which); } //206 -- SAMSARA_CONFIRMCLASS

script "SamsaraWolfMove" (void) //673 -- SAMSARA_WOLFMOVE
{ 
    int pln = PlayerNumber();
    int realspeed = GetActorProperty(0, APROP_Speed);
    int forward, side, angle, xthrust, ythrust;
    int forwardx, forwardy, sidex, sidey;
    int velx, vely;
    int moving;
    int fired;
    int startTime = Timer();

    WolfenEnterTimes[pln] = startTime;

    while (WolfenEnterTimes[pln] == startTime)
    {
        if (UnloadingNow)
        {
            if (GetActorProperty(0, APROP_Speed) == 0)
            {
                SetActorProperty(0, APROP_Speed, realspeed);
            }
            break;
        }

        if (!CheckInventory("CanWolfMovement")) { break; }
		
		if(CheckInventory("ShrunkPlayer"))
		{
			Delay(1);
			continue;
		}
		
        if (!CheckInventory("WolfenMovement") || GetCVar("sams_banwolfmove"))
        {
            if (GetActorProperty(0, APROP_Speed) == 0)
            {
                SetActorProperty(0, APROP_Speed, realspeed);
            }

            Delay(1);
            continue;
        }
        
        if (GetActorProperty(0, APROP_Health) < 1)
        {
            SetActorProperty(0, APROP_Speed, realspeed);
            velx = 0;
            vely = 0;
        }
        else
        {				
            if (WolfenEnterTimes[pln] != startTime) { break; }
            SetActorProperty(0, APROP_Speed, 0);
            
			if(GetPlayerInput(-1,INPUT_FORWARDMOVE) != 0)
				forward = sign(GetPlayerInput(-1,INPUT_FORWARDMOVE));
				
            forward *= SPEED_FORWARD;
			
			if(GetPlayerInput(-1,INPUT_SIDEMOVE) != 0)
				side    = sign(GetPlayerInput(-1,INPUT_SIDEMOVE));
			
			if(KeyDown_Any(BT_STRAFE))
			{
				if(GetPlayerInput(-1,INPUT_YAW) != 0)
					side    = -sign(GetPlayerInput(-1,INPUT_YAW));
				}
			
            side    *= SPEED_SIDE;
            
            angle   = GetActorAngle(0);
            
            forwardx = cos(angle) * (forward / ((CheckInventory("IsMorphed") * 2) + 1));
            forwardy = sin(angle) * (forward / ((CheckInventory("IsMorphed") * 2) + 1));
            
            sidex = cos(angle-0.25) * (side / ((CheckInventory("IsMorphed") * 2) + 1));
            sidey = sin(angle-0.25) * (side / ((CheckInventory("IsMorphed") * 2) + 1));
            
            velx = forwardx + sidex;
            vely = forwardy + sidey;
			
			forward = 0;
			side = 0;
        }

        if (keyDown(BT_CROUCH)) { velx /= 2; vely /= 2; }
        
        if ((velx != 0) || (vely != 0))
        {
            GiveInventory("WolfMoving", 1);
        }
        else if (CheckInventory("WolfMoving"))
        {
            TakeInventory("WolfMoving", 0x7FFFFFFF);
        }
		
        SetActorVelocity(0, velx, vely, GetActorVelZ(0), 0, 0);
        Delay(1);
    }

    if (GetActorProperty(0, APROP_Speed) == 0)
    {
        SetActorProperty(0, APROP_Speed, realspeed);
    }
}

script "SamsaraEnterClient" (void) clientside //521 -- SAMSARA_ENTER_CLIENT
{
    int execInt, oExecInt, execStr;
    int class, oClass;
    int pln = PlayerNumber();
    int i, j;
    int startTime = Timer();
    
    // Comment out this line for zdoom
    int cpln = ConsolePlayerNumber();

    ClientEnterTimes[pln] = startTime;
    ClientTipboxes[pln] = 0;
    
    execInt = 0; oExecInt = 0;
    
    if (GetCVar("sams_cl_exists") != samsara_cl_VERSION)
    {

        // More setting default stuff, which is what CVARINFO does.

        /*
        //ConsoleCommand(StrParam(s:"set samsara_cl_exists ", d:samsara_cl_VERSION));
        SetCVar ("sams_cl_exists", samsara_cl_VERSION);
        //ConsoleCommand("archivecvar samsara_cl_exists");
	
        if (!GetCVar("sams_cl_wolfmove"))
        {   SetCVar ("sams_cl_wolfmove", 0);
        //ConsoleCommand("archivecvar samsara_cl_wolfmove");  
        }
        
        if (!GetCVar("sams_cl_vanilladoom"))
        {   SetCVar ("sams_cl_vanilladoom", 0);
        //ConsoleCommand("archivecvar samsara_cl_vanilladoom");  
        }
        
        if (!GetCVar("sams_cl_weaponhud"))
        {   SetCVar ("sams_cl_weaponhud", 1);
        //ConsoleCommand("archivecvar samsara_cl_weaponhud");  
        }
        
        if (!GetCVar("sams_cl_ballgag"))
        {   SetCVar ("sams_cl_ballgag", 0);
        //ConsoleCommand("archivecvar samsara_cl_ballgag");  
        }
        
        if (!GetCVar("sams_cl_moremessages"))
        {   SetCVar ("sams_cl_moremessages", 0);
        //ConsoleCommand("archivecvar samsara_cl_moremessages");  
        }
        
        if (!GetCVar("sams_cl_pickupmode"))
        {   SetCVar ("sams_cl_pickupmode", 1);
        //ConsoleCommand("archivecvar samsara_cl_pickupmode");  
        }
        
        if (!GetCVar("sams_cl_printpickup"))
        {   SetCVar ("sams_cl_printpickup", 0);
        //ConsoleCommand("archivecvar samsara_cl_printpickup");  
        }
        */  
    }
        /*
        if (!GetCVar("sams_cl_bloodyhell"))
        {   SetCVar ("sams_cl_bloodyhell", 0);
        //ConsoleCommand("archivecvar samsara_cl_bloodyhell");  
        }
        
        if (!GetCVar("sams_cl_bloodypersistent"))
        {   SetCVar ("sams_cl_bloodypersistent", 0);
        //ConsoleCommand("archivecvar samsara_cl_bloodypersistent");  
        }
        */
          


    for (i = 0; i < RESCOUNT; i++)
    {
        ACS_NamedExecuteAlways("SamsaraResonate", 0, i, 16, 0);
    }
    
    DukeQuoteCooldown[pln] = 0; 

    //Log(s:"Client ", n:pln+1, s:"\c- (", d:pln, s:") has spawned (startTime is ", d:startTime, s:")");
    
    while (ClientEnterTimes[pln] == startTime)
    {
		oClass = class;
        class  = samsaraClassNum();
        DukeQuoteCooldown[pln] = max(0, DukeQuoteCooldown[pln]-1); 

        // Also this line
        if (cpln != pln) { Delay(1); continue; }
		
        SamsaraClientClass = class+1;
        
        if (oClass != class) { SamsaraItemFlash = Timer(); }
        
        for (i = 0; i < SLOTCOUNT; i++)
        {
            j = SamsaraClientWeps[i];
            SamsaraClientWeps[i] = HasClassWeapon(class, i);
            
            if (j != SamsaraClientWeps[i]) { SamsaraClientWepFlashes[i] = Timer(); }
        }
        
        if (IsServer)
        {
            array_wolfmove[pln]     = !!GetCVar("sams_cl_wolfmove");
            array_vanillaAnim[pln]  = !!GetCVar("sams_cl_vanilladoom");
            array_ballgag[pln]      = !!GetCVar("sams_cl_ballgag");
            array_weaponBar[pln]    = !!GetCVar("sams_cl_weaponhud");
            array_pickupswitch[pln] = !!GetCVar("switchonpickup");
        }
        else
        {
            oExecInt = execInt;
            execInt = SamsaraClientVars();
            
            if (execInt != oExecInt)
            {
                execStr = StrParam(s:"pukename -", s:"SamsaraPuke", s:" ", d:execInt, s:" ", d:pln);
                //ConsoleCommand(execStr);
            }
        }

        Delay(1);
    }
    //Log(s:"Client ", n:pln+1, s:"\c- (", d:pln, s:") has left spawn (", d:startTime, s:" vs. ", d:ClientEnterTimes[pln], s:")");
}

script "SAMSARA_CLIENT_ALTERNATIVECLASS" (int set, int pln) clientside
{
	int cpln = ConsolePlayerNumber();
    if (cpln != pln) { terminate; }
	
	SamsaraAlternativeClass = set;
}

script "SAMSARA_BARATUSRANGECHECK" (void)
{
	int x = GetActorX(0);	int y = GetActorY(0);	int z = GetActorZ(0);
	if(SetActivator(0,AAPTR_PLAYER_GETTARGET))
	{
		if((ClassifyActor(0) & ACTOR_MONSTER) || (ClassifyActor(0) & ACTOR_PLAYER))
		{
			int monx = GetActorX(0);	int mony = GetActorY(0);	int monz = GetActorZ(0);
			int vectorx = monx - x;
			int vectory = mony - y;
			int vectorz = monz - z;
			int length = magnitudeThree_f(vectorx,vectory,vectorz);
			if(abs(length) < 128.0) { SetResultValue(1); terminate; } //when returning in other languages, the method would end, this is here for good measure
		}
	}
	SetResultValue(0);
	
}

script "SamsaraDisconnectClient" (int pln) disconnect clientside //522 -- SAMSARA_DISCONNECT_CLIENT
{
    // Comment out these lines for zdoom
    int cpln = ConsolePlayerNumber();
    if (cpln != pln) { terminate; }
    
	SamsaraAlternativeClass = 0;
    SamsaraClientClass  = 0;
    SamsaraItemFlash    = Timer();
}

script "SamsaraPuke" (int values, int pln) net //226 - SAMSARA_PUKE
{
    array_wolfmove[pln]     = values & 1;
    array_vanillaAnim[pln]  = values & 2;
    array_ballgag[pln]      = values & 4;
    array_weaponBar[pln]    = values & 8;
    array_pickupswitch[pln] = values & 16;
}


script "SamsaraDeath" death //619 -- SAMSARA_DEATH
{
	int pln = PlayerNumber();
	switch(PlayerClass(pln))
	{
		case 6:
			TakeInventory("FusionChargan",7);
			TakeInventory("FusionChargeLevel",35);
			TakeInventory("ChargeLevel2",99);
			TakeInventory("ChargeLevel",99);
			TakeInventory("WMCCharge",99);
			if(CheckInventory("FusionChargeLevel"))
				GiveInventory("MarathonFusionShotItem",1);
			break;
	}
    Delay(1);
    TakeInventory("QuadDamagePower", 1);
}

script "HandleInstagibWeapons" (void)
{
	int classnum = samsaraClassNum();
	switch(GetCvar("sams_slotmode"))
	{
		case 0:
			GiveInventory(ClassWeapons[classnum][0][0],1);
			break;
		case 1:
			GiveInventory(ClassWeapons[classnum][2][0],1);
			break;
		case 2:
			GiveInventory("SamsaraSlotOnePickup",1);
			break;
		case 3:
			GiveInventory("SamsaraSlotTwoPickup",1);
			break;
		case 4:
			GiveInventory("SamsaraSlotThreePickup",1);
			break;
		case 5:
			GiveInventory("SamsaraSlotFourPickup",1);
			break;
		case 6:
			GiveInventory("SamsaraSlotFivePickup",1);
			break;
		case 7:
			GiveInventory("SamsaraSlotSixPickup",1);
			break;
		case 8:
			GiveInventory("SamsaraSlotSevenPickup",1);
			break;
		case 9:
			GiveInventory("SamsaraUniquePickup1",1);
			break;
		case 10:
			GiveInventory("SamsaraUniquePickup2",1);
			break;
		case 11:
			GiveInventory("SamsaraUniquePickup3",1);
			break;
	}
}