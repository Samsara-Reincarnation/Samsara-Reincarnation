#define SAMSARA_CHANGELIST         281

#define SAMSARA_ENTER               611
#define SAMSARA_RETURN              613
#define SAMSARA_RESPAWN             618
#define SAMSARA_DEATH               619
#define SAMSARA_OPEN                623
#define SAMSARA_SPAWN               624
#define SAMSARA_DISCONNECT          617
#define SAMSARA_WOLFMOVE            673
#define SAMSARA_SCHEDULED           674
#define SAMSARA_PDWTAK              675
#define SAMSARA_GETSETTINGS         676

#define SAMSARA_CONFIRMCLASS        206
#define SAMSARA_DECORATE            215
#define SAMSARA_GIVEWEAPON          229
#define SAMSARA_GIVEUNIQUE          231
#define SAMSARA_CLIENT_WEAPONPICKUP 616
#define SAMSARA_CLIENT_UNIQUEPICKUP 633
#define SAMSARA_MARATHON            609
#define SAMSARA_QUAKE               606
#define SAMSARA_RESONATE            608
#define SAMSARA_SYNTHFIRE           607
#define SAMSARA_MEGAHEALTH          259
#define SAMSARA_QPOWERS             636
#define SAMSARA_BITTERMAN      		806
#define SAMSARA_STRIFESIGIL			667
#define SAMSARA_DOOM64              666
#define SAMSARA_REBELMOON			665
#define SAMSARA_WITCHAVEN			707 //+Added
#define SAMSARA_WT_AUTOHEALER		708 //+Added
#define SAMSARA_WT_CLIP				709 //+Added
#define SAMSARA_WANGHEAD            712
//#define HL_RELOADER_SCRIPT 			592
#define HL_GAUSS_SCRIPT				622


#define SAMSARA_TIPBOX              300
#define SAMSARA_TIPBOX_CLIENT       301

#define SAMSARA_PUKE                226
#define SAMSARA_PUKE_CLIENT         227
#define SAMSARA_OPEN_CLIENT         548
#define SAMSARA_ENTER_CLIENT        521
#define SAMSARA_DISCONNECT_CLIENT   522
#define SAMSARA_CLIENT_CLASS        228
#define SAMSARA_RECOIL              312
#define SAMSARA_CLIENT_DECORATE     212

#define SAMSARA_STRIFEACCURACY      313
#define SAMSARA_CLIENT_ACCURACY     314
#define SAMSARA_BEACON              315
#define SAMSARA_SPECTRES            316
#define SAMSARA_SIGIL               317

#define SAMSARA_CL_VERSION          2601

#define MAXMODES          	5
#define CLASSCOUNT          31
#define UNIQUECOUNT         3
#define SLOTCOUNT           13
#define TIPCOUNT            2

#define LMSMODES            6
#define ARMORMODES          5

#define CLASS_DOOM      0
#define CLASS_CHEX      1
#define CLASS_HERETIC   2
#define CLASS_WOLFEN    3
#define CLASS_HEXEN     4
#define CLASS_DUKE      5
#define CLASS_MARATHON  6
#define CLASS_QUAKE     7
#define CLASS_ROTT      8 // Added this.
#define CLASS_BLAKE		9 // Added this.
#define CLASS_CALEB     10 // added this.
#define CLASS_STRIFE    11 // added this.
//#define CLASS_DOOM64    12 // bye bye bye!
#define CLASS_ERAD      12 // added this.
#define CLASS_C7   		13 // Added this. 
#define CLASS_RMR   	14 // Added this. 
#define CLASS_KATARN    15
#define CLASS_POGREED	16	//+Added
#define CLASS_DISRUPTOR	17	//+Added
#define CLASS_WITCHAVEN	18	//+Added
#define CLASS_HALFLIFE	19	//+Added
#define CLASS_SW		20
#define CLASS_CM		21
#define CLASS_JON		22
#define CLASS_RR		23
#define CLASS_BITTERMAN	24
#define CLASS_DEMONESS	25
#define CLASS_BOND		26
#define CLASS_CATACOMB	27
#define CLASS_PAINKILLER	28
#define CLASS_UNREAL 29
#define CLASS_RTCW 30

#define SPEED_FORWARD       15
#define SPEED_SIDE          13

#define UNLOADCOUNT 74

#define P_COUNT 2
#define P_QUAD  0
#define P_REGEN 1

#define QUAD_THRESHOLD      2100   // one minute

#define PY640   380.0
#define PY320   (PY640/2)

#define POFF640 40.0
#define POFF320 20.0

#define REGEN_CENTER_X      0.953125    // 610 / 640
#define REGEN_CENTER_Y      (PY640 / 480)
#define REGEN_OFFSET        0.083333    // 40 / 480

#define TIP_SCROLLRATE      8

#define GLOBAL_DONEBITCHING     0
#define GLOBAL_SIGILBASE        1

int HELPSTR = 
"Welcome to the Wheel of Samsara! There are a few optional RCon commands you may want to consider.\n\
sams_banjetpack 0/1: Toggles whether Duke or Moon Commando is allowed to pick up their jetpack or not.\n\
sams_banwolfmove 0/1: Toggles whether Wolfenstein movement is allowed or not.\n\
sams_nocustomgravity 0/1: Toggles whether the heroes have custom gravity or use only Doom gravity.\n\
sams_jumpmod: Gives the indicated multiplier to jump height. 9 for HeXen, -8 for Strife.\n\
sams_permault 0/1: Toggles whether the Weapon VII is persistent or vanishes on pickup.\n\
sams_lmslife [0-5]: Affects how much health/armor people have on LMS spawn/respawn.\n\
sams_lmsult 0/1: Toggles whether players get their VII in LMS.\n\
sams_uniquestart [0-4]: Toggles whether players get their unique on enter or spawn.\n\
sams_chainsawstart [0-2]: Toggles whether players get their I on enter or spawn.\n\
sams_peoplediewhentheyarekilled [0-3]: Players explode on death.\n\
sams_merryxmas 0/1: Toggles XMas mode, changing the appearance of several textures and props. \n\
sams_misccharacters 0-100: Adjusts the percentage chance of Misc characters and allies to spawn in place of health/armor bonuses. \n\
sams_microwavepop 0/1: Changes the explosion behavior of Duke's Expander weapon. \n\
sams_armormode [0-4]: Toggles the type of armor that spawns in-game.\n\
sams_nohealthcap 0/1: Toggles whether 100/200 is the health cap for players, or infinity.\n\
sams_noult 0/1: Toggles whether the VII comes into play or never spawns.\n\
sams_nomonologues 0/1: Toggles whether the bosses speak on spawn or not.\n\
sams_backpackstart 0/1: Toggles whether players spawn normally or with backpacks.\n\
sams_classiclaz 0/1: Toggles whether the LAZ Device has Samsara behavior or original behavior.\n\
sams_allcanrj 0/1: Every character with non-self-damaging rockets will be able to RJ with them.\n\
sams_nounique 0/1: Toggles whether Unique Item spawns.\n\
sams_noinvuln 0/1: Toggles whether Invulnerability spawns.\n\
sams_ban[class] 0/1: Forbids players from playing certain classes. bandoomguy for Doomguy, banchex for Chex Warrior, etc.\n\
sams_lmsrules 0/1: For players who want Rocket Arena-style showdowns or just to spawn with all weapons.\n\
sams_[class]damage -10-30: Adjusts the character's damage multiplier.\n\
sams_[class]defense -10-20: Adjusts the character's defense multiplier.\n\
sams_permaquad: Determines whether Ranger gets a Quake II or Quake I Quad Damage on picking up the VII.\n\
sams_accuracyupgrades 0-10: Adjusts the amount of accuracy upgrades Strifeguy starts the game with.\n\
sams_staminaupgrades 0-10: Adjusts the amount of stamina upgrades Strifeguy starts the game with. (Note: Maximum health isn't increased during Cooperative gamemodes.)";

int HELPSTR_CL = 
"Likewise, there are several clientside console variables, including:\n\
sams_cl_printpickup 0/1: 1 = Print, 0 = Log.\n\
sams_cl_expparticles [1-100000]: How many particles does Ranger's explosions emit? 0 is default, -1 to disable.\n\
sams_cl_norecoil 0/1: Controls whether Ranger's weapons recoil.\n\
sams_cl_sinerecoil 0/1: Toggles whether Ranger's recoil movement uses a sine wave.\n\
sams_cl_weaponhud 0/1: Controls whether the weapon bar at the top of your screen appears.\n\
sams_cl_vanilladoom 0/1: Toggles the vanilla weapon animations for Doomguy.\n\
sams_cl_wolfmove 0/1: Toggles classic Wolfenstein movement on B.J. Blazkowicz, Blake Stone, and SpaceSeal.\n\
sams_cl_heromusic 0/1: Toggles the selected Hero's soundtrack to play during gameplay (requires samsaraost file)\n\
sams_cl_hevtalk 0/1: Toggles HEV suit speech for Freeman/Shephard.\n\
sams_cl_dkclab 0/1: Toggles Life's A Beach weapon skins for Duke Nukem.\n\
sams_cl_lostmode 0/1: Toggles SOD Lost Missions weapon skins for BJ Blaskowicz \n\
sams_cl_adrianmode 0/1: Allows you to play as Adrian Shephard from HL Opposing Force when selecting Freeman, with the matching weapons!";

int LMSArmors[LMSMODES] = 
{
    "",
    "GreenArmor",
    "BlueArmor",
    "LMSArmor", 
    "LMSArmor2",
    "LMSArmor3",
};

int ClassItems[CLASSCOUNT] =
{
    "DoomguyClass",
    "ChexClass",
    "CorvusClass",
    "WolfenClass",
    "HexenClass",
    "DukeClass",
    "MarathonClass",
    "QuakeClass",
	"RottClass", // Added this
    "BlakeClass", // Added this
    "CalebClass",// Added this
    "StrifeClass", // Added this.
//    "Doom64GuyClass", // goodbye
    "EradClass", // Added this.	
	"C7Class", // Added this.		
	"RMRClass", // Added this.			
	"KatarnClass", // Added this	
	"POGreedClass",	//+Added	
	"DisruptorClass",	//+Added		
	"WitchavenClass",	//+Added
	"HalfLifeClass", //+Added	
	"SWClass", //+Added		
	"CMClass", //+Added
	"JonClass", //+Added
	"RRClass", //+Added	
	"BittermanClass", //+Added
	"Hexen2Class", //+Added
	"BondClass", //+Added
	"CatacombClass", //+Added	
	"PainkillerClass", //+Added	
	"UnrealClass", //+Added	
	"RTCWClass", //+Added		
};

int PickupStates[CLASSCOUNT][24] = 
{
    {"Doomguy", "DoomFull",     "DoomEmpty",        "DoomSpecial",      "DoomPunchdrunk",      "DoomPDFull",       "DoomPDEmpty",      "DoomPDSpecial",		"Doom64",		"Doom64Full",		"Doom64Empty",		"Doom64Special"},
    {"Chexguy", "ChexFull",     "ChexEmpty",        "ChexSpecial",      "ChexPunchdrunk",      "ChexPDFull",       "ChexPDEmpty",      "ChexPDSpecial",		"",		"",		"",		""},
    {"Heretic", "HereticFull",  "HereticEmpty",     "HereticSpecial",   "HereticPunchdrunk",   "HereticPDFull",    "HereticPDEmpty",   "HereticPDSpecial",		"",		"",		"",		""},
    {"Wolfguy", "WolfFull",     "WolfEmpty",        "WolfSpecial",      "WolfPunchdrunk",      "WolfPDFull",       "WolfPDEmpty",      "WolfPDSpecial",		"LostWolfGuy",		"LostWolfFull",		"LostWolfEmpty", "LostWolfSpecial", "Totenkopf", "TotenkopfFull", "TotenkopfEmpty",  "TotenkopfSpecial"},
    {"Hexen",   "HexenFull",    "HexenEmpty",       "HexenSpecial",     "HexenPunchdrunk",     "HexenPDFull",      "HexenPDEmpty",     "HexenPDSpecial",		"HexenMage",		"HexenMageFull",		"HexenMageEmpty",		"HexenMageSpecial", "HexenFighter",	"HexenFighterFull",	"HexenFighterEmpty", "HexenFighterSpecial" },
    {"Dukeguy", "DukeFull",     "DukeEmpty",        "DukeSpecial",      "DukePunchdrunk",      "DukePDFull",       "DukePDEmpty",      "DukePDSpecial",		"BeachDukeGuy",		"BeachDukeFull",		"BeachDukeEmpty",		"BeachDukeSpecial"},
    {"Marathon","MarathonFull", "MarathonEmpty",    "MarathonSpecial",  "MarathonPunchdrunk",  "MarathonPDFull",   "MarathonPDEmpty",  "MarathonPDSpecial",		"",		"",		"",		""},
    {"Quake",   "QuakeFull",    "QuakeEmpty",       "QuakeSpecial",     "QuakePunchdrunk",     "QuakePDFull",      "QuakePDEmpty",     "QuakePDSpecial",		"",		"",		"",		""},   
	{"Rott",    "RottFull",     "RottEmpty",        "RottSpecial",      "",						"",					"", 				"RottSpecial2",			"Rott",		"RottFull",		"RottEmpty",		"RottSpecial",		"Rott",    "RottFull",     "RottEmpty",        "RottSpecial",	"Rott",    "RottFull",     "RottEmpty",        "RottSpecial",	"Rott",    "RottFull",     "RottEmpty",        "RottSpecial" },   // Added this
	{"Blake",   "BlakeFull",	"BlakeEmpty",		"BlakeSpecial",		"","","", "BlakeSpecial2",		"AOG",		"AOGFull",		"AOGEmpty",		"AOGSpecial"}, // Added this
	{"Caleb",   "CalebFull",    "CalebEmpty",       "CalebSpecial",     "","","", "CalebSpecial2",		"",		"",		"",		""}, // Added this
	{"Strifeguy",  "StrifeFull",   "StrifeEmpty",      "StrifeSpecial",    "StrifePunchdrunk",    "StrifePDFull",     "StrifePDEmpty",    "StrifePDSpecial",		"",		"",		"",		""},	
//    {"Doom64",  "Doom64Full",   "Doom64Empty",      "Doom64Special",    "Doom64Punchdrunk",    "Doom64PDFull",     "Doom64PDEmpty",    "Doom64PDSpecial",		"",		"",		"",		""},
    {"Erad",  "EradFull",   "EradEmpty",      "EradSpecial",    "",    "",     "",    "",		"",		"",		"",		""},	
    {"C7",      "C7Full",       "C7Empty",          "C7Special",        "C7Punchdrunk",        "C7PDFull",         "C7PDEmpty",        "C7PDSpecial",		"",		"",		"",		""},
    {"RMR",      "RMRFull",       "RMREmpty",          "RMRSpecial",        "",        "",         "",        ""},	
    {"Katarn",  "KatarnFull",   "KatarnEmpty",      "KatarnSpecial",    "KatarnPunchdrunk",    "KatarnPDFull",     "KatarnPDEmpty",    "KatarnPDSpecial",		"",		"",		"",		""},	
	{"POGreed",		"POGreedFull",	"POGreedEmpty",		"POGreedSpecial",	"POGreedPunchdrunk",	"POGreedPDFull",	"POGreedPDEmpty",	"POGreedPDSpecial",		"POGreed",		"POGreedFull",		"POGreedEmpty",		"POGreedSpecial",		"POGreed",		"POGreedFull",		"POGreedEmpty",		"POGreedSpecial",		"POGreed",		"POGreedFull",		"POGreedEmpty",		"POGreedSpecial",		"POGreed",		"POGreedFull",		"POGreedEmpty",		"POGreedSpecial"},
    {"Disruptor",      "DisruptorFull",       "DisruptorEmpty",          "DisruptorSpecial",        "",        "",         "",        "",		"",		"",		"",		""},	
	{"Witchaven",	"WitchavenFull","WitchavenEmpty",	"WitchavenSpecial",	"WitchavenPunchdrunk",	"WitchavenPDFull",	"WitchavenPDEmpty",	"WitchavenPDSpecial",		"",		"",		"",		""},
	{"HalfLife",	"HalfLifeFull",	"HalfLifeEmpty",	"HalfLifeSpecial",	"HalfLifePunchDrunk",	"HalfLifePDFull",	"HalfLifePDEmpty",	"HalfLifePDSpecial",		"Shephard",		"ShephardFull",		"ShephardEmpty",		"ShephardSpecial"},
	{"SW",	"SWFull",	"SWEmpty",	"SWSpecial",	"",	"",	"",	"",		"",		"",		"",		""},	
	{"CM",	"CMFull",	"CMEmpty",	"CMSpecial",	"",	"",	"",	"",		"",		"",		"",		""},	
	{"Jon",	"JonFull",	"JonEmpty",	"JonSpecial",	"",	"",	"",	"",		"",		"",		"",		""},	
	{"RR",	"RRFull",	"RREmpty",	"RRSpecial",	"",	"",	"",	"",		"",		"",		"",		""},	
	{"Bitterman",    "BittermanFull",     "BittermanEmpty",        "BittermanSpecial",      "BittermanPunchdrunk",      "BittermanPDFull",       "BittermanPDEmpty",      "BittermanPDSpecial",		"",		"",		"",		""}, 
	{"Demoness",    "DemonessFull",     "DemonessEmpty",        "DemonessSpecial",      "DemonessPunchdrunk",      "DemonessPDFull",       "DemonessPDEmpty",      "DemonessPDSpecial",		"",		"",		"",		""},
	{"Bond",    	"BondFull",     	"BondEmpty",        	"BondSpecial",      	"BondPunchdrunk",      	   "BondPDFull",       	   "BondPDEmpty",          "BondPDSpecial",		    "",		"",		"",		""},
	{"Catacomb",    "CatacombFull",     	"CatacombEmpty",        	"CatacombSpecial",      	"CatacombPunchdrunk",      	   "CatacombPDFull",       	   "CatacombPDEmpty",          "CatacombPDSpecial",		    "",		"",		"",		""},
	{"Painkiller",    "PainkillerFull",     	"PainkillerEmpty",        	"PainkillerSpecial",      	"PainkillerPunchdrunk",      	   "PainkillerPDFull",       	   "PainkillerPDEmpty",          "PainkillerPDSpecial",		    "",		"",		"",		""},
	{"Unreal",    "UnrealFull",     	"UnrealEmpty",        	"UnrealSpecial",      	"UnrealPunchdrunk",      	   "UnrealPDFull",       	   "UnrealPDEmpty",          "UnrealPDSpecial",		    "",		"",		"",		""},	
	{"RTCW",    "RTCWFull",     	"RTCWEmpty",        	"RTCWSpecial",      	"RTCWPunchdrunk",      	   "RTCWPDFull",       	   "RTCWPDEmpty",          "RTCWPDSpecial",		    "",		"",		"",		""},	
};

int ItoSArray[11] = {1, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
int StoIArray[SLOTCOUNT] = {-1, 1, -1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};

int ClassFades[CLASSCOUNT][5] =
{
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
    {0,   255, 0,   0.4, 8},
    {255, 255, 0,   0.1, 5},
	{255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},
	{255, 255, 0,   0.1, 5},
//	{255, 255, 0,   0.1, 5},	
	{255, 255, 0,   0.1, 5},	
	{255, 255, 0,   0.1, 5},
    {255, 255, 0,   0.1, 5},	
    {255, 255, 0,   0.1, 5},		
    {255, 255, 0,   0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},		
	{0,	  0,   0,	0,	 0}, //+Added (Witchaven pickups caused no flash)
	{0,   0,   0,   0,   0}, //+Added	
	{255, 255, 0,	0.1, 5},
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},	
	{255, 255, 0,	0.1, 5},		
};

int SlotItems[SLOTCOUNT] = 
{
    "",
    "GotWeapon0",
    "",
    "GotWeapon2",
    "GotWeapon3",
    "GotWeapon4",
    "GotWeapon5",
    "GotWeapon6",
    "GotWeapon7",
    "",
};

int LMSItems[CLASSCOUNT] =
{
    "",
    "",
    "PortGhostly",
    "WolfenAmmoCrate",
    "",
    "",
    "",
    "",
	"",
	"",	
	"",	
//	"",
	"",	
	"",
	"",	
	"",
	"",	
	"",	
    "", //+Added
    "", //+Added
	"", //+Added	
	"", //+Added	
	"", //+Added	
	"", //+Added	
	"", //+Added	
	"", //+Added
	"", //+Added
	"", //+Added
};

int UnloadRemove[UNLOADCOUNT] =
{
    "TomeOfPowerCooldown", "DiscOfRepulsionCooldown", "RainTracker", 
    "DukeTauntCooldown", "MaceAmmo", "MacePowered", "Mace", "DukeFlying", 
    "DukePetJack", "DukeVision", "DukeReady", "DukeWaiting", "Infrared", 
    "SynthFireActive", "SynthFireLeft", "SynthFireRight", "LevelLimiter", 
    "LeftReload", "RightReload", "UsingSMG", "UsingFists", "UsingPistols", 
    "UsingShotguns", "UsingFusionPistol", "UsingAssaultRifle", "UsingSpanker", 
    "UsingToasty", "UsingAlienWeapon", "UsingAlienWeapon2", "UsingWMC", 
    "UsingDualPistols", "UsingDualShotguns", "InvasionDualShottyCheck",
    "QuakeQuadTimer", "QuakeRegenTimer", "QuakeInvisTimer", "ChickenKillCount",
	"GibfistSide", "God Hand", "BStoneProtection", "IGotMyUnique", "DBSHOT", "DBSHOT1", "DB1", "DB2", "DB3", "DB4", "DB5", "DB6",
	"DB7", "DB8", "DB9", "DB10", "DB11", "DB12", "DB13", "DB14", "DB15", "DB16", "DB17",
    "DB18", "DB19", "StopFromPickingShit", "EleenaTauntCooldown", "LeonardTauntCooldown", "CalebTauntCooldown", "LoWangTauntCooldown",
	"JonTauntCooldown", "StopFromPickingTurrets_", "StrifeBeaconCooldown", "BloodGunsAkimboCooldown", "DisruptorPSICooldown", "Catacomb_HourglassCooldown"
};

int PowerOutVols[5] = {96, 104, 112, 120, 127};

int Tipboxes[CLASSCOUNT][TIPCOUNT] =
{
    {"DOOMTIP1", "DOOMTIP2"},
    {"CHEXTIP1", "CHEXTIP2"},
    {"HERETIP1", "HERETIP2"},
    {"WOLFTIP1", "WOLFTIP2"},
    {"HEXNTIP1", "HEXNTIP2"},
    {"DUKETIP1", "DUKETIP2"},
    {"MARATIP1", "MARATIP2"},
    {"QUAKTIP1", "QUAKTIP2"},
	{"ROTTTIP1", "ERADTIP2"}, // Added this.
	{"BSTNTIP1", "BSTNTIP2"}, // Added this
	{"CLBTIP1",  "CLBTIP2"}, // Added this
	{"STRFTIP1", "STRFTIP2"},	
//    {"DM64TIP1", "DM64TIP2"},
    {"ERADTIP1", "ERADTIP2"},	
    {"C7TIP1",   "C7TIP2"},	
    {"RMRTIP1",  "RMRTIP2"},		
    {"KYLETIP1", "KYLETIP2"},	
	{"GREDTIP1", "GREDTIP2"},//+Added	
	{"JACKTIP1", "JACKTIP2"},//+Added		
	{"WTCHTIP1", "WTCHTIP2"},//+Added, the tipboxes itself not completely finished (text missing)
	{"HALFTIP1", "HALFTIP2"},//+Added, the tipboxes itself not finished	
	{"SWTIP1", 	 "SWTIP2"},//+Added, the tipboxes itself not finished		
	{"CMTIP1", 	 "CMTIP2"},//+Added
	{"JONTIP1",	 "JONTIP2"},//+Added	
	{"RRTIP1", 	 "RRTIP2"},//+Added	
	{"BITTIP1",  "BITTIP2"},//+Added	
};


int DMTipboxes[CLASSCOUNT][TIPCOUNT] =
{
    {"DOOMTIP1", "DOOMTIP2"},
    {"CHEXTIP1", "CHEXTIP3"},
    {"HERETIP1", "HERETIP3"},
    {"WOLFTIP1", "WOLFTIP3"},
    {"HEXNTIP1", "HEXNTIP3"},
    {"DUKETIP1", "DUKETIP3"},
    {"MARATIP1", "MARATIP3"},
    {"QUAKTIP1", "QUAKTIP3"},
	{"", "ROTTTIP2"}, // Added this.
	{"", "BSTNTIP2"}, // Added this.
	{"", "CLBTIP2"}, // Added this
	{"", "STRFTIP3"},
//    {"", "DM64TIP2"},	
    {"", "ERADTIP2"},	
    {"", "C7TIP2"},	
    {"", "RMRTIP2"},	
    {"", "KYLETIP2"},	
	{"", "GREDTIP2",}, //+Added	
	{"", "JACKTIP2",}, //+Added	
	{"", "WTCHTIP2"},//+Added
	{"", "HALFTIP2"},//+Added	
	{"", "SWTIP2"},//+Added		
	{"", "CMTIP2"},//+Added		
	{"", "JONTIP2"},//+Added		
	{"", "RRTIP2"},//+Added	
	{"", "JBTIP2"},//+Added	
};

#define RESCOUNT 2
int ResonantItems[RESCOUNT][3] =
{
    {"UnknownResonator1", 0, 100},
    {"UnknownResonator2", 0, 100},
};


#define PDWTAKCOUNT 3

int PeopleDieParticles[CLASSCOUNT] = 
{
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
	"DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
//    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
    "DoomguysDieParticle",
	"DoomguysDieParticle",
	"DoomguysDieParticle",
	"DoomguysDieParticle",	
	"DoomguysDieParticle",
	"DoomguysDieParticle",	
	"DoomguysDieParticle",	
	"DoomguysDieParticle",	
	"DoomguysDieParticle",
    /*
    "ChexguysDieParticle",
    "CorvusDiesParticle",
    "BlazkoDiesParticle",
    "PariasDiesParticle",
    "DukeguysDieParticle",
    "VidBoisDieParticle",
    "RangersDieParticle",
    */
};

int PeopleDiePulses[CLASSCOUNT] = 
{
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
	"DoomguysDiePulse",
    "DoomguysDiePulse",
    "DoomguysDiePulse",
//    "DoomguysDiePulse",	
    "DoomguysDiePulse",	
    "DoomguysDiePulse",		
    "DoomguysDiePulse",		
    "DoomguysDiePulse",	
    "DoomguysDiePulse",	
    "DoomguysDiePulse",		
    "DoomguysDiePulse",			
    "DoomguysDiePulse",
    "DoomguysDiePulse",	
    "DoomguysDiePulse",	
    "DoomguysDiePulse",	
    "DoomguysDiePulse",		
    "DoomguysDiePulse",	
	"DoomguysDiePulse",	
	"DoomguysDiePulse",
	"DoomguysDiePulse",
    /*
    "ChexguysDiePulse",
    "CorvusDiesPulse",
    "BlazkoDiesPulse",
    "PariasDiesPulse",
    "DukeguysDiePulse",
    "VidBoisDiePulse",
    "RangersDiePulse",
    */
};

int PeopleDieBlasts[CLASSCOUNT] = 
{
    "DoomguyDiesWhenHeIsKilled",
    "ChexguyDiesWhenHeIsKilled",
    "CorvusDiesWhenHeIsKilled",
    "BlazkoDiesWhenHeIsKilled",
    "PariasDiesWhenHeIsKilled",
    "DukeDiesWhenHeIsKilled",
    "ManathorDiesWhenHeIsKilled",
    "RangerDiesWhenHeIsKilled",
	"RottDiesWhenHeIsKilled",
	"BlakeDiesWhenHeIsKilled",
	"CalebDiesWhenHeIsKilled",
	"StrifeguyDiesWhenHeIsKilled",	
//	"Doom64GuyDiesWhenHeIsKilled",	
	"EleenaDiesWhenSheIsKilled",		
    "C7ClassDiesWhenHeIsKilled",	
    "RMRClassDiesWhenHeIsKilled",		
    "KatarnDiesWhenHeIsKilled",	
	"MoomanDiesWhenHeIsKilled", //+Added	
	"JackDiesWhenHeIsKilled", //+Added	
	"GrondovalDiesWhenHeIsKilled", //+Added
	"FreemanDiesWhenHeIsKilled", //+Added	
	"WangDiesWhenHeIsKilled", //+Added		
	"CybermageDiesWhenHeIsKilled", //+Added	
	"JonDiesWhenHeIsKilled", //+Added	
	"LeonardDiesWhenHeIsKilled", //+Added
	"BittermanDiesWhenHeIsKilled", //+Added
	"DemonessDiesWhenSheIsKilled", //+Added
	"BondDiesWhenHeIsKilled", //+Added
	"PettonDiesWhenHeIsKilled", //+Added	
	"DanielDiesWhenHeIsKilled", //+Added	
	"Prisoner849DiesWhenSheIsKilled", //+Added	
	"RTCWBlazkoDiesWhenHeIeKilled", //+Added
};

int PDWTAKItems[PDWTAKCOUNT][2] = 
{
    {"InvPeopleDie",  "InvPeopleZorch"},
    {"InvPeopleDie2", "InvPeopleZorch2"},
    {"InvPeopleDie3", "InvPeopleZorch3"},
};

#define ARMORCOUNT  6

#define ARMOR_GREEN             0
#define ARMOR_YELLOW            1
#define ARMOR_BLUE              2
#define ARMOR_BLUE_WITHYELLOW   3
#define ARMOR_RED               4
#define ARMOR_MEGASPHERE        5

int ArmorPickups[ARMORCOUNT] = 
{
    "GreenArmorPickup",
    "YellowArmorPickup",
    "BlueArmorPickup",
    "BlueArmorPickup",
    "RedArmor",
    "MegaPack",
};

int ArmorItems[ARMORMODES][ARMORCOUNT][3] = 
{
    {
        {"ArmorPack1",          100, "GreenArmorNoDrop"},
        {"SamsaraYellowArmor",  150, "YellowArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
        {"ArmorPack3",          250, "RedArmorNoDrop"},
        {"ArmorPack2",          200, "BlueArmorNoDrop"},
    },
    {
        {"QuakeGreenArmor",     100, "QGreenArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"SamsaraSilverArmor",  250, "SilverArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
    },
    {
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeYellowArmor",    150, "QYellowArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
        {"SamsaraSilverArmor",  250, "SilverArmorNoDrop"},
        {"QuakeRedArmor",       200, "QRedArmorNoDrop"},
    },
    {
        {"MarathonGreenArmor",  100, "MGreenArmorNoDrop"},
        {"MarathonYellowArmor", 150, "MYellowArmorNoDrop"},
        {"MarathonBlueArmor",   200, "MBlueArmorNoDrop"},
        {"MarathonBlueArmor",   200, "MBlueArmorNoDrop"},
        {"MarathonRedArmor",    300, "MRedArmorNoDrop"},
        {"MarathonRedArmor",    300, "MRedArmorNoDrop"},
    },
    {
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
        {"NoArmor",             0, "NoArmor"},
    }
};

int ArmorModeStates[ARMORMODES][4] = 
{
    {"Armor1", "Armor1_Drop", "Armor1_WithYellow", "Armor1_YellowDrop"},
    {"Armor2", "Armor2_Drop", "Armor2_WithYellow", "Armor2_YellowDrop"},
    {"Armor3", "Armor3_Drop", "Armor3_WithYellow", "Armor3_YellowDrop"},
    {"Armor4", "Armor4_Drop", "Armor4_WithYellow", "Armor4_YellowDrop"},
    {"Armor5", "Armor5_Drop", "Armor5_WithYellow", "Armor5_YellowDrop"},
};

int ArmorModeNames[ARMORMODES] = 
{
    "Normal",
    "Quake",
    "Quake (old)",
    "Marathon",
    "None",
};

int BanCVars[CLASSCOUNT] = 
{
    "sams_bandoomguy",
    "sams_banchex",
    "sams_bancorvus",
    "sams_banbj",
    "sams_banparias",
    "sams_banduke",
    "sams_banso",
    "sams_banranger",
	"sams_banfreely",
    "sams_banblake",
    "sams_bancaleb",
    "sams_banstrifeguy",
//    "sams_bandoom64guy",
    "sams_baneleena",
    "sams_banspaceseal",
    "sams_banrebelmooncommando",
    "sams_bankatarn",
	"sams_banmooman",
	"sams_bandisruptor",
	"sams_bangrondoval", //+Added
	"sams_banfreeman", //+Added	
	"sams_banwang", //+Added		
	"sams_bancm", //+Added
	"sams_banjon", //+Added	
	"sams_banrr", //+Added	
	"sams_banbitterman", //+Added	
	"sams_bandemoness", //+Added	
	"sams_banbond", //+Added
	"sams_banpetton", //+Added	
	"sams_bandaniel", //+Added	
	"sams_banprisoner", //+Added	
	"sams_banrtcw", //+Added		
};

int BanStrings[CLASSCOUNT] =
{
	"\c[m7]The admin has banned \cdDoomguy\c[m7] from play.",
	"\c[m7]The admin has banned \chChex Warrior\c[m7] from play.",
	"\c[m7]The admin has banned \cqCorvus\c[m7] from play.",
	"\c[m7]The admin has banned \cjB.J. Blazkowicz\c[m7] from play.",
	"\c[m7]The admin has banned \chParias\c[m7] from play.",
	"\c[m7]The admin has banned \cfDuke Nukem\c[m7] from play.",
	"\c[m7]The admin has banned \cnSecurity Officer\c[m7] from play.",
	"\c[m7]The admin has banned \csRanger\c[m7] from play.",
	"\c[m7]The admin has banned \cdFreely\c[m7] from play.",
	"\c[m7]The admin has banned \cvBlake\c[m7] from play.",
	"\c[m7]The admin has banned \csCaleb\c[m7] from play.",
//	"\c[m7]The admin has banned \cdDoom64 Guy\c[m7] from play.",
	"\c[m7]The admin has banned \cdStrife Guy\c[m7] from play.",
	"\c[m7]The admin has banned \caEleena\c[m7] from play.",
	"\c[m7]The admin has banned \cnSpace Seal\c[m7] from play.",	
	"\c[m7]The admin has banned \cfRebel Moon Commando\c[m7] from play.",	
	"\c[m7]The admin has banned \cpKyle Katarn\c[m7] from play.",	
	"\c[m7]The admin has banned \ciMooman\c[m7] from play.",
	"\c[m7]The admin has banned \csJack\c[m7] from play.",	
	"\c[m7]The admin has banned \cuGrondoval\c[m7] from play.", //+Added
	"\c[m7]The admin has banned \ckFreeman\c[m7] from play.", //+Added	
	"\c[m7]The admin has banned \csLo Wang\c[m7] from play.",	
	"\c[m7]The admin has banned \cuCybermage\c[m7] from play.", //+Added
	"\c[m7]The admin has banned \csJon\c[m7] from play.",
	"\c[m7]The admin has banned \cfLeonard\c[m7] from play.",	
	"\c[m7]The admin has banned \cfBitterman\c[m7] from play.",	
	"\c[m7]The admin has banned \cfDemoness\c[m7] from play.",	
	"\c[m7]The admin has banned \cfBond\c[m7] from play.",	
	"\c[m7]The admin has banned \cfPetton Everhail\c[m7] from play.",	
	"\c[m7]The admin has banned \cfDaniel Garner\c[m7] from play.",	
	"\c[m7]The admin has banned \cfPrisoner 849\c[m7] from play.",	
	"\c[m7]The admin has banned \cjB.J. Blazkowicz (RTCW)\c[m7] from play.",	
};


#define DAMAGEMODES 41
#define DAMAGEZEROINDEX 10

#define DEFENSEMODES 31
#define DEFENSEZEROINDEX 10

int DamageCVars[CLASSCOUNT] = 
{
    "sams_doomguydamage",
    "sams_chexdamage",
    "sams_corvusdamage",
    "sams_bjdamage",
    "sams_pariasdamage",
    "sams_dukedamage",
    "sams_sodamage",
    "sams_rangerdamage",
	"sams_freelydamage",
    "sams_blakedamage",
    "sams_calebdamage",
    "sams_strifeguydamage",
//    "sams_doom64guydamage",	
    "sams_eleenadamage",
    "sams_spacesealdamage",	
    "sams_rebelmooncommandodamage",
    "sams_katarndamage",	
	"sams_moomandamage", //+Added	
	"sams_disruptordamage", //+Added		
	"sams_grondovaldamage", //+Added
	"sams_freemandamage", //+Added	
	"sams_wangdamage", //+Added		
	"sams_cmdamage", //+Added	
	"sams_jondamage", //+Added	
	"sams_rrdamage", //+Added	
	"sams_Bittermandamage", //+Added	
	"sams_demonessdamage", //+Added	
	"sams_bonddamage", //+Added	
	"sams_pettondamage", //+Added		
	"sams_danieldamage", //+Added	
	"sams_prisonerdamage", //+Added		
	"sams_rtcwdamage", //+Added			
};

int DefenseCVars[CLASSCOUNT] = 
{
    "sams_doomguydefense",
    "sams_chexdefense",
    "sams_corvusdefense",
    "sams_bjdefense",
    "sams_pariasdefense",
    "sams_dukedefense",
    "sams_sodefense",
    "sams_rangerdefense",
	"sams_freelydefense",
    "sams_blakedefense",
    "sams_calebdefense",
    "sams_strifeguydefense",
//    "sams_doom64guydefense",	
    "sams_eleenadefense",
    "sams_spacesealdefense",	
    "sams_rebelmooncommandodefense",
    "sams_katarndefense",	
	"sams_moomandefense",	
	"sams_disruptordefense",		
	"sams_grondovaldefense", //+Added
	"sams_freemandefense", //+Added	
	"sams_wangdefense", //+Added	
	"sams_cmdefense", //+Added	
	"sams_jondefense", //+Added	
	"sams_rrdefense", //+Added	
	"sams_Bittermandefense", //+Added	
	"sams_demonessdefense", //+Added	
	"sams_bonddefense", //+Added
	"sams_pettondefense", //+Added	
	"sams_danieldefense", //+Added	
	"sams_prisonerdefense", //+Added			
	"sams_rtcwdefense", //+Added			
};

int CVarDamageItems[DAMAGEMODES] = 
{
    "PowerDamageBuff-10",
    "PowerDamageBuff-9",
    "PowerDamageBuff-8",
    "PowerDamageBuff-7",
    "PowerDamageBuff-6",
    "PowerDamageBuff-5",
    "PowerDamageBuff-4",
    "PowerDamageBuff-3",
    "PowerDamageBuff-2",
    "PowerDamageBuff-1",
    "Trigger", // middle point
    "PowerDamageBuff1",
    "PowerDamageBuff2",
    "PowerDamageBuff3",
    "PowerDamageBuff4",
    "PowerDamageBuff5",
    "PowerDamageBuff6",
    "PowerDamageBuff7",
    "PowerDamageBuff8",
    "PowerDamageBuff9",
    "PowerDamageBuff10",
    "PowerDamageBuff11",
    "PowerDamageBuff12",
    "PowerDamageBuff13",
    "PowerDamageBuff14",
    "PowerDamageBuff15",
    "PowerDamageBuff16",
    "PowerDamageBuff17",
    "PowerDamageBuff18",
    "PowerDamageBuff19",
    "PowerDamageBuff20",
    "PowerDamageBuff21",
    "PowerDamageBuff22",
    "PowerDamageBuff23",
    "PowerDamageBuff24",
    "PowerDamageBuff25",
    "PowerDamageBuff26",
    "PowerDamageBuff27",
    "PowerDamageBuff28",
    "PowerDamageBuff29",
    "PowerDamageBuff30",
};

int CVarDefenseItems[DEFENSEMODES] =
{
    "PowerDefenseBuff-10",
    "PowerDefenseBuff-9",
    "PowerDefenseBuff-8",
    "PowerDefenseBuff-7",
    "PowerDefenseBuff-6",
    "PowerDefenseBuff-5",
    "PowerDefenseBuff-4",
    "PowerDefenseBuff-3",
    "PowerDefenseBuff-2",
    "PowerDefenseBuff-1",
    "Trigger", // middle point
    "PowerDefenseBuff1",
    "PowerDefenseBuff2",
    "PowerDefenseBuff3",
    "PowerDefenseBuff4",
    "PowerDefenseBuff5",
    "PowerDefenseBuff6",
    "PowerDefenseBuff7",
    "PowerDefenseBuff8",
    "PowerDefenseBuff9",
    "PowerDefenseBuff10",
    "PowerDefenseBuff11",
    "PowerDefenseBuff12",
    "PowerDefenseBuff13",
    "PowerDefenseBuff14",
    "PowerDefenseBuff15",
    "PowerDefenseBuff16",
    "PowerDefenseBuff17",
    "PowerDefenseBuff18",
    "PowerDefenseBuff19",
    "PowerDefenseBuff20",
};

str PlayerActors[CLASSCOUNT] = 
{
	"DoomguyPlayer", 
	"ChexWarrior", 
	"CorvusPlayer", 
	"WolfenPlayer", 
	"HexenPlayer", 
	"DukePlayer", 
	"MarathonPlayer", 
	"QuakePlayer", 
	"IPFreeley", 
	"BlakeStone",
	"Caleb", 
	"StrifeGuyPlayer", 
	"Eleena", 
	"Corridor7Player", 
	"RebelMoonCommando", 
	"KatarnPlayer", 
	"POGreedPlayer", 
	"DisruptorPlayer", 
	"GrondovalPlayer", 
	"HalfLifePlayer", 
	"LoWangPlayer", 
	"CMPlayer", 
	"PSPlayer", 
	"Leonard", 
	"Bitterman", 
	"Demoness", 
	"JamesBond",
	"PettonEverhail",
	"DanielGarner",
	"UnrealPlayer",
	"RTCW_Blazkowicz",
};

int ChangelogString =
"FROM 0.3 TO 0.31\n\
========================\n\
GAMEPLAY:\n\
- The Marathon 1 Alien Weapon has had its damage increased by a whole 1 to be more accurate to Marathon.\n\
- Thanks to Popsoap, Duke is now capable of picking up his thrown pipebombs!\n\
- Thanks to Scroton, Duke is now capable of kicking while shooting or reloading!\n\
- The wonky rules about when Ranger could or could not get a Quad item have been chucked out the window in favor of a cvar--samsara_permaquad. Put at 1 to get a Quake II-style inventory Quad Damage, put at 0 to have just 30 seconds and nothing more.\n\
- People keep asking me about Brutal Doom, if it will be implemented. No, it will not, but I will accomodate your thirst for gore! samsara_cl_bloodyhell has been implemented as an optional cvar--raise the numbers for even more bloodshed!\n\
 ^- : samsara_cl_bloodyhell 0 is default level, and is no different from vanilla.\n\
 ^- : samsara_cl_bloodyhell 1 is Nashgore level, and is for those who want a little bit more blood without anything over the top.\n\
 ^- : samsara_cl_bloodyhell 2 is Brutal level, and is for those who want as much bloodshed and brutality as possible.\n\
 ^- : samsara_cl_bloodyhell -1 is Happyfun level, and is...well, you'll see.\n\
- samsara_cl_bloodypersistent has been implemented to keep gibs lasting on maps. Duke's gibs have been edited to accomodate this as well.\n\
- By massive request, samsara_pistolammo is now a cvar. With it enabled, the pistol weapons now use ammo 1 like normal--keep in mind now all characters respond favorably to this...\n\
- For those who would like to manually control when and how Duke taunts, samsara_dukesoundboard has been implemented.\n\
- For people who would like survival runs or for their rocketarena duels to be a test of longevity, samsara_nohealth has been implemented. It removes all health pickups from the map.\n\
- An acquaintence reminded me that Ranger's explosions did half damage to Shamblers. Ranger's splash damage now has half+FORCERADIUSDMG on it, allowing bosses to take half damage rather than nil damage to it.\n\
\n\
BUGFIXES:\n\
- Timon's Axe no longer refuses to take ammo when a hit is made with full ammo in co-op.\n\
- Okay seriously now the Quad Damage will work in singleplayer ZDoom.\n\
- Parias' Wraithverge no longer takes 160 mana in DM.\n\
- Duke was resisting QuakeFire normally, rather than being 10% weak to it like everything else. This has been fixed.\n\
- Marathon armor no longer goes 100 -> 150 -> 300 -> 300 with yellow armor on the map.\n\
- Duke now properly moans/groans on picking up the Soulsphere/Megasphere when below 25 health.\n\
- The WSTE-M5 was the only Marathon weapon that would swap to another weapon when out of ammo. Thanks to ForrestMarkX, this inconsistency has been removed.\n\
- When Heretic's Golems were gibbed by Duke, they had a chance to jump to a state that didn't exist.\n\
- ZDoom's SBARINFO no longer shows doubles of the Heretic keys.\n\
- The Nailguns no longer think Ranger's Grenade/Rocket Launcher run off Shells.\n\
\n\
POLISH:\n\
- samsara_ban[class], samsara_[class]damage, and samsara_[class]defense has been reworked under-the-hood to be pure ACS.\n\
- Duke's taunts now check for DukeClass--enemies using the DukeExplosive type no longer do Duke's taunts.\n\
- Thanks to Mike12, the Duke Nukem Advance Golden Desert Eagle sprites are infinitely sexier!\n\
- Flemoid Blood should no longer conflict with any instances of Nashgore.\n\
- Thanks to TehVappy50, a huge amount of the text lumps have been converted to LANGUAGE use. What does this mean? Well, if you want simpler obituaries, uncolored obituaries, or different ones, you can change them to be whatever you'd like!\n\
- As per Marathon behavior, non-explosive Marathon weapons no longer gib, and explosive Marathon weapons always gib.\n\
- Thanks to BlackFish, Samsara now has a menudef for its many options for the ZDoom version! And whenever the Zandronum version supports MENUDEF, I suppose.\n\
- Thanks to ForrestMarkX, the Doom 2 bestiary now leaves proper decals on the wall.\n\
- The Heretic/Hexen actors directory has been changed from a big, clunky, useless file in actors/ to a sorted and organized folder in decorate/.\n\
- Duke 3D's pistol name has been changed from the M1911 that was in the .def to the Glock 17 its design is based off, due to...insistent request.\n\
- Thanks to PresidentPeople, Duke Nukem now bleeds his slightly-orange blood color from Duke Nukem 3D.\n\
- All SNDINFOs have been split into different files per each character, for easier tracking.";