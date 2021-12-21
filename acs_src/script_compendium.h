// Label, index, damage, defense, range, attack speed, difficulty, character symbol, small character, game logo, large character, big font, big font color, small font, small font color, background top wall, background bottom wall, background side banner right, background logo, background character symbol, background right banner, selected font color
str ClassInfo[CLASSCOUNT][MAXMODES][28] = 
{ 
	{{"Doomguy", 1, "A+", "C", "C", "D+", "Easy", "Damage", "TIPSYM01", "TIPHIL01", "TIPDGUY", "TPLGDOOM", "TPCHDOOM", "CMPSDOOM", "Red", "CMPSDOOM", "Red", "CMPBGDM1", "CMPBGDM2", "CMPBGDM3", "CMPBGDM4", "TIPHIL01", "", "", "", "DarkGray", "White" }, {"Doomguy (N64)", 1, "A+", "C", "C", "C-", "Easy", "Damage", "TIPSYM13", "TIPHIL13", "TIPD64G", "TPLG64DG", "TPCHDG64", "CMPSD64", "Red", "CMPSD64", "untranslated", "CMPBGD61", "CMPBGD62", "CMPBGD63", "CMPBGD64", "TIPSYM13", "CMPBGD66", "", "", "DarkGray", "White", "" }},
	{{"Chex Warrior", 2, "B-", "A+", "C+", "D", "Easiest", "Defense", "TIPSYM02", "TIPHIL02", "TIPCHEX", "TPLGCHEX", "TPCHCHEX", "CMPSDOOM", "Green", "CMPSDOOM", "Green", "CMPBGCH1", "CMPBGCH2", "CMPBGCH3", "", "TIPSYM02", "", "", "", "DarkGray", "White" }},
	{{"Corvus", 3, "C", "B", "D+", "C+", "Hard", "Utility", "TIPSYM03", "TIPHIL03", "TIPCORV", "TPLGCORV", "TPCHCORV", "CMPSHERE", "White", "CMPSHERE", "White", "CMPBGHE1", "CMPBGHE2", "CMPBGHE3", "CMPBGHE4", "TIPSYM03", "", "", "", "DarkGray", "White" }},
	{{"Blazkowicz", 4, "C-", "C+", "A", "A-", "Easy", "Marksman", "TIPSYM04", "TIPHIL04", "TIPBLASK", "TPLGWOLF", "TPCHWOLF", "CMPBWOLF", "WolfCompendiumLightGray", "CMPSWOLF", "WolfCompendiumYellow", "CMPBGWF1", "CMPBGWF2", "CMPBGWF3", "CMPBGWF4", "TIPSYM04", "", "", "", "WolfCompendiumGray", "WolfCompendiumLightGray" },{"Blazkowicz", 4, "C-", "C+", "A", "A-", "Easy", "Marksman", "TIPSYM04", "TIPHIL04", "TIPBLASK", "TPLGWOLF", "TPCHWOLF", "CMPBWOLF", "WolfCompendiumLightGray", "CMPSWOLF", "WolfCompendiumYellow", "CMPBGWS1", "CMPBGWS2", "CMPBGWS3", "CMPBGWF4", "TIPSYM04", "", "", "", "WolfCompendiumGray", "WolfCompendiumLightGray" }, {"Blazkowicz", 4, "C-", "C+", "A", "A-", "Easy", "Marksman", "TIPSYM04", "TIPHIL04", "TIPBLASK", "TPLGWOLF", "TPCHWOLF", "CMPBWOLF", "WolfCompendiumLightGray", "CMPSWOLF", "WolfCompendiumYellow", "CMPBGWF1", "CMPBGWF2", "CMPBGWF3", "CMPBGWF4", "TIPSYM04", "", "", "", "WolfCompendiumGray", "WolfCompendiumLightGray" },{"Blazkowicz", 4, "A-", "C+", "D+", "A-", "Avg", "Scavenger", "TIPSYM04", "TIPHIL29", "TIPTKOPF", "TPLGTKPF", "TPCHWOLF", "CMPBWOLF", "WolfCompendiumYellow", "CMPSWOLF", "TotenkopfCompendiumRed", "CMPBGTK1", "CMPBGTK2", "CMPBGTK3", "CMPBGTK4", "TIPSYM04", "", "", "", "WolfCompendiumGray", "WolfCompendiumLightGray", "Randy Pitchford laid an egg" }},
	{{"Parias", 5, "B+", "B-", "C-", "B", "Avg", "Brawler", "TIPSYM05", "TIPHIL05", "TIPPARIA", "TPLGHEXN", "TPCHHEXN", "CMPSHEX1", "untranslated", "CMPSHEX1", "untranslated", "CMPBGH11", "CMPBGH12", "CMPBGH13", "CMPBGHE4", "CMPBGH15", "", "", "", "DarkGray", "White" }, {"Daedalon", 5, "C+", "D+", "C+", "C-", "Hard", "Mage", "TIPSYM05", "TIPHIL05", "TIPHMAGE", "TPLGHEXN", "TPCHHEXM", "CMPSHEX1", "untranslated", "CMPSHEX1", "untranslated", "CMPBGH11", "CMPBGH12", "CMPBGH13", "CMPBGHE4", "CMPBGH15", "", "", "", "DarkGray", "White" }, {"Baratus", 5, "A-", "B-", "D", "D+", "Expert", "Berserker", "TIPSYM05", "TIPHIL05", "TIPBARAT", "TPLGHEXN", "TPCHHEXF", "CMPSHEX1", "untranslated", "CMPSHEX1", "untranslated", "CMPBGH11", "CMPBGH12", "CMPBGH13", "CMPBGHE4", "CMPBGH15", "", "", "", "DarkGray", "White" }},
	{{"Duke Nukem", 6, "A-", "E", "B-", "B", "Avg", "Crowd Control", "TIPSYM06", "TIPHIL06", "TIPDUKE", "TPLGDUKE", "TPCHDUKE", "CMPSDUKE", "Gold", "CMPSDUKE", "Gold", "CMPBGDN1", "CMPBGDN2", "CMPBGDN3", "CMPBGDN4", "CMPBGDN5", "", "", "", "DarkGray", "White" },{"Duke Nukem", 6, "A-", "E", "B-", "B", "Avg", "Crowd Control", "TIPSYM06", "TIPHIL06", "TIPDUKEB", "TPLGDUKE", "TPCHDUKE", "CMPSDUKE", "Gold", "CMPSDUKE", "Gold", "CMPBGDB1", "CMPBGDB2", "CMPBGDB3", "CMPBGDN4", "CMPBGDN5", "", "", "DarkGray", "White" }},
	{{"Security Officer", 7, "B", "C", "D", "A+", "Expert", "Supression", "TIPSYM07", "TIPHIL07", "TIPSECOF", "TPLGMARA", "TPCHMARA", "CMPBMARA", "MarathonCompendiumWhite", "CMPSMARA", "MarathonCompendiumGreen", "CMPBGMA1", "CMPBGMA2", "CMPBGMA3", "CMPBGMA4", "CMPBGMA5", "", "", "", "MarathonCompendiumGray", "MarathonCompendiumWhite" }},
	{{"Ranger", 8, "D+", "C+", "B", "B+", "Hard", "Artillery", "TIPSYM08", "TIPHIL08", "TIPRANGE", "TPLGQUAK", "TPCHQUAK", "CMPBQUAK", "QuakeCompendiumBrown", "CMPBQUAK", "QuakeCompendiumBrown", "CMPBGQ11", "CMPBGQ12", "CMPBGQ13", "CMPBGQ14", "TIPSYM08", "", "", "", "QuakeCompendiumDarkGray", "QuakeCompendiumGray" }},
	{{"Ian Paul Freeley", 9, "B+", "D", "C-", "D-", "Avg", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPIANPF", "TPLGROTT", "TPCHROTT", "CMPBROTT", "RottCompendiumOrange", "CMPSROTT", "Orange", "CMPBGRT1", "CMPBGRT2", "", "CMPBGRT4", "CMPBGRT5", "", "", "", "Gray", "RottCompendiumOrange" }, {"Taradino Cassatt", 9, "B+", "D", "C-", "D-", "Avg", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPTCASS", "TPLGROTT", "TPCHTCAS", "CMPBROTT", "RottCompendiumOrange", "CMPSROTT", "Orange", "CMPBGRT1", "CMPBGRT2", "", "CMPBGRT4", "CMPBGRT5", "", "", "", "Gray", "RottCompendiumOrange" },{"Thi Barrett", 9, "B+", "D", "C-", "D-", "Avg", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPTBARR", "TPLGROTT", "TPCHTBAR", "CMPBROTT", "RottCompendiumOrange", "CMPSROTT", "Orange", "CMPBGRT1", "CMPBGRT2", "", "CMPBGRT4", "CMPBGRT5", "", "", "", "Gray", "RottCompendiumOrange" }, {"Lorelei Ni", 9, "B+", "D", "C-", "D-", "Avg", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPLORNI", "TPLGROTT", "TPCHLLNI", "CMPBROTT", "RottCompendiumOrange", "CMPSROTT", "Orange", "CMPBGRT1", "CMPBGRT2", "", "CMPBGRT4", "CMPBGRT5", "", "", "", "Gray", "RottCompendiumOrange" }, {"Doug Wendt", 9, "B+", "D", "C-", "D-", "Avg", "Demolitions", "TIPSYM09", "TIPHIL09", "TIPDOUGW", "TPLGROTT", "TPCHDOUG", "CMPBROTT", "RottCompendiumOrange", "CMPSROTT", "Orange", "CMPBGRT1", "CMPBGRT2", "", "CMPBGRT4", "CMPBGRT5", "", "", "", "Gray", "RottCompendiumOrange" }},
	{{"Blake Stone", 10, "B", "C-", "B-", "A+", "Hard", "Skirmisher", "TIPSYM10", "TIPHIL10", "TIPBSTON", "TPLGBSTN", "TPCHBSTN", "CMPBBLAK", "BSCompendiumLightYellow", "CMPSBLAK", "BSCompendiumMediumGreen", "CMPBGBS1", "CMPBGBS2", "CMPBGBS3", "CMPBGRT4", "CMPBGBS5", "", "", "", "BSCompendiumYellow", "BSCompendiumLightYellow" }},
	{{"Caleb", 11, "A", "E+", "D+", "A+", "Avg", "Pyromaniac", "TIPSYM11", "TIPHIL11", "TIPCALEB", "TPLGBLOD", "TPCHBLOD", "CMPBBLOD", "Red", "CMPSBLOD", "Red", "CMPBGBL1", "CMPBGBL2", "CMPBGBL3", "CMPBGBL4", "CMPBGBL5", "", "", "", "DarkGray", "White" }},
	{{"Strifeguy", 12, "B+", "B, A+", "D-, A+", "B+", "Hard", "Strategist", "TIPSYM12", "TIPHIL12", "TIPSGUY", "TPLGSTRF", "TPCHSTRF", "CMPSSTRF", "untranslated", "CMPSSTRF", "untranslated", "CMPBGSR1", "CMPBGSR2", "CMPBGSR3", "CMPBGSR4", "CMPBGSR5", "CMPBGSR6", "", "", "DarkGray", "White" }},
	{{"Eleena", 13, "B+", "E", "D", "C+", "Hard", "Area Denial", "TIPSYM14", "TIPHIL14", "TIPELENA", "TPLGERAD", "TPCHERAD", "CMPBERAD", "untranslated", "CMPSERAD", "untranslated", "CMPBGER1", "CMPBGER2", "CMPBGER3", "CMPBGER4", "CMPBGER5", "", "", "", "DarkGray", "White" }},
	{{"Space Seal", 14, "B+", "D-", "B+", "A-", "Avg", "DPS", "TIPSYM15", "TIPHIL15" , "TIPSSEAL", "TPLGCOR7", "TPCHCOR7", "CMPBCOR7", "Corridor7CompendiumBrightYellow", "CMPSCOR7", "BSCompendiumMediumGreen", "CMPBGC71", "CMPBGC72", "CMPBGC73", "CMPBGC74", "CMPBGC75", "", "", "", "Corridor7CompendiumYellow", "Corridor7CompendiumBrightYellow" }},
	{{"LDF Commando", 15, "E", "D+", "S", "A+", "Easiest", "Backup", "TIPSYM16", "TIPHIL16", "TIPREBEL", "TPLGRMR", "TPCHRMR", "CMPBRMR", "untranslated", "CMPSRMR", "RMRTeal", "CMPBGRB1", "CMPBGRB2", "CMPBGRB3", "CMPBGRB4", "CMPBGRB5", "CMPBGRB6", "", "", "DarkGray", "White" }},
	{{"Kyle Katarn", 16, "B", "B", "C", "A-,S", "Easy", "Assault", "TIPSYM17", "TIPHIL17", "TIPKYLEK", "TPLGKYLE", "TPCHKYLE", "CMPSSWDF", "DarkForcesGreen", "CMPSSWDF", "DarkForcesRed", "CMPBGDF1", "CMPBGDF2", "CMPBGDF3", "CMPBGDF4", "CMPBGDF5", "", "", "", "DarkForcesGray", "DarkForcesWhite" }},
	{{"Mooman", 17, "B", "C+", "B-", "B+", "Easy", "Luck", "TIPSYM18", "TIPHIL18", "TIPMOOMN", "TPLGIPOG", "TPCHIPOG", "CMPSIPOG", "IPOGRed", "CMPSIPOG", "IPOGRed", "CMPBGIP1", "CMPBGIP2", "CMPBGIP3", "CMPBGIP4", "CMPBGIP5", "CMPBGIP6", "CMPBGIP7", "CMPBGIP8", "DarkGray", "White" }},
	{{"Jack Curtis", 18, "A+", "C+", "C-", "B-", "Hard", "Psychic", "TIPSYM19", "TIPHIL19", "TIPJACKC", "TPLGJACK", "TPCHJACK", "CMPBDISRUP", "untranslated", "CMPSDISRUP", "untranslated", "CMPBGDS1", "CMPBGDS2", "CMPBGDS3", "CMPBGDS4", "CMPBGDS5", "", "", "", "DarkGray", "White" }},
	{{"Grondoval", 19, "A+", "S", "E", "D-", "Hard", "Tank", "TIPSYM20", "TIPHIL20", "TIPGROND", "TPLGWTCH", "TPCHWTCH", "CMPBWITCH", "Untranslated", "CMPBWITCH", "untranslated", "CMPBGWT1", "CMPBGWT2", "CMPBGWT3", "CMPBGC74", "CMPBGWT5", "", "", "", "DarkGray", "White" }},
	{{"Gordon Freeman", 20, "S", "D", "B+", "D", "Expert", "Guerilla", "TIPSYM21", "TIPHIL21", "TIPGFREE", "TPLGFREE", "TPCHFREE", "CMPBHALF", "HalfLifeOrange", "CMPBHALF", "HalfLifeOrange", "CMPBGHL1", "CMPBGHL2", "CMPBGHL3", "CMPBGHL4", "CMPBGHL5", "", "", "", "HalfLifeGray", "HalfLifeWhite" },{"Adrian Shephard", 20, "A+", "D", "B", "D+", "Hard", "Guerilla", "TIPSYM21", "TIPHIL21", "TIPASHEP", "TPLGSHEP", "TPCHSHEP", "CMPBOPPF", "OpposingForceYellow", "CMPSOPPF", "OpposingForceGreen", "CMPBGOP1", "CMPBGOP2", "CMPBGOP3", "CMPBGOP4", "CMPBGOP5", "CMPBGOP6", "", "", "DarkGray", "White" }},
	{{"Lo Wang", 21, "B", "E", "B+", "B+", "Hard", "Ninja", "TIPSYM22", "TIPHIL22", "TIPLWANG", "TPLGWANG", "TPCHWANG", "CMPSDUKE", "", "SWCOOKIE", "Gray50", "CMPBGSW1", "CMPBGSW2", "", "CMPBGDN4", "CMPBGSW5", "", "", "", "DarkGray", "White" }},
	{{"Cybermage", 22, "A-", "C+", "C", "B+", "Hard", "Magician", "TIPSYM23", "TIPHIL23", "TIPCMAGE", "TPLGCMDA", "TPCHCMDA", "CMPBCYBM", "CyberMageGreen", "CMPBCYBM", "CyberMageYellow", "CMPBGCM1", "CMPBGCM2", "CMPBGCM3", "CMPBGCM4", "CMPBGCM5", "", "", "", "CyberMageDarkGreen", "CyberMageGreen" }},
	{{"Jon", 23, "A-", "C-", "B-", "D+", "Avg", "Veteran", "TIPSYM24", "TIPHIL24", "TIPPSJON", "TPLGPSEX", "TPCHPSEX", "CMPSPOWR", "PowerSlaveCompendiumRed", "CMPSPOWR", "", "CMPBGPS1", "CMPBGPS2", "CMPBGPS3", "CMPBGPS4", "CMPBGPS5", "CMPBGPS6", "CMPBGPS7", "CMPBGPS8", "PowerSlaveCompendiumDarkTan", "PowerSlaveCompendiumLightTan" }},
	{{"Leonard", 24, "A", "B+", "C", "A", "Avg", "Drunkard", "TIPSYM25", "TIPHIL25", "TIPRRLEO", "TPLGLEON", "TPCHLEON", "CMPBLEON", "untranslated", "CMPSLEON", "untranslated", "CMPBGRR1", "CMPBGRR2", "CMPBGRR3", "CMPBGRR4", "CMPBGRR5", "", "", "", "DarkGray", "White" }},
	{{"Bitterman", 25, "C", "D+", "C-", "B+", "Hard", "Armory", "TIPSYM26", "TIPHIL26", "TIPQ2MAN", "TPLGBITT", "TPCHBITT", "CMPSQUA2", "Quake2CompendiumWhite", "CMPSQUA2", "Quake2CompendiumGreen", "CMPBGQ21", "CMPBGQ22", "CMPBGQ23", "CMPBGQ14", "CMPBGQ25", "CMPBGQ26", "", "", "Quake2CompendiumGray", "Quake2CompendiumWhite" }},
	{{"Demoness", 26, "B+,S", "D+,B-", "D+", "B+", "Hard", "Evolution", "TIPSYM27", "TIPHIL27", "TIPDEMON", "TPLGHEX2", "TPCHHEX2", "CMPSHEX2", "Gold", "CMPSHEX2", "Red", "CMPBGH21", "CMPBGH22", "CMPBGH23", "CMPBGH24", "CMPBGH25", "", "", "", "DarkGray", "White" }},
	{{"James Bond", 27, "C-", "D-", "C", "S", "Hard", "Spy", "TIPSYM28", "TIPHIL28", "TIPJBOND", "TPLGBOND", "TPCHBOND", "GEFONTS", "Gold", "GEFONTS", "White", "CMPBGGE1", "CMPBGGE2", "", "CMPBGGE4", "CMPBGGE5", "", "", "", "DarkGray", "White" }},
	{{"Petton Everhail", 28, "A+", "B", "D+", "A-", "Expert", "Specialist", "TIPSYM29", "TIPHIL29", "TIPEVERH", "TPLGCT3D", "TPCHEVER", "CMPBWOLF", "TotenkopfCompendiumRed", "CMPSWOLF", "WolfCompendiumYellow", "CMPBGCT1", "CMPBGCT2", "CMPBGCT3", "CMPBGCT4", "TIPSYM29", "", "", "", "WolfCompendiumGray", "WolfCompendiumLightGray" }},
};

int ClassFontScales[CLASSCOUNT][2] = 
{  
	{ 1.0, 1.0 },	{ 1.0, 1.0 },	{ 1.0, 1.0 },	{ 2.5, 2.0 },	{ 1.0, 1.0 },	{ 1.1, 1.1 },
	{ 2.0, 1.5 },	{ 4.5, 4.5 },	{ 2.0, 1.0 },	{ 1.5, 1.0 },	{ 2.0, 0.75 },	{ 1.0, 1.0 },	
	{ 2.5, 0.67 },	{ 1.5, 1.0 },	{ 4.0, 1.5 },	{ 2.0, 2.0 },	{ 0.6, 0.75 },	{ 1.5, 1.0 },	
	{ 1.5, 1.5 },	{ 1.75, 1.5 },	{ 1.0, 0.5 },	{ 2.5, 2.5 },	{ 1.0, 1.0 },    { 2.125, 1.25 },
	{ 4.5, 4.5 },	{ 1.0, 1.0 },	{ 1.0, 1.0 },    { 2.5, 2.0 },
};

str CompendiumWheelRot[29] = { "CMPWHL01", "CMPWHL02", "CMPWHL03", "CMPWHL04", "CMPWHL05", "CMPWHL06", "CMPWHL07", "CMPWHL08", "CMPWHL09", "CMPWHL10", "CMPWHL11", "CMPWHL12", "CMPWHL13", "CMPWHL14", "CMPWHL15", "CMPWHL16", "CMPWHL17", "CMPWHL18", "CMPWHL19", "CMPWHL20", "CMPWHL21", "CMPWHL22", "CMPWHL23", "CMPWHL24", "CMPWHL25", "CMPWHL26", "CMPWHL27", "CMPWHL28", "CMPWHL29" };

str StatPages[3] = { "Summary", "Traits", "Changes" };
str SelectionColors[2] = { "DarkGray", "white" };
str HeroInformation[CLASSCOUNT][MAXMODES][25][3] =
{
	{
		{
			{ "Summary", "The man. The myth. The icon. The legend. The hero. Doomguy has stood against untold legions throughout all 28 years of his one-man war on Hell, and here he stands ready to go against more. He is a man that needs no introduction, as his abilities have been proven and honed and harnessed time and time again--the rest of the heroes will have to work double to even match the bar Doomguy is constantly raising.", ""},
			
			{ "Traits", "...And I Feel Mighty: Doomguy holds the Super Shotgun, one of the most devastating shotguns in the game as well as the BFG9000, one of the strongest ultimate weapons giving him quite the firepower. It's very hard for most other classes to match or exceed the damage on those 2 in their own weapons tier.
			\n\nTo Hell With Respect!: Doomguy is the most unchanged in his function and his abilities. Playing with him is just like playing Doom II, so show these newcomers who they better call granddaddy.
			\n\nA Touch Of Hellish Fantasy: Doom always had inspirations from D&D, from monster designs and even gameplay, Doomguy's damage is factored with a roll, though it's skewd towards the higher end.", ""},
			
			{ "Changes", "- The Berserk operates off the Chainsaw as well as the Fist, allowing Doomguy to have a DPS alternative rather than focusing on only Burst.
			\n	^- : When in Berserk, the Chainsaw deals 7-70 damage every 3 tics.
			\n\n- The Berserk fist does more damage (from 20-200 to 120-240) and has different sounds. This allows the Berserk fist to be a viable weapon in comparison to the Rocket Launcher and Super Shotguns, especially against larger enemies.
			\n\n- Smooth animations skews the damage of Doomguy's weapons overall higher, although it's still randomized. Turning on vanilla animations enables vanilla damage.
			\n\n- The Fist no longer alerts monsters, because that was stupid.
			\n\n- Doomguy never had to deal with ghosts. In Heretic and HeXen, the Shotgun, Super Shotgun, and Chaingun pass harmlessly through ghosts.
			\n\n- There are not many other changes. In Samsara, the games meld to Doom II's gameplay, rather than vice-versa.", ""},
		},
		{
			{ "Summary", "The demon slaying man. The resurrected myth. The reappearing icon. The reawakened legend. The hero returning. Doomguy has stood against untold legions throughout all 28 years of his one-man war on Hell, and here he returns in a new but familar form. He is a man that still needs no introduction, as his abilities have been proven and honed and harnessed time and time again--the rest of the heroes will have to work double to even match the bar Doomguy64 is still constantly raising.", ""},
			
			{ "Traits", "...And I Am Still Mighty: Doomguy64 holds the Super Shotgun in the game as well as the BFG9000, one of the strongest ultimate weapons giving him quite the firepower. It's very hard for most other classes to match or exceed the damage on those 2 in their own weapons tier.
			\n\nTo Hell With Respect!...Again!: Playing with Doom 64 mode is just like playing Doom 64, so show these newcomers who they better call granddaddy.
			\n\nAss Kicking Console Power!: Doomguy64 came from a console version of doom for the nintendo 64, along with it came some slight variations to his weapons, his chaingun and pistol are slightly faster but more inaccurate, his chainsaw cuts enemies faster, his BFG is a tad slower, and his rockets have knockback, giving subtle differences from his original PC counterpart.
			\n\nHellish Fantasy Redux: Doomguy64 Still uses a damage rolling system like in the original doom 1 & 2.", ""},
			
			{ "Changes", "", ""},
		},
	},
	{
		{
			{ "Summary", "Fred Chexter sets himself apart from his compatriots by being a genuinely nice (if not shy) guy among the gritty badasses that populate the Wheel of Samsara. He doesn't even kill his enemies, he just sends them back to their home dimension! That being said, he is still a trained warrior and the IFOC's absolute best warrior; whether it's being on the wrong end of a coachgun or face to face with the nastiest nightmares Hell can offer, he never flinches. Just because he's friendly doesn't mean you're suddenly safe.", ""},
			
			{ "Traits", "The Mission Continues...: Chexter ain't got time to bleed...or the rating to. Hailing from an easy game where all the enemies did negligible damage without threat of death means that he's just as safe here. Let the kids play--Chex Warrior takes 20% less damage from everything.
			\n\nHold the Party Mix: The Zorch Propulsor seems like a typical rocket launcher, but sometime in between Chex Quest 1 and 3 Chexter got tired of accidentally zorching his own leg to another place. In 3, the Zorch Propulsor was modified to do no self-damage--and kept in here.", ""},
			
			{ "Changes", "- Before, the Mini-Zorcher's animation was pressing the button after it fires. Now it's pressing as it fires.
			\n\n- The Bootspoon no longer alerts monsters, and has a sound for impacting walls.
			\n\n- All of Chexter's weapons leave small zorch puffs when hitting things now, for easier identifying of impact.
			\n\n- The GLDefs for Chex Quest were yellow-ish, since they inherited from Doom. Now they're red, to match the zorch colors.
			\n\n- The Large Zorcher reloads a slight bit quicker now (from a firing time of 37/44 tics to 32/37 tics) to differentiate it from Doomguy's Shotgun.
			\n\n- All of Chexter's weapons are slightly more accurate (from bullet spread of 5.6 to 4) to differentiate them from Doomguy's, and to make up for the lack of an SSG.
			\n\n- The Phasing Zorcher didn't leave marks on the wall in vanilla Chex Quest, but now does because pretty.
			\n\n- The Super Large Zorcher was planned for Chex Quest 3, but didn't make it through. If it did, it likely would have been an SSG clone.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "The Heretic himself, Corvus is a noble elven warrior and mage driven by fury and a near-psychotic thirst to avenge his people. His quest has sent him from fighting legions of the damned and undead in mystical fantasy lands to fighting legions of the damned and undead in alternate lands. No matter where he is, though, his bloodlust will not be quenched until he has personally slaughtered every enemy he can get his hand on.", ""},
			
			{ "Traits", "Roll d20 for Damage: Heretic's damage scale worked on a much higher probability curve than Doom's, and so Corvus' weapons do much more random damage. You're just as likely to down someone with the Dragon Claw in seven shots as you are in fifteen.
			\n\nBag of Holding: Corvus can carry the most inventory items out of all the Heroes, with every major item being carryable. Corvus even starts with the Bomb of the Ancients and Mine of the Ancients, which provide powerful explosives on demand.", ""},
			
			{ "Changes", "- The Tomed staff has had its damage increased from 18-81 to 60-120, to give Corvus a bit of a burst damage oomph.
			\n\n- The Elven Wand did not have any BRIGHT frames in Heretic.
			\n\n- The Staff no longer alerts monsters.
			\n\n- The tomed Elven Wand no longer passes through ghosts. All characters' basic weapons should be able to hit ghosts.
			\n\n- The Firemace was incredibly underwhelming as an ultimate weapon. It has been moved to a slot II weapon, rather than VII.
			\n\n- The Firemace uses less ammo, shooting four balls for every one ammo. This is to differentiate it from the Dragon Claw.
			\n\n- The tomed Dragon Claw and Hellstaff use less ammo--this is to tempt players away from just tomed Firemacing everything.
			\n\n- The Staff and Gauntlets of the Necromancer no longer lower and re-raise when the Tome of Power runs out, so as to smooth out gameplay.
			\n\n- The Gauntlets of the Necromancer and Tomed Staff now have GLDefs, because pretty.
			\n\n- The tomed Dragon Claw fires a near-hitscan now, rather than a very fast projectile. Giving it slower speeds glitched the rippers and caused them to go all over the map.
			\n\n- The Tome of Power works more like Heretic II than Heretic, being a permanent inventory item.
			\n\n- A new slot 7 was added, Staff of D'Sparil as tomb of power was moved to unique slot.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "William \"B.J.\" Blazkowicz was the one that started it all, a secret agent that personally fought his way out of the horrifying Nazi prisons and personally slew Adolf Hitler, armed with nothing more than a pistol, a knife, and undying devotion to his country. Having gone up against an endless sea of Nazis, mystic beasts, undead monstrosities, and towering madmen, B.J. has seen it all and fought it all. If it's a threat to the world, he will put it down. Without questions, without hesitation, and without compromises.", ""},
			
			{ "Traits", "Call Apogee, Say 'Bullshit!': Poor B.J. was from an era where weapon design was much simpler. He has no Shotgun weapons, no Slot III weapon, and no weapons that use Ammo 2. Any Ammo 2 picked up is instead converted to Ammo 1.
			\n\nHeroes Don't Quit: Being a POW in Nazi camps taught B.J. some survival techniques the hard way. When low on health, B.J. can drink up certain piles of gibs and blood for a boost. Restricted only to decorations, unfortunately--can't slaughter imps and drink off them.", ""},
			
			{ "Changes", "- I was unable to get a hand on Wolfenstein for the Mac, so I don't know how accurate/inaccurate the Flamethrower/Rocket Launcher is to their game.
			\n\n- The Mac version's rocket launcher didn't explode on impact with surfaces as the Wolf 3D engine lacked radius damage code. This was changed as every class should be able to kill the icon of sin.
			\n\n- The Knife's unupgraded damage is more true to Wolf 3D, but its upgraded graphics/sound are the ones in Wolf3D.
			\n\n- When upgraded, the knife does damage on every tic it's thrust in, reminiscent of other slot I weapons.
			\n\n- The Spear of Destiny is now an actual weapon. Its behavior is entirely original, though its appearance is based on the Spear of Destiny boxart. A lot of Doom II levelsets practically require an ultimate weapon eventually.
			\n\n- Drinking up gibs is at minimum 20 HP, rather than 10.", ""},
		},
		{
			{ "Summary", "William \"B.J.\" Blazkowicz was the one that started it all, a secret agent that personally fought his way out of the horrifying Nazi prisons and personally slew Adolf Hitler, armed with nothing more than a pistol, a knife, and undying devotion to his country. Having gone up against an endless sea of Nazis, mystic beasts, undead monstrosities, and towering madmen, B.J. has seen it all and fought it all. If it's a threat to the world, he will put it down. Without questions, without hesitation, and without compromises.", ""},
			
			{ "Traits", "Call Apogee, Say 'Bullshit!': Poor B.J. was from an era where weapon design was much simpler. He has no Shotgun weapons, no Slot III weapon, and no weapons that use Ammo 2. Any Ammo 2 picked up is instead converted to Ammo 1.
			\n\nHeroes Don't Quit: Being a POW in Nazi camps taught B.J. some survival techniques the hard way. When low on health, B.J. can drink up certain piles of gibs and blood for a boost. Restricted only to decorations, unfortunately--can't slaughter imps and drink off them.", ""},
			
			{ "Changes", "- I was unable to get a hand on Wolfenstein for the Mac, so I don't know how accurate/inaccurate the Flamethrower/Rocket Launcher is to their game.
			\n\n- The Mac version's rocket launcher didn't explode on impact with surfaces as the Wolf 3D engine lacked radius damage code. This was changed as every class should be able to kill the icon of sin.
			\n\n- The Knife's unupgraded damage is more true to Wolf 3D, but its upgraded graphics/sound are the ones in Wolf3D.
			\n\n- When upgraded, the knife does damage on every tic it's thrust in, reminiscent of other slot I weapons.
			\n\n- The Spear of Destiny is now an actual weapon. Its behavior is entirely original, though its appearance is based on the Spear of Destiny boxart. A lot of Doom II levelsets practically require an ultimate weapon eventually.
			\n\n- Drinking up gibs is at minimum 20 HP, rather than 10.", ""},
		},
		{
			{ "Summary", "William \"B.J.\" Blazkowicz was the one that started it all, a secret agent that personally fought his way out of the horrifying Nazi prisons and personally slew Adolf Hitler, armed with nothing more than a pistol, a knife, and undying devotion to his country. Having gone up against an endless sea of Nazis, mystic beasts, undead monstrosities, and towering madmen, B.J. has seen it all and fought it all. If it's a threat to the world, he will put it down. Without questions, without hesitation, and without compromises.", ""},
			
			{ "Traits", "Call Apogee, Say 'Bullshit!': Poor B.J. was from an era where weapon design was much simpler. He has no Shotgun weapons, no Slot III weapon, and no weapons that use Ammo 2. Any Ammo 2 picked up is instead converted to Ammo 1.
			\n\nHeroes Don't Quit: Being a POW in Nazi camps taught B.J. some survival techniques the hard way. When low on health, B.J. can drink up certain piles of gibs and blood for a boost. Restricted only to decorations, unfortunately--can't slaughter imps and drink off them.", ""},
			
			{ "Changes", "- I was unable to get a hand on Wolfenstein for the Mac, so I don't know how accurate/inaccurate the Flamethrower/Rocket Launcher is to their game.
			\n\n- The Mac version's rocket launcher didn't explode on impact with surfaces as the Wolf 3D engine lacked radius damage code. This was changed as every class should be able to kill the icon of sin.
			\n\n- The Knife's unupgraded damage is more true to Wolf 3D, but its upgraded graphics/sound are the ones in Wolf3D.
			\n\n- When upgraded, the knife does damage on every tic it's thrust in, reminiscent of other slot I weapons.
			\n\n- The Spear of Destiny is now an actual weapon. Its behavior is entirely original, though its appearance is based on the Spear of Destiny boxart. A lot of Doom II levelsets practically require an ultimate weapon eventually.
			\n\n- Drinking up gibs is at minimum 20 HP, rather than 10.", ""},
		},
		{
			{ "Summary", "William \"B.J.\" Blazkowicz was the one that started it all, a secret agent that personally fought his way out of the horrifying Nazi prisons and personally slew Adolf Hitler, armed with nothing more than a pistol, a knife, and undying devotion to his country. Having gone up against an endless sea of Nazis, mystic beasts, undead monstrosities, and towering madmen, B.J. has seen it all and fought it all. If it's a threat to the world, he will put it down. Without questions, without hesitation, and without compromises.", ""},
			
			{ "Traits", "Call Apogee, Say 'Bullshit!': Poor B.J. was from an era where weapon design was much simpler. He has no Shotgun weapons, no Slot III weapon, and no weapons that use Ammo 2. Any Ammo 2 picked up is instead converted to Ammo 1.
			\n\nHeroes Don't Quit: Being a POW in Nazi camps taught B.J. some survival techniques the hard way. When low on health, B.J. can drink up certain piles of gibs and blood for a boost. Restricted only to decorations, unfortunately--can't slaughter imps and drink off them.", ""},
			
			{ "Changes", "- Castle Totenkopf SDL uses a splash damage formula that falls quadratically instead of linearly like Doom does. As a result, explosive damage functions differently here than in the source.
			\n\n- The Kar98K and STG44 now do more consistent damage compared to the original.
			\n\n- The Regeneration Sphere in Totenkopf SDL would provide BJ with perpetually regenerating health. In this game, it regenerates only up to 30, similar to Wolfenstein The New Order.", ""},
		},
	},
	{
		{
			{ "Summary", "A high cleric of the Church, second only to Traductus, Parias is both a man of faith and a man of action. His righteousness is rivalled only by his terrifying power, and he can swap at a moment's notice from praying for his enemies' souls to hacking their spine in twain. Being a student of both the arcane and the martial arts has made him a robust fighter that can swap from a physical to a mystical fighting capability whenever a situation calls for it, and makes him perhaps the most terrifying Hero in the Wheel of Samsara.", ""},
			
			{ "Traits", "Fianchetto: In HeXen, every class had 0.25 RadiusDamageFactor--which meant they only took a quarter damage from explosives. This is retained here, allowing him to wade through the fray with minimal damage to get closer.
			\n\nBoden's Mate: HeXen's gameplay had a large emphasis on mobility. Not only did the classes have different speeds, but there was also quite a bit of platforming. In order to help close the distance and get into melee, Parias has Baratus' runspeed and HeXen's jump height.", ""},
			
			{ "Changes", "- The most obvious: Parias, Daedolon, and Baratus now have at least 7 weapons instead of four.
			\n\n- All three Hexen classes are now selectable, rather than having Parias use nearly all the games' weapons. This means the classes now have a lot of weapons that weren't actually in Hexen, but care was taken to ensure they are similar to weapons that would have appeared in Hexen had the number of weapons per class match Doom more closely.
			\n\n- The Mace of Contrition no longer alerts monsters.
			\n\n- The Firestorm's surrounding fireballs do more damage, having their A_Explode increased from radius 20/explosive damage 20 to 64/32, so as to match the power of the Plasma Rifle.
			\n\n- The Serpent Staff's poison bolts were reduced in damage from 5-40 to 4-16 per shot, so as to match Chaingun power.
			\n\n- The heal of the Serpent Staff's melee has been increased and quickened, and can now heal for beyond 100 health, so as to give it an extra use.
			\n\n- The Wraithverge takes 20 of each ammo now, rather than 17, to match the costliness of other ultimate weapons.
			\n\n- The Wraithverge's rate of fire has been slightly decreased by adding a 20-tic hang time at the end, to match the slow rate of fire of other ultimate weapons.
			\n\n- The Flechette no longer hurts allied players or the player, so as to reduce griefing.
			\n\n- Parias' mana 2 has a limit of 300 due to running off Cells, rather than 200.
			\n\n- The Mystic Ambit Incant sprays armor shards as well as giving health, so as to additionally assist allies.
			\n\n- The ultimates are now picked up in one piece, rather than needing to be assembled. This is to match the other games' ultimates.", ""},
		},
		{
			{ "Summary", "Being a high ranking mage, Daedolon only answers to Menelkir. What he may lack physically, he makes up for with mind and spirit. Being recognized as a prodigy from the Arcanum from a very young age, he quickly gained the ability to weave the fabric of reality with his spells. But spending a lifetime studying ancient tomes and scrolls did not afford him much physical training, and as a result, would rather stay out of brawls. As a result of his wide array of magical knowledge, most of his enemies are wise enough to stay on his good side.", ""},
			
			{ "Traits", "Fianchetto: In HeXen, every class had 0.25 RadiusDamageFactor--which meant they only took a quarter damage from explosives. This is retained here, allowing him to wade through the fray with minimal damage to get closer.
			\n\nBoden's Mate: HeXen's gameplay had a large emphasis on mobility. Not only did the classes have different speeds, but there was also quite a bit of platforming. In order to help close the distance and get into melee, Daedolon has Baratus' runspeed and HeXen's jump height.", ""},
			
			{ "Changes", "- The most obvious: Parias, Daedolon, and Baratus now have at least 7 weapons instead of four.
			\n\n- All three Hexen classes are now selectable, rather than having Parias use nearly all the games' weapons. This means the classes now have a lot of weapons that weren't actually in Hexen, but care was taken to ensure they are similar to weapons that would have appeared in Hexen had the number of weapons per class match Doom more closely.
			\n\n- The Sapphire Wand no longer alerts monsters.
			\n\n- The Arcs of Death have had their damage increased slightly to better match Plasma Rifle power.
			\n\n- The Frost Shards have been given a little bit of an extra melee oomph, in order to give Daedolon some much needed melee ability.
			\n\n- The Bloodscourge does greater damage to match its high ammo cost.
			\n\n- The Frost Shards' rate of fire has been slightly increased by reducing the after-shot frames from 15 tics to 11, to assist it in crowd-control.
			\n\n- The Flechette no longer hurts allied players or the player, so as to reduce griefing.
			\n\n- The Sapphire Wand's radius/height was reduced from 12/8 to 3/2, so as to help Daedolon in maps where he needs to shoot through the bars.
			\n\n- Daedolon's mana 2 has a limit of 300 due to running off Cells, rather than 200.
			\n\n- The Disc of Repulsion has a six second cooldown to make it much more useful.
			\n\n- The ultimates are now picked up in one piece, rather than needing to be assembled. This is to match the other games' ultimates.", ""},
		},
		{
			{ "Summary", "A master figher of the legion, second only to Zedek, Baratus is just as aggressive as he is intimidating. Being trained mercilessly in the Legion, he has become a virtually unstoppable war machine who unnerves others by merely being in their presence. As he's a master of the weapons and artifacts of his order, he prefers to fight up close and personal; in this regard, he's unmatched. This isn't to say he doesn't use more complex weapons, given they are simple enough to use.", ""},
			
			{ "Traits", "Fianchetto: In HeXen, every class had 0.25 RadiusDamageFactor--which meant they only took a quarter damage from explosives. This is retained here, allowing him to wade through the fray with minimal damage to get closer.
			\n\nBoden's Mate: HeXen's gameplay had a large emphasis on mobility. Not only did the classes have different speeds, but there was also quite a bit of platforming. In order to help close the distance and get into melee, Baratus retains his superior agility.", ""},
			
			{ "Changes", "- The most obvious: Parias, Daedolon, and Baratus now have at least 7 weapons instead of four.
			\n\n- All three Hexen classes are now selectable, rather than having Parias use nearly all the games' weapons. This means the classes now have a lot of weapons that weren't actually in Hexen, but care was taken to ensure they are similar to weapons that would have appeared in Hexen had the number of weapons per class match Doom more closely.
			\n\n- The Spiked Gauntlets no longer alert monsters.
			\n\n- The Hammer of Retribution forces its radius damage on enemies, so as to make up for its much slower speed with Rocket Launcher power.
			\n\n- Timon's Axe does double the original damage to further justify Baratus' role as a primarily melee fighter.
			\n\n- The Wraithverge's rate of fire has been slightly decreased by adding a 20-tic hang time at the end, to match the slow rate of fire of other ultimate weapons.
			\n\n- The Flechette no longer hurts allied players or the player, so as to reduce griefing.
			\n\n- Baratus' mana 2 has a limit of 300 due to running off Cells, rather than 200.
			\n\n- The Dark Servant acts as a permanent inventory item and the Maulotaur it spawns has additional health.
			\n\n- The Quietus now has a melee attack that the Fighter uses when enemies are close, and falls back to being melee only when ammunition is depleted rather than selecting another weapon.
			\n\n- The ultimates are now picked up in one piece, rather than needing to be assembled. This is to match the other games' ultimates.", ""},
		}
	},
	{
		{
			{ "Summary", "He's rude. He's crude. He's a bad dude with a hell of a bad attitude. He's the number one bastard on several alien races' personal shitlists, and he made it to the top not with any special training, armor, or powers, but just by being the most hardcore son of a bitch imaginable. He's just a joe with a shotgun, a mean boot, and a mouth that can't stay shut--and that's all he needs. These assholes are going to have to go through him to get to the multiverse...and he just ran out of bubblegum.", "" },
			
			{ "Traits", "Step Right Up and Get Some!: Bosses in Duke Nukem 3D were not immune to splash damage from explosives. Because of this, all explosive weapons Duke wields force radius and splash damage, even on those enemies normally immune to it. Go wild on the bosses!
			\n\nIt's My Way or...Hell, It's My Way!: Being from the Build engine, Duke moves different, fights different, and plays different. His movement is slower, the Soulsphere gives him less health, and he can't take damage as well. He could die very easily in Duke Nukem 3D--so make sure you don't die here.", ""},
			
			{ "Changes", "- Duke's former standing sprite has been repurposed as a shooting sprite.
			\n\n- Significantly more taunts all around, since it's an integral part of Duke's character.
			\n\n- Animation times and sprites locations were tried to make as close as possible as their Duke Nukem 3D/64 counterparts, but there may be subtle differences.
			\n\n- The Chaingun Cannon has a new animation for firing, because replicating the old one was a bitch and a half.
			\n\n- The Chaingun Cannon's bullets do 15 damage rather than 9 damage, in order to give it a boost over the other Chaingun weapons.
			\n\n- The Pipebombs and RPG work off the same ammo, now, rather than being separate.
			\n\n- The Explosive Shotgun now uses 3 shells.
			\n\n- The Explosive Shotgun has been brutally nerfed. It is now a separate weapon, rather than an ugprade for the shotgun, its spread is much wider, its cocking has been drastically lengthened, and its power diminished.
			\n\n- The Mighty Boot works much different, due to Zandronum's/ZDoom's inability to have alt-fire used alongside primary fire in a way that works with Netplay. Rather than being used alongside weapons for extra oomph, now it puts some distance between an enemy and user.
			\n\n- The Freezethrower shots no longer halve damage when bouncing off walls, due to engine limitations.
			\n\n- The Freezethrower's shots do 22 damage rather than 20 damage, due to its slightly slower RoF compared to the Plasma Rifle.
			\n\n- The Pipebomb's first, second, and third bounce are not a fixed height/amount, due to how ZDoom handles bouncing.
			\n\n- The Pipebomb's three counts of bounce include walls, due to how ZDoom handles bouncing.", ""},
		},
		{
			{ "Summary", "He's rude. He's crude. He's a bad dude with a hell of a bad attitude. He's the number one bastard on several alien races' personal shitlists, and he made it to the top not with any special training, armor, or powers, but just by being the most hardcore son of a bitch imaginable. He's just a joe with a shotgun, a mean boot, and a mouth that can't stay shut--and that's all he needs. These assholes are going to have to go through him to get to the multiverse...and he just ran out of bubblegum.", "" },
			
			{ "Traits", "Step Right Up and Get Some!: Bosses in Duke Nukem 3D were not immune to splash damage from explosives. Because of this, all explosive weapons Duke wields force radius and splash damage, even on those enemies normally immune to it. Go wild on the bosses!
			\n\nIt's My Way or...Hell, It's My Way!: Being from the Build engine, Duke moves different, fights different, and plays different. His movement is slower, the Soulsphere gives him less health, and he can't take damage as well. He could die very easily in Duke Nukem 3D--so make sure you don't die here.", ""},
			
			{ "Changes", "- Duke's former standing sprite has been repurposed as a shooting sprite.
			\n\n- Significantly more taunts all around, since it's an integral part of Duke's character.
			\n\n- Animation times and sprites locations were tried to make as close as possible as their Duke Nukem 3D/64 counterparts, but there may be subtle differences.
			\n\n- The Triple Poison Shooter has a new animation for firing, because replicating the old one was a bitch and a half.
			\n\n- The Triple Poison Shooter's bullets do 15 damage rather than 9 damage, in order to give it a boost over the other Chaingun weapons.
			\n\n- The Pineapples and Coconut Launcher work off the same ammo, now, rather than being separate.
			\n\n- The Explosive Shotgun now uses 3 shells.
			\n\n- The Explosive Shotgun has been brutally nerfed. It is now a separate weapon, rather than an ugprade for the shotgun, its spread is much wider, its cocking has been drastically lengthened, and its power diminished.
			\n\n- The Mighty Sandle works much different, due to Zandronum's/ZDoom's inability to have alt-fire used alongside primary fire in a way that works with Netplay. Rather than being used alongside weapons for extra oomph, now it puts some distance between an enemy and user.
			\n\n- The Ice Crusher shots no longer halve damage when bouncing off walls, due to engine limitations.
			\n\n- The Ice Crusher's shots do 22 damage rather than 20 damage, due to its slightly slower RoF compared to the Plasma Rifle.
			\n\n- The Pineapple's first, second, and third bounce are not a fixed height/amount, due to how ZDoom handles bouncing.
			\n\n- The Pineapple's three counts of bounce include walls, due to how ZDoom handles bouncing.", ""},
		}
	},
	{
		{
			{ "Summary", "Freedom. That's all he wants, now. In one bitter day, the Security Officer went from lazily sleeping in to being in an eternal fight for his life at the behest of arrogant and psychotic AIs. Day in and day out, he fought endless battles without any reprieve, rest, or hope for peace, and even alternate timelines and dimensions held no solace for him. The only comfort he could take was in survival...and now even that is in constant peril--in this damned Wheel, the fighting will never cease. Instead, now it runs eternally. Will he ever find rest?", ""},
			
			{ "Traits", "To Never Shoot Where I Could Use Grenades: Several of the Security Officer's weapons boast an alt-fire--the magnums (when a second is picked up), shotguns (also when a second is picked up), assault rifle, alien weapon, and wave motion cannon. These different options allow him different methods to approach situations, or simply to shoot harder and faster.
			\n\nNever Stop Running, Never Stop Firing: Long range does not exist to the Security Officer. His bullets are not instant hitscan, like the other heroes--they move at a much slower pace. Likewise, his projectiles have a slower travelling speed and are likely to easily be dodged.
			\n\nIf I had a Rocket Launcher I'd make someone pay: Security Officer has to reload nearly all his weapons. However, unlike similar heroes like Freeman and Bond, SecOff can't reload manually and has to wait until his magazines are empty to reload.", ""},
			
			{ "Changes", "- Grenades, fists, and charged fusion shots no longer trigger switches, due to engine limitations. Sorry, Vidmasters.
			\n\n- The Security Officer now has a pain sound, so as to indicate when shots hit in DM play.
			\n\n- The Shotgun has had its damage reduced, because 200-240 damage with a single shotgun in 40 tics HAH HAH HAH NOPE.
			\n\n- In co-op, the Rocket Launcher has had its damage buffed from 250-300 to 305-390. Due to its incredibly slow RoF compared to the other rocket launchers, it needed a bit of a burst damage oomph.
			\n\n- The Magnum can now be used underwater, just in case someone hasn't found a chainsaw in a water map.
			\n\n- The Alien weapon has a lot more ammo and generally does more damage, in order to justify how much rarer it is compared to Marathon.
			\n\n- The Fusion Pistol's charge no longer shakes and/or does higher beeps. Sorry.
			\n\n- The TOZT Napalm Unit has double the travelling speed, due to Doom's faster-paced gameplay and movement.
			\n\n- The Fusion Pistol's overcharge-to-death is no longer an explosion, due to being able to grief people with the resulting explosion.
			\n\n- In DM, the SMG's damage has been reduced--its accuracy and rate of fire meant it could shred through people far too easily. Still the same in co-op/singleplayer.
			\n\n- The Wave Motion Cannon is now a useable weapon. Doom's/HeXen's design practically requires an ultimate weapon for a lot of areas.
			\n\n- The HUD no longer holds a bar for oxygen, due to Zandronum's lack of an AirTime variable in its SBarInfo. It instead now represents armor.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Originally a special forces marine, ever since joining the Slipgate program Ranger has seen a thousand deaths and escaped from a million more on a billion worlds. He has gone from military bases to medieval castles to arcane dimensions to hellish abysses to planes of eldritch madness best not spoken of. Through them all, Ranger has proven resilience and power that give even the most terrifying elder ones pause--with strange aeons, even death itself may die under fire of a well-aimed 9.9lb 750mm RHA rocket.", ""},
			
			{ "Traits", "Go Forth and Kick Ass: Quake's air physics were much looser, and practically invented strafejumping and rocketjumping. Ranger thus hangs in the air slightly longer than normal, and can rocketjump much easier.
			\n\nDissolution of Eternity: While Ranger takes mostly as much damage as normal, he still has one fatal defensive flaw. When picking up a Soulsphere or Megasphere, the amount of health received slowly degenerates. This does not affect health bonus pickups.
			\n\nShambler Hide: Ranger has found many curious items in the sinister lands beyond the slipgates, and this is one of them. Ranger wears armor that reduces all explosion damage by 25%. This is very handy for all those explosive-wielding freaks he goes up against, and is also very good for Rocket Jumping.", ""},
			
			{ "Changes", "- Quake had such a lower damage scale than Doom it wasn't even funny. The Vore had 400 HP, equivalent to two Centaurs. In co-op and Singleplayer, his weapons have been buffed the fuck out.
			\n\n- The Quad Damage is now a reuseable item, partly to help with the aforementioned damage issues, and partly because there was no appropriate item to replace it with. (Berserks didn't work--too rare, too erratically placed, not to mention should be more utility)
			\n\n- The Double-Barreled Shotgun uses only one shell now instead of two, for the same reason. (56 damage for two shells hah hah hah hah NOPE)
			\n\n- By extension, when pistols use ammunition the Single Shotgun only consumes a shell for every two shots.
			\n\n- In Quake, the projectiles had no hitbox. Here, their hitbox is simply obscenely tiny.
			\n\n- Gravity has been ever-so-slightly reduced so as to simulate Quake's strange air physics.
			\n\n- The nails and rockets originally travelled at the same speed. Here, nails have been increased to speed 75.
			\n\n- Lava Nails, Multi-Grenades, Multi-Rockets, and Plasma Cells were handled a bit differently. There were no alt-fires, much less that swapped between weapons, and the ammo pickups were separate.
			\n\n- The Double Barreled Shotgun's, Nailgun's, and Laser Cannon's animations are slightly smoother.
//			\n\n- The Shotgun and Double-Barreled Shotgun's damages are random by 1d3, while Quake's damage values were completely static. Turns out people are getting upset for using fake bullets. Whoops.
			\n\n- The trail behind the Nails and Lava Nails has been made a LOT more obvious, so enemies can see it more easily in DM.
			\n\n- Ranger is fully 3D unlike in earlier samsara builds, giving him a more nostalgic visual feeling to him.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Ian Paul Freely is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. I.P. Freely has a wide range of explosives, fit for many situations. That's why many call him the \"demolition specialist\", he simply loves them, and you can be sure that he will not hesitate on using them, not by one bit.", ""},
			
			{ "Traits", "Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
			\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!", ""},
			
			{ "Changes", "- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Freeley can carry all his missile weapons.
			\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
			\n    ^- Further, Freeley's weapons now can carry much more ammo, but not as much as other heroes.
			\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibat does a large amount of melee damage to compensate for Freeley's lack of close quarter combat options
			\n\n- God mode in Samsara doesn't increase Freeley's view height", ""},
		},
		{
			{ "Summary", "Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Taradino Cassatt is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. Taradino found his direction in life through the armed forces, and thus earned his way into H.U.N.T through his experience in combat. His serious-minded attitude and experience make him a natural leader for his squad.", ""},
			
			{ "Traits", "Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
			\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!", ""},
			
			{ "Changes", "- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Cassatt can carry all his missile weapons.
			\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
			\n    ^- Further, Cassatt's weapons now can carry much more ammo, but not as much as other heroes.
			\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibat does a large amount of melee damage to compensate for Cassatt's lack of close quarter combat options
			\n\n- God mode in Samsara doesn't increase Cassatt's view height", ""},
		},
		{
			{ "Summary", "Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Thi Barrett is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. Thi Barrett is gorgeous and the youngest member of the H.U.N.T. Do not let this fool you however; she's surprisingly robust, and has earned a medal in unarmed combat.", ""},
			
			{ "Traits", "Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
			\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!", ""},
			
			{ "Changes", "- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Barrett can carry all her missile weapons.
			\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
			\n    ^- Further, Barrett's weapons now can carry much more ammo, but not as much as other heroes.
			\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibat does a large amount of melee damage to compensate for Barrett's lack of close quarter combat options
			\n\n- God mode in Samsara doesn't increase Barrett's view height", ""},
		},
		{
			{ "Summary", "Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Lorelei Ni is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. Lorelei may be the smallest member of her team, but she more than makes up for it with her fierce competitiveness. Winning a troop boxing tournament despite her size is a testament to her combat prowess.", ""},
			
			{ "Traits", "Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
			\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!", ""},
			
			{ "Changes", "- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Ni can carry all her missile weapons.
			\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
			\n    ^- Further, Ni's weapons now can carry much more ammo, but not as much as other heroes.
			\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibat does a large amount of melee damage to compensate for Ni's lack of close quarter combat options
			\n\n- God mode in Samsara doesn't increase Ni's view height", ""},
		},
		{
			{ "Summary", "Determination is a necessary trait, especially when you have to save the world from a lunatic cult leader. Doug Wendt is one such individual who had to overcome billions of traps and soldiers, including robots and undeads to save the world from evil. Still, the H.U.N.T has just begun. Doug Wendt is a mountain of a man who tends to be insubordinate to his book-following superiors. Lost last joint of right ring finger during his career as a professional Linebacker.", ""},
			
			{ "Traits", "Where's my ammo?: Most of the weapons you have are rockets, and they are very hard to carry. You have very limited ammunition.
			\n\nBoom, Boom, Boom: You have the widest access to a wide range of explosives, you like making things go boom! Blow people up in many ways!", ""},
			
			{ "Changes", "- Rise of the Triad only allowed 1 missile/magic weapon to be carried at once. This system does not work so well in Samsara, therefore, Wendt can carry all his missile weapons.
			\n\n- Once the few missiles that weapons had in Rise of the Triad were burned up, the weapon was tossed. This is not the case in Samsara.
			\n    ^- Further, Wendt's weapons now can carry much more ammo, but not as much as other heroes.
			\n\n- The excalibat tossed enemies into the air when hit, and did very little damage. Here, the excalibat does a large amount of melee damage to compensate for Wendt's lack of close quarter combat options
			\n\n- God mode in Samsara doesn't increase Wendt's view height", ""},
		},
	},
	{
		{
			{ "Summary", "Blake Stone has always been an extroadinary agent who spent his childhood serving Great Britain. Just after he was promoted to General Status, Dr Pyrus GoldFire was there to be his next challenge. Blake Stone fought relentlessly against the mutants he created and eventually put an end to Goldfire's plans. Still, everything is far from over for him. He still has one final destination: he is there to end the corruption in the wheel of Samsara and he won't stop until every bit of photon has been disintegrated.", ""},
			
			{ "Traits", "Tough Training: Blake had a really tough army training, he has no weakness to anything. He's also unnecessarily disciplined.
			\n\nTough Odds: Blake's weapons are not very ammo efficient, however having used them for ages makes him very expert at them and he uses all his weapons with super speed.", ""},
			
			{ "Changes", "Blake Stone didn't have real explosive mechanics because of technical limitations. Enemies caught in the blast simply had a damaging projectile warped to them. In Samsara, Blake Stone has normal explosive logic.
			\n\n- Blake cannot destroy items with explosives, and can only harm himself with the Anti-Plasma Cannon.
			\n\n- Blake's Plasma Discharge Unit had its firerate, damage, and range drastically reduced to keep it from being too devastatingly overpowered.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Vengeance is all that is left in him now... His love was taken away from him. He was betrayed by his master and forced to see his friends executed before his very eyes. Even eternal banishment was not enough to stop Caleb. Vengeance had already driven him into an unstoppable blood lust. He wouldn't stop until he fully avenged his comrades, and his one true love. Caleb is exceptional at dealing with singular foes, but becomes rather lackluster at dealing with many, although he is still able to seal the deal. Caleb's sole purpose of living is to prove thathe is truly the \"One That Binds\".", ""},
			
			{ "Traits", "Boo Hoo... When does the hurting stop?: Caleb loves to inflict pain so much on his foes that he can kill them in more ways than any other hero. He is rather prone to hurting himself in the process, however.
			\n\nGood. Bad. I'm the guy with the gun: The weapons in Blood were fast, versatile, and of course, terrifyingly powerful. However, unlike games like Duke 3D, Redneck Rampage, and SW, the weapons don't really evolve much, only steadily increasing in power. It's best to make the most of the weapons you do have than rely on an ultimate.", ""},
			
			{ "Changes", "Caleb has a revolver as his starting pistol as the Flaregun would be too powerful.
			\n\n- The lighter doesn't bob separately from the Spraycan/TNT, and still lowers when switching between the two as if you were switching to another weapon entirely.
			\n\n- In DM, explosives do half damage and the Napalm Cannon's projectiles move significantly slower. Caleb's hitscan weapons also do damage much closer to the enemy cultists. In SP/Coop these values are normal.
			\n\n- Caleb does not need to worry about finding spirit or fire armor to reduce damage from those attack types. Instead, armor works just as it does for everyone else.
			\n\n- Unlike a lot of games in Samsara, Blood never had a source code release. The closest thing there ever was were reverse engineering efforts such as nBlood. Therefore, we cannot vouch for the 100% authenticity of his damage, accuracy, or radius values. What we can say, however, is close enough.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "In a world where everyone nearly died from a virus, the remaining people were oppressed by the Order, until one man joined the rebels to stop them and kill their deity, The Entity. In the Wheel of Samsara, Strifeguy continues to fight against oppression just like he did all those years ago. Whether it comes from Hell, space, or fellow humans, Strifeguy will use his superior tactics and advanced weaponry to disable their machinations and ensure nothing like the Order ever rises again.", ""},
			
			{ "Traits", "Revolutionary: Lots of Strifeguy's weapons are very tricky to use. His slot 3 is weaker but isn't lobbed like his slot 5 which bounces off enemies and self harms. Even the slot 5 alt fire which sets a massive fire can kill you if you are not careful. His slot 6 is also a lobbed but powerful flamethrower, so aim and planning is key.
			\n\nLast Stand: He may be tough, but in critical condition he will have a speed reduction, which is why all health pickups and soulspheres are portable medikits of various sizes to heal him, and for providing ammo for his second and much deadlier ultimate, the Sigil!
			\n\nEver evolving force: Strifeguy can barely aim and has terrible melee, but his berserk is an item that upgrades his max health by 10, and increases his accuracy, allowing his shorter distance weapons to aim better and improving his longevity!", ""},
			
			{ "Changes", "Selecting alternate ammo types is not handled by selecting a sister weapon, but rather by right-clicking.
			\n\n- The Crossbow's Poison Bolts no longer kill humanoid enemies instantly. Rather, it does an additional 50 damage. This is usually instant death for most grunt-type enemies.
			\n\n- Strifeguy has a proper pistol so his crossbow could be moved to slot 2.
			\n\n- The Crossbow's Electric Bolts do double damage overall to match the power of other slot 2's
			\n\n- White Phosphorous grenades do under a quarter of the damage they did in the original game. They are still insanely powerful.
			\n\n- The Flamethrower has an overall better range than it originally did in Strife, and the range can be further increased with accuracy upgrades. This leaves the Grenade Launcher and Sigil as the only weapons unaffected by accuracy upgrades.
			\n\n- StrifeGuy cannot self-harm with the Mauler Torpedo.", ""},
		},
		{
			{ "", "", ""},
		}
	},
/*	{
		{
			{ "Summary", "The demon slaying man. The resurrected myth. The reappearing icon. The reawakened legend. The hero returning. Doomguy has stood against untold legions throughout all 20 years of his one-man war on Hell, and here he returns in a new but familar form. He is a man that still needs no introduction, as his abilities have been proven and honed and harnessed time and time again--the rest of the heroes will have to work double to even match the bar Doomguy64 is still constantly raising.", ""},
			
			{ "Traits", "...And I Am Still Mighty: Doomguy64 holds the Super Shotgun in the game as well as the BFG9000, one of the strongest ultimate weapons giving him quite the firepower. It's very hard for most other classes to match or exceed the damage on those 2 in their own weapons tier.
			\n\nTo Hell With Respect!...Again!: Doomguy64 has been recreated with gameplay similar to regular doom and matches 64 to a close extent. Playing with him is just like playing Doom 64, so show these newcomers who they better call granddaddy.
			\n\nAss Kicking Console Power~!: Doomguy64 came from a console version of doom for the nintendo 64, along with it came some slight varations to the weapons, his chaingun is slightly faster but more inaccurate, his bfg is a tad slower, and his rockets have knockback, giving subtle differences from his original pc counterpart.
			\n\nHellish Fantasy Redux: Doomguy64 Still uses a damage rolling system like in the origina doom 1 & 2.", ""},
			
			{ "Changes", "", ""},
		},
		{
			{ "", "", ""},
		}
	},*/
	{
		{
			{ "Summary", "Eleena has frequently done work for the Universal Mining Guild. When the crisis on loxia came along, she saw it as a wonderful opportunity for a little work and a lot of cash. Considering her skills as an assassin, she proved herself more than capable of ridding Ioxia of the alien menace that conquered the place. After collecting her payment, she retired to her headquarters waiting for her next contract. \n\nNow she must finish one final mission: to clean up this planet of the remanescent enemies from Samsara", ""},
			
			{ "Traits", "Sneaky Cat: Although she is somewhat fragile physically, Eleena's natural speed and agility, combined with her extensive training with sneak attacks and use of her natural claw-like weaponry, make her a very dangerous foe.
			\n\nArea Denial: Eleena has a broad supply of lobbed explosive weaponry, multi-projectile weapons, and seeking missiles that make her tough to engage in battle. Between her bouncing Pellet Bombs, the fearsome Napalm Charge, the triple barreled Dart Cannon, or whatever weapon mods she has up her sleeve, Eleena is exceptional at putting a lot of pressure on her enemies. Out maneuvering her may prove quite difficult, if not outright impossible.", ""},
			
			{ "Changes", "Some of Eleena's unique weapons were swapped with Dan Blaze's Pellat Bomb and Kamchak's Napalm Charge. These fit her role a little better and are overall better than her lackluster grenades.
			\n\n The Missile Launcher is not capable of firing remote-guided missiles.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Despite the world having become relatively peaceful, the UFP none-the-less kept a well trained force of space seals for all their operations. When one of their experiments went awry and an alien force invaded, one such space seal, the last one remaining, rose up to defeat them. Armed with nothing more than an M24 Close Assault Weapon and a Taser, the space seal will compromise at nothing to ensure Humanity's victory.", ""},
			
			{ "Traits", "Shredder: The Space Seal's weapons are terrifyingly powerful, capable of tearing even the toughtest of beasts to shreds. However, they guzzle ammo quite quickly and their damage is wildly randomized. 
			\n\n Ammo Hoarder: The space seal was taught to always conserve ammunition as much as possible. As a result, space seal gets slightly more 20% ammo from ammo pickups
			\n\n Happy Birthday!: The Space Seal has a set of proximity mines that he can place anywhere, leaving all sorts of nasty traps for enemies. These mines use their own ammo supply.", ""},
			
			{ "Changes", "The Alien Plasma Rifle has an added feature: Its shots grow in power as they travel. This change was made to further compliment SpaceSeal's DPS role and to make it stand out more from other Slot 5s.
			\n\n In C7, Mines could only be prematurely set off by detonating an explosive near them, such as the Plasma Rifle. In Samsara, you can just shoot them.
			\n	 ^ - In Addition, neither Space Seal nor his allies can set off proximity mines by stepping on them. In DM, Seal can set off his own mines.
			\n\n The M-343 Vulcan is much less disgustingly broken and the Ithaca Stakeout is far less completely dogshit. You should now have plenty of reason to use your other weapons.
			\n\n The Alien Disintegrator uses a Doom-like BFG Spray instead of dealing a solid 1000 damage to everything in the user's line of sight.
			\n\n Technically, the protagonist of C7 is named 'Space Marine'. 'Space Seal' is one of the selectable classes in Deathmatch. The name Seal was chosen because Space Marine would be far too generic of a name.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Colonization of the Moon can be a difficult task. Especially when that task is caught up in immense political turmoil. Unable to come to terms, the colonies on the moon begin open rebellion against the United Nations. The U.N. quickly responds by mobilizing thier forces to deal with this rebellion, but the Lunar Alliance has an ace up their sleeve. The Alliance's operations hinge on the skill of a single LDF Commando and his squad of LDF Militia. He endures racing against limited oxygen supplies and swarms of U.N. Personnel to ensure the LDF colonies remain standing strong. Only... the situation becomes far more complicated when an alien species is discovered laying dormant within the Moon...", ""},
			
			{ "Traits", "Bullets! My only weakness! Wait. what the hell is a \"bullet\"?: Most of Rebel Moon's warfare consists of high speed projectile attacks that are just as accurate as the player. Commando only has one hitscan weapon at his disposal, which has minimal spread. This makes him unparalleled in his sniping prowess but leaves his damage and crowd control capabilities much to be desired. He is better off keeping his distance and letting his allies stay in the fray. 
			\n\nSpace is a cold, cooold place: Properly suited up for the harsh enviornment of space, The Commando has some resistance to other hazardous elements, such as lava, radiation and other floor hazards.", ""},
			
			{ "Changes", "-Rebel Moon and Rebel Moon rising had an insanely low damage scale, so the damage of most weapons had to be multiplied by two, and the Subestron Arm given a ripper property.
			\n\n-The oxygen recyclers did not give you health, but you don't need oxygen in doom.
			\n\nThe particle accelerator and railgun were equals in rebel moon, and very close in rising, here the railgun was chosen and buffed to be the slot 6, while the other was put into a slot 4 spot.
			\n\nCertain weapons had different speed and damage values depending on if you were playing the first or 2nd rebel moon, here we combined both to get the best of each, if the weapon wasn't already buffed.
			", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Kyle Katarn worked for the Empire as a Stormtrooper until he learned the truth about his father's death from the Rebel spy, Jan Ors. Since then, he's been a mercenary for the Rebel Alliance tallying up quite the record. Whether it's singlehandedly taking Boba Fett down a peg or duking it out with Kell Dragons, you can be sure Kyle will come out on top.", ""},
			
			{ "Traits", "This Could be Interesting: After surviving his own form of hell through the Dark Tropper menace, Kyle always keeps his personal shield on hand, allowing him to start all missions with a free 100 armor, as well as recieve 10% less damage from anything, as long as it's not a physical, fire or explosive blow. 
			\n\nA good Supply of Power Cells: Being no stranger to pain, Kyle's been through numerous battles in his carrer, which has toughened him up considerably. Unfortunately regardless of his expertise, he has to deal with less than reliable empire tech, which isn't exactly known for it's accuracy. In a team, he's best played on the frontlines, taking damage for everyone else.", ""},
			
			{ "Changes", "", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Aldus Kaden, the leader of the A.V.C., survived the destruction of the homeplanet Eltho III through sheer luck. His high accuracy, fast reflexes, and extreme luck were the reasons why the imperial guards never caught him. Because his sound and appearance are very similiar to those of a cow, his companions call him by the name \"Mooman\". Many foes underestimate him, but Aldus is the most dangerous and strongest member of the A.V.C.", ""},
			
			{ "Traits", "Roulette Wheel: Playing as Mooman is like a lottery, you never know what will happen next. Mooman relies heavily on random item generators from his slot 1 and unique that will give him very helpful equipment such as grenades, proximity bombs, energy forcefields, and even a holographic clone of himself that will help him fight.
			\n\nDimension 2012: Mooman's weapons deal very high damage per second and are generally pretty efficient with ammo useage, however they tend to be very bizarre and unorthodox compared to similar weapons and his exposives work radically different from any other hero. Hailing from the year 15,432 A.D, Mooman is the most futuristic hero in Samsara by far and as a result his weapons can be almost too futuristic to comprehend.", ""},
			
			{ "Changes", "In Pursuit of Greed had a very high damage scale due to the high max HP of monsters and players. As such, all damage values have been divided by 2. The Flamer does full damage, however.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Having quickly advanced through the ranks of Earth's United Nations military branch, the \"Lightstormer Corps\", Jack Curtis has fought against many foes and supposed friends in his quest to defend the solar system. His skills with weapons are excellent on their own, but it is his psionic implants that truly elevate him to the next level. \n\nHaving lost his brother to the mad plans of his former commander-turned-traitor, he knows very well that the line that separates good and evil can become very thin. Thus, he has made it his duty in samsara to prevent any more threats to the solar system, regarless of where these threats come from.", ""},
			
			{ "Traits", "FEEL THE POWER!: Jack's psionic implants are the next step in warfare. If you are out of ammo, or you simply want to tackle the situation differently, you should unleash his powers on the unsuspecting enemies and witness the devastating results yourself!", ""},
			
			{ "Changes", "In Disruptor, picking up red plasma or split meteorites replaced what was currently loaded in the weapon while you had them. Here, you can switch between the two on the fly using altfire.
			\n\nThe Zodiac and Plasma Lance in Disruptor could only be used once before dropping them. You would have to locate another to use them again. Here, once you have them you have them, and use ammo just like any other weapon.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "One warrior, one sword, one arch enemy. Grondoval is the mightiest and bravest of all warriors from the land of Stazhia. He has been chosen to travel to the Island of Char and slay the evil witch Illwhyrin. Not even Illwhyrin's sister, Cirae-Argoth, could kill Grondoval. With his weaponry and magic scrolls he is able to kill anyone, no matter how big, scary or brutal they are.", ""},
			
			{ "Traits", "Knight's Honor: Grondoval is mainly a melee user, with only a few ranged options. Weapons primarily use magic to power their attacks, but can be disabled at the push of a button to conserve ammo and use purely melee attacks. The melee attacks are so strong and crushing, that even big enemies like the Archvile or Baron of Hell feel atrocious pain and are stunned for a moment. Thus he excels in melee and easily defeats any big enemy in a duel. But be careful: Large groups and hordes of enemies constitute a big threat to him and can easily surround him.
			\n\nThou art a lord!: In Witchaven you could level up and gain more strength, health and armor. Instead, you start immediately as a veteran (250 HP, maximum armor of 300). Additionally, Grondoval starts with 150 hp and 50 points of basic armor.
			\n\nCunning Impostor: Using the weapons' enchantments now draw from ammo instead of temporary powerups, and the halberd has been modified to support a ranged enchantment.", ""},
			
			{ "Changes", "-First and foremost, weapons don't break like in witchaven, and you don't need to use an enchanting well to powerup your weapons, instead you can access both versions on command.
			\n\n The Halberd is blue and has a ranged enchantment that fires icy bolts in rapid succession. In Witchaven 2 the Halberd would glow bright orange and the enchantment would work like any other melee weapon's
			\n\n Grondoval cannot stand on arrows that he has fired into a wall.
			\n\n Witchaven's weapon bobbing is impossible to replicate with the limited tools available, so what we have is the closest possible compromise.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Gordon Freeman, once a scientist, employee of the month, quiet man, and an Idol to all of his coworkers, reached the bottom of disgrace when an experiment with interdimensional portals went wrong and opened a gate to a merciless alien race; Gordon was forced to raise his crowbar and make his way through an infested Black Mesa while being forced to kill his own co-workers and being hunted by the military. He travelled to the Xen dimensions to kill an alien overlord called the \"Nihilanth\" in the hopes of ending the invasion. After getting the Job done, the mysterious G-Man offered him a job, and transported him in the depths of hell alongside fellow heroes from both earth, space, past, future, and mythical lands with one goal... survival.", ""},
			
			{ "Traits", "Hazardous Materials: Dr. Gordon Freeman is in charge of the manipulation and maintenance of various Toxic and Harmful materials either from our planet or from outer space. Freeman is experienced in the field and equipped with his H.E.V suit; he knows how to properly avoid getting harmed so easily from Hazardous surfaces like acid, lava, or any other environment harmful source.
			\n\nGray Matter Propulsion: Freeman can get headshots with his weapons to deal additional damage, making it easier to ambush tougher foes.
			\n\nCombat Stress Reaction: Gordon Freeman's weapons have a ton of stopping power that can bring down even the toughest of enemies rather easily. However, being just a scientist with minimal knowledge about guns and far less about combat, Dr. Freeman tends to act slowly and sometimes ineffectively with his arsenal when in battle. Gordon only knows the basics of how to operate firearms and recoil tends to overwhelm him due to his limited expertise. Due to this, firerates and reload times can be quite slow, meaning Freeman is best suited for using guerilla tactics to ambush his opponents and pick them off one by one, lest he be overwhelmed.", ""},
			
			{ "Changes", "Coming from the tail-end of the early-3d Quake era, Half-Life had a very low damage scale, and its source code was only partially released. Damage of most weapons and HP of most enemies were increased by 200 or 300%. The rest we just had to hazard a guess.
			\n\n- Headshots in Half-Life did triple damage. However, since base damage was already doubled they instead do double damage, Doom 3-Style.
			\n\n- Nearly all explosives shared the same damage in Half-Life. That's not the case here, as MP5 grenades dealing up to 300 damage would be kind of insane.
			\n\n- The MP5 grenade does 50 additional damage on a direct hit. This isn't the case in HL.
			\n\n- Due to limitations with GZDoom's model support, Half-Life NPCs do not have facial animations.", ""},
		},
		{
			{ "Summary", "A 22 year old marine assigned to the Hazardous Environment Combat Unit, Adrian Shephard was sent on an operation only knowing that his orders were at the Black Mesa Research Facilty. Little did he know, however, that his orders were to cover up any evidence of an alien invasion at the research facility. Adrian was only forced to do more than his call of duty when he was purposefully prevented from leaving the facility by the mysterious G-Man. Soon, he was almost in the same position as the rest of the faculty at the facility when the Black Operations and a mysterious race known as Race X joined the fray. Upon the defeat of the Geneworm, Adrian knew too much about Black Mesa, but the G-Man could not simply get rid of him - he was too skilled. While originally detained, G-Man decided to send Adrian to the same place he sent Freeman in the hopes of fulfilling duties he knew Freeman could not.", ""},
			
			{ "Traits", "Never forget that your weapon was made by the lowest bidder: While Freeman's arsenal consists of bleeding edge technology, most of Adrian's arsenal is standard issue. That said, Adrian's military expertise means he can fire and reload much faster than Gordon can, instead of simply being more powerful. He's still better off taking encounters slowly and tactically, as per his Marine Corps training.
			\n\nLeave no soldier left behind: Adrian was trained to fight with a squad. Fortunately, it's possible for Adrian to encounter fellow marines on the field under the right circumstances. Additionally, there's no chance of fighting other HECU units if you are deployed on your mission as Adrian first.", ""},
			
			{ "Changes", "Along with the changes detailed under Freeman's page, the M249 SAW now has a magazine capacity of 75 instead of 50 and the Deagle does less damage with the laser sight disabled.
			\n\n The Knife does the same damage as the crowbar instead of dealing double.
			\n\n The Desert Eagle does 35 damage without the laser sight enabled, and 70 with it enabled. The Sniper Rifle works in a similar way, dealing 150 unscoped and 300 scoped.
			\n\nIn Opposing Force, using the Displacer's altfire at the wrong place and time would drop you into a bottomless pit in the Borderworld Xen to your death. In Samsara, using it teleports you back to the spawn area of whatever map you're on, and back if you do it again. Rather a bit more helpful.", ""},
		}
	},
	{
		{
			{ "Summary", "Lo wang was a bodyguard for Zilla Enterprises, which has control over every major industry in Japan. However, this has led to corruption. Master Zilla, the president of Zilla Enterprises, was planning to conquer Japan using creatures from the \"dark side\". When he discovered this, Lo Wang quit his job as a bodyguard. After Zilla sent his thugs after Lo Wang and killed his old master, Lo Wang sought vengeance. After defeating Master Zilla in a volcanic fortress, he had to fight him again above the streets of Tokyo. His fight was not yet over, as his evil twin, Hung Lo, sent forces to attack him in the hopes of taking over the world. After firing a nuke in close proximity to his brother, the Wheel of Samsara rescued him from disintegration.", ""},
			
			{ "Traits", "Who wants some Wang?: Despite appearing as some silly old man, Lo Wang's skills in weapons both old and new are unmistakable. He can use multiple firemodes for many of his weapons, such as firing heatseeking rockets, firing a burst of 4 shotshells, dual-wielding his Uzis, and even firing a nuclear warhead, Lo Wang as no shortage of ways to take out his enemies. However, Lo Wang can die quite quickly if he's careless.
			\n\nMaster of disaster! HAHAHA!: While Lo Wang has access to some pretty devastating gear, it's his skills in martial arts that really make him stand out. Lo Wang's sword is exceedingly sharp and deadly, and no one can throw a flurry of punches quite like him. Feel free to switch between guns and swords as needed, so you can slice, dice, beat, blow away, and annihilated anything that stands in your way.", ""},
			
			{ "Changes", "Punching a wall only sometimes hurts Wang instead of all the time.
			\n\n- I couldn't understand SW's blast radius values, so they instead use the values of similar weapons used by Duke.
			\n\n- Sticky Bombs do half damage when stuck to wall or surface.
			\n ^ The first person sprite for Sticky Bombs matches their pickup and projectile sprites, having a blue stripe instead of brown.
			\n\n The fireballs spawned by a 40mm grenade blast were merely cosmetic in Shadow Warrior. In Samsara, they do damage.
			\n\n SW's viewbobbing is inertia-based, which cannot be faithfully executed using ZDoom's limited tools.
			\n\n In SW, the Nuke missile did no damage on a direct hit, and only 800 from the blast. In Samsara, the missile does another 800 on a direct hit and forces its entire radius damage on everything regardless of distance to justify its increased rarity.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Before adopting his current name, the legendary Cybermage was nothing more than a regular citizen living like hundreds of others in a bleak future where oppressive corporations had long since replaced local governments. Yet, on one seemingly regular day, he did the unthinkable: he spotted hitmen who were about to kill somebody, and he shielded the target with his own body, dying in his place. His world never expected such acts of kindness. But the Cybermage also certainly didn't expect that the one who he saved was an important scientist at SARCorp, who after recovering his body, performed unspeakable experiments on him. Bringing him back to life, he implanted the Darklight, a source of unimaginable power, into his skull. Waking up and emerging from the stasis tube he had been confined in for so long, he soon discovered that a new war erupted between the corporations as well as a new evil known as Necrom, Master of the Darklight. However, this time he would not sit back and watch as he did for so many years. This time the would take matters into his own hands. After mastering his powers and teaming up with several underground rebel organizations, the Cybermage became a legend of his own by single-handedly defeating his nemesis, Necrom, and his Legion of minions. With his revenge enacted and his debts repaid to those who aided him on his quest, the Cybermage had seemingly retired in peace. However, with great power comes great responsibility, and after all he had experienced, the Cybermage decides to help keep the Wheel of Samsara clear of any potential world-endangering threats.", ""},
			
			{ "Traits", "Tools of Destruction: While it's true that the corporations oppressed their citizens, it's also true that they possibly developed the most effective weapons for quelling upheavals. Many of Cybermage's weapons cannot be fired automatically as the trigger is depressed, but are capable of firing as fast as the user's fingers are. 
			\n\nThe Gem Glows Bright: With the Darklight implanted in Cybermage's forehead comes a wide variety of magical abilities that he can use to bring even the mightiest of foes down. Finding special icons of Mann-Ra and absorbing the life force of fallen enemies allows the Darklight to evolve to fearsome tool of mass destruction.", ""},
			
			{ "Changes", "Cybermage's magic spells used a slowly regenerating pool of mana in the original. However, since it's a fist weapon the basic starting spell uses no ammo and all additional spells use ammo like any other weapons do.
			\n\n- We have no idea how much damage the weapons in Cybermage actually do, so the damage values are made up.
			\n\n- Cybermage gave players the ability to physically aim weapons up and down. These sprites are used for recoil animations instead.
			\n\n- Cybermage used an inventory screen for selecting weapons and items that had the appearance of Cybermage using his hand to grab items out of the air. That inventory screen isn't present here and weapon switching is handled like any other character.
			\n\n- Cybermage lacks a lot of weapons and items from his original game in the interest of a more streamlined arsenal.
			\n\n- The Heavy Blaster MG in Cybermage was fully automatic like a plasma rifle, but much slower than Doomguy's. The weapon now fires in a 5-round and transitions to automatic if the trigger is still being held.
			\n\n- Older versions of Samsara gave Cybermage a heavily altered arsenal of weapons. This isn't as much the case anymore. There are still subtle changes to his guns but only for the purpose of making his experience easier in a much faster game like Doom.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Originally part of a special forces team heading to the ancient city of Karnak, which had been taken over by unknown forces, Jon P. ended up with more than he bargained for when he discovered the city was in fact attacked by the Kilmaats, an alien race who were attempting to resurrect the soul of King Ramses and use its powers to take over the world. Facing off against horrifying ancient mummies brought back to life and cunning allens determined to stop at nothing hardened Jon who was able not only to rescue Ramses' body, but also to prevent the detonation of a nuclear device left behind by the aliens to annihilate the Earth. After his victory and the Kilmaat's subsequent retreat, nobody knew what became of Jon. Some say he remained stranded on the aliens spaceship in an effort to defuse the nuke. Others said he was buried in the ruins of Karnak alongside the dead, only to be excavated centuries later. Yet others said he acquired god-like powers and became a pharaoh looking over the world's prosperity thanks to King Ramses' powers. But now that Jon has resurfaced fighting in the wheel of Samsara, all that is known is that he will never allow such an invasion to happen again.", ""},
			
			{ "Traits", "TRAINING IS EVERYTHING!: As a hardened special forces soldier, Jon knows very well how to use the best military equipment around. Most of his human made weapons will require reload after all shots are depleted, so make sure not to get caught off guard!
			\n\nOLD MEETS NEW!: And alongside the \"new\" man-made weapons, comes the \"old\" artifacts of ages gone by - whether it's the fearsome Cobra Staff the hectic Ring of Ra or the powerful Mummy Staff, Jon will definitely have a good reason to taunt his enemies.", ""},
			
			{ "Changes", "Powerslave was radically different on PS1 and Saturn from its build engine PC original. There was no reloading on firearms, some of the weapons had different behavior, and there was one new weapon added. In Samsara Reincarnation, Jon acts as a hybrid of the versions of himself from the console and PC versions.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Leonard was an unassuming redneck living in Hickston alongside his brother Bubba, living peacefully without expectations. Sure, his neighbors were exceptionally annoying and sure, the land was filled with hostile dogs and wasps, but ultimately cheap ass whiskey and pork rinds were in abundance, and best of all, the two brothers owned their prized pig Bessie, their real pride. All that changed when Hickston was invaded by alien forces, who not only decided to eliminate all humans, bụt also clone their neighbors and let them do the dirty job, With Bessie stolen and endless clones of their now even more aggravating neighbors shooting everything in sight, Leonard decided he had enough. After shooting his way through Hickston and nearby locations and finally crash-landing the main alien UFO, Leonard returned home, only to find his brother Bubba had consumed all the whiskey and pork rinds, And so, he decided to fight in the wheel of Samsara, in hope of once again finding the peace that invasion had forever eliminated in his hometown.", ""},
			
			{ "Traits", "You screw with the bull, you get the horns: Growing in the deep south, Leonard has been experienced in firearms since infancy, but lacked access to more advanced weaponry. He can fashion anything he needs out of a crossbow and whatever explosive he finds lying around, and a shower of AK-47 bullets will take care of the rest.
			\n\nSwamp gas my ass: Leonard doesn't have the intelligence to use medical equipment and thus relies on food to heal. Eating too much will make you gassy, and drinking too much will make you drunk.", ""},
			
			{ "Changes", "Redneck Rampage had a wide arsenal of varied and powerful weapons, but lacked anything that could qualify as an ultimate. Closest thing was the Teat Gun, but that wouldn't yield the best results. So we multiplied the Alien Arm Gun's damage by 10.
			\n\nDamage values in RR varied all across the board. The pistol, despite its slow speed, took at least 3 shots to kill any enemy, and the automatics were exceptionally powerful. Here, the AK and Teat gun's damage were reduced and the pistol's damage was doubled.", ""},
			
			{ "Medikits", "When you pick up the Medikit, it will either:\n\nA) Give you pork rinds (instant healing)\n\nB) Give you a 6 pack of beer\n\nC) Give you 6 cow pies", "RRCMEDKT"},
			{ "Soulspheres", "When you pick up the Soulsphere, it will either:\n\nA) Give you a dee-lishus goo goo cluster(instant healing)\n\nB) Give you a bottle of cheap ass whiskey...", "RRCSOULS"},
			{ "Banjo Concert", "From an article found in the Hickston Hog, April 1, 1998: \n\nPIG FLATS - Mississipi. Astonishment and panic have gripped the populace of this hamlet, as annoying banjo music have awakened the townsfolk for the third night in a row. Reports said the people responsible are the long missing banjo artists, Billy Ray Jeter and the Old Coot, in spite of numerous reports that the two men have been killed numerous times. Scientists say that the dead Billy Rays and Old Coots must have been clones, and the unkillable ones are the genuine article.\n\n\"We believe banjo music and alien experimentation are responsible.\" Dr. Lewis Smart, a professor at Arkansas Middle School explained. \"They must have performed some experiment that causes banjo music to kill off the aging cells. It's all very scientific and complicated. You really need a degree or two to understand it.\" \n\nThe explanation provided little consolation to the sleepless townsfolk. \"That Billy Ray's a traitor!\" One angry townsman was quoted as saying. \"He used to be in a jug band, and now he's gone banjo on us! He done a damn sell out job on us jug music fans! Next thing you know, he'll be headlining Hollerpolooza And to add insult t' injury, now I just gones and wasted my best buckshot on 'im, and I still can't nail his ass. And now they is gone and said that banjo music is making him too tough for my rifle! Shiiiyit! Life ain't fair.\" \n\nSome scientists dispute the banjo theory, saying that the reason that Billy Ray and the Old Coot can't be killed are because of secret experiments by the evil Xatrix Corporation, which mistook Billy Ray and the Old Coot for videogame characters, and since videogame characters can't really be killed, neither can Billy Ray or the Old Coot. Xatrix was not available for comment. \n\nBilly Ray and the Old Coot were last seen heading in the direction of Hickston.", "RRBANJO" },
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "With all the pods sent down to the surface at the same time, Bitterman's pod was clipped by \"cowbow\" and narrowly missed being hit by another eager marine. However thanks to having no control over his \"flying brick\", Bitterman over-shot his designated landing zone and crash-landed in the outskirts of Cerberon. The chaos caused by the Air Force's dogfights and indiscriminate bombing of Cerberon allowed Bitterman to find a decent weapon and fight back. Shortly afterward, Bitterman learned over the radio that only five percent of the ground forces were operational. By destroying his main objective, the \"Big Gun\", the air force and bombers were able to target important objectives. Bitterman's next core objective was to locate and assassinate the Makron. While many speculate that he was captured by the Strogg. In reality, he was abducted into the ranks of Samsara, where his new commanders believe he is just what they need to neutralize other realms.", ""},
			
			{ "Traits", "Big Gun: Bitterman loves guns, but not just any guns, big guns. As such Bitterman was never too fond of melee weapons, so it's essential to keep some distance from foes. On the other hand, he does utilize more weapons than most heroes.
			\n\nI'm a real Bitter Man!: Bitterman also has wide variety of powerups at his disposal. From Dual Fire Damage making his weapons fire twice as fast, silencer which allows to make silent takedowns of his enemies using any weapon, and of course, Double Damage and the ever terrifying Quad Damage. Bitterman has no shortage of ways to increase his effectiveness in a firefight.", ""},
			
			{ "Changes", "The blaster from Quake 2 was about as pathetic as it gets. So bad its damage was increased in MP rather than decreased like other weapons. So we doubled its damage.
			\n\n Quake 2's damage scaling was a little mediocre considering the relatively slow fire rate of its weapons in comparison to the first game. So we used the damage values of similar weapons from sequels Quake 3 and 4 to yield much more reliable weaponry.
			\n\n Quake 2's railgun did double damage to any monster that wasn't alerted yet. Now it does that damage to any enemy that isn't facing you, or while the silencer is active.
			\n\n ETF Flechettes now have the ability to pierce force fields.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "The Demoness is a unique creature, the only one of her kind. She was created by Eidolon and could be considered to be his daughter. She was meant to be the progenitor of a new race of elite minions who would serve as the Serpent Rider's personal agents. \n\nEidolon taught his creation many harsh lessons and gave her considerable powers, yet he was never able to finish his work, as he was slain by mortal heroes. The Demoness was too weak at the time to intervene in any way. However, when she learned that the soul of her master had been stolen by Praevus, she went into an unholy rage and decided to deal with the blasphemer and his minions in person.", ""},
			
			{ "Traits", "I've dabbled in the Dark Arts: In Hexen 2 she only had 4 weapons, here she also has all 4 of the necromancer's weapons to match other chars and to show off other powerful options to her kit. Additionally, Demoness levels up as she kills enemies, acquiring new skills as she levels up. Among these skills are her own with the addition of the Necromancer's.
			\n\nSouthpaw Demon: Unlike the rest of the samsara roster, Demoness is left handed, and thus might gave some newer players some struggles or even more ease then before on her attacks.", ""},
			
			{ "Changes", "- The most obvious: Demoness has 9 weapons instead of 4, including the Necromancer's 4 weapons and the Crusader's Ice Mace. She also gains access to the Necromancer's passive skills when she levels up.
			\n\n Hexen 2, being a cousin of Quake, also had such a low damaging scale, while enemy hitpoints were reasonably on par with Doom. Given how the Tempest Staff couldn't even kill some of the weakest enemies in one hit, the damage values have been buffed around twice as much.
			\n ^- Additionally, unique characteristics have been added to some of the Demoness's weapons.
			\n\n- The strength, intelligence, wisdom, and dexterity stat were static, but given that the Demoness levels up it made more sense to allow these stats to also grow.
			\n ^-Intelligence and dexterity had no role in game - intelligence boosts damage of ranged weapons with each point over 10 by 2 percent, while dexerity increases the range of the Demoness's pistol weapon.
			\n\n- The acid rune never had radius damage. Because doubling the damage of the weapon was too low, a stacking poison damage has been added to the projectile when it hits a target, and will leave a weak, small cloud that hurts enemies.
			\n\n- The powered acid rune missile does 50% more damage than in the original. 
			\n\n- The Tempest staff projectile does enough damage now to compensate for being a slot 7 with it's slow rate of fire.
			\n\n- The Tempest staff lightning chain is also now capable of chaining to more enemies to be more effective at clearing crowds given it's a powered BFG slot weapon.
			\n\n- The weapons here use substantially less ammo than in their original games.
			\n\n- The starting ammo limits of the mana types are 200 each, rather than 100 each in the original.", ""},
			
			{ "Levelling", "Levelling the demoness can be done by killing enemies. The more hitpoints the enemy has, the more experience points you gain. Experience is only given for kills you have netted.
			\n\nYou start out with a random amount of intelligence, wisdom, strength, and dexterity, and you start out at level 1. Everytime you level up, you gain 1 point in each statistic. You also gain 16-22 ammo capacity for both manas.
			\n\nIntelligence boosts your damage of ranged weapons by 2% for every point over 10. For every point less than 10, you deal 2% less damage. This stat can also decrease your tome of power cooldown by 4 seconds for each point. You can start out with 9-13 points.
			\n\nWisdom increases your experience gain by 5% per point. You can start out with 11-14 points.
			\n\nDexterity slightly increases the range of the Demoness's pistol weapon, the blood fire rune. This stat can start out with 9-13 points.
			\n\nStrength boosts your damage of melee weapons by 2% for every point over 10. For every point less than 10, you deal 2% less damage. You can start out with 11-14 points.
			\n\nAt Level 3, you gain the ability to collect the souls of enemies upon death. Bad characters like the Demoness or Caleb are healed by them, good characters like Parias and Chex Warrior are harmed by them, but most characters cannot collect them.
			\n\nAt Level 6, you gain the demon flight ability, which allows you to hold down the jump button to lower your gravity, which can help reduce fall damage or cross larger gaps.
			\n\nAt Level 9, you gain vampiric drain from your scythe.
			\n\nAt Level 12, you recover mana when you take damage below 50% health.", "" }
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "James Bond, British literary and film character, a peerless spy, notorious womanizer, and masculine icon. He is an internationally known spy that has one mission: to serve and protect his Royal Majesty by working for MI6, part of the British Secret Service. Bond was first conceived as a Cold War-era operative. Trained in intelligence and special forces, the superspy always used the latest gadgets, thwarted Soviet agents, brought international gangsters to justice, and inevitably bedded a beautiful woman. An enthusiastic gambler, he was nearly as loyal to his signature vodka martini as he was to the British crown and his Scottish roots. Although Bond radiated charisma and style, he was also intensely solitary and virtually friendless, despite his many trysts.", ""},
			
			{ "Traits", "Bond. James Bond: Being a spy, wearing body armor would potentially compromise his mission. As a result, Bond won't be able have as good armor as the other classes, his being more fragile and not as durable.
			\n\nShaken, not stirred: James Bond usually tries not to go into a situation guns blazing, and instead prefers a more discreet approach. Any spy knows aiming for the vitals can deliver an easy blow.", ""},
			
			{ "Changes", "- Goldeneye damage values use a substantially smaller scale than most of the other games that can be found in Samsara. It seemed to make sense to multiply all damage values by 10.
			\n\n- The Moonraker laser was able to pierce thin walls and doors. Given the lack of this ability, it instead pierces enemies.
			\n ^- The Moonraker laser also had infinite ammo in the original game. Instead it uses 2 cells per shot.
			\n\n- The Moonraker laser is an ultimate, so it does 50 times the damage opposed to the 10 times damage buffs other weapons got.
			\n\n- Goldeneye had duel wielding mechanics, but usually it involved enemies that dropped their weapons when they were dual wielding. This was a strange mechanic - instead, any weapon can be dual wielded here that could be dual wielded in Goldeneye.
			\n ^- By extension, Bond can dual wield in MP, whereas in the original there was no way to obtain dual weapons of any kind.
			\n\n- Goldeneye mines won't stack on each other when thrown on top of each other. It causes too many issues.
			\n\n- The weapons will sway left and right, but won't sway up and down when aiming upwards or downwards.", ""},
		},
		{
			{ "", "", ""},
		}
	},
	{
		{
			{ "Summary", "Petton Everhail, A powerful wizard from the kingdom of Thoria, made history after doing battle with his ArchRival Nemesis, first to rescue his friend Grelminar from the clutches of the evil lich using his powerful Magic Missile spells and a variety of magical artifacts and potions to vanquish the Orcs, Trolls, and Demons of the Catacomb. After his first fight with Nemesis, he finds his foe under a large cemetary in the Towne of Morbidity and follows Nemesis across space and time to thwart his plans of dominating the universe. After finally vanquishing Nemesis for good in the present day and his cybernetic form in the Far Future, Petton joins the Wheel of Samsara in hopes of intervening in the vile machinations of Nemesis (or those like him), to defend the people of Thoria yet again.", ""},
			
			{ "Traits", "As old school as it gets: Everhail comes from the extremely archaic infancy of First Person Shooter design, and as such weapon design wasn't quite what it would become later. Everhail has mastered the Magic Missile, and perhaps out of stubborness refuses to use anything else. Instead relying on magical artifacts that give supplementary benefits to the Magic Missile, Petton does not abide by the same weapon design as other heroes. Simply picking up ammo gives these artifacts. You do not need to find Slot pickups to use them.
			\n\nToo Hot to Handle: The projectiles Petton shoots aren't very fast, and the damage of his artifacts (while high) are very unfocused. However, using Secondary fire, Petton players can charge their magic missile up to 300% and utilize an artifact, releasing often times devastating damage on their enemies.", ""},
			
			{ "Changes", "- Catacomb 3D attacks often did only 1 damage, 3 at most. Most enemies had HP in the single digits. It seemed to make sense to multiply all damage values by 10.
			\n\n- In the Catacomb games, the player had to tap the attack key continously to fire. This could result in repetative stress when more durable enemies showed up, so to take it easy on you we made it so you can hold the attack button to fire continuously at a decent rate of fire.
			\n\n- In Catacomb 3D, the player could hold down the attack button instead of tapping to charge up a fireball (3X Damage) Spell. Here, however, charging is done with secondary, is much faster, can be chained with artifacts, and can be released early for 2X damage instead.
			\n\n- In the Catacomb Adventure Trilogy, Petton had a crystal ball radar that could upgraded to detect more enemies by picking up gems. Since we can't add a radar like that for technical reasons, the gems are instead worn as rings the give the player temporary buffs.
			\n\n- Due to the primitive nature of the Catacomb games, the Petton Everhail class has a far greater number of original weapons made for him than perhaps any other class in Samsara. Only his Pistol, slot 2, slot 4, and slot 7 are actual items in the Catacomb games. The rest were made up for Samsara.
			\n\n- Petton's hand is always seen in the center of the screen instead of slowly rising from the bottom as the player attacks." }	
		}
	},	
};

//[CLASSCOUNT] is hero index, [MAXMODES] is the modes, [20] is max slots, [5] is the amount of separate pieces of information
str ClassWeaponInfo[CLASSCOUNT][MAXMODES][20][5] = 
{
	{
		{
			{ "Fist", "Your iron-clad knuckles are a little better than nothing", "", " Fist ", "f" },
			{ "Pistol", "The Pistol is the only weapon you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.", "WPSTA0", " Pistol ", "p" },
			{ "Chainsaw", "The Chainsaw cuts the baddies like standing timber, but you have to get close.", "WSAWA0", " Chainsaw ", "1" },
			{ "Shotgun", "Shotguns deliver a heavy punch at close range and a generous pelting from a distance.", "WSHTA0", " Shotgun ", "2" },
			{ "Super Shotgun", "Combat Shotguns are double-barreled, sawed-off killing sticks. These gats are the ultimate in pellet warfare. Beware, two barrels not only deliver more fire power, but take more time to reload.", "WSSGA0", "Super Shotgun", "3" },
			{ "Chaingun", "Chainguns direct heavy firepower into your opponent, making him do the chaingun cha-cha.", "WCGNA0", " Chaingun ", "4" },
			{ "Rocket Launcher", "Rocket Launchers deliver an explosive rocket that can turn several baddies inside-out.", "WDRLA0", "Rocket Launcher", "5" },
			{ "Plasma Rifle", "Plasma Rifles shoot multiple rounds of plasma energy frying some demon butt!", "WPLSA0", "Plasma Rifle", "6" },
			{ "B.F.G. 9000", "BFG 9000s are the prize of the military's arsenal. Great for clearing the room of those unwelcome guests. Shoot it and see for yourself.", "WBFGA0", "B.F.G. 9000", "7" },
			{ "Berserk", "Berserk Packs heal you, plus act as a super-adrenaline rush, enormously boosting our muscle power. Since you're already a pretty meaty guy, this enhanced strength lets you tear ordinary dolts limb from limb, and you can even splatter those demons without too much trouble. However, you've got to use your Fist attack to get the benefit of the Berserk attack bonus. When you become Berserk, your screen will briefly turn red.", "DGBZA0", "DoomguyBerserker", "u" },
		},
		{
			{ "Fist", "Your iron-clad knuckles are a little better than nothing.\n\n[Remains unchanged to Doomguy's Fist.]", "", "  Fist  ", "f" },
			{ "Pistol", "The Pistol is the only weapon you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.\n\n[Fires slightly faster than Doomguy's Pistol.]", "", "  Pistol  ", "p" },
			{ "Chainsaw", "The Chainsaw cuts the baddies like standing timber, but you have to get close.\n\n[Does twice more damage than Doomguy's Chainsaw.]", "64SWZ0", "  Chainsaw  ", "1" },
			{ "Shotgun", "Shotguns deliver a heavy punch at close range and a generous pelting from a distance.\n\n[Unlike Doomguy's Shotgun, the screen jerks up and down for a bit when firing.]", "64SGZ0", "   Shotgun   ", "2" },
			{ "Super Shotgun", "Combat Shotguns are double-barreled, sawed-off killing sticks. These gats are the ultimate in pellet warfare. Beware, two barrels not only deliver more fire power, but take more time to reload.\n\n[Unlike Doomguy's Super Shotgun, this super shotgun can knock the player back a bit when fired.]", "64DBZ0", " Super Shotgun ", "3" },
			{ "Chaingun", "Chainguns direct heavy firepower into your opponent, making him do the chaingun cha-cha.\n\n[Unlike Doomguy's Chaingun, the screen will jerk up and down rapidly when fired at a consistent rate. It fires slightly faster.]", "64CGZ0", "   Chaingun   ", "4" },
			{ "Rocket Launcher", "Rocket Launchers deliver an explosive rocket that can turn one bad dude inside-out. Be careful with this one. Firing in close proximity at an object or enemy is bad for your health.\n\n[Unlike Doomguy's Rocket Launcher, this rocket launcher can knock the player back a bit when fired.]", "64MLZ0", "   Rocket Launcher   ", "5" },
			{ "Plasma Rifle", "Plasma Rifles shoot multiple rounds of plasma energy.\n\n[Unlike Doomguy's Plasma Rifle, which has a bit of a delay when releasing the fire trigger, Doom 64 Guy's Plasma Rifle does not have that delay when releasing the fire trigger, although this plasma rifle fires at a slightly slower rate.]", "64PRZ0", " Plasma Rifle ", "6" },
			{ "B.F.G. 9000", "BFG 9000s are the prize of the military's arsenal. Great for clearing the room of those unwelcome guests. There is a downside. It takes a second or two to charge prior to firing, so don't expect to fire right away.\n\n[Remains unchanged to Doomguy's BFG 9000.]", "64BFZ0", " B.F.G. 9000 ", "7" },
			{ "Unmaker", "(This weapon is obtained along with B.F.G. 9000)\nYou have the B.F.G. 9000 in your hands. Now almost every other weapon means nothing to you... wait...\nWhat the !@#%* is this!\n\nThe Unmaker can be upgraded up to three times. Collecting Berserk Packs will upgrade it. To fully upgrade the Unmaker, you need to collect three Berserk Packs.", "64UNZ0", "Unmaker", "7" },
			{ "Berserk", "Berserk Packs heal you, plus act as a super-adrenaline rush, enormously boosting our muscle power. Since you're already a pretty meaty guy, this enhanced strength lets you tear ordinary dolts limb from limb, and you can even splatter those demons without too much trouble. However, you've got to use your Fist attack to get the benefit of the Berserk attack bonus. When you become Berserk, your screen will briefly turn red.\n\n[Remains unchanged to Doomguy's Berserk.]\nBerserk Packs are used to upgrade the Unmaker.", "64BZA0", "Doom64GuyBerserk", "u" }
		}
	},
	{{
		{ "Bootspoon", "Your cereal spoon is a little better than nothing.", "", " Bootspoon ", "f" },
		{ "Mini-Zorcher", "The Mini-Zorcher is the only zorcher you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.", "", "Mini-Zorcher", "p" },
		{ "Super Bootspork", "The Super Bootspork teleports the Flemoids like a busted teleporter watch, but you have to get close.", "CSPRA0", "Super Bootspork", "1" },
		{ "Large Zorcher", "Large Zorchers deliver a heavy punch at close range and a generous pelting from a distance.", "SHOCA0", "Large Zorcher", "2" },
		{ "Super Large Zorcher", "The Bazoik military could have added another barrel to the Large Zorcher to make it shoot two shots at once or something. Nah, they decided to make something that does more damage but eats up a bit more ammunition.", "WSLZA0", "Super Large Zorcher", "3" },
		{ "Rapid Zorcher", "Rapid Zorchers direct heavy firepower into your opponent, making him do the teleporting cha-cha.", "MGUCA0", "Rapid Zorcher", "4" },
		{ "Zorch Propulsor", "Zorch Propulsor deliver an explosive-like energy that can teleport several baddies back to their home.\nBest of all, you don't take self-damage from the Zorch Propulsor!", "LAUCA0", "Zorch Propulsor", "5" },
		{ "Phasing Zorcher", "Phasing Zorchers shoot multiple rounds of plasma energy teleporting some Flemoid butt!", "PLACA0", "Phasing Zorcher", "6" },
		{ "LAZ Device", "LAZ Devices are the prize of the Bazoik military's arsenal. Great for clearing the room of those unwelcome guests (back to their home dimension). Shoot it and see for yourself.\nYou can also hold down the trigger to summon a LAZ shield. This can block most enemy attacks and if a projectile hit it, the projectile is reflected!", "CFUGA0", "LAZ Device", "7" },
		{ "Supercharge Breakfast", "Breakfast is the most important meal of the day!\nGives 100 additional health. Adds on to existing health and can go up to 200.", "CBRKA0", "ChexSoulsphere", "u" },
	}},
	{{
		{ "Staff", "Nothing magical about this weapon. It's a stick, unless it's powered-up, then it's as strong as an oak!", "", " Staff ", "f" },
		{ "Elven Wand", "Your base weapon. If you are using this, it's time to run unless it's powered-up, in which case your enemy should take the 'run' option.", "", "Elven Wand", "p" },
		{ "Gauntlets of the Necromancer", "The gauntlets replace your normal beatin' stick and deliver a devastating electrical attack.\nPowered-up, it sucks enemies in from a further distance and drains their life to increase yours!", "WGNTA0", "Gauntlets of the Necromancer", "1" },
		{ "Firemace", "The Firemace is a rapid firing weapon that shoots bouncing, explosive balls!\nPowered-up, Watch Out... this fires extremely large and powerful Balls 'o Death!", "WMCEA0", " Firemace ", "2" },
		{ "Ethereal Crossbow", "The crossbow shoots 3 magical arrows at once, deliver heavy damage at short range or hitting multiple targets at a distance.\nPowered-up, this baby blasts 5 slammin' magic arrows for a good, strong head-pounding punishment!", "WCBWA0", "Ethereal Crossbow", "3" },
		{ "Dragon Claw", "Firing a barrage of explosive magic, this weapon is perfect for clearing monster-infested hallways.\nPowered-up, the 'Ripper' delivers a four-way lethal blast, rippin' your enemy apart. ", "WBLSA0", "Dragon Claw", "4" },
		{ "Phoenix Rod", "The Phoenix Rod delivers and explosive charge that will decimate the normal baddie into bits.\nPowered-up, it's time to deliver some deep-fried damage as the rod pours out a steady, hot stream of raw inferno!  Watch 'em scream and burn - it's great!", "WPHXA0", "Phoenix Rod", "5" },
		{ "Hellstaff", "Now you're one bad elf. The Hellstaff fires at a high rate of speed and does heavy damage.\nPowered-up, this baby slams out a bone-crunching Rain From Hell that will leave your enemies wet - in their own steaming blood!", "WSKLA0", "Hellstaff", "6" },
		{ "Staff of D'sparil", "The primary weapon of D'Sparil; the first and youngest of the trio of Serpent Riders. A formidable weapon in the hands of anyone, especially yourself.\nPowered-up, your enemies will learn to think again to cross you...", "DSTFA0", "DSparilStaff", "7" },
		{ "Tome of Power", "Temporarily increases the power of your weapons or \"power-up.\" The Tome will appear in the top-right corner of the screen while it is active.", "ARTIPWBK", "PortTome", "u" },
	}},
	{
		{
			{ "Knife", "You always have a knife. It will help you out if you need a shave, but for the most part is used only when you're out of firepower for a final mano-a-mano.", "", "Knife", "f" },
			{ "Luger", "You always have a pistol, and will start the game out with one. This is the weakest of the guns... and unlike the knife, it doesn't need sharpening!", "", "Luger", "p" },
			{ "\"Sharper\" Knife", "Getting tired of sharpening that !@#%ing knife you start out with!? This one never needs to be sharpened from time to time! A chainsaw woulda been better though.\nYour knife does more damage.", "WKNPA0", "BJSuperKnife", "1" },
			{ "Machine Gun", "This machine gun is the primary armament of the SS guards. It's an efficient and powerful weapon that is useful for attacking multiple enemies.", "WMGPA0", "Machine Gun", "23" }, // Machine Gun for Slot III
			{ "Chaingun", "The Chaingun uses the gatling gun principle of rotating barrels. It's a destructive killing machine that will clear the room. However, it has a healthy appetite for ammunition. ", "WCHPA0", "  Chaingun  ", "4" },
			{ "Rocket Launcher", "Rockets fired from the launcher have the ability to plow through several enemies, provided they are in the line of fire.", "WRLPA0", " Rocket Launcher ", "5" },
			{ "Flamethrower", "This pyro-tool is powered by the \"gas cans\" that you'll find along the way. Hang fire on the bad guys with a burst of flame.", "WFLPA0", " Flamethrower ", "6" },
			{ "Spear of Destiny", "The artifact that Hitler covets most is the Spear of Destiny, the weapon that was used to pierce the side of Christ while he was nailed to the cross. According to legend, no man can be defeated with this spear in his possession.", "WSPRE0", "Spear of Destiny", "7" },
			{ "Extra Life", "Hidden within secret rooms of the fortresses are items that give you that extra urge to keep fighting!\nIf below 20 HP and takes damage, an extra life will be automatically used to send you back to the beginning of the level with full Health, Armor, and Ammo 1. Does not work against massive burst damage...yet.", "WOLFLIFE", "WolfExtraLife", "u" },
		},
		{
			{ "Knife", "You always have a knife. It will help you out if you need a shave, but for the most part is used only when you're out of firepower for a final mano-a-mano.", "", "Knife", "f" },
			{ "Luger", "You always have a pistol, and will start the game out with one. This is the weakest of the guns... and unlike the knife, it doesn't need sharpening!", "", "Luger", "p" },
			{ "\"Sharper\" Knife", "Getting tired of sharpening that !@#%ing knife you start out with!? This one never needs to be sharpened from time to time! A chainsaw woulda been better though.\nYour knife does more damage.", "WKNPA0", "BJSuperKnife", "1" },
			{ "Machine Gun", "This machine gun is the primary armament of the SS guards. It's an efficient and powerful weapon that is useful for attacking multiple enemies.", "WMGPB0", "Machine Gun", "23" }, // Machine Gun for Slot III
			{ "Chaingun", "The Chaingun uses the gatling gun principle of rotating barrels. It's a destructive killing machine that will clear the room. However, it has a healthy appetite for ammunition. ", "WCHPB0", "  Chaingun  ", "4" },
			{ "Rocket Launcher", "Rockets fired from the launcher have the ability to plow through several enemies, provided they are in the line of fire.", "WRLPB0", " Rocket Launcher ", "5" },
			{ "Flamethrower", "This pyro-tool is powered by the \"gas cans\" that you'll find along the way. Hang fire on the bad guys with a burst of flame.", "WFLPB0", " Flamethrower ", "6" },
			{ "Spear of Destiny", "The artifact that Hitler covets most is the Spear of Destiny, the weapon that was used to pierce the side of Christ while he was nailed to the cross. According to legend, no man can be defeated with this spear in his possession.", "WSPRN0", "Spear of Destiny", "7" },
			{ "Extra Life", "Hidden within secret rooms of the fortresses are items that give you that extra urge to keep fighting!\nIf below 20 HP and takes damage, an extra life will be automatically used to send you back to the beginning of the level with full Health, Armor, and Ammo 1. Does not work against massive burst damage...yet.", "WFLFB0", "WolfExtraLife", "u" }
		},
		{
			{ "Knife", "You always have a knife. It will help you out if you need a shave, but for the most part is used only when you're out of firepower for a final mano-a-mano.", "", "Knife", "f" },
			{ "Luger", "You always have a pistol, and will start the game out with one. This is the weakest of the guns... and unlike the knife, it doesn't need sharpening!", "", "Luger", "p" },
			{ "\"Sharper\" Knife", "Getting tired of sharpening that !@#%ing knife you start out with!? This one never needs to be sharpened from time to time! A chainsaw woulda been better though.\nYour knife does more damage.", "WKNPA0", "BJSuperKnife", "1" },
			{ "Machine Gun", "This machine gun is the primary armament of the SS guards. It's an efficient and powerful weapon that is useful for attacking multiple enemies.", "WMGPA0", "Machine Gun", "23" }, // Machine Gun for Slot III
			{ "Chaingun", "The Chaingun uses the gatling gun principle of rotating barrels. It's a destructive killing machine that will clear the room. However, it has a healthy appetite for ammunition. ", "WCHPA0", "  Chaingun  ", "4" },
			{ "Rocket Launcher", "Rockets fired from the launcher have the ability to plow through several enemies, provided they are in the line of fire.", "WRLPA0", " Rocket Launcher ", "5" },
			{ "Flamethrower", "This pyro-tool is powered by the \"gas cans\" that you'll find along the way. Hang fire on the bad guys with a burst of flame.", "WFLPA0", " Flamethrower ", "6" },
			{ "Spear of Destiny", "The artifact that Hitler covets most is the Spear of Destiny, the weapon that was used to pierce the side of Christ while he was nailed to the cross. According to legend, no man can be defeated with this spear in his possession.", "WSPRE0", "Spear of Destiny", "7" },
			{ "Extra Life", "Hidden within secret rooms of the fortresses are items that give you that extra urge to keep fighting!\nIf below 20 HP and takes damage, an extra life will be automatically used to send you back to the beginning of the level with full Health, Armor, and Ammo 1. Does not work against massive burst damage...yet.", "WOLFLIFE", "WolfExtraLife", "u" },
		},
		{
			{ "Knife", "Used for close combat, the knife is best as a last resort. It requires no ammo.", "WKNPA0", "Totenkopf_Knife", "f" },
			{ "Walter P38 Pistol", "The standard German pistol. You'll need to switch to a better weapon when fighting multiple enemies.", "TK02M0", "Totenkopf_Pistol", "p" },
			{ "M712 Rapid-Fire Pistol", "This machine pistol was developed by Mauser as a selective fire sidearm. It eats up ammo quick but can be a good crowd control weapon to stun multiple targets at once.", "TK10K0", "Totenkopf_Mauser", "1" },
			{ "Kar98k Rifle", "The Kar98K is the standard German rifle. Its strength and accuracy make it the choice weapon among snipers.", "TK03M0", "Totenkopf_Kar98K", "2" },
			{ "STG44 Assault Rifle", "Abbreviated for \"Sturmgewehr 44,\" the STG44 is an assault rifle that has the same rate of fire as the MP40, only it is much more powerful.", "TK05F0", "Totenkopf_STG44", "3" },
			{ "MP40 Submachine Gun", "This machinegun comes in handy when fighting groups of enemies. It is often carried by S.S. personnel.", "TK04K0", "Totenkopf_MP40", "4" },
			{ "Panzerschreck", "The Panzerschreck is an anti-tank weapon of the German Army. It fires slowly but deals tremendous damage.", "TK07H0", "Totenkopf_Panzerschreck", "5" },
			{ "Chaingun", "This ultra-speed Gatling gun can mow down an entire Nazi platoon in seconds! However, it uses up ammo like popcorn.", "TK08F0", "Totenkopf_Chaingun", "6" },
			{ "Flakgun", "The most famous artillery piece of German forces converted into a one-man portable weapon, with no compromises in efficiency.", "TK09F0", "Totenkopf_Flakgun", "7" },
			{ "MG42 Portable Machine Gun", "It is most notable for its very high cyclic rate for a gun using full power service cartridges, which made it extremely effective in providing suppressive fire, and its unique sound led to it being nicknamed \"Hitler's buzzsaw\".", "TK11F0", "Totenkopf_MG42", "u" },
			{ "Flamethrower", "Ideal for clearing out trenches and buildings - also ideal for cooking enemies.", "TK06F0", "Totenkopf_Flamethrower", "u" },
			{ "Kar98k Sniper Rifle", "For snipers, Karabiner 98k rifles selected for being exceptionally accurate during factory tests were fitted with a telescopic sight as sniper rifles.", "TK12M0", "Totenkopf_Sniper", "u" },
			{ "Power Armor", "Kept in a lab along with the nazis most powerful mutant projects, not only does this armor absorb half the damage taken from attacks and grant 200 armor, it also grants permanent armor regeneration. \n\nTo obtain this armor, you must find 20 secrets.", "TK55A0", "TotenkopfPowerArmor", "" },
			{ "Healing Orb", "Kept in a dungeon with the most unstable Nazi experiment ever devised, this healing orb does not just heal you for 200 health points, it will also enable permanent health regeneration. \n\nTo obtain this artifact, you must find 30 secrets.", "TK55B0", "TotenkopfHealingOrb", "" },
		}
	},
	{
		{
			{ "Mace of Contrition", "The Mace will only cause contrition in an enemy after numerous beatings. This weapon should only be used as a last resort because of its short range!", "", "Mace of Contrition", "f" },
			{ "Jade Wand", "A rather weak wand which will slowly melt away your enemies, emphasis on slowly. It's not too good outside of close range, either.", "", "Sapphire Wand", "p" },
			{ "Poison Cloud Flechette", "When a Cleric, such as Parias, uses the flechette, it produces a poison gas cloud, lethal to any who venture near.\nIt is an inventory item and has unlimited ammunition but also a cooldown timer.", "PSBGA0", "PortFlechette", "1" },
			{ "Crusader's Longbow", "The Crusader's Longbow is a standard longbow of the Church's order. The arrows are infused with electric energy which will fry and pierce your enemies.", "H114A0", "Frost Shards", "2" },
			{ "Bishop's Shortsword", "The Bishop's Shortsword is a unique sword in the religious order - only a truly holy warrior can wield the power of this sword to vanquish evil with holy fire in a wave.", "H119H0", "Timon's Axe", "3" },
			{ "Serpent Staff", "The essence of the sacred Kalrath serpent is contained within this staff. Feed it with the blue mana and it will serve you faithfully by spitting twin venom spheres at your enemies. Using this staff up close will drain your enemy's life and give some of it to you!", "WCSSA0", "Serpent Staff", "4" },
			{ "Ice Fang", "This staff is a weapon created by the Church's order. Only a true devotee has the spirit to vanquish the cold touch of the staff, but when in the right hands, it will quickly freeze your enemies.", "H117A0", "Hammer of Retribution", "5" },
			{ "Firestorm", "The Firestorm spell lets you summon a gout of fire from the earth. The flames appear at your enemy's feet and roar upward to engulf his entire body, roasting him alive. All things considered, Firestorm is the ultimate barbecue.", "WCFMA0", "Firestorm", "6" },
			{ "Wraithverge", "A very powerful multi-part weapon, this staff will summon the forces of the grave to feed upon your enemy's soul, tearing and knashing away at the lifeforce like hungry dogs!", "WWRTA0", "Wraithverge", "7" },
			{ "Mystic Ambit Incant", "Restores nearby players' health by 50 to 90 points, gives Parias armor, and also spreads 15 armor shards for teammates to pick up.", "HRADA0", "PortMysticAmbit", "u" },
		},
		{
			{ "Sapphire Wand", "Useful for killing enemies, eventually, this wand will fire quick magical blue darts at your target. There is no limit to the amount of charges in this wand and it requires no mana.", "", "Sapphire Wand", "p" },
			{ "Time Bomb Flechette", "When a mage like Daedolon drops this, it explodes like a time bomb.\nIt is an inventory item and has unlimited ammunition but also a cooldown timer.", "PSBGA0", "PortFlechette", "1" },
			{ "Frost Shards", "This spell lets you shoot frozen shards from your hands. These ice bolts are significantly stronger than the Sapphire Wand's small darts, so use Frost Shards whenever possible to freeze your enemies where they stand.", "WFRSA0", "Frost Shards", "2" },
			{ "Fire Blast", "This spell contrasts with the Frost Shards. It fires a wave of fire which will burn your victims to a crisp.", "H113Y0", "Timon's Axe", "3" },
			{ "Blight Shock", "This staff is feared by many, even those who use it, for it's unpredictable toxic projectiles that bounce around wherever they hit. Therefore, this weapon is best used against crowds rather than high profile targets.", "TSOGA0", "Serpent Staff", "4" },
			{ "Viscerelagh", "The Blood Scepter is a horrible tool using magic created by Korax' chief mages before his death. It is capable of dealing substantial amounts of damage very quickly. Creatures killed with this weapon, even if they are inanimate or undead, have a portion of their life force (or animating magic) siphoned to their killer, making it a very useful weapon when near death.", "H107A0", "Hammer of Retribution", "5" },
			{ "Arcs of Death", "The arc of death spell fires vertical columns of supercharged electrical energy from your hands, blasting your foes with devastating impunity. Once it hits a creature, it will stay near them and continue to damage them finally disappearing.", "WMLGG0", "Firestorm", "6" },
			{ "BloodScourge", "This mighty multi-part staff fires multiple tracking spheres that will seek and destroy everything in their path. Mages who prefer not to aim will appreciate the bloodscourge, the humans first successful attempt at a fire-and-forget weapon.", "H105A0", "Wraithverge", "7" },
			{ "Disc of Repulsion", "When you use this artifact, everything within a certain radius of your body is deflected away. This includes monsters, projectiles, and even spells!", "H124A0", "PortMysticAmbit", "u" },
		},
		{
			{ "Spiked Gauntlets", "The fighter starts the game with these gauntlets and always has them \"at hand\" as a last resort. Each punch wears down your enemy's defense and every third punch delivers a mighty blow!", "", "Mace of Contrition", "f" },
			{ "Impaler Crossbow", "A rather dreadful but sturdy crossbow. It does a decent amount of damage against enemies, if you have a lot of patience, that is. \n\nGetting in close range of enemies allows you to jab enemies with it's sharp bolt.", "H100G0", "Sapphire Wand", "p" },
			{ "Throwing Flechette", "A fighter such as Baratus who throws the Flechette produces an effect like a grenade.", "PSBGA0", "PortFlechette", "1" },
			{ "Spear of Zeal", "The Spear of Zeal may only be wielded by the mightiest fighter. You only need blue mana if you want to maximize your damage. Otherwise, you can throw it as many times as you want. \n\nGetting in close range allows you to stab enemies with it.", "H102Q0", "Frost Shards", "2" },
			{ "Timon's Axe", "The Axe makes you want to really jump in there and hack away at your enemies as it deals out much more damage than the Fighter's Spiked Gauntlets. This is also a close-range-only weapon, so be careful not to get carried away!", "WFAXA0", "Timon's Axe", "3" },
			{ "Jotunn's Flail", "This mysterious flail said to have been forged by the gods can throw slow moving ice projectiles that fire icicles in random directions. \n\nThis flail can perform melee attacks when in front of the enemy.", "H122R0", "Serpent Staff", "4" },
			{ "Hammer of Retribution", "Now you can really start dealing some death! The Hammer can be thrown straight out in a skull-spitting attack or you can get up-close and personal for that special bludgeoning that only you can provide.\nWhen used at long range, a strong projectile exits the Hammer. When used at close quarters, there's no projectile but a direct hit with the Hammer. No mana is used in this case.", "WFHMA0", "Hammer of Retribution", "5" },
			{ "Quickspell Gauntlets", "The quickspell gauntlets were a weapon by the Sidhe called the \"Necromancer Gauntlets\". After D'Sparil was defeated, the blueprints for this device were spread around and it became a joint project between the Legion and Arcanum to improve the design. It requires no knowledge of magic to use these, and therefore allows users to fire energy projectiles through their hands. \n\nBeing in close range of your foes drains their health just like the previous prototype.", "H102R0", "Firestorm", "6" },
			{ "Quietus", "This multi-part runesword is called Quietus because it's the ultimate way to silence your foes. After one slice from this steel companion, most monsters willingly surrender their soul. /n/nYou'll need a little bit of both blue and green mana to maximize this weapon's damage, but it's not required.", "H102P0", "Wraithverge", "7" },
			{ "Dark Servant", "The Dark Servant appears as a small maulotaur figurine. When you use it, it will grow to a life-size maulotaur that will defend you for about 30 seconds before disappearing. While the maulotaur has notoriously poor aim that could kill players in Hexen, that feature has thankfully been dropped here.", "H125I0", "PortMysticAmbit", "u" },
		}
	},
	{
		{
			{ "Mighty Boot", "Use this when Duke needs to do a little ass kicking.", "", "Mighty Boot", "f" },
			{ "Glock 17", "This is an automatic pistol which does normal damage.\n\nThe Pistol holds 12 bullets in each clip before automatically reloading.", "", "Glock 17", "p" },
			{ "Pipebombs", "To toss a bomb, press FIRE. The longer the FIRE button is held, the father the bomb with go. After tossing the bomb, the thumb-activated detonator will appear. To blow up the bomb, just press FIRE again. To detonate more than one pipe bomb at once, throw the first one, select this weapon again, then throw another.", "WPBMA0", "Pipebombs", "1" },
			{ "Shotgun", "This shotgun packs a far more powerful blast than the pistol.", "SHTPA0", "  Shotgun  ", "2" },
			{ "Explosive Shotgun", "Later in the game, you may find another shotgun that fires exclusively explosive shotgun shells. They do a serious amount of damage to anyone they hit. Be careful about using them in small areas though - you may catch yourself in the blast.", "DXSPA0", "Explosive Shotgun", "3" },
			{ "Chaingun Cannon", "This rapid fire chaingun is a good weapon for dispersing several enemies at once.", "CHGPA0", "Chaingun Cannon", "4" },
			{ "RPG", "The rocket launched weapon is great for dealing with enemies from a distance. When the rocket hits, it explodes with enough force to affect anything right around it, Duke included, so beware.", "DRPGA0", "RPG", "5" },
			{ "Freezethrower", "Streams of freezing nitrogen discharge through the environment as this weapon chills its victims down to the point of death and ultimately crystallization.", "FRZPA0", "Freezethrower", "6" },
			{ "Devastator", "Straight out of the Pentagon's top secret labs comes this double barreled brute of a weapon which lets loose swarms of miniature stinger missiles in the direction of your enemies.", "DEVPA0", "Devastator", "7" },
			{ "Jetpack", "Duke's government-issue jetpack is one of his greatest tools, whether in mortal conflict against raging aliens or in personal grudge matches in multiplayer. Turn it on, then use the jump and crouch keys to raise and lower yourself.\n\nIf the Jetpack is banned by server admin, this weapon instead gives you 8x boot damage.", "DKJTA0", "DukePortJetpack", "u" },
			{ "Shrinker", "This slick weapon will shrink your enemies to pint-sized for several seconds. During that time, Duke can stomp and squish the shrunken foes by walking on top of them.\nThe Shrinker is ineffective and deals no damage towards boss type enemies.", "DKSRR0", "Shrinker", "u" },
			{ "Expander", "By emitting microwaves, this weapon will superheat any enemy and cause it to expand until it finally \"pop\" into a bloody mess.\nThe Expander can deal damage towards boss type enemies, but they will not expand on death.\n\nIf \"Duke Expander Mode\" is set to: Microwave Pop\nWhen an expanded enemy explodes and it damages another nearby enemy to the point of death, that enemy will also expand then explode!", "DKXPI0", "Expander", "u" }
		},
		{
			{ "Mighty Boot", "[Mighty Boot Unchanged]\n\nDuke kicks butt flip-flop style.", "", "Mighty Boot", "f" },
			{ "Water Pistol", "[Reskin of Glock 17]\n\nFor the little squirts.", "", "Glock 17", "p" },
			{ "Pineapples", "[Reskin of Pipebombs]\n\nExplosions 'n' fruit.", "WPBMB0", "Pipebombs", "1" },
			{ "Super Soak'em", "[Reskin of Shotgun]\n\nFor bigger squirts.", "SHTPB0", "  Shotgun  ", "2" },
			{ "Explosive Shotgun", "[Explosive Shotgun Unchanged]\n\nWhat did you expect? Another Super Soak'em loaded with nitroglycerin or something?", "DXSPA0", "Explosive Shotgun", "3" },
			{ "Triple Poison Shooter", "[Reskin of Chaingun Cannon]\n\nA trio of poison darts blowpipes. So why does it look like it shoots water instead?", "CHGPB0", "Chaingun Cannon", "4" },
			{ "Coconut Launcher", "[Reskin of RPG]\n\nMake an impact with hairy balls to the face.", "DRPGB0", "RPG", "5" },
			{ "Ice Crusher", "[Reskin of Freezethrower]\n\nFor devastation on the rocks.", "FRZPB0", "Freezethrower", "6" },
			{ "Conchanator", "[Reskin of Devastator]\n\nShell-shocking.", "DEVPB0", "Devastator", "7" },
			{ "Jetpack", "[Jetpack Unchanged]\n\nDuke was thinking of a jetpack that runs on hot sauce, but his standard jetpack was fine enough. Besides, hot sauce is best used just in case he runs out of steroids.", "DKJTA0", "DukePortJetpack", "u" },
			{ "Voodoo Ring (Shrinker)", "[Reskin of Shrinker]\n\nIt'll put a \"small\" spell on you...", "DKSRW0", "Shrinker", "u" },
			{ "Voodoo Ring (Expander)", "[Reskin of Expander]\n\nIt'll put a \"big\" spell on you...", "DKSRW0", "Expander", "u" }
		}
	},
	{{
		{ "Steel Knuckles", "There really doesn't need to be an explanation about something you were technically born with. You can dual-wield the steel knuckles (by pressing the Alt Fire key)...because you were born with two hands?", "", "Steel Knuckles", "f" },
		{ ".44 Magnum Mega Class A1", "The new standard issue sidearm for all field personnel doesn't look much like your old .45 MMC, does it? That is because it has been built for a single purpose, by a dedicated people and not by underpaid laborers toiling for a thinly-veiled government-owned arms manufacturing machine (oiled with the blood of the underclasses, by the way) which exists solely to line the pockets of the greedy bureaucrats who run the military/industrial complex.\n\nAutomatically reloads after 8 rounds.", "", ".44 Magnum Mega Class A1", "p" },
		{ "KKV-7 SMG Flechette", "...the flechette, with its small cross-section (4mm), longer body and pointed nose experiences far less wind resistance and thus retains more muzzle velocity over a greater distance with a flatter trajectory than its less advanced \"slug-thrower\" counterparts. its armor piercing capabilities rival those of the mighty M1A2 .75 BR and the bio-organic trauma it inflicts is terrifying (being somewhat less effective against mechanical targets).\n\nAutomatically reloads after 32 rounds.", "FSMGA0", "KKV-7 SMG Flechette", "1" },
		{ "Extra .44 Magnum", "(This weapon is obtained along with KKV-7 SMG Flechette)\n\nThe .44 Magnum has already been explained. Just know that you can dual wield two of these bad boys.", "", "CanDualPistols", "1" },
		{ "WSTE-M5 Combat Shotgun", "While going through some data I appropriated from the Marathon (looking for design notes, of course) I stumbled across a reference to a weapon used by Imperialist forces against the inserectionists during the Ares Raid; July 14, 2444. (Never heard of it? I'm not surprised!) Many years of loving craftsmanship went into the design and construction of this brutal tool of mayhem, I hope you can appreciate that. I won't waste my time trying to explain the loading mechanism to you - your primitive mind could never grasp its complex nature.\n\nPicking up another shotgun will allow you to dual wield them, although you will need to find a Fusion Pistol in order to gain another shotgun.\n Press the Alt Fire key to dual wield shotguns. ", "SHTYA0", "WSTE-M5 Combat Shotgun", "2" },
		{ "Zeus-Class Fusion Pistol", "The S'pht have done their best to create an infinite supply of fusion batteries out of the finite number you were transported on board with. If it were not for their ingenuity and industrious nature you wouldn't be able to run around firing with reckless abandon at everything that moves as you are wont to do. But, like the hundredth copy of a third generation duplication of a substandard bootleg - they're a little fuzzy. One might even say unstable.\n\nHold down the Alt Fire key to charge up a powerful shot.\nAutomatically reloads after 20 rounds.", "FUSPA0", "Fusion Pistol", "3" },
		{ "MA-75B Assault Rifle", "The original M .75 was a ridiculous toy designed to impress aging pompous generals. Gone are the preposterously short barrel and the prodigious recoil that made firing the weapon akin to wrestling a greased pig. Still here is the oxygen hungry ammunition that makes it impossible to fire in vacuum.\n\nPress the Alt Fire key to use the integrated Grenade Launcher.\nPrimary Fire automatically reloads after 52 rounds.\nSecondary Fire automatically reloads after 7 grenades.", "RIFLA0", "MA-75B Assault Rifle", "4" },
		{ "SPNKR-XP SSM Launcher", "A self-important human once said \"... sometimes a cigar is just a cigar.\" This may be so, but in the case of the <<rocket launcher>> you've got one majorly explosive cigar.\n\nWhen you switch to this weapon, you must wait for it to be raised up before you can use it.\nWhen you switch to another weapon, you must wait for this weapon to lower down completely before you can use another weapon.\nAutomatically reloads after 2 rockets.\nCareful, the reload is slow.\n", "RCKLA0", "SPNKR-XP SSM Launcher", "5" },
		{ "TOZT-7 Napalm Unit", "I don't believe it is necessary for me to state the personality disorders evident in an individual who enjoys, or more accurately revels, in spraying their enemies with flaming napalm aerosol.\n\nAutomatically reloads after 210 ammo.", "THRWA0", "TOZT-7 Napalm Unit", "6" },
		{ "ONI-71 Wave Motion Cannon", "A long-rumored weapon of great power...\n\nWhen you switch to this weapon, you must wait for it to be raised up before you can use it.\nWhen you switch to another weapon, you must wait for this weapon to lower down completely before you can use another weapon.\nHold the Primary Fire key to charge up to three levels. Press the Alternate Fire key to fire a mortar.\n\nPrimary Fire automatically reloads after 8 charges.\nSecondary Fire automatically reloads after 3 mortars.\nCareful, the reload for Primary and Secondary Fire are slow.", "WMCPA0", "ONI-71 Wave Motion Cannon", "7" },
		{ "Alien Weapon #1", "System error 0xfded-1. Cannot determine the description for this weapon. Rebooting system. A weapon that shoots fireballs. Primary fire shoots a fireball forward at a fast fire rate. Alternate fire shoots a fireball left and right at a fast fire rate. Because of its alien nature, it has infinite ammunition.", "AWPNA0", "Alien Weapon", "u" },
		{ "Alien Weapon #2", "System error 0xfded-2. Cannot determine the description for this weapon. Rebooting system. A weapon that shoots bullets at a rapid fire-rate. Because of its alien nature, it has infinite ammunition.", "AWPNB0", " Alien Weapon ", "u" }
	}},
	{{
		{ "Axe", "The last resort. Face it -- going toe-to-toe with the uglies in Quake demonstrates all the good sense of a man parachuting into an alligator farm.", "", "Axe", "f" },
		{ "Single Shotgun", "The basic gun, to which all other guns compare favorably.", "", "Single Shotgun", "p" },
		{ "Mjolnir", "This is THOR's War Hammer. Electrical by nature, when hammered to the floor it sends out a scattered electrical force along the ground. An ear-piercing clap of thunder will sound when the opponent is struck. The electrical current can spread from one opponent to the next.", "UNIQP0", "Mjolnir", "1" },
		{ "Double Shotgun", "A worthy weapon with two minor drawbacks: first, it's slow; second, its shot pattern is very loose at long range. But in general, once you find this puppy, the other shotgun starts rusting from disuse.", "QDBSZ0", "Double Shotgun", "2" },
		{ "Grenade Launcher", "Thumps neat exploding bombs into the air. You can even bounce a grenade off the wall or floor. When a grenade hits someone, it explodes. If it misses, the bomb sits on the floor for a moment, then explodes. Even though I sometimes bounce grenades into myself, this gun's still my favorite.\n\nAlt Mode:\nMulti-Grenades: Explodes into 5 mini clusters after a timed delay. Useful for clearing a group of enemies - don't waste them on a single enemy. ", "QGRLZ0", "Grenade Launcher", "3" },
		{ "Nailgun", "A two-barrel dingus that prickles bad guys with armor-piercing darts, technically termed \"nails\".\n\nAlt Mode:\nLava Nails: Deals about 30% more damage to enemies (especially enemies weak against fire) and ignores armor on players in multiplayer.", "QNLGZ0", "Nailgun", "4" },
		{ "Rocket Launcher", "For when a grenade positively, absolutely, has to be there on time.\n\nAlt Mode:\nMulti-Rockets: 4 smaller rockets, deadly to everything including yourself. Do not try to rocket jump with this!", "QRKLZ0", "  Rocket Launcher  ", "5" },
		{ "Super Nailgun", "The great equalizer. Four cyclic barrels that hose out spikes like crazy. Pro: foes drop like flies. Con: eats ammo like popcorn.\n\nAlt Mode:\nLava Nails: Deals about 30% more damage to enemies (especially enemies weak against fire) and ignores armor on players in multiplayer. ", "QSNGZ0", "Super Nailgun", "6" },
		{ "Thunderbolt", "Try it. You'll like it. Use the same technique as watering your rosebush.\n\nAlt Mode:\nPlasma Cell: Unleashes a ball of plasma that deals heavy damage on impact and unleashes lightning bolts onto nearby enemies.\n\nUsing this weapon underwater will instantly kill you.", "QLTGZ0", "Thunderbolt", "7" },
		{ "Quad Damage", "(This item is obtained along with Thunderbolt)\nMagnum upgrade! You now deliver four times the pain!", "QUDDA0", "QuadDamagePickup", "7" },
		{ "Laser Cannon", "This weapon emits a series of laser blasts that disintegrates anything in its path. The laser canon will have the ability to bounce off an inanimate object at least once; in tight quarters, maybe twice.", "QLSCZ0", "Laser Cannon", "u" }
	}},
	{
		{
			{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
			{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
			{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "1" },			
			{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
			{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "3" },
			{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
			{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
			{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
			{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
			{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
			{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
			{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
		},
		{
			{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
			{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
			{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "1" },			
			{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
			{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "3" },
			{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
			{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
			{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
			{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
			{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
			{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
			{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
		},
		{
			{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
			{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
			{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "1" },			
			{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
			{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "3" },
			{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
			{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
			{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
			{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
			{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
			{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
			{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
		},
		{
			{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
			{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
			{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "1" },			
			{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
			{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "3" },
			{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
			{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
			{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
			{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
			{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
			{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
			{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
		},
		{
			{ "Knife", "It's a knife. That's it. You can use it to cut nets or something.", "", "RottKnife", "f" },
			{ "Pistol", "You don't have to collect bullets in this game.", "", "RPistol", "p" },
			{ "Bazooka", "Your basic straight shooting missile-firing weapon. Always a fun way to toast Triad terrorists terminally.", "PBAZA0", "Bazooka", "1" },			
			{ "Double Pistols", "Two guns at once. Double your pleasure, double your fun! This'll \"Woo\" them to your side.", "PPSTA0", "Double Pistols", "2" },
			{ "Heat Seeker", "Will lock in on any heat source and head towards it. Handy for surgically picking off baddies.", "PHSEA0", "HeatSeeker", "3" },
			{ "MP40", "Once you have this, low guards are not a problem", "PM40A0", "MP40", "4" },
			{ "Firebomb", "This explodes in a big X of fireblasts, shaking the very ground you walk on. Not for close quarters.", "PFBMA0", " Firebomb ", "5" },
			{ "Drunk Missiles", "Five missiles fly out with no clue of where they are going.", "PDNKA0", "DrunkMissiles", "6" },
			{ "Flame Wall", "As soon as this missile hits the ground, a wall of flame springs to life and burns enemies to cinders.", "PFWLA0", "FlameWall", "7" },
			{ "Split Missile", "Hold down the fire button and two heat-seeking missiles fire. Let go, and they split off at 45 degree angle, plus the missiles both heat seek once split.", "PSPLA0", "Split Missile", "u" },
			{ "Excalibat", "When one of the ancient staff-creating spells called for a length of wood, all the Oscurido minions could find was a baseball bat. Now it's an enchanted baseball bat. You can bat around your enemies, which is pretty cool. But it has a secret power, if you can only unlock it.\n\nPrimary Fire: Hold down the Primary Fire key to fire a spread shot of magical baseballs.\nSecondary Fire: Do a simple melee attack that doesn't use up any ammunition. It can reflect most projectiles.", "PBATA0", "Excalibat", "u" },
			{ "Dark Staff", "This is an incredibly powerful weapon. Little stops it, except thick walls. It destroys virtually everything in its path. A kinetic energy sphere, bristling with wild blue magic, shrieks toward your enemies.", "PKE_A0", "Dark Staff", "u" }
		},
	},
	{{
		{ "Auto Charge Pistol", "The ACP does not require a charge pack; you'll have to wait for the unit to recharge. It's a silent attack weapon, so skulk around awhile - firing it won't announce your presence!", "BWP1A0", "Auto Charge Pistol", "p" },
		{ "Auto Charge Pistol Upgrade", "Upgrades the Auto Charge Pistol to do slightly more damage. Now you can do stealth takedowns on tougher enemies without much issue.", "BWP1A0", "BlakeSuperAutoCharge", "1" },
		{ "Slow Fire Protector", "This weapon requires a charge pack for use. There is a slight recharge period between shots fired. However, it does allow for more rapid fire than the Auto Charge Pistol.", "BWP2A0", "Slow Fire Protector", "2" },
		{ "Heavy Assault Weapon", "You know, this weapon looks like it should be a Rapid Assault Weapon... Either way, it's similar to the Slow Fire Protector but is a bit more powerful.", "BWP3A0", "Heavy Assault Weapon", "3" },
		{ "Rapid Assault Weapon", "A medium speed repeat-fire unit, the Rapid Assault Weapon requires a charge pack. Like the Slow Fire Protector it cannot recharge itself.", "BWP4A0", "Rapid Assault Weapon", "4" },
		{ "Plasma Discharge Unit", "If you want to dispatch some enemies P.D.Q. - use the P.D.U. (Plasma Discharge Unit). With a wide range of detonation and repeat fire capabilities, this is a powerful weapon. It also requires an energy charge pack for operation. ", "BWP5A0", "Plasma Discharge Unit", "5" },
		{ "Dual Neutron Disruptor", "This high speed repeat-fire unit is fitted with dual, oscillating barrels. It packs a wallop, but requires the stored energy of a charge pack.", "BWP6A0", "Dual Neutron Disruptor", "6" },
		{ "Anti-Plasma Cannon", "If you want to dispatch some enemies P.D.Q. - use the A.P.C. (Anti-Plasma Cannon). This is the weapon of choice when Blake wants to dish out some pain. It also requires an energy charge pack for operation. The Anti-Plasma Cannon can also destroy unlocked doors.", "BWP7A0", "Anti-Plasma Cannon", "7" },
		{ "Ammo Recharge Battery", "Replenishes 25% of the ammo capacity of the current weapon. This is an inventory item.", "BAMRA0", "BlakeRefill", "u" }
	}},
	{{
		{ "Pitchfork", "This handy tool can be very effective if you can get close enough to your foes to use it on them. It doesn't need ammo, so you'll always have it to fall back on if you need it.", "", "Pitchfork", "f" },
		{ "Revolver", "You can't be a gunslinger if you don't have a revolver at hand.", "", "   Revolver   ", "p" },
		{ "TNT Bundle", "Light one up and chuck it at a group of zombies and you'll be rewarded with red rain and chunks of rotted flesh on the brim of your hat. The longer you hold down the fire button, the farther you'll throw the bundle. Watch the meter on the status bar to gauge the distance. The primary mode explodes on impact, while the alternative mode will burn all the way down before it explodes, making for some interesting traps.\n\nYou will instantly die if you light the dynamite for too long!", "TBOXA0", "Dynamite", "1" },
		{ "Flare Pistol", "Fires burning projectiles that lodge easily in flesh and continue to burn for a short period of time. Unless you dive into water, you'll take damage until the flare burns itself out, by which time it may be too late. The alternative fire launches a starburst flare that douses a large area with flames. Can provide effective crowd control.", "FGRNA0", "Flaregun", "2" },
		{ "Sawed-Off Shotgun", "A trusty companion if ever there was one. It doesn't have great range, but it packs a hell of a wallop up close. Can be fired either a barrel at a time or both at once for extra damage.", "SOSPA0", "Sawedoff", "3" },
		{ "Tommy Gun", "The Tommy Gun is a favorite of the Cabal for its rapid rate of fire and impressive accuracy. On the down side, it chews up ammo quickly. The alternative mode is a strafing attack that covers a wider area with twice as many bullets, which is an effective way to clear out a room.", "TOMPA0", "Tommygun", "4" },
		{ "Napalm Launcher", "This monstrous weapon launches a huge ball of flaming napalm at an extremely high velocity. If the initial explosion doesn't kill your enemy, the burning probably will. Best used with extreme caution, especially in tight areas. The alt-fire launches several napalm projectiles, covering a wider area but also chewing up a lot more ammo.", "NLAGA0", "NapalmLauncher", "5" },
		{ "Tesla Cannon", "This powerful prototype weapon packs a mighty load of amperage. Nikola Tesla would be proud. Press alt-fire and the Tesla cannon charges up, and releases a powerful electrical blast.", "TSPIA0", "TeslaCannon", "6" },
		{ "Life Leech", "This artifact draws its power from the life energy of your foes. Run low on ammo and it saps your own strength! (Doesn't apply to alt-fire)\n\nThe alt-fire sets the Life Leech upright, letting it act as a sentry gun, but leaving the weapon at place. It can be picked again up by pressing Use key when close to it or moved by shooting with Sawed-off or Tommy Gun. Secondary fire requires at least some ammo to be loaded in life leech.", "LLS_B0", "LifeLeech", "7" },
		{ "Guns Akimbo", "For a limited time, gives you a second weapon for the following weapons:\nRevolver, Flare Gun, Sawed-Off Shotgun, Tommy Gun, Napalm Launcher, and Tesla Cannon.\n\nDoubles the firepower, but uses twice the ammo.", "PSTRB0", "Guns Akimbo", "u" },
		{ "Voodoo Doll", "The power of the voodoo doll is immense, but far subtler than that of a firearm.\n\nRegular Fire: Plunge a needle into the voodoo doll to cause damage to the target (if there is no target, the needle will hit the player's own hand, causing damage)\nAlt-Fire: Wave your hand around the doll, using all of its remaining power at the target (if there is no target, it will do no damage to the player)", "VDLFA0", "VoodooDoll", "u" },
		{ "Aerosol Can", "Hairspray may not seem like the most daunting weapon, but apply it to a cigarette lighter and you've got an instant flamethrower (don't try this at home). While its range is rather limited, its effectiveness is quite impressive. You can also light one up like a Molotov cocktail and toss it into a group of adversaries. Hit alt-fire a second time after igniting a can to drop it at your feet-it will explode once it burns down.\n\nFor the alternate fire: The longer you hold down the fire button, the farther you'll throw the flaming spray can. You will instantly die if you light the spray can (alternate fire) for too long!", "SPFIJ0", "Spraycan", "u" }
	}},
	{{
		{ "Punch Dagger", "The Order acolytes have been rounding up all suspicious characters in the area. Yes, you happen to be one of them. What they didn't expect, though, is the knife you keep concealed for situations just like this one...\nDoesn't alert the guards, requires no ammo, always available.", "", "Punch Dagger", "f" },
		{ "Pistol", "A primitive weapon, in comparison with the other weapons you will find, but still something you should start with.", "", "   Pistol   ", "p" },
		{ "Teleport Beacon", "Use this (via the inventory) to bring Front soldiers to your aid. Place the teleporter beacon out in the open to be sure they have room to teleport in. Then, when you shoot enemy, they'll go after it. If no soldiers come out, you may have placed it too close to a wall. Try picking it up and placing it again.\n\nUp to 6 Rebel allies can be summoned. They are equipped with either Assault Gun, Flame Thrower, or Mini Missile Launcher.\nThis item has infinite uses but has a 120 second cooldown.", "BEACA0", "StrifeBeaconItem5", "1" },
		{ "Crossbow", "(Press the Alt Fire key to toggle between firing modes.)\n\n(Electric Bolts) Will damage just about anything, but not too badly. Useful when you don't have anything better.\n(Poison Bolts) Silent and deadly, but won't do anything to non-living (robot) targets.", "SXBWA0", "  Crossbow  ", "2" },
		{ "Mini Missile Launcher", "\"Mini\" refers to the size of the missile, you can really mess someone up with this thing. That includes you, if you're standing too close to your target.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SMRLA0", "Mini Missile Launcher", "3" },
		{ "Assault Gun", "Until your accuracy goes up, you'll be spraying bullets everywhere, but it's still a useful weapon.\nA well-rounded weapon. It's easy to find ammo for this one...\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SGRFA0", "Assault Gun", "4" },
		{ "Grenade Launcher", "(Press the Alt Fire key to toggle between firing modes.)\n\n(High Explosive \"HE\" Grenades) High-explosive means just that... BOOM!\n(White-Phosphorus \"WP\" Grenades) WP is an incendiary device - it will start an inferno that lasts a long time.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SGRLA0", " Grenade Launcher ", "5" },
		{ "Flame Thrower", "Whoosh!\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SFLMA0", "Flame Thrower", "6" },
		{ "Mauler", "(Press the Alt Fire key to toggle between firing modes.)\n\nThe mauler has two firing modes, scatter and torpedo. Torpedo is much more lethal.\nShoots rounds of energy in normal mode, and a huge ball of destruction in powerup mode.\n\n[Picking up this weapon for the first time will grant you: 1 piece of the Sigil]", "SMAUA0", " Mauler ", "7" },
		{ "Sigil", "It is considered a sentient weapon which is worshipped by The Order, thought to have been created by the Entity and the Spectres as a means to corrupt the people into evil desires.", "SIGPE0", " Sigil ", "7" },
		{ "Stamina & Accuracy Upgrades", "Stamina Upgrades: Increased stamina means you can have more than 100 health points. Very handy. This also increases your melee damage and restores your current HP to 100%.\n\nAccuracy Upgrades: Increased accuracy means your weapon will fire more accurately.\n\nWhen you pick this item, you get both these upgrades at the same time.\nThe maximum upgrades you can get to is 10 upgrades.", "UPGRK0", "Upgrades", "u" }
	}},
/*	{{
		{ "Fist", "Your iron-clad knuckles are a little better than nothing.\n\n[Remains unchanged to Doomguy's Fist.]", "", "  Fist  ", "f" },
		{ "Pistol", "The Pistol is the only weapon you start out with. But you'll use anything in a pinch, no matter how pathetic it may feel.\n\n[Remains unchanged to Doomguy's Pistol.]", "", "  Pistol  ", "p" },
		{ "Chainsaw", "The Chainsaw cuts the baddies like standing timber, but you have to get close.\n\n[Does twice more damage than Doomguy's Chainsaw.]", "64SWZ0", "  Chainsaw  ", "1" },
		{ "Shotgun", "Shotguns deliver a heavy punch at close range and a generous pelting from a distance.\n\n[Unlike Doomguy's Shotgun, the screen jerks up and down for a bit when firing.]", "64SGZ0", "   Shotgun   ", "2" },
		{ "Super Shotgun", "Combat Shotguns are double-barreled, sawed-off killing sticks. These gats are the ultimate in pellet warfare. Beware, two barrels not only deliver more fire power, but take more time to reload.\n\n[Unlike Doomguy's Super Shotgun, this super shotgun can knock the player back a bit when fired.]", "64DBZ0", " Super Shotgun ", "3" },
		{ "Chaingun", "Chainguns direct heavy firepower into your opponent, making him do the chaingun cha-cha.\n\n[Unlike Doomguy's Chaingun, the screen will jerk up and down rapidly when fired at a consistent rate.]", "64CGZ0", "   Chaingun   ", "4" },
		{ "Rocket Launcher", "Rocket Launchers deliver an explosive rocket that can turn one bad dude inside-out. Be careful with this one. Firing in close proximity at an object or enemy is bad for your health.\n\n[Unlike Doomguy's Rocket Launcher, this rocket launcher can knock the player back a bit when fired.]", "64MLZ0", "   Rocket Launcher   ", "5" },
		{ "Plasma Rifle", "Plasma Rifles shoot multiple rounds of plasma energy.\n\n[Unlike Doomguy's Plasma Rifle, which has a bit of a delay when releasing the fire trigger, Doom 64 Guy's Plasma Rifle does not have that delay when releasing the fire trigger, although this plasma rifle fires at a slightly slower rate.]", "64PRZ0", " Plasma Rifle ", "6" },
		{ "B.F.G. 9000", "BFG 9000s are the prize of the military's arsenal. Great for clearing the room of those unwelcome guests. There is a downside. It takes a second or two to charge prior to firing, so don't expect to fire right away.\n\n[Remains unchanged to Doomguy's BFG 9000.]", "64BFZ0", " B.F.G. 9000 ", "7" },
		{ "Unmaker", "(This weapon is obtained along with B.F.G. 9000)\nYou have the B.F.G. 9000 in your hands. Now almost every other weapon means nothing to you... wait...\nWhat the !@#%* is this!\n\nThe Unmaker can be upgraded up to three times. Collecting Berserk Packs will upgrade it. To fully upgrade the Unmaker, you need to collect three Berserk Packs.", "64UNZ0", "Unmaker", "7" },
		{ "Berserk", "Berserk Packs heal you, plus act as a super-adrenaline rush, enormously boosting our muscle power. Since you're already a pretty meaty guy, this enhanced strength lets you tear ordinary dolts limb from limb, and you can even splatter those demons without too much trouble. However, you've got to use your Fist attack to get the benefit of the Berserk attack bonus. When you become Berserk, your screen will briefly turn red.\n\n[Remains unchanged to Doomguy's Berserk.]\nBerserk Packs are used to upgrade the Unmaker.", "64BZA0", "Doom64GuyBerserk", "u" }
	}},*/
	{{
		{ "Claw", "Eleena uses implanted titanium claws that retract into bone sheaths when she needs to use the fine manipulation of her fingertips.\n\nWeapon-Enhanced: N/A", "", "  Claw  ", "f" },
		{ "Ripper Disc", "Eleena is armed with a version of the Cynetics model XG9101 Multi-cannon. The XG9101 is designed to fire a myriad of projectiles of almost any shape or size. It is equipped with a neural-circuitry that learns how to best use many ammo types it is exposed to; and, it can be upgraded to increase its firing potential and lethality.\nThe starting function is the Ripper Disc, which shoots small discs at a medium fire rate.\n\nWeapon-Enhanced: Press the Alt Fire key to shoot multiple shots per round in a pattern.", "", "  Ripper Disc  ", "p" },
		{ "Arachnicator", "Eleena can utilize a spider-like robot that she plants on the ground and it will run forward. When it collides with something, it will explode.\n\nWeapon-Enhanced: N/A", "SPPUB0", " Arachnicator ", "1" },
		{ "Sonic Shock", "This ammo type for the XG9101 shoots a spread shot of lightning.\n\nWeapon-Enhanced: Press the Alt Fire key to fire the weapon but at a faster fire rate.", "SSPUA0", "  Sonic Shock  ", "2" },
		{ "Pellet Bomb", "This ammo type for the XG9101 shoots out a small bunch of pellets that will explode on contact.\n\nWeapon-Enhanced: Press the Alt Fire key to fire multiple pellets at a fast fire rate.", "EPE2A0", "Pellet Bomb", "3" },
		{ "Dart Cannon", "This ammo type for the XG9101 shoots out darts at a fully automatic rate.\n\nWeapon-Enhanced: Press the Alt Fire key to fire darts at a faster fire rate in a straight pattern.", "DZ8PA0", "  Dart Cannon  ", "4" },
		{ "Missile Launcher", "This ammo type for the XG9101 shoots out mini missiles. Be careful not to blow yourself up with this.\n\nWeapon-Enhanced: Press the Alt Fire key to fire a missile that travels a bit slower but deals more damage.", "EMPUA0", "    Missile Launcher    ", "5" },
		{ "Napalm Charge", "This ammo type for the XG9101 lobs out a sphere. When the sphere hits something, it scatters some green fire that can damage enemies, and yourself if you are not careful.\n\nWeapon-Enhanced: Press the Alt Fire key to fire a sphere that acts the same way but will drop some fire to the ground while it is flying in its trajectory.", "ENC6C0", "Napalm Charge", "6" },
		{ "Death Sphere", "This powerful ammo type for the XG9101 will shoot out a smart bomb that will lock on to enemies after a few seconds of its initial launch. If it hits a surface, it will ricochet from it. If it flies around for too long, it will explode by itself.\n\nWeapon-Enhanced: N/A", "EPL9T0", " Plasma Ball ", "7" },
		{ "Weapon Enhancement Chip", "Aside from the various ammo types available, a temporary microchip upgrade can be located within most levels to make many of these projectiles more powerful.\n\nTemporarily upgrades the capabilities of some weapons.\nThe following weapons can be temporarily upgraded:\nRipper Disc, Sonic Shock, Pellet Bomb, Dart Cannon, Missile Launcher, Napalm Charge.", "D7X_G0", " Eradicator Enhancement Chip ", "u" }
	}},
	{{
		{ "Taser", "This is a standard sidearm for all security specialists. It is capable of stunning an opponent and can be deadly. It has unlimited energy but a slow rate of fire.\n\nThis is a silent weapon.", "", "Taser", "p" },
		{ "M-24 Close Assault Weapon", "Also known as the M-24 CAW, it can hold 200 rounds and can fire in full automatic mode by holding down the fire button.", "7MG2A0", "M24CAW", "1" },
		{ "M-343 Tribarrel Power Blaster", "This weapon is still under development, but available for use inside Delta Base. It fires 2 CM phosphorus slugs which cause tremendous amounts of damage.", "7VL2A0", "M343Vulcan", "2" },
		{ "Assault Shotgun", "This is the standard shotgun used for the last hundred years. It uses advanced armor piercing, criostate rounds that inflict tremendous amounts of damage at close range.", "7SG2A0", "AssaultShotgun", "3" },
		{ "Alien Dual-Blaster", "This alien weapon is small for the damage it can inflict. Use this weapon to even the odds when outnumbered.", "7DU2A0", "AlienDualBlaster", "4" },
		{ "Alien Plasma Rifle", "This is the top of the line alien weapon. The rate is slower than the Alien Dual Blaster, but it inflicts more damage.", "7RL2A0", "AlienPlasmaRifle", "5" },
		{ "Alien Assault Cannon", "This weapon is an improved Alien Dual Blaster. It fires faster and inflicts more damage than the first alien weapon.", "7AL2A0", "AlienAssaultCannon", "6" },
		{ "Alien Disintegrator", "This weapon will eliminate most live objects within its path. It uses up a large portion of your energy, but it will pull you out of a tight situation.", "7DN2A0", "AlienDisintegrator", "7" },
		{ "Proximity Mines", "These can be found within the base and cause vast amounts of damage. Anything that passes near them will be destroyed or severely damaged.\n\nThis will give you 30 mines.", "7MN2A0", "C7ProxyMinePickup", "u" }
	}},
	{{
		{ "Laser Pistol", "The LP-7, Mark V, Laser Pistol. The standard hand weapon for us, ATFOR, and most old Earth countries still permitted to have armies, the LP-7 is lightweight, accurate, and dependable as a good Swiss watch.\n\nThis is a silent weapon.", "", " Laser Pistol ", "p" },
		{ "\"Dirtshark\" MolyCarbide Power Mining Drill", "Yeah, I know, I laughed too the first time the brass talked about issuing these as last-ditch hand-to-hand weapons. But then I learned that the self-contained enercel lasts near forever, the molycarbide tip goes through armor like a hot fork through tofu, and when your ack is up against the wall, it beats having nothing.", "RMZ6P0", "Dirtshark", "1" },
		{ "ACR-5A2 Automatic Combat Laser Rifle", "The Applied ThermoDynamics ACR-5A2 Automatic Combat Laser (ACR) Rifle. The next step up from the LP-7 pistol, the ACR offers improved hitting power, while using the same powercels. On the downside, as several hundred recruits have pointed out to me, the term \"rifle\" implies a barrel, not a collimated-light emitter. Give me a break. It's a two-handed, shoulder-fired weapon. We'll call it a rifle, okay?", "RM3ZE0", "ACR Laser Rifle", "2" },
		{ "ACR Add-On", "We also have a limited supply of the M-63 Triplex upgrade kits. If you can find one of these and attach it to your rifle, you will roughly triple your effective firepower.", "RM2XI0", "ACR ADD-ON", "3" },
		{ "Cyclops Particle Accelerator", "This little pup comes to you courtesy of the Farside High-Energy Physics lab. Basically, the white coats have figured out how to build a portable charged-particle beam. Single shots from this weapon are fairly mild, but when fired in sustained bursts, it is more than twice as effective as a pistol.", "RM7TE0", "Cyclops Particle Accelerator", "4" },
		{ "Sukayev T-23 Grenade Launcher", "The T-23 is the neutron bomb of hand weapons; it blasts the hell out of humans, but almost never destroys the architecture. The grenades are too slow to hit flying targets, but against bunched human adversaries, they have few equals.", "RM9YE0", "RMR Grenade Launcher", "5" },
		{ "Railgun", "It is been said that necessity is the mother of invention, and boy, did we invent a mother here. A railgun is just exactly what it looks like: a belt-fed industrial fastener driver, modified for use as a fully automatic weapon. If you need to hang a few sheets of plasteel in your rec room it'll do a bang-up job on them, too.", "RM2WE0", "RMR Railgun", "6" },
		{ "Fusion Dynamics PC-12/2 Plasma Cannon", "Finally, we get to a real nightmare - and this you can thank ATFOR for, because we stole a whole shuttle-load of these babies from them. The PC-12/2 is as destructive as a grenade launcher, but because it uses the same Type 2 plasma energy packets as the particle beam, you can carry a lot more firepower and use it as a streaming or fully automatic weapon.", "RM7VE0", " RMR Plasma Cannon ", "7" },
		{ "Subestron Arm", "(This weapon is obtained along with Fusion Dynamics PC-12/2 Plasma Cannon)\n\nThis bad boy delivers a bigger punch than the Fusion Dynamics PC-12/2 Plasma Cannon, even if it chews more ammo. That's all I can say about this.", "RM2XH0", "Subestron Arm", "7" },
		{ "Oxygen Recycler", "We have also cached an oxygen recycler in each mission area. Once you retrieve this unit, your oxygen supply will remain stable.\n\nThe Oxygen Recycler gives you more oxygen, recovering 150 HP each tank.", "RM8ZA0", "RMROxygenRecycler", "u" },
		{ "Jetpack", "The jetpack provides limited flight capability. It won't put you into orbit, but it will give you enhanced leaping abilities and improved mobility.\n\nThe Jetpack allows you to fly for a limited time.", "RM8ZC0", "RMRJetPack", "u" }
	}},
	{{
		{ "Hand to Hand", "I assume you're already familiar with how this works. The good thing about a left hook is that it comes with unlimited ammo. (At least as long as you're still alive!)", "", "  Fist_2x5  ", "f" },
		{ "Modified Bryar Pistol", "Compared to many Imperial weapons, the blaster is slow, since it's a single fire weapon. It makes up for this lack in a high degree of accuracy and a much stronger and more efficient single blast. Though, as with any laser weapon, its impact does diminish over distance.", "", "Bryar Pistol", "p" },
		{ "Thermal Detonator", "This grenade-type weapon has two modes of detonation-the primary mode explodes on impact, while the secondary mode has a 3 second delay. The longer you hold down your firing key, the farther you will throw the detonator.", "IDETA0", "Thermal Detonator", "1" },
		{ "Stormtrooper Laser Rifle", "You've been on both ends of these babies often enough, so you should know the specs. Faster than the blaster, but less accurate and more than a bit spendy on the ammo. The rifle also has the same tendency to lose strength over distance.", "IRIFA0", "Stormtrooper Rifle", "2" },
		{ "Jeron Fusion Cutter", "The fusion cutter is a construction tool, but can be used as a weapon in a pinch. The primary mode of operation fires one barrel a time in straight, 3-shot bursts, while the secondary mode fires all 4 barrels at once with a cone-shaped trajectory.", "IFUSA0", "Fusion Cutter", "3" },
		{ "Imperial Repeater Gun", "The primary mode of a rapid-fire weapon delivers one shot per fire, while the secondary mode delivers a cluster of three.", "IREPA0", "Imperial Repeater", "4" },
		{ "Packered Mortar Gun", "The mortar gun lobs shells that explode on impact.", "IMORA0", "Mortar Gun", "5" },
		{ "Stouker Concussion Rifle", "Fires compressed bullets of ionized air that explode in shock waves.", "ICONA0", "Concussion Rifle", "6" },
		{ "Assault Cannon", "Though the weapon was exclusively designed for the Dark Trooper battle droid, an ordinary soldier could grip, aim, and fire it. Kyle Katarn was able to acquire such a weapon during the campaign to eliminate the Dark Trooper Project, using it to great effect in keeping Phase II Dark Troopers at bay.\n\nAlt Fire: Shoot out a rocket from the weapon.", "IASSA0", "Assault Cannon", "7" },
		{ "Weapon Supercharge", "Doubles weapon fire rate for a limited time.\n\nPicking up one Supercharge will hold 12 seconds of doubled fire rate once activated. Picking up another Supercharge will add an additional 12 seconds. The maximum time for Supercharge is 60 seconds, in other words, 5 Supercharges.", "J9-_A0", "DFSuperCharge", "u" }
	}},
	{{
		{ "Tazer", "Hunter's Log: I lost the instruction manual for all these weapons so I'm just going to take a wild guess on what each of these things do. Starting with this taser. It's a taser. Or should I spell it as tazer? Ah, who cares?", "", " Tazer ", "f" },
		{ "Auto-Pistol", "Hunter's Log: That's a weird looking pistol. Oh well, gets the job done and it never runs out of ammo.", "", " Aldus Pistol ", "p" },
		{ "Random Item Generator", "Hunter's Log: Looks like this thing gives me one random inventory item. Cool. Here's what it can possibly give me:\n\nShield Charge: Gives extra protection for 30 seconds.\nGrenade: Launches a low gravity grenade.\nTime Bomb: After 3 seconds, the bomb detonates.\nProximity Mine: Places a mine in the ground. Its armed after 2 seconds.\nClone: Creates a clone of yourself.", "PPGUC0", "IPOGRandomItemGenerator", "1" },
		{ "Plasma Shotgun", "Hunter's Log: If this is a shotgun, why does it look different than that shotgun that green armored guy has? Well, it seems to fire five plasma balls in a spread shot, so that's good.", "GW20Z0", " Plasma Shotgun ", "2" },
		{ "Flamer", "Hunter's Log: Hey, this flamethrower doesn't look weird. It's got a good fire rate and the flames travel far, so I like it so far, even if this thing eats up a lot of the ammunition. But if it shoots flames, why don't the enemies take damage overtime like with that toxic mutant gun?", "GW30Z0", " Aldus Flamethrower ", "3" },
		{ "Vulcan", "Hunter's Log: Not as powerful as the flamethrower but it's good if I need to save some of the flamethrower ammo.", "GW40Z0", " Fast Chaingun ", "4" },
		{ "Rocket Launcher", "Hunter's Log: There's not much to say about this. It's just a rocket launcher. Does good enough damage though. Better not be stupid and shoot myself in the face with this thing.", "GW50Z0", " Fast Rocket Launcher ", "5" },
		{ "Laser Cannon", "Hunter's Log: It does what it's supposed to: a cannon that shoots laser beams at a good fast rate and can do some damage. I wonder how you can top this off...?", "GW60Z0", " Laser Cannon ", "6" },
		{ "Super Plasma Annihilator", "Hunter's Log: Oh baby, I like this one. It eats up a good amount of ammunition but it's worth it. Not only does this do some serious damage but it shoots all around me!", "GW70Z0", " Super Plasma Annihilator ", "7" },
		{ "Another Random Item Generator", "Hunter's Log: Another Random Item Generator. You know the drill", "PPGUC0", "IPOGRandomItemGenerator", "u" }
	}},
	{{
		{ "Pistol Whip", "When your 18mm Handgun runs out of ammo, it will work as a makeshift baton in a pinch.", "", "Disruptor Fist", "f" },
		{ "18mm Semi", "Part of the standard issue gear. Not as much firepower as some of the other weapons, but treated as a dear old friend by experienced LightStormers who rely upon its instantaneous shot and classic reliability.", "", " 18mm Semi ", "p" },
		{ "18mm Auto", "Recent improvements in technology have allowed the standard 18mm to be permanently upgraded to a faster refire rate. Those who have tried it say they'll never go back.", "SQ72Q0", " 18mm Auto ", "1" },
		{ "Phase Rifle", "The powerful laser bursts are extremely effective against organic enemies. While scarcity prohibits the general issue of \"High Frequency Ammo\", those in the know rave about its rapid recharge rate and ability to penetrate multiple targets.", "SQ72R0", " Phase Rifle ", "2" },
		{ "AM Blaster", "A favorite among space-pirates, these shotgun type weapons emit a powerful spray especially effective in close quarters. Many of these models are equipped to fire double bursts when the trigger is held down longer than one second.\n\nAlt Fire: Hold down the Alt Fire key to deliver a more powerful shot compared to the primary fire.", "SQ72V0", " AM Blaster ", "3" },
		{ "Phase Repeater", "Popular among certain terrorist organizations, these modified Phase Rifles dish out three times the damage, but do go through the ammo.", "SQ72U0", "Phase Repeater", "4" },
		{ "Lock-on Cannon", "This weapon's slow-moving projectiles are deceiving: Once locked on to a target, they never miss and deliver intense damage. A special aiming reticle assists targeting: green indicates no enemies present, amber indicates enemies present but out of range, and red means fire away! While scarce, specially crafted Binary Lock-On Ammo is capable of neutralizing multiple targets with a single shot.", "SQ72S0", " Lock-on Cannon ", "5" },
		{ "AM Cyclone", "Incorporating the same ammunition as the AM Blaser, this deadly device fires five explosive rounds at once. The damage from this weapon is huge, so use in close quarters is not recommended.", "SQ72T0", " AM Cyclone ", "6" },
		{ "Zodiac", "LightStormer authorities have confirmed the existence of this weapon type. They are used primarily in the outlaw zones of the Solar System and are not officially sanctioned for use by LightStormers.\n\nShoots out a shockwave that spreads out, damaging any enemies in the blast.", "SQ72W0", " Disruptor Zodiac ", "7" },
		{ "Plasma Lance", "LightStormer authorities have confirmed the existence of this weapon type. They are used primarily in the outlaw zones of the Solar System and are not officially sanctioned for use by LightStormers.\n\nSprays a powerful spiraling plasma beam which can vaporize groups of enemies.", "SQ84Q0", " Disruptor Plasmalance ", "7" },
		{ "Energy Ball", "Shoots a single sphere that will hit enemies around, not only dealing great damage, but also releasing health spheres when hitting enemy. Each sphere restores 5 HP.", "SQ72X0", "DisruptorEnergyBall", "u" }
	}},
	{{
		{ "Ye Fists", "Your own two fists, exactly as it says on the tin. Your great strength you achieved while training as a knight means you should have no trouble falling back to these when you have exhausted your normal weaponry.", "", "Witchaven_Fists", "f" },
		{ "Bow and Arrows", "The epitaph of Lord VerKapheron's archers, the bows and quivers you find give you the advantage of attacking from a distance.\n\nThis is a silent weapon. \n\n Press Alt Fire to ignite the arrows, dealing twice the damage at the cost of two bullets per shot regardless of pistol ammo options.", "", "Bow and Arrows", "p" },
		//{ "Onyx Ring", "Grants you a 15 second protection from all ranged attacks!", "PWHAA0", "OnyxRing", "1" },
		{ "Short Sword", "The favoured weapon of the Goblin tribes, the short sword is a flaming double edged blade of poor quality. \n\n Press Alt Fire to quell the flames, dealing less damage but consuming no ammo and being silent.", "PWHHA0", "Shortsword", "1" },
		{ "Pike Axe", "These items were once the symbol of the castle guard, serving as both a melee and a missile weapon. It is enchanted with magic to let you throw multiple at a distance.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent.", "PWHEA0", "Pike Axe", "2" },
		{ "Battle Axe", "The battle axe is the native weapon of the MinaDrake. This sturdy curved blade inflicts more damage than the broad sword. It is enchanted with magic to deal tons of damage to an enemy at close combat.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent. This is almost the same as when it is activated, though the fire rate is slower, and damage is decreased.", "PWHBA0", "Battle Axe", "3" },
//		{ "Pike Axe", "These items were once the symbol of the castle guard, serving as both a melee and a missile weapon. It is enchanted with magic to let you throw multiple at a distance.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent.", "PWHEA0", "Pike Axe", "3" },
		{ "Ice Halberd", "This is a large blade mounted on the end of a long wooden pole. It is enchanted with magic to shoot ice magic.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent.", "PWHDA0", "Ice Halberd", "4" },
		{ "Fire Mace", "The Morning Star is a devastating spiked ball and chain. It is enchanted with magic to throw fireballs.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent.", "PWHCA0", "Fire Mace", "5" },
		{ "Frozen Two-Hand Sword", "This gigantic double edged blade does the most damage of all the weapons you will find in the Witchaven. It is enchanted with magic to deal a tremendous amount of damage to an enemy at close combat.\n\nPress the Alt Fire to deactivate the weapon, allowing you to use it as a melee weapon that consumes no ammo & is silent. This is almost the same as when it is activated, though the fire rate is slower, and damage is decreased.", "PWHGA0", "Frozen Two-Hand Sword", "6" },
		{ "Spell Book of Wisdom", "Certain words, ancient and sacred, have the power to magnify and focus the will. They allow those with discipline to bend reality and involve the powers arcane. Such words comprise the languages of the Nether Reaches but exist in the Prime Realms only as writing, scribed from parchment to parchment by initiate mages, refusing to be memorized and forever eluding the reason of man.\n\nAfter obtaining the spell book, you have access to six spells you can cast, if you have the ammunition for them:\n\n\n1.) Scare Spell: Scare your enemies for 45 seconds!\n2.) Night Vision Spell: Be able to see in the dark for 120 seconds!\n3.) Freeze Spell: Try to freeze everyone around you! Has a small radius.\n4.) Magic Arrow Spell: Shoot 10 magical arrows! The arrows can pierce armor.\n5.) Fireball Spell: Shoot a fire ball to burn your enemies! Has splash damage.\n6.) Nuke Spell: Try to instakill everyone around you! Has a large radius.", "PWHFA0", "Spellbook", "7" },
		{ "Shield", "The shield is automatically equipped with a one-handed weapon (Short Sword and Fire Mace). When the shield is equipped, you are protected by most attacks, provided that you are a certain distance away from the enemy and the shield is facing the attack. When the shield takes enough damage, it will automatically break.", "PWHIA0", "WTShieldTrigger", "u" }
	}},
	{
		{
			{ "Crowbar", "Half-Life is a complicated place where a crowbar can really come in handy. Things like barrels, boxes, gears, and grates can be pried opened, smashed, or otherwise wrenched loose with the crowbar. You'll find critical paths that have been blocked or sealed shut. You can dig through such obstacles with your crowbar. You can also use your crowbar to break glass and bludgeon approaching enemies.", "HWF0Z0", "Crowbar", "f" },
			{ "9mm Pistol", "You acquire this 9mm pistol at the start of the game. Although it may seem outdated as you acquire more technologically advanced weapons, don't forget about it: it's one the few weapons that fires under water.\n\nAlt Fire: Fire the pistol at a faster fire rate.\n\n[Magazine Size: 17 bullets]", "HWP0Z0", "9mm Pistol", "p" },
			{ "Hivehand", "The Hivehand is a biologically engineered living assault rifle. The weapon fires small insect-like organisms called 'hornets', sometimes known as 'thornets,' at a steady rate. These creatures will home in on any targets in the general direction in which they are traveling. Their means of target identification, if any, are unknown.\n\nAlt Fire: Fire the hivehand at a faster fire rate.\nAmmunition will regenerate.\n\n[Magazine Size: 8 hornets]", "HW10Z0", "Hornetgun", "1" },
			{ "SPAS-12", "The SPAS-12 has two fire modes. The first one fires six pellets with a medium-sized spread, uses one shell, and has a small delay between shots. While the alternate fire mode fires twelve pellets in a larger, less tight spread and uses two shells, but has a longer delay between shots. The SPAS-12 is reloaded one shell at a time. The reloading process can be interrupted at any time by pressing the fire key.\n\n[Magazine Size: 8 shells]", "HW30Z0", "Assault Shotgun", "2" },
			{ ".357 Python", "The Python is a double-action revolver which fires six rounds. It is very powerful, but it has a long reload time and low rate of fire. It has near perfect accuracy, but rapidly firing shots will cause accuracy to significantly decrease because of the weapon's fair amount of recoil.\n\n[Magazine Size: 6 bullets]", "HW20Z0", ".357 Python", "3" },
			{ "MP5", "This is one of the first weapons you'll acquire with both primary and secondary attack options. The Navy Seal sub-machine gun has an attached grenade launcher (secondary attack). It has infinite range and fires rapidly. Its primary attack fires 30-round clips of 9mm bullets, while secondary attack launches grenades.\n\nThere is a 1/3 chance that you also get 1 [Ammo 3] from picking up an MP5.\n\n[Magazine Size: 50 bullets]", "HW40Z0", "MP5", "4" },
			{ "RPG", "The RPG fires a powerful rocket that can either be guided towards a moving target using the integrated laser, or fired without the laser, a method known as dumb-firing is excellent for destroying powerful immobile enemies.\n\nPress Alt Fire key to toggle the laser for guided rockets.\n\n[Reloads every shot]", "HW50Z0", " RPG ", "5" },
			{ "Tau Cannon", "The Tau Cannon fires beams of Tau particles. The weapon has two different fire modes. The first shoots tau particles rapidly, visible as yellow beams in the air; each beam damages a target with its negative charge and its bullet-like kinetic energy. Though only moderately per hit, these rapid discharges can quickly gun down unarmored targets. The alt-fire mode charges up the weapon to fire more powerful white-hot beams; these can shoot through multiple targets or walls, causing a devastating explosion blast of particles on the far side, thus gibbing and knocking any target that gets in the beam.", "HW60Z0", "Gauss Cannon", "6" },
			{ "Gluon Gun", "The name Gluon Gun comes from namesake gluon particles. Gluons are particles that mediate the strong nuclear force that holds atomic nuclei together; whether the Gluon Gun actually fires streams of gluons or instead interferes with the gluons already present in an object is unclear, but in either case the weapon interferes with the fundamental interactions of matter. In the game, the stresses caused by this reaction can blast almost any living creature to pieces.", "HW70Z0", "E.G.O.N.", "7" },
			{ "Snark", "Once thrown, the Snark's twenty-second \"attack mode\" begins, and it will immediately charge at the nearest living thing and attack it. If there is nothing for them to attack, they will turn around and attack Gordon instead (which is why the player should always be sure to throw them from a higher vantage point).\n\nYou obtain 3 [Ammo 3] from Snark pickups.", "HWU0Z0", "HL Squeaks", "u" },
			{ "Crossbow", "The construction is modeled upon modern composite bows. Its ammo consists of five feathered bolts in a magazine. These are fed one at a time into the firing mechanism, which utilizes a high-tension wire to launch the bolt; while a scope fixed on top allows the player to zoom in on his or her target.\n\nThe crossbow is a silent weapon.\nAlt Fire: Zoom Weapon\n\n[Magazine Size: 5 bolts]", "HWU1Z0", "HL Crossbow", "u" }
		},
		{
			{ "Combat Knife", "A step up from a simple pipe wrench, the knife does less damage per hit and has no secondary attack, but has a considerably faster rate of attack. The knife is best used for conserving ammo while fighting weaker enemies and breaking open supply crates.", "HWF0Y0", "Crowbar", "f" },
			{ "9mm Pistol", "This pistol seems almost like the pistol that Gordon Freeman uses.... But the secondary fire is more accurate this time.\n\nAlt Fire: Fire the pistol at a faster fire rate.\n\n[Magazine Size: 17 bullets]", "HWP0Z0", "9mm Pistol", "p" },
			{ "Shock Roach", "The Shock Roach has all the characteristics of a large insect, with six legs and a tri-segmented body. Unlike the Hive Hand, the bio-weapon employed by Alien Grunts, the Shock Roach can move, react and attack of its own accord, as it is a living creature. The Shock Roach seems to form a symbiosis with its user; it cannot survive for long on its own, and upon its user's death, it will attempt to form a new bond with viable nearby targets. This symbiotic tactic is confirmed when looking closely at a Shock Roach's underside: Six strong pincers, much like the legs of Earth insects, can attach tightly to any creature's forearm, never releasing until said creature is dead. It will violently attack anyone who has already adopted a Shock Roach (or cannot). Its use as a weapon stems from its ability to generate large amounts of electricity, which it can release in short bursts from two spikes which appear from its tubular appendage in first-person.\n\nAmmunition will regenerate.\n\n[Magazine Size: 10 electric bolts]", "HW10Y0", "Hornetgun", "1" },
			{ "SPAS-12", "Despite its slightly different appearance, this shotgun is almost the same as Gordon's shotgun.\n\nAlt Fire: Fire two shells at once.\n\nReloads one shell at a time.\n[Magazine Size: 8 shells]", "HW30Z0", "Assault Shotgun", "2" },
			{ "Desert Eagle", "The Desert Eagle is provided as a standard side-arm for field soldiers. It is therefore best used in close range combat. For assault teams, this weapon is fitted with a laser sight, making it the perfect tool for clearing trip mines and other small targets that require patient pin-point accuracy. The soldier has to be careful when using the laser sighting because it can reveal their position to the enemy. While the Desert Eagle does utilize a clip that allows a higher capacity than revolver type handguns, soldiers shouldn't burden themselves with much reserve ammunition.\n\nAlt Fire: Toggle laser sighting.\n\n[Magazine Size: 7 bullets]", "HW20Y0", ".357 Python", "3" },
			{ "MP5", "Despite its slightly different appearance, this sub machine gun is almost the same as Gordon's sub machine gun.\n\nThere is a 1/3 chance that you also get 1 [Ammo 3] from picking up an MP5.\n\nAlt Fire: Fire a grenade from the MP5.\n\n[Magazine Size: 50 bullets]", "HW40Z0", "MP5", "4" },
			{ "Spore Launcher", "An infant Shock Trooper, the Spore Launcher resembles a large lungfish or tadpole, with a smooth rounded skull crowned by spikes, gills along its side and trailing tentacles, one of which is used by Shephard as a \"grip\". The creature can store the mushroom-like spores which dot parts of Black Mesa in its digestive tract, and then launch them forcibly when required to. It seems to have an affectionate nature, often making purring noises which Shephard rewards with a friendly stroke along its back.\nThe Spore Launcher has two modes of fire. Primary fire shoots a spore in a straight line, which then explodes on impact. Secondary fire discharges the spore in an arcing path, that will bounce for a few times, exploding either after the third bounce, or on contact with an enemy unit.\n\n[Magazine Size: 5 spores]\nReloads one spore at a time", "HW50Y0", " RPG ", "5" },
			{ "M249 Squad Automatic Weapon", "The Squad Assault Weapon (SAW) is the ultimate team combat gun. It can be used from a fall back position as a support weapon for suppressing fire or it can be used by a point soldier to quickly repel a defending force. Extra ammunition should always be kept available as the rate of fire of the M-249 causes most soldiers to burn through their stock seconds into the battle. While firing from a crouched stationary position the SAW is most accurate, but the accuracy rate decreases when fired while in motion.\n\n[Magazine Size: 50 bullets]", "HW60Y0", "Gauss Cannon", "6" },
			{ "Displacer Cannon", "The portals generated by Displacer Cannons were somewhat unique compared to other teleportation technology, as they did not have to be maintained by a constant supply of displacement energy; instead the displacement field was given a large amount of energy in a concentrated burst, allowing the portal to remain open for some time before the portal's energy was depleted. To generate this degree of energy within such a compact device required a Xen crystal or some other imitation with exotic matter properties. The other key component was a nuclear mini-reactor fueled by Uranium-235, also used in the Tau Cannon and Gluon Gun weapons that were developed at Black Mesa.\nAn experimental teleportation weapon, its primary fire launches a large, slow, green orb of energy that damages enemies it passes by and obliterates anything that it hits directly. The Displacer's primary fire is, in effect and damage, taking out any enemy short of a boss with a direct hit and dealing splash damage in a visible radius. \nThe alt-fire is a teleporting effect that can teleport you back to your original spawn point or to the place where you last used the teleporting effect.", "HW70Y0", "E.G.O.N.", "7" },
			{ "Mk 2 Grenades", "A handheld explosive. Can bounce off of walls and detonates after five seconds.", "HWU0Y0", "HL Squeaks", "u" },
			{ "M40A1 Sniper Rifle", "The Sniper Rifle is used for exactly what the name implies, long range accuracy. The reload time is long and it fires only one shot at a time. But, the rifle is equipped with a high powered scope to enable a soldier to take out a target at distances up to half a mile. For obvious reasons this is not a close combat weapon. But, when used effectively, a sniper rifle can deliver many casualties as well as demoralize surviving enemies.\n\nAlt Fire: Use fixed-power scope\n\n[Magazine Size: 5 bullets]", "HWU1Y0", "HL Crossbow", "u" }
		}
	},
	{{
		{ "Katana / Fists of Fury", "Mode 1: The Katana is a powerful weapon that can slice right through the lower ninjas.\n\nMode 2: You can also use your powerful fighting skills at close range to punch the life out of your enemies.", "", "SWFists", "f" },
		{ "Shuriken", "Small hand held \"stars\" that you throw at enemies. You throw three at a time.", "", "SWShuriken", "p" },
		{ "Sticky Mines", "Perhaps the sneakiest weapon in Lo Wang's arsenal, this is a small explosive device surrounded by sharp spikes, which will allow it to \"stick\" to almost any surface. After priming, the bomb will detonate when its motion detectors sense something nearby.", "SW10J0", "SWSticky", "1" },
		{ "Riotgun", "A quad barrel shotgun.\n\nMode 1: You shoot a concentrated blast through one barrel that will knock an enemy off his feet.\n\nMode 2: You fire all four barrels, with a wider spread.", "SW30Z0", "SWRiotgun", "2" },
		{ "Grenade Launcher", "Launches a 40mm explosive shell that bounces before it explodes. It is ideal for dealing death in hard-to-reach places such as ledges or around corners.", "SW20Z0", "SWGrenade", "3" },
		{ "Uzi", "Armed with your high speed machine gun, you become even more deadly than before. If you pick up a second Uzi, you can wield two at the same time.\n\nAlt Fire: Dual wield Uzis, assuming you have two.", "SW40Z0", "SWUzi", "4" },
		{ "Rocket Launcher", "Mode 1 (Normal): You shoot explosive rockets.\n\nMode 2 (Homing): Your next five rockets are heat seekers.\n\nMode 3 (Nuke): After a short countdown, fire and find cover... or you will glow.", "SW50Z0", "SWMissileLauncher", "5" },
		{ "Railgun", "A top secret weapon and still classified, the Rail Gun can shoot a piece of metal at near light speed, propelled by a magnetic field.", "SW60Z0", " SWRailgun ", "6" },
		{ "Guardian's Head", "Mode 1: This default mode fires accurate and highly damaging fireballs in rapid succession. They can set enemies on fire if aimed at either the ground or at flesh.\n\nMode 2: A circle of fireballs surround Lo Wang when used. Any enemy that touches fireballs instantly get sets on fire or dies. The fireballs can go through walls but only last for a few seconds.\n\nMode 3: Lo Wang shoots out 3 fireballs that cause explosions along the ground until the fireballs hit something. The explosions travel along the ground even as the fireballs tower above them, so it's great for laying waste to enemies below you, as well as just laying waste.", "WW70Z0", "SWGuardianHead", "7" },
		{ "The Nuke", "(This weapon is obtained along with Guardian's Head)\n\nOnce found and detonated, it will cause a range of destruction that only the strongest enemies can hope to survive. All others will be vaporized. For use with Rocket Launcher.", "WW80Z0", "SWNuke", "7" },
		{ "Ripper's Heart", "Squeezing this gory item will summon forth a \"zombie-like\" version of Lo Wang, that will kill with reckless abandon for a short time.", "HRT2W0", "SWRipperHeart", "u" },
		{ "Heat Seeker Card", "This small red circuit board allows your next five missiles to have heat-seeking abilities. For use with Rocket Launcher.", "SW10K0", "HeatSeekingCard", "u" }
	}},
	{{
		{ "Magical Fist", "You start the game with one power - STAR BOLT (The basic offensive blast power, consisting of a small ball of destructive power). As you progress through the game you will gain more powers that the Magical Fist can use.\n\nSTAR BOLT is a silent weapon.\n\nThe spells you can utilize are:\nStar Bolt, Electroschism, Magna Rip, Painwave, Nova\n\nFind the other spells by picking up the Icon of Mann-ra.", "", "MagicFist", "f" },
		{ "Laser Pistol", "This light laser pistol is quick and easy to use, but its damage potential is relatively low.", "", "CMLaserPistol", "p" },
		{ "Darklight Foil", "This mythic weapon is said to be able to channel the energy of life itself into a deadly stroke.", "CMLWZ0", "CMDarklightFoil", "1" },
		{ "Fusion Gun", "Concentrates all of the energy of a fusion reaction into a single destructive blast. An excellent man-portable heavy energy weapon.", "CMFGJ0", "CMFusionGun", "2" },
		{ "Blast Rifle", "The basic energy assault weapon, of limited use against vehicles and hardpoints.", "CMBRI0", "CMBlastRifle", "3" },
		{ "SMG", "Some things never go out of style. Other than the frictionless Teflon ammunition, the magnetically enhanced muzzle velocity and the infra-red laser computer targeting, Al Capone's men would have been right at home with this baby.", "CMMGF0", "CMSMG", "4" },
		{ "Bombardier", "Fires long-range, self-propelled explosive projectiles. An excellent weapon against vehicles and hardpoints, and devastating against personnel. Its drawbacks are its comparatively small magazine and relatively slow speed.", "CMRLF0", "CMRocketGun", "5" },
		{ "Heavy Blaster MG", "The most devastating anti-personnel weapon devised by man, it fires an almost continuous stream of destructive plasma charges. Its biggest drawback is that it fires so fast you can exhaust its magazine before you know it.", "CMHVF0", "CMHVBMG", "6" },
		{ "Plasma Obliterator", "The most devastating plasma weapon devised by man, the aptly named Plasma Obliterator fires a huge stream of destructive plasma charges, dealing heavy damage to all types of targets, but being particularly effective against large crowds of enemies. Care must be taken at close range to avoid being caught in the plasma discharge yourself.", "CMPGE0", "CMPlasmaGun", "7" },
		{ "Icon of Mann-ra", "Your Magicial Fist can utilize more spells. The Icon of Mann-ra can randomly give you one of the following spells:\n\nElectroschism: Wraps itself tightly around its target and drains health from it for the duration of the spell.\nMagna Rip: Unleashes the natural powers of magnetism against the target, releasing a powerful energy wave which upon hitting a target releases smaller and weaker waves around itself.\nPainwave: A literal wall of energy that sticks itself to a surface and rapidly drains the health of anything caught within its radius. Can penetrate through enemies and when it disappears, it explodes. Useful against larger targets or as an area denial attack.\nNova: Extremely powerful energy balls that upon contact release multiple explosions for an extended period, combining truly devastating damage with a large blast radius. Its only drawbacks are its large ammo consumption and its complete uselessness at close range.", "CMUQA0", "RandomMagicItem", "u" }
	}},
	{{
		{ "Machete", "Sharp, Reliable. Never runs out of ammo! If it wasn't strapped to your leg when you bailed out of the chopper, you'd be in a world of hurt, my friend.", "", "PSMachete", "f" },
		{ ".357 Magnum", "Packs a good punch. Your basic ranged weapon, much better than going into hand-to-hand combat. A tad slow on the rate of fire, but who's complaining?\n\nWill automatically reload after 6 shots.", "", "PSMagnum", "p" },
		{ "Anubis Mine", "Ancient Egyptian hand grenade. Press the fire key then release when ready to throw. The longer you hold down the fire key, the greater distance your bomb will travel. Oh, and don't worry, you can't blow yourself up by holding onto a bomb too long - but you can if you're careless in your aim! \n\nHold down the fire key to charge up your throwing distance.", "AG_NB0", " Anubis Mine ", "1" },
		{ "Shotgun", "The shotgun was found in the beta version of Powerslave/Exhumed. Good for close combats.\n\nWill automatically reload after 8 shots.", "EX_TA0", "ExShotgun", "2" },
		{ "Flamethrower", "Perfect for mummy roasting. A great close-quarters tool, but be extra careful not to burn yourself. And watch the fuel level - it goes too quick if you're not careful.", "WFTRA0", "PSFlamethrower", "3" },
		{ "M60", "Your standard infantry support weapon. With a range of well over 1,000 meters and a 550 rounds per minute rate of fire, the \"sixty\" is an ideal everyday weapon. Remember to watch your ammo - fire in six to nine round bursts for max effect.\n\nWill automatically reload after 99 shots.", "WM60A0", "PSM60", "4" },
		{ "Cobra Staff", "A great long-range weapon that will destroy most enemies with one hit! RULE #1 - You WILL get toasted if your foe is close you, so use extreme caution RULE# 2 - Make sure you have a clear field of fire, as the Cobras will detonate if they strike a stair, ledge or wall that may be hindering your aim. RULE #3 - If you don't have a target, the cobra may decide to turn on you! Try not to kill yourself, ok? Other than that, have fun!\n\nWhen you switch to this weapon, you must wait for it to be activated before you can use it.", "WCSTA0", "PSCobraStaff", "5" },
		{ "Sacred Manacle", "This sacred gauntlet is the mightiest weapon you will find. An artifact of incredible power, you can use it to summon the wrath of the gods upon those who dare oppose you.\n\nMust be targeting an enemy to fire this weapon.", "WTSMA0", "Sacred Manacle", "6" },
		{ "Mummy Staff", "This ancient weapon will turn you into a mummy, giving you a very powerful ancient power.\n\nWhen you switch to this weapon, you must wait for it to be activated before you can use it.\nWhen you switch to another weapon, you must wait for this weapon to deactivate completely before you can use another weapon.", "WMSTA0", " Mummy Staff ", "7" },
		{ "Ring of Ra", "This sacred ring is one of the mightiest weapons you will find. An artifact of incredible power, you can use it to spew deadly orbs of molten fire upon those who dare oppose you.", "WRORA0", "Ring of RA", "u" }
	}},
	{{
		{ "Crowbar", "There's just something so satisfying about the bone-jarrin' feeling of a cold piece of steel laid across a warm skull.", "", " RR Crowbar ", "f" },
		{ ".454 Casull Pistol", "This ain't no pea-shooter, boy. She packs quite a punch and is real accurate from a distance. \n\nWill automatically reload after 6 shots.", "", " .454 Casull Pistol ", "p" },
		{ "Rip Saw", "This here is your dual-purpose killin' machine - one mode gives ya that close-up chainsaw action, while the other is perfect fer some long-distance mutilation. Best watch out for that nasty rebound now.\n\nAlt Fire: Use the saw as a melee attack. Consumes no ammo.", "R_RSU0", " RR Rip Saw ", "1" },
		{ "Hunting Crossbow", "When yer throwin' arm gets a little tired, try duct-tapin' a stick 'a dynamite to an arrow. She'll fly mightly far with a cross-bow, turn any idiot into a pile of guts, and the twang of the bow-string is sorta like a banjo.\nActually, leave the dyna 'O' mites for throwing.", "R9_HI0", " RR Hunting Crossbow ", "2" },
		{ "Scattered Gun", "The primary weapon for some up-close and personal killin'. Tap her gently to let off a single load, or lean on her to empty both barrels.", "RR_SA0", " Scattered Gun ", "3" },
		{ "Ranch Rifle", "Pssst...Don't tell Sheriff Hobbes now, but we done modified this baby to be fully automatic. Remember, fire in controlled bursts if ya don't wanna be shootin' at the sky...", "R_SRJ0", " Ranch Rifle ", "4" },
//		{ "Chicken Crossbow", "This chicken really wants to help you hit the target. Lately somebody's been leaving chickens with dynamite up their tookus all over Spittle County. I don't know who would do such a thing, but finders keepers!", "CH_7M0", " Chicken Crossbow ", "5" },
		{ "Dyn 'O' Mites", "This ain't eggsackly what you'd call Safe N' Sane. Light 'em, throw 'em, then get the hell outta the way.\n\nYou will instantly die if you light the dynamite for too long!", "DYN5G0", " Dyn 'O' Mites ", "5" },
		{ "Alien Bra Gun", "Well now, I'm just ashamed to talk about this here gun. I just know I'm gonna get thrown outta the lodge if anyone sees me wearin' it. But Damnit... it just feels so nice against m' skin.", "R_T9D0", " Alien Bra Gun ", "6" },
		{ "Alien Arm Cannon", "Well now, them tendons is a little slimy, and the fireworks it lets out'll burn the hair on your arms clean off, but I'll be damned if this thing won't crispify just about anything.", "R_HAK0", " Alien Arm Cannon ", "7" },
		{ "Hunting Rifle with Scope", "This sniper-like gun is pretty strong, might be slow, but when you learn how to use it, it will be definitely deadly.\n\nAlt Fire: Use the Scope.", "R_HCJ0", " Hunting Rifle With Scope ", "u" },
		{ "Chicken Crossbow", "This chicken really wants to help you hit the target. Lately somebody's been leaving chickens with dynamite up their tookus all over Spittle County. I don't know who would do such a thing, but finders keepers!", "CH_7M0", " Chicken Crossbow ", "u" },
//		{ "Dyn 'O' Mites", "This ain't eggsackly what you'd call Safe N' Sane. Light 'em, throw 'em, then get the hell outta the way.\n\nYou will instantly die if you light the dynamite for too long!", "DYN5G0", " Dyn 'O' Mites ", "u" },
		{ "Motorcycle", "Mount the hog with the Use key. Motorcycle ammo is heavy, you'd best pick it up while you're mounted and leave the ammo on the bike too. If you're good, you can jump chasms, ramps, cliffs...practice at the track for a while if you need the help. And remember, the sheriff hasn't given out a ticket in this county for hit-and-run for about 30 years. The motorcycle will always arrive when you give ol' Bubba a holler, and you'll have it ready on the next map if you leave with him.\n\nThe bike comes with a built-in gun turret that holds about 600 bullets. When you are on the bike, you can still take damage from enemy fire. When you are off the bike, the motorcycle can be damaged and permanently destroyed.\n\nPress [Use] on the motorcycle to get in.\nHold [Use] while on the motorcycle to get off.\n[Strafe Left] and [Strafe Right] will turn the vehicle.\n[Move Forward] will accelerate.\n[Move Backward] will brake/reverse.\n[Fire] will fire the motorcycle's gun turrets.", "RRCMOTOR", "RedneckMotorcycle", "" },
		{ "Bubba", "My brother Bubba is one of Hickston's finest second grade graduates. Maybe he's a little overweight and a little slow, but so was Robert E. Lee, right? \n\nBubba likes to dress up as the King of Rock n' Roll, Elvis. \n\nIf you call for him on that mobile doo-hickey, he will arrive to your aid. By aid, what I really mean is whackin' his ass with muh crowbar. We then ride away from the level on our hog.\n\nAnd by crowbar, I mean my crowbar, not that crowbar from that silent fella Gordon Freeman. \n\nAnd just make sure you just use my crowbar. Any other weapon will just kill him.", "RRBUBBA", "Bubba", "" },
	}},
	{{
		{ "Blaster", "This is the standard issue rechargeable energy side-arm.  It does not require ammunition. Useful for taking down Guards as well as exploding barrels and setting off shootable buttons and secret doors. Keep one on you at all times.", "Q2CMPW01", "Q2Blaster", "p" },
		{ "Machinegun", "Although this weapon is easy to use, its light weight allows for considerable kickback that will push your gun up. Fire in short burst until you can effectively steady your aim.", "Q2CMPW02", "Q2MachineGun", "1" },
		{ "Shotgun", "This uses shells for ammunition. The spread of the shotgun blast makes close combat more damaging, but long range attacks easier. Perfect for the less than proficient marksman. The shotgun is effective against Strogg Guards and Flyers.", "Q2CMPW03", "Q2Shotgun", "2" },
		{ "Super Shotgun", "This is the uncompromising big brother to the Shotgun. Choose your shots effectively. The slow firing rate may only give you a few chances to bring down the enemy before he's able to engage you up close. It eats more shells than the Shotgun, but the show is well worth it.", "Q2CMPW04", "Q2SuperShotgun", "3" },
		{ "Chaingun", "The chain gun makes mince meat out of your enemy, but requires an insane amount of ammunition. The long spin up and spin down time makes the chain gun most effective for sustained attacks.", "Q2CMPW05", "Q2Chaingun", "4" },
		{ "Rocket Launcher", "The rocket launcher delivers heavy fire power to your target. Be careful not use this weapon in close combat.", "Q2CMPW06", "Q2RocketLauncher", "5" },
		{ "Hyper Blaster", "A hyper blaster is an energy chain gun with no spin up delay. Its high rate of fire is incredibly effective at destroying the enemy and depleting your energy cells.", "Q2CMPW07", "Q2HyperBlaster", "6" },
		{ "BFG10K", "Big, uh, freakin' gun.  This weapon redefines the word \"wallpaper.\"  Simply fire the BFG into a small room of unsuspecting Strogg and observe the new red paint job. ", "Q2CMPW09", "Q2BFG10K", "7" },
		{ "Grenade Launcher", "The grenade launcher is useful for delivering firepower into hard to reach areas or clearing out potential ambushes. We do not recommend using the grenade launcher in confined areas.", "Q2CMPW10", "Q2GrenadeLauncher", "u" },
		{ "Railgun", "(You get this along with BFG10K)\n\nThe Rail Gun fires depleted uranium slugs at super high velocities. Take note of the distinctive blue corkscrew trail of smoke caused by the projectile - or better yet, see how many scumbag Stroggs it goes through before it hits concrete. ", "Q2CMPW08", "Q2Railgun", "u" },
		{ "ETF Rifle", "It's powerful, efficient, and able to pierce armor. What more could you ask for? This weapon fires explosive-tipped flechettes that pack a deadly wallop.", "Q2CMPW12", "Q2ETFRifle", "u" },
		{ "Ion Ripper", "The Ion Ripper fires blasts of glowing energy boomerangs capable of ricocheting off walls. The Ion Ripper is the perfect weapon for launching attacks around corners and areas out of your line of sight.", "Q2CMPW11", "Q2IonRipper", "b" },
	}},
	{{
		{ "Sickle", "The Demoness's hand weapon is an iron Sickle. This is not the most effective of arms, but the Demoness favours it as a symbol: like a farmer harvesting wheat, she relishes the act of harvesting souls with her Siekle. The Sickle's power is not entirely symbolic, either: occasionally the Sickle does harvest vitality from its target, transferring that vitality to the Demoness. \n\nThe Tome of Power lends both poteney and augmented range to the Demoness's Sickle. A fully powered Sickle knocks enemies from their feet, making it difficult for them to recover and counterattack.", "", "Hexen2Sickle", "f" },
		{ "Blood Fire", "As a being of magical origin, the Demoness possesses the innate ability to summon potent magic from her very blood. From her fingertips, she is able to cast forth a magie bolt at her enemies. While not especially powerful, using the Blood Fire causes no drain on her store of mana, allowing her to cast the bolts repeatedly, without a second thought. The range of the magical projectiles is limited, however, so more distant targets will take little or no damage. \n\nThe Tome of Power will triplicate the effect of this weapon, causing three projectiles to be emitted. In addition, these projectiles will ricochet off solid objects such as walls and ceilings several times while seeking a vietim.", "", "Hexen2BloodFire", "p" },
		{ "Ice Mace", "At times I have seen the Crusader bearing an ice Mace, a curious weapon indeed. This weapon fires small, jagged ice projectiles that can harm enemies at a distance. Enemies slain by the Ice Mace are frozen solid. The Tome of Power completely transforms the ice Mace's function. Instead of firing an ice projectile, the Mace instead causes a blizzard of frozen shards to pelt its target from above. This attack is extremely powerful, and difficult to avoid as well.", "H2CMPW01", "Hexen2IceMace", "1" },
		{ "Acid Rune", "The Acid Rune is a hand-held object that acts like a power conduit, focusing and amplifying the inherent magical ability of the Demoness. The object belonged to Eidolon and is covered in green runes. The Acid Rune allows the Demoness to fire a green projectile that explodes in a cloud of acid, burning its target. \n\nWhen used with the Tome of Power, the explosion of acid is larger and more deadly. In addition, sizzling particles of acid will fly out of the explosion to inflict more damage.", "H2CMPW02", "Hexen2AcidRune", "3" },
		{ "Magic Missiles", "The Demoness is fragile, and prefers to do her fighting at long range. Magic Missiles are one of her spells of choice, especially at lower levels of skill. These fiery missiles gain potency as the Demoness herself gains potency. They're swift and not too strong, but they explode on impact for a bit of extra damage. A Tome of Power allows the Demoness to fire three fireballs simultaneously. These missiles lazily home in on their target, making it easy for the Demoness to smite her foes.", "H2CMPW03", "Hexen2SpellBookMagicMissile", "2" },
//		{ "Magic Missiles", "The Demoness is fragile, and prefers to do her fighting at long range. Magic Missiles are one of her spells of choice, especially at lower levels of skill. These fiery missiles gain potency as the Demoness herself gains potency. They're swift and not too strong, but they explode on impact for a bit of extra damage. A Tome of Power allows the Demoness to fire three fireballs simultaneously. These missiles lazily home in on their target, making it easy for the Demoness to smite her foes.", "H2CMPW02", "Hexen2SpellBookMagicMissile", "2" },
//		{ "Acid Rune", "The Acid Rune is a hand-held object that acts like a power conduit, focusing and amplifying the inherent magical ability of the Demoness. The object belonged to Eidolon and is covered in green runes. The Acid Rune allows the Demoness to fire a green projectile that explodes in a cloud of acid, burning its target. \n\nWhen used with the Tome of Power, the explosion of acid is larger and more deadly. In addition, sizzling particles of acid will fly out of the explosion to inflict more damage.", "H2CMPW03", "Hexen2AcidRune", "3" },
		{ "Bone Shards", "As the Necromancer advances her skills, she learns the powerful spell of Bone Shards. This spell projects a hail of sharp bone fragments at incredibly high speeds. These fragments shatter into yet smaller pieces upon impact. Bone Shards are particularly devastating to nearby enemies, who take the full brunt of the spell. Used with the Tome of Power, these Bone Shards concentrate into a single projectile. This projectile is potent and damaging, and bursts into an unpredictable spray of shards upon hitting its target.", "H2CMPW04", "Hexen2SpellBookBoneShard", "4" },
		{ "Firestorm", "The power of the Demoness is even more intensely concentrated through the use of the Firestorm. Though similar in appearance to the Acid Rune, theffect of this magical object is more spectacular. The Demoness can use the object to produce a fireball that explodes in a burst of flame upon impact. \n\nThe Tome of Power enhances the projectile, creating a larger fireball that leaves a spinning trail. When the fireball hits an enemy, a more powerful though brief firestorm ensues as several small flaming meteors pummel the victim.", "H2CMPW05", "Hexen2FireRune", "5" },
		{ "Raven Staff", "As the Necromancer's most cherished weapon, the Raven Staff fires a potent blast of pure energy that forks and splits as it travels forward. Anything caught in this blast is cut and seared beyond recognition. But only after the two halves are brought can this prize be discharged to annihilate the forces of Eidolon. \n\nWhen used in conjunction with the Tome of Power, the Raven Staff acts in a completely different manner: it summons a swarm of deadly Ravens that fly forth to attack their target.", "H2CMPW06", "Hexen2RavenStaff", "6" },
		{ "Tempest Staff", "The most powerful weapon available to the Demoness is the Tempest's Staff, Rumour has it that Eidolon himself forged the Staff for his newest minion before his defeat. The Staff discharges a ball of lightning which has a limited ability to track its target. When it hits, the ball explodes and several bolts of lightning strike the target, doing significant damage. \n\nThe Tome of Power causes a profound change to this weapon. Instead of a ball, a stream of lightning will arc from the Staff to the target. If there is more than one in the vicinity, a chain-lightning effect may occur whereby the lightning will are from the firstarget to a second, from the second to a third, and so on.", "H2CMPW07", "Hexen2TempestStaff", "7" },
		{ "Tome of Power", "The Tome of Power is a staple of all warrior guilds. Tomes such as these bestow a supercharging effect upon both mundane and magical weapons, augmenting their natural strength, and in some cases producing new effects altogether, Tomes' effects are extremely limited in duration, and are therefore best used when dealing with particularly deadly foes.", "H2CMPW08", "Hexen2TomeOfPower", "u" },
		{ "Force Cube", "The Force Cube, sometimes known as the Magical Squire, is a small object that flies up to cirele its owner's head when activated. As it circles, it attaeks its owner's enemies with magical beams of light. The Force Cube lasts for only a short while, and is therefore best activated in difficult situations.", "H2CMPW09", "Hexen2ForceCube", "u" },
	}},
	{{
		{ "Unarmed", "The attack animations consist of karate chops, meant to imitate hitting certain nerves to debilitate enemies. \n\nWhile the chop has short range, it has a unique property unlike that of most other weapons; enemies unaware of Bond's presence can be silently taken out in a single hit, with no consumption of ammo.", "", "Goldeneye_Slapper", "f" },
		{ "Silenced PP7", "The Silenced PP7 is a PP7 fitted with a suppressor. It is slightly less accurate than its unsilenced counterpart but it isn't as loud (which makes it good for stealth) and it has less recoil.", "CMPGE001", "Goldeneye_PP7Silenced", "p" },
		{ "Throwing Knife", "The throwing knife is similar to hunting knife except Bond holds it by the blade and throws it, rather than slashing with it. Damage-wise a thrown knife is identical to a hunting knife slash. Since it is thrown, the knife has a longer range than slashing with its counterpart, but it takes skill to use one successfully, since the knife is affected by gravity. Generally Bond needs to aim above his target in order to hit them at a distance, much like when using the grenade launcher or other thrown weapons and gadgets.", "CMPGE002", "Goldeneye_ThrowingKnives", "1" },
		{ "KF7 Soviet", "It is an average assault rifle with a short zoom that increases its usefulness. This weapon is best used by firing in short bursts rather than full automatic mode to help improve its accuracy. Tapping the fire button will cause it to fire three bullets in a short burst; however, if you are aiming the weapon, tapping the fire button will only cause the weapon to fire once.", "CMPGE003", "Goldeneye_KF7Soviet", "2" },
		{ "Automatic Shotgun", "The automatic shotgun fires five pellets ahead of Bond in a cone shape, making it nearly worthless over long distances but extremely effective at short range. This weapon is especially useful against groups of enemies at short range in open areas.", "CMPGE004", "Goldeneye_AutoShotgun", "3" },
		{ "US AR33 Assault Rifle", "It is more powerful and accurate than the KF7 Soviet, making it useful for picking off targets at a distance. Like the KF7 Soviet, it has a three round burst.", "CMPGE005", "Goldeneye_AR33", "4" },
		{ "Rocket Launcher", "The rocket launcher fires a single rocket propelled grenade attached to the front of the launcher. It must be reloaded after each shot, making it a slow weapon.", "CMPGE006", "Goldeneye_RocketLauncher", "5" },
		{ "RC-P90", "The RC-P90 is a powerful and accurate personal defense weapon with a massive ammo capacity and extremely rapid rate of fire. A single shot causes slightly more damage than the AR-33.", "CMPGE007", "Goldeneye_RCP90", "6" },
		{ "Moonraker Laser", "The Moonraker Laser is a very powerful weapon with no magazine limitations. The Moonraker Laser is able to shoot through doors, thin walls, guards and other objects.", "CMPGE008", "Goldeneye_Moonraker", "7" },
		{ "Golden Gun", "The Golden Gun is Francisco Scaramanga's weapon of choice in The Man with the Golden Gun film. It is a high-risk, high-reward type of weapon because it only holds one bullet at a time, and must be reloaded every time it is fired. Due to its extreme power, it can kill most enemies with a single shot.", "CMPGE009", "Goldeneye_GoldenGun", "7" },
		{ "Sniper Rifle", "The sniper rifle is fitted with a long-range telescopic sight and suppressor, and is unique in that its zoom range can be adjusted moving forward or backward. The weapon becomes increasingly hard to aim the greater the distance between Bond and his target, like in real life. The sniper rifle is intended to be used for eliminating targets in the distance. The weapon can, however, be used effectively at medium and short range: Its damage and firing rate is comparable to the PP7.", "CMPGE010", "Goldeneye_SniperRifle", "u" },
		{ "Silenced D5K", "the suppressor and automatic fire will help with both killing enemies and keeping other enemies unaware of your presence. However, players must be more wary of accuracy, as this weapon is less accurate than a normal D5K.", "CMPGE011", "Goldeneye_SilencedD5K", "u" },
		{ "Watch Laser", "The watch laser is a gadget weapon that can actually be used like a normal weapon; it is very strong but has a short range.", "CMPGE012", "Goldeneye_WatchLaser", "u" },
		{ "Watch Magnet", "The watch magnet attract is a gadget that can pull weapons, ammo, keys, and other objects flagged as collectible to Bond.", "CMPGE012", "Goldeneye_WatchMagnet", "u" },
		{ "Detonator", "The detonator is a weapon that always comes paired with the remote mine, in the appearance of a watch. Pressing the fire button causes it to detonate any remote mines Bond has placed.", "CMPGE012", "Goldeneye_WatchDetonator", "u" },
		{ "Timed Mine", "Timed mines are one of three types of mines found in GoldenEye, the other two being proximity mines and remote mines. Timed mines detonate shortly after being placed, making them good for destroying stationary objects but less so for guards.", "CMPGE013", "Goldeneye_TimedMines", "u" },
		{ "Proximity Mine", "Proximity mines are one of three types of mines found in GoldenEye, the other two being timed mines and remote mines. Proximity mines detonate whenever a moving object is within their range, making them perfect for taking out patrolling guards but wasteful for stationary objects.", "CMPGE013", "Goldeneye_ProximityMines", "u" },
		{ "Remote Mine", "Remote mines are one of three types of mine found in GoldenEye, the other two being Timed Mines and Proximity Mines. Remote mines are arguably more useful than the other types of mines as they can be detonated at any time.", "CMPGE015", "Goldeneye_RemoteMines", "u" },
	}},
	{{
		{ "Magic Missile", "Petton Everhail's trusty Magic Missile, a staple spell among mages. Shoots fireballs from the palm of your hand at a decent rate of fire, and can be charged up to do 3X damage, which transfers to your artifacts. Although the damage and velocity of the projectiles are rather mediocre, it consumes no ammunition, no matter what. So fire away to your heart's content.", "CT00P0", "Catacomb3D_MagicMissile", "p" },
		{ "Waves", "The one water magic spell in Everhail's arsenal, the waves can pierce through multiple targets in close range and do outrageous damage. Useful in desperate situations when you are cornered, but it's a borderline melee weapon for how poor its range is.", "CT01Z0", "Catacomb_WavesQuickSpell", "1" },
		{ "XTerminators", "A powerful artifact for radial magic usage, the XTerminators fire 18 Magic Missile in a circle around the user, damaging anything nearby. Also useful as somewhat of a magic shotgun when getting really close to an enemy.", "CT01A0", "Catacomb_XTerminatorsQuickSpell", "2" },
		{ "Bursts", "An Artifact of splintering magic, the Bursts fire two large Magic Missiles that split into five smaller ones each. Useful for bombing single targets as well as clearing crowds.", "CT01I0", "Catacomb_BurstsQuickSpell", "3" },
		{ "Zappers", "The ever reliable artifact of rapid-fire magic, Zappers quickly fire a stream of 12 Magic Missiles, each one dealing 10 damage. Great for softening up larger targets as well as clearing groups of weaker ones.", "CT01F0", "Catacomb_ZappersQuickSpell", "4" },
		{ "Nukes", "The Elusive Nuke Artifact delivers a devastating fireball that explodes on contact with surfaces and enemies, dealing massive damage to the affected zone. The blast isn't particularly large, but the fearsome power and the ability to cast several in quick succession more than makes up for it.", "CT01P0", "Catacomb_NukesQuickSpell", "5" },
		{ "Bolts", "Named after the predecessor to the Zapper spell from Catacomb 3D, the Bolt spell now has very different behavior. Acting as a shotgun blast of 5 homing fireballs, Bolts are exceedingly deadly against enemies both up close and afar.", "CT01S0", "Catacomb_BoltsQuickSpell", "6" },
		{ "Atomic Firebomb", "A literal blast from the past, the Atomic Firebomb is the more explosive younger cousin of the same Nuke spell from the original Catacomb 3D. Using 4 Nukes and an Xterminator to fire 8 Nuke projectiles in a ring around the user, it's a very handy way to get the message across to stay back. Or else.", "CT01W0", "Catacomb_AtomicQuickSpell", "7" },		
		{ "Crystal Hourglass", "A mysterious yet deadly artifact that Petton Everhail first encounters in the caverns deep beneath the Towne of Morbidity, this hourglass stops time for 30 seconds, allowing the user to sneak by their opponents undetected and cast several fireballs while time is stopped. Use this to unleash a flurry of projectiles within what the enemy perceives as a mere instant.", "CTAAI0", "Catacomb_Hourglass", "7" },
		{ "Ring of Fire", "A ring that grants the user with the power of fireballs, dealing significantly more damage then normal magic missiles. Although it has no effect on Waves or Bolts, this weapon will greatly increase your damage dealing potential.", "CTAAA0", "Catacomb_RandomGem", "u" },
		{ "Ring of Earth", "A ring that grants the user with the power of spread shots, firing 3 times the projectiles with any artifact. Useful against large groups of enemies.", "CT01N0", "Catacomb_RandomGem", "u" },
		{ "Ring of Water", "A ring that harnesses the flowing tides of the sea to increase the use rate of the wearer's magic. While under the effects, the player has double fire and charge rate, and the Magic Missile projectiles have their velocity increased by 10.", "CTAAM0", "Catacomb_RandomGem", "u" },
		{ "Ring of Lightning", "A ring embued with the unstable fury of storms, the Ring of Lightning makes the wearer's shots bounce on surfaces. Has no effect on Waves.", "CTAAG0", "Catacomb_RandomGem", "u" }
	}},	
};

//Sets, modes, monster, info
str MonsterInfo[CLASSCOUNT][MAXMODES][64][31] =
{
	{
		{
			{ "Zombieman", "COMP_THREAT_2", "Just a few days ago, you were probably swapping war stories with one of these guys. Now it's time to swap some lead upside their head.", "Zombieman2", "POSSA1" },
			{ "Shotgun Guy", "COMP_THREAT_2", "Same as the Former Humans, but much meaner, and tougher. These walking shotguns provide you with a few extra holes if you're not careful!", "Shotgunguy2","SPOSA1" },
			{ "Imp", "COMP_THREAT_2", "You thought an imp was a cute little dude in a red suit with a pitchfork? Where did these brown bastards come from? They heave balls o' fire down your throat and take several bullets to die. It's time to find a weapon better than that pistol if you're going to face more than one of these S.O.B.s.", "DoomImp2", "TROOA1" },
			{ "Chaingun Guy", "COMP_THREAT_2", "Geeze, weren't shotgun zombies bad enough? At least when you face these jerks you get a cool chaingun.", "Chaingunguy2", "CPOSA1" },
			{ "Demon", "COMP_THREAT_3", "Sorta like a shaved gorilla, except with horns, a big head, lots of teeth, and harder to kill. Don't get too close or they'll rip your fraggin' head off.", "DoomDemon2", "SARGA1" },
			{ "Spectre", "COMP_THREAT_3", "Great. Just what you needed. An invisible (nearly) monster.", "Spectre3", "SARGA1" },
			{ "Lost Soul", "COMP_THREAT_2", "Dumb. Tough. Flies. On fire. 'Nuff said.", "LostSoul2", "SKULA1" },
			{ "Cacodemon", "COMP_THREAT_3", "They float in the air, belch ball-lightning, and boast one Hell of a big mouth. You're toast if you get too close to these monstrosities.", "Cacodemon2", "HEADA1" },
			{ "Hell Knight", "COMP_THREAT_4", "Tough as a dump truck and nearly as big, these Goliaths are the worst things on two legs since Tyrannosaurus rex.", "HellKnight2", "BOS2A1C1" },
			{ "Baron of Hell", "COMP_THREAT_4", "The Hell Knight was bad news but this is Big Daddy. These bruisers are a lot like Hell Knights, but look a little different and are twice as tough to kill.", "BaronofHell2", "BOSSA1" },
			{ "Arachnotron", "COMP_THREAT_4", "Maybe cybernetics wasn't such a great idea after all. Look what the demons have done with it. It seems unfair somehow you're not the only guy in Hell with a plasma gun.", "Arachnotron2", "BSPIA1D1" },
			{ "Pain Elemental", "COMP_THREAT_4", "What a name. And what a guy. Killing him is almost as bad as letting him live.", "PainElemental2", "PAINA1" },
			{ "Revenant", "COMP_THREAT_4", "Apparently when a demon dies, they pick him up, dust him off, wire him some combat gear, and send him back into battle. No rest for the wicked, eh? You wish your missiles did what his can do.", "Revenant2", "SKELA1D1" },
			{ "Mancubus", "COMP_THREAT_4", "The only good thing about fatso is that he's a nice wide target. Good thing, because it takes a lot of hits to puncture him. He pumps out fireballs like there was no tomorrow.", "Fatso2", "FATTA1" },
			{ "Arch-Vile", "COMP_THREAT_4", "One of the worst of a bad lot. You can't think of enough rotten things to say about him. He's fast, hard to kill, casts spells, and resurrects dead monsters! At least these suckers are rare.", "Archvile2", "VILEA1D1" },
			{ "Spider Mastermind", "COMP_THREAT_5", "You guess the Arachnotrons had to come from somewhere. Hi, Mom. She doesn't have a plasma gun, so thank heaven for small favors. Instead, she has a super-chaingun. Crap.", "SpiderMastermind2", "CMPMDM16" },
			{ "Cyberdemon", "COMP_THREAT_5", "A missile-launching skyscraper with goat legs. 'Nuff said.", "Cyberdemon2", "CYBRA1" },
			{ "Wolfenstein SS", "COMP_THREAT_2", "After killing all the demons at an industrial zone from Earth, you discover a teleporter found at the end of a secret tunnel. You wonder who the inmates of this corner of Hell will be...", "Nazi2", "SSWVA1" },
		},
		{
			{ "Zombieman", "COMP_THREAT_2", "Once a Marine, always a Marine. Except in this case. These guys may look like your old buddies, but now they're nothing more than pistol-toing, bi-pedal maggots. Waste em!", "ZombieMan64", "64POA1" },
			{ "Sergeant", "COMP_THREAT_2", "Ditto. Except these guys are meaner, and tougher. These walking shotguns will provide you with a few extra holes if you're not careful.", "ShotgunGuy64", "64SPA1" },
			{ "Chaingunner", "COMP_THREAT_3", "Strange, you could have sworn they did not have these chaingunners before...", "ChaingunGuy64", "64CPA1" },
			{ "Imp", "COMP_THREAT_2", "You thought an imp was a cute little dude in a red suit with a pitchfork. Think again. This Imp heaves balls of fire down your throat and takes several bullets to die. It's time to find a better weapon than a pistol, if you're going to face more than one of these mutants.", "DoomImp64", "64TRA1" },
			{ "Nightmare Imp", "COMP_THREAT_3", "An Imp is bad enough, but picture a faster, more aggressive one. Now the bad news... he's harder to see, too.", "NightmareImp64", "64I2A1" },
			{ "Demon", "COMP_THREAT_3", "Sorta liked shaved gorillas, except with horns, big heads and lots of teeth. They don't kill easily. Get to close and they'll rip your sorry head off.", "Demon64", "64SRB1" },
			{ "Spectre", "COMP_THREAT_3", "Great! Just what you needed. An (nearly) invisible monster. These beasts will eat your face off. Did you expect a walk in the park?", "Spectre64", "64S2B1" },
			{ "Lost Soul", "COMP_THREAT_2", "It's Tough. It Flies. It's On Fire.", "LostSoul64", "64LSA1" },
			{ "Cacodemon", "COMP_THREAT_3", "They float in the air, belch ball-lightning, and have one horrendously big mouth. If you get too close to one of these monstrosities, you're toast.", "Cacodemon64", "64HDA1" },
			{ "Hell Knight", "COMP_THREAT_4", "Tough as a dump truck and nearly as big. These goliaths are the worst thing on two legs since the Tyrannosaurus Rex.", "HellKnight64", "64HKA1" },
			{ "Baron of Hell", "COMP_THREAT_4", "You thought the Hell Knights were bad? These guys make them look like choir boys. You better have a good supply of ammo and armor to take on this demon.", "BaronOfHell64", "64BSA1" },
			{ "Arachnotron", "COMP_THREAT_4", "Think of the pain a Black Widow causes when you disturb her nest. Then think what happens when you stir up one the size of an M60 tank.", "Arachnotron64", "64PIA1" },
			{ "Pain Elemental", "COMP_THREAT_4", "What a name. And what a pain in the butt. Killing him is almost as bad as letting him live.", "PainElemental64", "64PNA1" },
			{ "Revenant", "COMP_THREAT_4", "Oh great, the skeleton is back. First the chaingunner and now him. It can't get worse than this, can it?", "Revenant64", "SKE2A1" },
			{ "Mancubus", "COMP_THREAT_4", "The only good thing about this fat tub of demon is that he's a nice wide target. Good thing, because it takes a lot of hits to puncture him. He pumps out fire balls like nobody's business.", "Fatso64", "64FTA1" },
			{ "Arch-Vile", "COMP_THREAT_4", "Oh dear God, HE is back!?", "Archvile64", "VIL2A1" },
			{ "Spider Mastermind", "COMP_THREAT_5", "Looks like the Chaingunner, Revenant, and Arch-Vile aren't the only returning monsters. It's been a while, Spider Mastermind! I certainly did not miss that super-chaingun of yours. Crap.", "SpiderMastermind64", "CMPMD217" },
			{ "Cyberdemon", "COMP_THREAT_5", "Half machine, half raging horned devil. This walking nightmare has a rocket launcher for an arm and will definitely reach out and touch you. Make sure you're fully loaded before you take on this guy.", "Cyberdemon64", "CMPMD218" },
			{ "Mother Demon", "COMP_THREAT_6", "The military episodes code named \"DOOM\" were not actually completed: A single entity with vast rejuvenation powers, masked by the extreme radiation. In its crippled state, it systematically altered decaying dead carnage back into corrupted living tissue. \n\nThe mutations are devastating. The Demons have returned even stronger and more vicious than before.", "MotherDemon64", "CMPMD219" },
			{ "Nazi", "COMP_THREAT_2", "Members of the Schutzstaffel, they wear blue uniforms, bulletproof vests, and sadistic grins. They picked the wrong side of Hell to make their appearance!", "WolfensteinSSJagaur", "64SSA1" },
		}
	},
	{{
		{ "Flemoidus Commonus", "COMP_THREAT_2", "This is the weakest and most common Flemoid variety there is. It is very slow, but you should still be cautious. It attacks by throwing slime from its nose, but cannot throw it very far.", "FlemoidusCommonus3", "POSCA1" },
		{ "Flemoidus Bipedicus", "COMP_THREAT_2", "This one is much faster and stronger than the commonus, and is the one of only two varieties of Flemoids to walk on two legs. It throws slime from its two arms, as well as its nose, resulting in a much more powerful blast than the commonus.", "FlemoidusBipedicus3", "SPOCA1" },
		{ "Armored Flemoidus Bipedicus", "COMP_THREAT_2", "This is a stronger variation of the Bipedicus. When you see him you know he earned his armor! He's fairly rare, but still not too uncommon. His means of attack is an unusual one. In addition to throwing slime a short distance from his nose and arms, as the regular ones do, it throws a ball of slime that can travel long distances. Use caution.", "NewArmoredFlemoidusBipedicus", "TROCA1" },
		{ "Flemoidus Stridicus", "COMP_THREAT_2", "The Flemoidus Stridicus is the fastest flemoid EVER! Named after its legs and long strides, it needs to bend down to strike you. Zorch it before it does!", "NewFlemoidusStridicus", "SARCA1" },
		{ "Flemoidus Cycloptis Commonus", "COMP_THREAT_3", "This creepy thing is well... creepy! It floats and is scary. He is very fast, strong, and he wastes rounds of zorch! He has no solid form, so he's held together by a metal suit. Its means of attack is close range only, but do not let it get close enough to attack you, as it has a very strong attack.", "NewFlemoidusCycloptisCommonus", "CYCLA1" },
		{ "Flemoidus Larva", "COMP_THREAT_2", "Aww, its a baby Flemoid! Wait... eww, it's ugly! Yes, this demonic looking green worm is very creepy. It's as fast and strong as the Cycloptis, only it doesn't float! It's attacks are close range, but he's still creepy far away! ", "NewLarva", "LRVAA1" },
		{ "Flem Mine", "COMP_THREAT_2", "This remote controlled slime ball flies around, trying to jet itself towards you with its slime that propels itself off the nearest wall. ", "FlemMine2", "SKUCA1" },
		{ "Flemoidus Gyro", "COMP_THREAT_3", "Silly. Tough. Flies. Has a propeller. 'Nuff said.", "NewFlemoidusGyro", "GYROA1" },
		{ "Super Cycloptis", "COMP_THREAT_3", "They float in the air, belch green slimey stuff, and strangely reminds me of some other one eyed floating creature. You're toast if you get too close to these monstrosities. Did you know Flemoidus Cycloptis Ultricus is its Latin name?", "SuperCycloptis2", "SCYCA1" },
		{ "Flemoidus Quadrumpus", "COMP_THREAT_4", "This hunk of muscle is cartoony, but don't be like 'Awww he's so cute!' he is still a very strong guy, and packs a punch. His means of attack is very similar to that of the Bipedicus with armor, but instead of two arms, it has four! ", "NewQuadrumpus", "QUADA1" },
		{ "Flembrane", "COMP_THREAT_4", "(Appears exclusively in Chex Quest) Right when you thought it was safe to venture into the depths of the caverns of Bazoik... this guy shows up! And he's not too happy of the job you've done with his place! You better be packing heat if you're thinking about fighting him!", "NewFlembrane", "CMPMCX11" },
		{ "Flemoidus Maximus", "COMP_THREAT_4", "This big nosed Flemmie is what keeps you up at night! He planned the attack on Chex City, and is one of the strongest Flemoids ever, tied with the Flembrane! He's slow but strong, and shoots slime balls bigger then your head! He comes in two flavors: One where he's a big guy with a lot of health. The other has less health but is much bigger!", "NewFlemoidusMaximusArch", "CMPMCX12" },
		{ "Mega Flemoidus Maximus", "COMP_THREAT_5", "The Flemoidus Maximus was bad news but this is Big Daddy. These bruisers are a lot like Hell Knights, but look a little bigger and are twice as tough to kill.", "NewFlemoidusMaximus", "CMPMCX13" },
		{ "The Flembomination", "COMP_THREAT_5", "One of the most fearsome of the Flemoids. It shoots plenty of Super Cycloptis slime balls at you. The Flembomination comes in two flavors: One type will shoot slow but powerful slime balls at you. Another type will shoot fast and powerful slime balls around its entire body!", "Flembomination2", "CMPMCX14" },
		{ "Lord Snotfolus", "COMP_THREAT_6", "Lord Snotfolus is indeed the lord of all flemoids, commanding from his Flem Meteorship. He was willing to give it up to send slime all over Ralston, but not ready for an eager Chex Warrior to send him back. When you encounter him, he will come in either two flavors: One where he shoots a couple of powerful slime balls at a time. The other is the same thing but not only does he shoot the slime balls faster but he can spawn spores that turns into Flemoids at his service!", "OldSnotfolus", "CMPMCX15" },
		{ "Yellow Armored Flemoidus Bipedicus", "COMP_THREAT_2", "There have been reports that the Armored Flemoidus Bipedicus are starting to change...", "YellowArmoredFlemoid", "TROCA1" },
		{ "Dark Armored Flemoidus Bipedicus", "COMP_THREAT_2", "There have been reports that the Armored Flemoidus Bipedicus are starting to change...", "DarkArmoredFlemoid", "TROCA1" },
	}},
	{{
		{ "Gargoyle", "COMP_THREAT_1", "Half-demon and half-bat. these wicked red beasts are the Order's guard dogs of the sky.", "HereticImp3", "IMPXA1" },
		{ "Fire Gargoyle", "COMP_THREAT_2", "As if flying demons wern't enough, Fire Gargoyles toss balls of fire down on their unsuspecting enemy. These demons have twice as much health as the original Gargoyles.", "HereticImpLeader3", "IMPXD1" },
		{ "Golem", "COMP_THREAT_2", "These big bad walking rocks smack you hard and make you cry.", "Mummy3", "MUMMA1" },
		{ "Nitrogolem", "COMP_THREAT_2", "Enchanted by the powers of evil, the Nitrogolems cast blazing skulls at their foe. These demons have a bit more health than the original Golems.", "MummyLeader3", "MUMMX1" },
		{ "Undead Warrior", "COMP_THREAT_3", "As part of the Order's insidious plot to control your world, they've recruited the dead, gave them armor and armed them with deadly magic axes. Now they guard the evil cities and toss their infinite supply of axes at any elf who passes by.", "Knight3", "KNIGA1" },
		{ "Sabreclaw", "COMP_THREAT_3", "These hideous abominations of the dark world move bloody fast and possess deadly sharp blades for appendages. They can't fly and they can't shoot, but in close combat they'll tear you to ribbons.", "Clink3", "CLNKA1" },
		{ "Disciple of D'Sparil", "COMP_THREAT_3", "The pupils of D'Sparil's dark magic, these wizards have mastered flight and blink out of the shadow world long enough to cast a crushing wave of magic missiles toward their enemy.", "Wizard3", "WZRDA1" },
		{ "Ophidian", "COMP_THREAT_4", "The Ophidians slither in the darkest chambers of the Dome of D'sparil and protect their lairs with deadly, energy tossing tridents.", "Snake3", "SNKEA1" },
		{ "Weredragon", "COMP_THREAT_4", "The Weredragons infest the darkest lairs of the Order. Possessing all of the strength and agility of a tank, these lumbering creatures belch a body-blasting fireball.", "Beast3", "BEASA1" },
		{ "Iron Lich", "COMP_THREAT_4", "What is the Iron Lich? It is just an ordinary monster... that can shoot powerful balls of fire, can summon a pesky tornado, and can launch a deadly ice attack. Word of advice: kill this ordinary monster IMMEDIATELY.", "IronLich3", "LICHA1" },
		{ "Maulotaur", "COMP_THREAT_5", "Maulotaurs greatly resemble the mythological Minotaur, except that they wield giant hammers (or mauls), which they use to smash their enemies into a pulp.", "Minotaur3", "MNTRA1" },
		{ "D'Sparil & His Chaos Serpent", "COMP_THREAT_5", "He is the first and the youngest of the trio of Serpent Riders, using cunning and deception to initially gain dominance of Parthoris, the world of Heretic. He declared the supernatural race of the Sidhe to be forever hunted as heretics to their new Order. When you first encounter him, he will be riding a Green Chaos Serpent. Once his mount has been defeated, D'Sparil fights his enemy using his own powers.", "Sorcerer5", "CMPMHE12", "Sorcerer6", "SOR2M1" },
	}},
	{
		{
			{ "Nazi Guard", "COMP_THREAT_2", "The bullies in brown (or green) go down easy, but there's a lot of 'em.", "WolfGuard", "WGRDA1", "SODGuard", "SGRDA1" },
			{ "Nazi Officer", "COMP_THREAT_2", "These quick, smart soldiers wear white and see red.", "WolfOfficer", "WOFFA1", "SODOfficer", "SOFFA1" },
			{ "Nazi Schutzstaffel", "COMP_THREAT_3", "Members of the Schutzstaffel, they wear blue (or black) uniforms, bulletproof vests, and sadistic grins.", "WolfSS", "WSCHA1", "SODSS", "SSSOA1" },
			{ "Dog", "COMP_THREAT_2", "These German shepherds (or blue doggies) go right for your throat. ", "WolfDog", "WDOGA1", "SODDog", "SDOGA1" },
			{ "Spectre", "COMP_THREAT_2", "The Ghosts accompany the Angel of Death in order to test the hero's strength and find out if they're \"worthy\" of wielding the Spear of Destiny. There have been reports of other types of spectres. Ghoulish Ghosts, who are still loyal to Hitler and wear Nazi helmets. Radioactive Mist, clouds of some sort of radioactive material left over from earlier battles, resulting in a greenish-smoke appearance. These types seem to matter only in appearance, thankfully.", "WolfSpectre", "WSPEA0", "SODSpectre", "SSPEA0", "SODSpectre2", "SSPEI0" },
			{ "Fake Hitler", "COMP_THREAT_4", "Fake Hitlers (Falscher Hitler) are dummies fashioned to look like Adolf Hitler. These robe wearing puppets, along with regular Nazi personnel, protect Hitler himself. ", "FakeHitler", "WFAHA0" },
			{ "Mutant", "COMP_THREAT_4", "Hideous human experiments of the evil Dr. Schabbs, these three-armed beasties are killing machines.", "WolfMutant", "WMUTA1" },
			{ "Bat", "COMP_THREAT_4", "Bats are very large, mutant bats that are the brainchild of Dr. Quarkblitz. The bats are very big and smart (suggesting that they are genetically modified or specially bred to be so). Sometimes the Nazis use them to replace the Mutants.", "SODBat", "SBATB1" },
			{ "Hans Grosse", "COMP_THREAT_4", "He is large, and while not very smart, is still a powerful Nazi enforcer. He is a member of the Grosse family which comprises his brothers Trans, Mans, Pans, Fans, and sister Gretel; they all seem to share an affinity for heavy body armor and dual chain guns.", "HansGrosse", "WHANA0" },
			{ "Gretel Grosse", "COMP_THREAT_4", "She is the youngest member of the Grosse family, having a brother, Hans Grosse and another relative, Trans Grosse. Her Chain Guns are the most distinct, as the rolling is not exposed. They aren't as deadly as Otto Giftmacher and General Fettgesicht's weaponry, but she can do major damage if you are not careful.", "GretelGrosse", "WGRTA0" },
			{ "Trans Grosse", "COMP_THREAT_4", "Another brother in the prolific Grosse family, Trans (said TRAHNZ) is so tough he chews up lead bars and spits out bullets.", "TransGrosse", "WTRAA0" },
			{ "Doctor Schabbs", "COMP_THREAT_5", "He is nuts and prefers killing to all other activities. Watch out for flying syringes or you'll be a mutant too!", "DoctorSchabbs", "WSCBA0" },
			{ "Otto Giftmacher", "COMP_THREAT_4", "The amoral scientist responsible for designing chemical weapons. Beware his rumored \"Super Otto\" alter-ego, where he can shoot three rockets in a spread shot fashion...", "OttoGiftmacher", "WOTTA0" },
			{ "General Fettgesicht", "COMP_THREAT_5", "The organizer of the chemical war.", "GeneralFettgesicht", "WFETA0" },
			{ "Submarine Willy", "COMP_THREAT_4", "The commander of a submarine, Willy is known and feared for his various mental problems and rage outbursts. Even a lobotomy didn't improve his temper. Equipped with a chain gun and a machine gun, Willy is definitely prepared for battle.", "SubmarineWilly", "SUBWA0" },
			{ "Barnacle Wilhelm", "COMP_THREAT_5", "This salty dog barks a missile launcher / chaingun welcome from his weathered fists! Don't rub his fur the wrong way!", "BarnacleWilhelm", "WBARA0" },
			{ "Professor Quarkblitz", "COMP_THREAT_5", "Killing him will stop the further usage of specially bred bat units and ensure that his Robot doesn't go past the prototype stage. However, he is armed with a rocket launcher and a Chain Gun, so don't expect him to go down easily.", "ProfessorQuarkblitz", "PROQA0" },
			{ "UberMutant", "COMP_THREAT_5", "The horrific jewel in maniacal Dr. Schabbs' sadistic crown, the UberMutant is the perfect soldier with four cleaver-tipped arms and a chaingun in its chest!", "Ubermutant", "WUBRA0" },
			{ "The Axe", "COMP_THREAT_5", "Major Hans \"The Axe\" von Schlieffen (often referred to as simply The Axe) is the one that stole the Spear from America and brought it back to Germany. He is the best of the best of Hitler's elite forces. His extreme speed and dual Chain Guns make him the most dangerous foe that you will encounter. He wears armor similar to that used by the Grosse family and the Death Knight, completed with a skull-like mask.", "TheAxe", "TAXEA0" },
			{ "Death Knight", "COMP_THREAT_6", "You may be playing on Death Incarnate, but with two chainguns and two missile launchers, this guy is Death Incarnate.", "WDeathKnight", "WDKNA0" },
			{ "Robot", "COMP_THREAT_6", "It is the guardian of said Spear and is a prototype weapon designed by Dr. Quarkblitz. Armed with two Chain Guns and rocket launchers, the Robot is easily a force to be reckoned.", "Robot", "ROBOA0" },
			{ "Adolf Hitler", "COMP_THREAT_5", "The essence of evil, he's got a few surprises for you. ", "MechaHitler", "WMAHA0", "Hitler", "WADOA0" },
			{ "Angel of Death", "COMP_THREAT_5", "After grabbing the Spear, B.J. Blazkowicz is teleported to Hell, where he must defeat the demonic Angel in order to prove that he is worthy enough to wield the Spear. The Angel's only method of attack is firing powerful orbs at a target.", "AngelOfDeath", "WADHA0" },
			{ "Devil Incarnate", "COMP_THREAT_5", "He is a demonic creature from Hell summoned by Hitler's unholy ritual. Using the Spear of Destiny, Hitler took control over the monster and commanded him to aid the Third Reich. Like the Angel of Death, you'll meet him after grabbing the Spear. His only attack is to fire orbs at you, but the orbs are very powerful.", "DevilIncarnate", "DEINA0" },
			{ "Mage", "COMP_THREAT_2", "You have already encountered some twisted stuff like ghosts, mutants, Hitler clones, and hellish creatures under the command of Mein Fuhrer. A mage should not sound too outlandish at this point...", "Mage", "C3DMA0" },
		},
		{
		},
		{
		},
		{
			{ "Wehrmacht Guard", "COMP_THREAT_1", "The standard German soldier. They are the most common enemy. \n\nThese guards are simply armed with a Walther P38.", "TotenkopfGuard", "TK14A1", "TotenkopfGuard2", "TK15A1" },
			{ "Wehrmacht Rifleman", "COMP_THREAT_1", "The standard German soldier. They are the most common enemy. \n\nThese guards are armed with a Kar98k which could be a threat in the long distance.", "TotenkopfRifleman", "TK16A1" },
			{ "Wehrmacht Infantry", "COMP_THREAT_2", "The standard German soldier. They are the most common enemy. \n\nThese guards are armed with an MP40 which can chew down your health quickly.", "TotenkopfInfantry", "TK17A1", "TotenkopfInfantry2", "TK18A1" },
			{ "Wehrmacht Officer", "COMP_THREAT_2", "The standard German soldier. They are the most common enemy. \n\nThese officers can carry P38s or MP40s, and can use them to a more deadly effect.", "TotenkopfOfficer", "TK19A1", "TotenkopfOfficer2", "TK20A1" },
			{ "SS Infantry", "COMP_THREAT_2", "Also known as Himmler's \"Blackshirts\", S.S. guards are brutal.\n\nThese guys will perforate you with their MP40 machineguns.", "TotenkopfSS", "TK21A1", "TotenkopfSSInfantry", "TK23A1" },
			{ "SS Rifleman", "COMP_THREAT_2", "Also known as Himmler's \"Blackshirts\", S.S. guards are brutal.\n\nThese guys carry a Kar98k which can pinch you from a range.", "TotenkopfSSRifleman", "TK22A1" },
			{ "SS Officer", "COMP_THREAT_2", "Also known as Himmler's \"Blackshirts\", S.S. guards are brutal. S.S. Officers are even deadlier since they are better trained!", "TotenkopfSSOfficer", "TK24A1", "TotenkopfSSOfficer2", "TK25A1" },
			{ "Dogs", "COMP_THREAT_1", "These German shepherds are trained to attack intruders. They are weak, but vicious!", "TotenkopfDog", "TK33A1", "TotenkopfDog2", "TK34A1" },
			{ "Scientist", "COMP_THREAT_1", "The scientists are both responsible for mass producing mutants and keeping them in check.\n\nThey only carry a Walther P38.", "TotenkopfScientist", "TK37A1", "TotenkopfScientist2", "TK38A1" },
			{ "Mutant", "COMP_THREAT_3", "Prisoners from Castle Totenkopf were often \"volunteered\" to participate in the Nazis experiments. These are the results. They have a third arm in their chest which carries an MP40 and 2 pistols in their hands.", "TotenkopfMutant", "TK35A1", "TotenkopfMutant2", "TK36A1" },
			{ "Waffen SS", "COMP_THREAT_3", "These elite soldiers are some of the meanest, toughest Nazis around. They wear armor and carry assault rifles!", "TotenkopfWaffenSS", "TK26A1", "TotenkopfWaffenSS2", "TK27A1", "TotenkopfWaffenSS3", "TK28A1", "TotenkopfWaffenSSOfficer", "TK29A1" },
			{ "Ghost", "COMP_THREAT_2", "They did not really inhabit Castle Totenkopf, but they came from other foiled Nazi projects involving super natural forces. As a result, these ghosts can be killed. They are no threat unless they get close.", "TotenkopfGhost", "TK49A0" },
			{ "Lightning Monk", "COMP_THREAT_3", "They did not really inhabit Castle Totenkopf, but they came from other foiled Nazi projects involving super natural forces. These monks can shoot spheres of lightning.", "TotenkopfMonk", "TK46A0" },
			{ "Flame Monk", "COMP_THREAT_3", "They did not really inhabit Castle Totenkopf, but they came from other foiled Nazi projects involving super natural forces. These monks can shoot streams of flames at you.", "TotenkopfMonk2", "TK48A0" },
			{ "SS Flamethrower Trooper", "COMP_THREAT_4", "These super soldiers can take a beating and carry a flamethrower. 'Nuff said.", "TotenkopfTrooperFlamethrower", "TK30A0" },
			{ "SS Chaingun Trooper", "COMP_THREAT_4", "These super soldiers can take a beating and carry a chaingun. 'Nuff said.", "TotenkopfTrooperChaingun", "TK31A0" },
			{ "SS Panzerschreck Trooper", "COMP_THREAT_4", "These super soldiers can take a beating and carry a panzerschreck. 'Nuff said.", "TotenkopfTrooperPanzerschreck", "TK32A0" },
			{ "Mechanoid Stormtrooper", "COMP_THREAT_4", "The most dangerous mutant the Nazis have managed to mass produce, they carry an MG42 with a lightning quick draw speed. Charging at them will end in slaughter.", "TotenkopfMechanoidStormtrooper", "TK39A1" },
			{ "Hans Grosse", "COMP_THREAT_4", "A heavily-armored, chaingun-wielding brute who bears an uncanny resemblance to Hans Grosse. Maybe he is Hans Grosse? Regardless, these guys are in good supply and hit hard.", "TotenkopfHansGrosse", "TK45A0" },
			{ "Dr Schabbs (Mutant)", "COMP_THREAT_5", "No wonder the mutants are still being created! You thought you killed Dr. Schabbs back at Hollehammer, but he cheated death by injecting himself with an enhanced mix of his own mutant formula, turning him into this monstrosity.", "TotenkopfSchabbsMutant", "TK41A0" },
			{ "SS Captain Narbengesicht", "COMP_THREAT_5", "The chief interrogator at Castle Totenkopf; his methods are sadistic and cruel. The man is so evil that even other Nazis are afraid of him. He never showed any of his victims mercy, so you should give him none in return.", "TotenkopfNarbengesicht", "TK40A0" },
			{ "Panz Grosse", "COMP_THREAT_5", "Hans's bigger, meaner brother. He is no ordinary Grosse... he has so much armor that they call him a \"Human Panzer\".", "TotenkopfPanzGrosse", "TK43A0" },
			{ "Totenkopf Mutant", "COMP_THREAT_6", "An abomination spawned from a horrific marriage of occult powers and twisted science. The Nazis had finally succeeded in creating a soldier that could never truly die. But it proved to be so destructive and uncontrollable that they had to lock it away and never let it out. While its hitpoints may be low, his projectiles hit hard and follow targets.", "TotenkopfDeathMutant", "TK44A0", "TotenkopfDeathMutantSpirit", "TK44M0" },
		}
	},
	{{
		{ "Ettin", "COMP_THREAT_2", "These horrid creatures are all that remains of the once proud Legionnaires. Less than human, they retain just enough of their memory to hate what they have become, and to hate you even more for what you still are. Fortunately for you, though, they are not particularly skillful foes.", "Ettin3", "ETTNA1" },
		{ "Afrit", "COMP_THREAT_2", "These larger, nastier cousins of the gargoyles found in Heretic are more than happy to douse you in flames. The only nice thing about them is the satisfying splat they make when you shoot 'em from the sky.", "FireDemon3", "FDMNA1" },
		{ "Dark Bishop", "COMP_THREAT_2", "Many of the more powerful leaders within the Church have been warped into mindless servants of the Serpent Riders, and their magical powers have been multiplied tenfold. These vile creatures are known as Dark Bishops, and though they are frail of limb, they are extremely powerful. They fire circling projectiles of magical jade that track your position, and the Bishop phases in and out of existence as they travel from place to place. A dangerous opponent by itself, a nightmare when encountered in groups. ", "Bishop3", "BISHA1" },
		{ "Centaur", "COMP_THREAT_3", "Named after a mythical being, these monsters bear none of the pleasant traits attributed to them in legends: vicious, brutal and extremely hard to kill. Centaurs serve in the front ranks of many of the Serpent Riders' armies. They are capable of deflecting missiles with their shields, so use caution when attacking them. ", "Centaur3", "CENTA1" },
		{ "Reiver", "COMP_THREAT_3", "Although they retain only half of their bodies, these Undead creatures have lost none of their powers. They fly through the air with hypnotic grace, but don't just sit there and watch or they'll pelt you with devastating fireballs. Sometimes the reiver will first appear buried in the ground. Use caution if you accidently bump into it!", "Wraith3", "CMPMHE05" },
		{ "Chaos Serpent", "COMP_THREAT_3", "D'Sparil once had a Chaos Serpent for a mount. On this world the Serpents run loose, uncontrolled by any higher intelligence. One breed of Chaos Serpent will scorch you with fiery blasts (Green Chaos Serpent), while a second variant of this creature belches poisonous gas (Brown Chaos Serpent).", "Demon1C", "DEMNA1", "Demon2C", "DEM2A1" },
		{ "Slaughtar", "COMP_THREAT_3", "These Centaur leaders are much like their minions, but they're considerably tougher and they can spew magical fire from their shields. So we won't say anything about their apt name. Your safest strategy is to attack them from afar as they tend to do the same.", "CentaurLeader3", "CENTE1" },
		{ "Wendigo", "COMP_THREAT_4", "This fierce tundra beast fires shards of damaging ice, turning all who fall prey to its icy grip into frozen statues.", "IceGuy3", "ICEYA1" },
		{ "Stalker", "COMP_THREAT_3", "Stalkers are aquatic reptiles with huge talons designed to rend their prey into bite-sized morsels. They can't leave the water, so once you're on dry land you might feel safe. But beware, some stalkers can fire slime projectiles.", "Serpent3", "SSPTJ1" },
		{ "Death Wyvern", "COMP_THREAT_4", "Like the Reivers, these creatures are Undead, and their thirst for the blood of living creatures is surpassed only by their hatred of anything but themselves. The Death Wyvern is a formidable opponent, and should be dispatched immediately - if not sooner.", "Dragon3", "DRAGA1" },
		{ "Zedek", "COMP_THREAT_4", "Once the leader of the Legion, Zedek is now little more than a pawn in the hands of the Serpent Riders. Still, he retains all his old martial skills, and defeating him will be one of your greatest challenges.", "FighterBoss3", "PLAFA1" },
		{ "Traductus", "COMP_THREAT_4", "From lowly monk to Grand Patriarch in 30 short years, Traductus' destiny seemed to be eternal greatness. But somewhere along the way he lost direction, and now he blocks your path to fulfilling your own shadowed fate.", "ClericBoss3", "CLBSA1" },
		{ "Menelkir", "COMP_THREAT_4", "The greatest Mage to occupy the Crystal Dais in centuries, it seems unlikely that Menelkir can be destroyed by any conventional force. Fighting him will be one of the greatest challenges of your life.", "MageBoss3", "MAGEA1" },
		{ "Heresiarch", "COMP_THREAT_5", "As far beyond the Bishops as the Bishops are above common men, these blasphemous beings control forces capable of sending mere mortals screaming in terror. The Heresiarch knows several spells, including a strong reflective spell, two types of magical attack, and a summoning spell that gates in Dark Bishops to aid the Heresiarch. Only a superb warrior can defeat a Heresiarch without sustaining serious injury.", "Heresiarch3", "SORCA1" },
		{ "Korax", "COMP_THREAT_5", "You have seen inhuman shapes before this, but surely even hell would never spawn such a being as Korax; his very presence fills you with horror, and you cannot begin to imagine what powers are contained within his twisted frame.", "Korax3", "CMPMH115" },
	}},
	{{
		{ "Assault Trooper", "COMP_THREAT_2", "The green suited Assault Trooper is the basic alien ground assault trooper sent by the ruthless alien leaders to serve as the first offensive wave against Earth's defenses. They attack using a laser pistol, and can attack from the air by using jetpacks. When these characters are killed, they will sometimes drop pistol ammunition that you can take and use.", "AssaultTrooper", "ASTRA1" },
		{ "Assault Captain", "COMP_THREAT_2", "The red suited Assault Captains have a wristmounted Phase induced Teleporter Device (PITD) capable of physically translocating its user to any destination within the device's range. Used as a tactical assault instrument, the PITD enables the Assault Captain to launch surprise attacks against his intended human targets at will. They will also sometimes drop pistol ammunition that you can take and use.", "AssaultCaptain", "ASCAA1" },
		{ "Assault General", "COMP_THREAT_2", "If you thought the Trooper and Captain were bad, meet the general.", "AssaultGeneral", "ASGEA1" },
		{ "Pig Cop", "COMP_THREAT_2", "The Pig Cops come from mutated Earth police forces and are positioned to suppress residual human opposition and to police the new alien power on Earth. These characters exhibit an extremely high intolerance to the presence of humans, and are filled with rage when they detect human scent. When killed, this character may drop either their shotgun or body armor.", "PigCop", "PIGCA1" },
		{ "Magnum P.I.G.", "COMP_THREAT_2", "It seems that Pig Cops do like discos or disco music, because they can be found in bars/discos. This enemy may be a nod to this fact: they are a reggae- or disco-styled Pig Cop. He has a different hairstyle, small and round sunglasses, clothing with orange and white spots. He still has a Shotgun and a police vest, though. They have short, torn pants and socks with sandals instead of boots.", "MagnumPig", "MPIGA1" },
		{ "Zombie Pig Cop", "COMP_THREAT_2", "Braaaaaaaaaaaiiiiiiiiiiiinsss...", "ZombiePigCop", "PIGZA1" },
		{ "Pig-in-a-Dress", "COMP_THREAT_2", "She is a female version of the Pig Cop wearing a pink maid uniform with L.A.R.D. emblazoned on the chest in stylized red letters.", "PiginaDress", "PIGDA1" },
		{ "Assault Enforcer", "COMP_THREAT_2", "With ripper blazing, the armored Enforcer can make fast business of dispatching any remaining human opposition. Powerful hind legs enable the Enforcer to leap to many places where an unsuspecting Duke may be caught off guard... so beware. The Enforcer may drop either ripper ammo or his armored breastplate when killed.", "AssaultEnforcer", "ASENA1" },
		{ "Protector Drone", "COMP_THREAT_3", "These new aliens are evil in every sense of the word, taking nearly twice the damage of a Pig Cop. so don't expect a single rocket to do the trick. On top of that, they move very fast, jump high, can claw you at close range, and have a nasty ability to emit shrink rays. Their main purpose is to protect their newborn alien Queen, so be very afraid when you see one. Rumor has it that the Alien Queen gave birth to other types of Drones, such as blue ones with double the health, drones who are partially invisible, and drones who can turn themselves completely invisible at their command.", "ProtectorDrone", "PRDRA1" },
		{ "Protozoid", "COMP_THREAT_1", "It emerges from its egg pod with a simple nervous system and only one mission in life - to suck your brains out through your nose and leave you a lifeless heap on the floor. The Protozoid Slimer is evasive as it stretches its elastic body from ceiling to floor, and then creeps up your pant leg for the coup de gras. Get them before they get you.", "Duke3D_Protozoid", "DK67B0" },
		{ "Sentry Drone", "COMP_THREAT_3", "Mechanized death - there's no better way to describe these airborne alien watchdogs. By the time you hear their high pitched whine as they engage their anti-grav propulsion units, it's probably too late. The Drone will swiftly collide with its target and explode with great force.", "SentryDrone", "SEDRA1" },
		{ "Octabrain", "COMP_THREAT_3", "This character's abundant brain mass and specialized trifocal vision combine to make the Octabrain a formidable alien weapon against all sentient life on Earth. Their method of attack is a powerful blast of mental energy released against its prey, thus weakening and confusing its intended victim. If the victim doesn't die from the mind blast, the Octabrain's powerful razor sharp teeth are ready to finish the job.", "Octabrain", "OCTAA1" },
		{ "Shark Drone", "COMP_THREAT_3", "Kind of like the Sentry Drone except they are found only underwater. Oh wait, the aliens found out how to make them work outside the water. Great.", "SharkDrone", "SEDSA1" },
		{ "Assault Commander", "COMP_THREAT_4", "The free-floating Assault Commander knows how to throw his weight around as he engages his anti-grav spin-deck in your face. When at greater distances, he fires deadly rockets from his rear port which dangles below his anti-grav spin-deck. The Assault Commander may drop a supply of rockets when killed.", "AssaultCommander", "ASCOA1" },
		{ "Mini Battlelord", "COMP_THREAT_4", "The Battlelord Sentry is one of the most powerful, and dangerous non-boss enemies Duke has encountered. It has masses of health and an arsenal as large as its counterpart. However, it is smaller than the Battlelord, and so is unable to step on foes with its feet when they venture too close, but getting up close to it will cause it to fire its chaingun to cause significant damage as Duke is in range of the Battlelord Sentry.", "MiniBattlelord", "BTLOA1" },
		{ "Pig Cop Tank", "COMP_THREAT_4", "These heavily armored riot tanks can take a lot of damage before they finally explode. And when they do, expect to find an angered Pig Cop behind a shotgun, aiming right at your face. Sometimes you will meet another pig cop tank that's a bit bigger than the normal tank, so be careful! (Psst, that button at the back of the tank? That's a self-destruct button.)", "PigCopTank", "PIGTA1" },
		{ "Recon Patrol Vehicle", "COMP_THREAT_4", "This sleek and deadly anti-gravity powered reconnaissance vehicle is operated by specially trained Pig Cops for the purpose of maintaining alien control in areas of human resistance. The attack mode of this craft is aerial strafing by side mounted laser cannons. The pilots of these craft are protected by an automatic pilot ejection mechanism that activates milliseconds before impact during a crash.", "ReconPatrolVehicle", "PIGAA1" },
		{ "Scorpion Tank", "COMP_THREAT_4", "Another type of the Pig Cop Tank. It is called the Scorpion Tank because the tank looks like a scorpion. Shocking, right?", "ScorpionTank", "PIGSA1" },
		{ "Battlelord", "COMP_THREAT_5", "The Battlelord wields a chaingun (prosthetic minigun design) with a built-in mortar launcher. Its chaingun is also significantly more powerful than the Enforcer's. The hulking Battlelord commands the first wave of the alien invasion force on Earth. Its deafening roar splits the air as its rapid fire chaingun and mortar rounds tear resistance asunder. It has no known weaknesses; only relentless firepower and staying on the move will win the day.", "Battlelord", "CMPMDN19" },
		{ "Overlord", "COMP_THREAT_5", "An alien leader resembling a gigantic brown dinosaur or frog, the Overlord is provided with giant fangs and claws, big golden eyes of pure wrath, twin rocket launchers mounted on both shoulders and four long amphibian-like legs that allow it to crawl and maneuver around with relative ease and fastness despite its huge size.", "Overlord", "CMPMDN20" },
		{ "Cycloid Emperor", "COMP_THREAT_5", "The Cycloid Emperor is taller than the Battlelord and Overlord and can be recognized by its single-eyed \"face\" and huge tripod claw arms. Unlike the Battlelord, the Cycloid Emperor doesn't have a real physical weapon; it uses its claw arms as a barrel for firing missiles.", "CycloidEmperor", "CMPMDN21" },
		{ "Alien Queen", "COMP_THREAT_6", "Although not directly stated, it is implied that the Alien Queen is the alien-human hybrid that was born at the beginning of The Birth. Her exact status and role in the overall alien hierarchy is not entirely known, but obviously, she is one of the leaders of the alien invaders and is the main source of Protector Drones.", "AlienQueen", "CMPMDN22" },
		{ "Cyber Keef", "COMP_THREAT_6", "The CyberKeef is a gigantic, humanoid robot that bears a minor resemblance to Duke. The CyberKeef was created by the aliens to kill Duke and blow up the city along with him.", "CyberKeef", "CMPMDN23" },
	}},
	{{
		{ "Simulacrum", "", "A simulacrum is a representation of something or someone. Durandal uses the word to describe the bio-android bombs manufactured by the Pfhor in the image of BOBs. They were designed and created by the Pfhor's Ministry for the Eradication Through Imitation of Hostile Species Unsuitable for Enslavement, or Phan Pfhar Sfaern-Wsawn Tshah in their native Pfhoric.", "MSimulacrum", "MSIMA1", "M2Simulacrum", "M_8HL1" },
		{ "Pfhor Fighter Minor [Melee]", "", "The Pfhor (pronounced \"FOUR\") are an extraterrestrial space-faring race of slavers that attacked the UESC Marathon in 2794. The Fighter is most common enemy players will encounter in any of the Marathon games. Pfhor Fighters are basic enemies that come in a variety of colors denoting difficulty level. The weakest of the fighters is the minor fighter, it wears green armor and can only use its shock staff as a melee weapon.", "M1FighterMinor", "M_H2M1", "FighterMinor", "FIMIA1" },
		{ "Pfhor Fighter Minor [Projectile]", "", "Next in rank is the minor projectile fighter. These ones wear orange armor, are tougher to beat, and can shoot ranged projectiles from their staff.", "M1ProjectileFighterMinor", "M_H6M1", "ProjectileFighterMinor", "PFMIA1" },
		{ "Pfhor Fighter Major [Melee]", "", "Tougher still is the major fighter, it is stronger than the previous two but can only use its staff as a melee weapon, these ones sport purple armor.", "M1FighterMajor", "M_H3M1", "FighterMajor", "FIMAA1" },
		{ "Pfhor Fighter Major [Projectile]", "", "The next hardest is the major projectile fighter. Sporting blue armor, and being able to shoot ranged projectiles out of its staff make this fighter the toughest you shall encounter.", "M1ProjectileFighterMajor", "M_H0M1", "ProjectileFighterMajor", "PFMAA1" },
		{ "Pfhor Super Fighter", "", "Additionally, there is a super fighter that is nearly twice the size of all the others and wears black armor. The super fighters are fearsome adversaries.", "PfhorSuperFighter", "M_VHE1" },
		{ "Pfhor Trooper Minor", "", "Troopers are Pfhor in vacuum suits suitable for activities in space or any other vacuum enviroment. Instead of the shock staff employed by the Fighters, Troopers carry a large grey gun that functions in a similar way to the assault rifle, as it fires a hail of machine gun-like bullets, and has an integrated grenade launcher. Pfhor Troopers are one rank above the fighters.", "M1TrooperMinor", "M_HXE1", "TrooperMinor", "TRMIA1" },
		{ "Pfhor Trooper Major", "", "The major troopers are stronger than the minors, wear purple armor, and are considerably more liberal with employing their grenade launchers.", "M1TrooperMajor", "M_HXO1", "TrooperMajor", "TRMAA1" },
		{ "Pfhor Super Trooper", "", "If you thought the major troopers were a problem, you have not met the super trooper yet.", "M2SuperTrooper", "M_HVE1" },
		{ "F'lickta", "", "The F'lickta (sometimes colloquially referred to as \"Yetis\") are native creatures of Lh'owon, living in sewers, water pools, and lava. They often harass Pfhor forces, and are extremely irritable. F'lickta attack using a favored claw, but are fully capable of biting with their teeth. Entering their home turf unarmed is not recommended.", "SewageFlickta", "FLIKA1", "WaterFlickta", "WFLIA1", "LavaFlickta", "LFLIA1" },
		{ "Looker", "", "Lookers are large, floating beetle-like creatures who run at the player or the BOBs and explode violently, dealing a considerable amount of damage. There are two types of Lookers, one of them is tougher than the other, so watch out when dealing with these things.", "MLooker", "M_LOA1", "MLooker2", "M_LOG1" },
		{ "Drinniol Minor", "", "Known to the UESC Marathon's crew as \"Hulks\", these aliens stand over ten feet tall and have almost no fat on their entire bodies, which forces them to eat constantly. They are incredibly strong, and able to kill humans with one strike from their bare hands. Slow-moving, they are nevertheless deadly at close range due to their heavy crushing strikes.", "DrinniolMinor", "M_HUA1" },
		{ "Drinniol Major", "", "The Hulk is an enormous and rather slow creature, but it is incredibly strong. The science report indicated that it had no body fat, and therefore had to be fed often to keep it active. One crew member reported seeing one of these creatures pointing to itself and mumbling \"Drinniol\" right before it \"picked Johnny up by the shirt and crushed him against a pillar\".", "DrinniolMajor", "M_HUM1" },
		{ "Drone Minor", "", "A slow enemy, the drone has an equally slow distance attack, and is usually a simple opponent to defeat. Often first spotted by their glowing red optical receptors, their weapons array stays hidden behind an automated panel until the moment of attack.", "DroneMinor", "DRMIA1" },
		{ "Drone Major", "", "An advanced version of the drone. Use caution when handling this type of drone.", "DroneMajor", "DRMAA1" },
		{ "Wasp", "", "Wasps are a species of large flying insects which appear to used to distract, confuse and injure any human who offer resistance. Wasps can be heard from their distinctive sound of their wings flapping and the high-pitched squeak they make upon activating. \n\nThere are two types of Wasps, one of them is tougher than the other, so watch out when dealing with these bugs.", "MWasp", "M_WAA1", "MWasp2", "M_WAP1" },
		{ "Tick", "", "The tick is a strange, parasitic creature native to Lh'owon. \n\nOne type will attack you like normal but another type will attempt to suicide bomb you, so stay clear of these ticks.", "M2Tick", "M_HWD1" },
		{ "S'pht Compiler Minor", "", "The S'pht Compilers are the most common kind of S'pht. The Compilers attack by shooting a bolt of energy out of the machinery they have hidden under their cloaks. The bolt is powerful, but slow, so the player can move out of its way given sufficient distance to react. When the Compiler is struck by an attack, any impending attack is interrupted.", "M1SphtMinor", "M_H8G1", "SphtMinor", "COMIA1" },
		{ "S'pht Compiler Major", "", "Superior than the minor Compilers, the major Compilers are something not to be underestimated.", "M1SphtMajor", "M_H8K1", "SphtMajor", "COMAA1" },
		{ "S'pht Elite Compiler", "", "Much tougher than the Major Compilers, these guys should be killed immediately when you get the chance.", "M2EliteSpht", "M_H0T1" },
		{ "MADD", "", "By the way, I had an accident with some defense drones while you were away. You might bump into a few of them here. Don't worry, they're mostly harmless; I don't think I gave them any ammunition for those grenade launchers.", "MADD1", "MADDA1", "MADD2", "MADDN1" },
		{ "S'pht'Kr Defender Minor", "", "Though powerful, the S'pht'Kr are not much larger than the average human. Unlike the more familiar S'pht Compilers, the S'pht'Kr have a bulbous, glassy sphere and three short appendages; one curling up underneath them like a tail, and the other two coming down at their sides. Like their other S'pht cousins, the S'pht'Kr hover, as they have no appendages to walk with. Inside of the spherical \"helmet\" rests a very complex brain.", "SphtKrMinor", "KRMIA1" },
		{ "S'pht'Kr Defender Major", "", "Like most of the monsters Durandal has encountered, the S'pht'Kr has a superior variant.", "SphtKrMajor", "KRMAA1" },
		{ "Pfhor Hunter Minor", "", "Hunters are the strongest Pfhor infantry and are a rank above Troopers. Hunters are decked out in heavy armor and equipped with a shoulder-mounted plasma cannon. They also have giant shields over both forearms.", "M1HunterMinor", "M_HYE1", "HunterMinor", "HUMIA1" },
		{ "Pfhor Hunter Major", "", "The stronger version of the Hunters and a threat to neutralize at once.", "M1HunterMajor", "M_HYU1", "HunterMajor", "HUMAA1" },
		{ "Mother of All Hunters", "", "These new Hunters sported blue armor and were roughly one and a half times the size of the Major and Minor Hunters.", "MotherofAllHunters", "HUMOA1" },
		{ "Cyborg Minor", "", "The Cyborg appears to be a combination of organic and machine parts. The upper half is somewhat humanoid in appearance, with cybernetic enhancements on the arms, including a grenade launcher. The bottom half resembles a tank with triangluar formed treads and a red or green strip of light on back of the tread section. When destroyed, it is revealed that the two halves appear to have been connected by a series of pipes. In combat, the Cyborg uses its wrist-mounted grenade launcher to attack, launching slow-moving bouncing grenades, which are relatively easy to dodge. ", "CyborgMinor", "CYMIA1" },
		{ "Cyborg Major", "", "The more advanced versions of the cyborg attack with a wrist-mounted flamethrower when within close range, and the grenades of these advanced cyborgs (which bear green markings instead of red) are heat-seeking.", "CyborgMajor", "CYMAA1" },
		{ "Mother of All Cyborgs", "", "The Mother of All Cyborgs is an even bigger variant of the Cyborg with more health, seeking grenades and a flamethrower.", "MotherofAllCyborgs", "CYMIA1" },
		{ "Flame Cyborg Minor", "", "Another cyborg was created for more incendiary purposes. Use caution when engaging in combat against this cyborg.", "FlameCyborgMinor", "M_H7A1" },
		{ "Flame Cyborg Major", "", "Feel the burn, kid?", "FlameCyborgMajor", "M_H7M1" },
		{ "Enforcer Minor", "", "The Pfhor Enforcers are classified as the most intelligent in the Pfhor infantry; they are a rank above Hunters. The Minors have blue skin and are weaker, slower, and have poor vision. \n\nThere are two types: one carries a strange alien weapon that acts like a machine gun and the other carries a strange alien weapon that acts like a long-distance flamethrower.", "M1EnforcerMinor", "1EMIA1", "M2EnforcerMinor", "ENMIA1" },
		{ "Enforcer Major", "", "Enforcers are so named because of their duty on board Pfhor ships: to keep order among the Fighters and Pfhor Troopers.  For this reason, they will usually only fire on other Pfhor, unless they are fired upon by the player. They also seem to be torturers and interrogators as mentioned and shown in some terminals. \n\nThere are two types: one carries a strange alien weapon that acts like a machine gun and the other carries a strange alien weapon that acts like a long-distance flamethrower.", "M1EnforcerMajor", "1EMAA1", "M2EnforcerMajor", "ENMAA1" },
		{ "Elite Enforcer Minor", "", "An advanced form of the already superior Enforcer, the Elite Enforcer is a high priority when it comes to terminating the enemies.", "M2EliteEnforcerMinor", "M_H4A1" },
		{ "Elite Enforcer Major", "", "I'll give you one simple tip: Kill on sight.", "M2EliteEnforcerMajor", "M_H4R1" },
		{ "Mk 1 Pfhor Juggernaut", "", "The Pfhor Juggernauts or Utfoo Heavy Assault Crafts are the strongest enemies of the Marathon enemies. Juggernauts are equipped with close-range machine guns and long-range guided grenades.", "M1Juggernaut", "CMPMMA36" },
		{ "Pfhor Juggernaut Minor", "", "Juggernauts are now given a new look, new weapons, and they no longer prioritize their weapons based on the distance to their target.", "JuggernautMinor", "CMPMMA37" },
		{ "Pfhor Juggernaut Major", "", "Major Juggernauts have higher health and shoot more often. No doubt one of the deadliest enemies you will encounter.", "JuggernautMajor", "CMPMMA38" },
	}},
	{{
		{ "Grunt", "", "Goons with probes inserted into their pleasure centers; wired up so when they kill someone, they get paroxysms of ecstasy. In essence, customized serial killers. Easy to kill, and they tote shotgun shells. It's like a little Christmas each time you blow a Grunt away!", "QGrunt", "CMPMQ101" },
		{ "Rottweiler", "", "Bad, bad doggie! Play dead! -- blam! -- yipe! Good dog!", "Rottweiler", "CMPMQ102" },
		{ "Enforcer", "", "Grunt, Mark Two. Recruits who are surlier and beefier than the rest get outfitted in combat armor and built-in blasters.", "QEnforcer", "CMPMQ103" },
		{ "Centroid", "", "These armor-plated, techno-advanced scorpion creatures are huge and pissed. They carry dual nail guns for claws to get your attention, but get too close and you'll have a stinger in your face.", "QCentroid", "CMPMQ104" },
		{ "Ogre", "", "What's worse than a cannibal monster eight feet tall? One with a chainsaw. And a sack of grenades.", "QOgre", "CMPMQ105" },
		{ "Zombie", "", "Thou canst not kill that which doth not live. But you can blast it into chunky kibbles.", "QZombie", "CMPMQ106" },
		{ "Gremlin", "", "These creatures travel in packs attacking like a swarm of bees to steal your weapons and feast on the bodies of your slain enemies.", "QGremlin", "CMPMQ107" },
		{ "Knight", "", "Canned meat. Open 'er up and see if it's still fresh.", "QKnight", "CMPMQ108" },
		{ "Knight Statue", "", "They're 'poised' to take you out.", "QKStatue1", "CMPMQ109" },
		{ "Spawn", "", "A merrily bouncing blob as dangerous to kill as to ignore. Blech.", "Quake_Spawn", "CMPMQ110" },
		{ "Hell Spawn", "", "A deadly upgrade to Quake's spawn.", "Quake_HellSpawn", "CMPMQ111" },
		{ "Baby Spawn", "", "A \"cute\" upgrade to Quake's spawn.", "Quake_HellSpawn_2", "CMPMQ112" },
		{ "Fiend", "", "In essence, organic buzzsaws, rife with pummeling power!", "QFiend", "CMPMQ113" },
		{ "Phantom Swordsman", "", "A disembodied spectral sword that will slash the player at many turns.", "QPhantomSwordsman", "CMPMQ114" },
		{ "Spike Mine", "", "Floating mines of flesh and steel that wander the levels and unleash a devastating shower of spikes when in proximity of a player. If you keep your eyes on the mine they will charge at you slower, but turn your back and they will destroy you. Use the spike mines to your advantage by leading them into other creatures.", "QSpikeMine", "CMPMQ115" },
		{ "Scrag", "", "Floats like a butterfly, stings like a bee. Ugly as hell. They're not real tough, but like to bushwhack you.", "QScrag", "CMPMQ116" },
		{ "Multi Grenade Ogre", "", "Turnabout is fair-play; at least for the Ogres, that is. Occasionally you will find that these guys can toss a Multi Grenade at you, too.", "QMultiOgre", "CMPMQ117" },
		{ "Mummy", "", "Half-cousins of the zombies, the Mummy is a slow yet adamant foe. Your rockets will not be as effective whilst this undead horror saunters across the tombs and castles with only one thought on his rotting mind - \"Brains with Chocolate Sauce\"", "QMummy", "CMPMQ118" },
		{ "Death Knight", "", "This particular canned meat tends to open you up instead. ", "QHKnight", "CMPMQ119" },
		{ "Death Knight Statue", "", "They must really like statues...", "QKStatue2", "CMPMQ120" },
		{ "Guardian", "", "Stationed in the past to execute Quake's evil plan. These demi-gods' 'surprising' entrance will shock you.", "QGuardian", "CMPMQ121" },
		{ "Egyptian Guardian", "", "The Egyptian Guardian defends the exit portal of an Ancient Egyptian tomb, located in the Corridors of Time.", "QGuardian2", "CMPMQ122" },
		{ "Quake's High Priest", "", "Quake's High Priest defends the exit portal of a Mesoamerican temple, located in the Corridors of Time.", "QGuardian3", "CMPMQ123" },
		{ "Quake's Guardian", "", "Quake's Guardian defends the exit portal of a Greco-Roman arena, located in the Corridors of Time. \n\nHe may look like the original Guardian, but he is a bit tougher.", "QGuardian4", "CMPMQ124" },
		{ "Vore", "", "A spideresque hybrid horror. Keep your eye on the energy pod he hurls.", "Vore", "CMPMQ125" },
		{ "Wrath", "", "These are the Overlord's evil minions. Smaller, but just as deadly. ", "QWrath", "CMPMQ126" },
		{ "Shambler", "", "Even other monsters fear him, so expect a clobbering. He shrugs off explosions. Good luck.", "Shambler", "CMPMQ127" },
		{ "Shub-Niggurath", "", "Known as the Hell-Mother, All-Mother, and the Witch-Goddess, Shub-Niggurath is the mother of all monsters that roam the dimensions of Quake.", "Shub-Niggurath", "CMPMQ128" },
		{ "Overlord", "", "This robed skeletal figure ominously floats with the environment. His attack? A ball of energy which tracks the player and detonates on impact.", "QOverlord", "CMPMQ129" },
		{ "Dragon", "", "Everyone's been screaming for this enemy. He'll have you screaming too!", "Pterodactylus", "CMPMQ130" },
		{ "Armagon", "", "Armagon is a half-biological, half-machine creature whom you probably face in the last level. Better get yourself a lot of ammo.", "QArmagon", "CMPMQ131" },
	}},
	{{
		{ "Low Guard", "COMP_THREAT_2", "The grunt of the Oscuridos forces: they shoot, and when it's time to \"ask questions later,\" they shoot some more. \n\nSometimes you will find them already dead...they could be faking it!", "LowGuard", "LWGSA1" },
		{ "Lightning Guard", "COMP_THREAT_3", "Trained for speedy maneuvers, watch out for lighting guards - they'll steal your stuff! Armed with a pistol. Once killed, you get your stuff back. \n\nSometimes they will appear as Heavy Guards, where they have a dang bazooka! \n\nLighting Guards can plead for their lives if they're almost dead. However, it's a ruse; if you let them live, they'll get back up and try and shoot you in the back.", "LightningGuard", "LIGWA1" },
		{ "High Guard", "COMP_THREAT_2", "Armed with the old MP40 machine gun, these fellows enjoy perforating the enemy.", "HighGuard", "HIGHA1" },
		{ "Strike Team", "COMP_THREAT_2", "Tough and resourceful, these acrobatic guards won't stay still - they continually tumble out of the way of your attacks!", "StrikeTeam", "ANGSA1" },
		{ "Triad Enforcer", "COMP_THREAT_4", "Big, bad, and wearing black, the Triad Enforcers wail on you with a big chain gun, then have the nerve to throw grenades at you! Jeez!", "TriadEnforcer", "TRIWA1" },
		{ "Over Patrol", "COMP_THREAT_2", "Be careful around this enemy: they'll trap you in a net, then shoot you dead.", "OverPatrol", "OVERA1" },
		{ "Explosive Disk Jr.", "COMP_THREAT_2", "Floats around and shoots bullets at you. Come any closer and it will self-destruct at you.", "ExplosiveDiskJr", "RNMEN0" },
		{ "Copter Patrol", "COMP_THREAT_3", "Oh swell. A flying robot that shoots bullets at you. How could this get worse?", "CopterPatrol", "R_C1A1" },
		{ "Heavy Copter Patrol", "COMP_THREAT_3", "Oh, now it shoots rockets instead of bullets. Really swell.", "CopterPatrol2", "R_C1A1" },
		{ "Patrol Robot", "COMP_THREAT_3", "Forever patrolling the halls of the monastery; one sound and you'll have some high-speed visitors pummeling your chest!", "RobotGuard", "ROBTA1" },
		{ "Ballistikraft", "COMP_THREAT_4", "Indestructible, double-attacking iron cylinders of death. Slow, but extremely deadly.", "Ballistikraft", "BCRAA1" },
		{ "Death Monk", "COMP_THREAT_3", "These undead folks walk toward life sources and try to drain them of their energy. Tough to kill. \n\nSometimes you will come across one that is a bit more tougher than the other Death Monks, so watch out.", "MonkDrain", "MONKA1" },
		{ "Deathfire Monk", "COMP_THREAT_3", "These monks like their prey cooked before they feed, so they will blast you with fireballs.", "MonkDeathFire", "ALLSA1" },
		{ "General John Darian", "COMP_THREAT_4", "\"General\" Darian. The pyrotechnics wizard himself, now sporting the title of General, has plenty of tricks in store for you, including racks of stabbing spears, and a big bad bazooka!", "GeneralDarian", "DARIA1" },
		{ "Sebastian Doyle Krist", "COMP_THREAT_5", "Sebastian \"Doyle\" Krist. Watch out for the former head of Triad Pictures - he's insane and heavily armed. He flies toward you in his battle throne, firing missiles and ramming you. Try and attack him! You'll see what happens!", "SebastianKrist", "KRISA1" },
		{ "NME", "COMP_THREAT_6", "NME. Nasty Metallic Enforcer. A huge robot guard constructed as the last guard of El Oscuro's lair. Oh so deadly.", "NME", "RNMEA1" },
		{ "El Oscuro", "COMP_THREAT_5", "The dark ancient force worshiped by the Oscuridos. With many magic attacks and awful surprises, you'll be dead twice before you notice your body is vaporized.", "TomHall", "TOMSA1" },
		{ "Snake Oscuro", "COMP_THREAT_5", "You know for some guy dressed in a robe and is apparently worshipped by some deluded people; he doesn't seem that tough- \n\nWait, what the hell is he transforming into?", "SnakeTom", "TOM6A1" },
	}},
	{{
		{ "Bio-Technicians", "", "Many of these guys are loyal to Dr. Goldfire, which means they'll waste you if they get the chance. But some can actually help you survive. Assuming you can find one at this point instead of a hostile one.", "Informant", "BSE4A1" },
		{ "Sector Patrol", "", "The Sector Patrols aren't out to help anybody - especially you. This deadly pack packs the lethal slow-Fire Protector. So... knock 'em out quickly.", "SectorPatrol", "BS23A1" },
		{ "Mutated Guard", "", "It has blue skin, a bloodstained uniform, pointed ears, and glowing red eyes. It appears vaguely human and is perhaps a result of the scientists' experiments to create a new mutant. They are sometimes encountered in an inactive state on gurneys but you'll probably just see them standing up ready to kill something that comes in their sight.", "MutatedGuard", "BS15A0" },
		{ "Sector Guard", "", "The Sector Guards aren't out to help anybody - especially you. This deadly pack packs the lethal Slow-Fire Protector.", "SectorGuard", "BSE1A1" },
		{ "S.T.A.R. Sentinel", "", "\"Professional\" best describes these security guards. They are armed with auto-repeating rifles and they know how to use them. Oh yeah - They won't go down without a fight! Kill one and take his rifle. That's what we're here for isn't it?", "BlakeSentinel", "BSE2A1" },
		{ "S.T.A.R. Trooper", "", "The toughest of the tough. These guys are determined! With security vests to protect them, you might knock 'em down, but... they won't stay down!", "StarTrooper", "BSE3A1" },
		{ "Tech Warrior", "", "\"Professional\" best describes these security guards. They are armed with auto-repeating rifles and they know how to use them. Oh yeah - They won't go down without a fight! Kill one and take his rifle. That's what we're here for isn't it?", "TechWarrior", "BS24A1" },
		{ "Alien Protector", "", "Or maybe these are the toughest of the tough. These guys are determined! With security vests to protect them, you might knock 'em down, but... they won't stay down!", "AlienProtector", "BS25A1" },
		{ "Experimental Genetic Alien", "", "Experimental Genetic Aliens, also called Canister Aliens, are common alien enemies found throughout the levels. They scratch when up close and spit acid when at a distance. These guys are the Small Canister Alien, resembling a brown, imp-like creature. They are carnivorous and make growling noises. Their blood is red, not unlike a mammal.", "MutantBrown", "BS14A0" },
		{ "Experimental Genetic Alien V2", "", "The Experimental Genetic Alien Type 2 also called Large Canister Alien, is a tall green humanoid creature. It spits fiery projectiles and scratches when up close. Their blood is green.", "MutantGreen", "BS13A0" },
		{ "Perimeter Scan Drone", "", "Perimeter Scanning Drones, also called SeekerBombs or Floating Bombs, are spherical mechanical drones that either stay still, or track the player. Roaming drones explode dangerously either when shot or when near the player, while stationary drones will explode only when shot. The player should always try to keep their distance from active PerScan drones and destroy them from afar.", "PerScanDrone", "BSE6A1" },
		{ "Plasma Sphere", "", "Plasma Spheres, also called Electro-Spheres, are small enemies that fly through the air, often wildly zigzagging and ricocheting off of walls. They are fast and can be difficult to aim at. Plasma Spheres cause damage only when they come into contact with the player, but can still be extremely dangerous especially when they catch the player by surprise.", "PlasmaSphere", "BSE9A0" },
		{ "Experimental Mutant Human [Brown]", "", "Experimental Mutant Humans are large, intimidating mutated humans. They come in two forms. This form spits acid from a distance and punches when close. It resembles a giant Kilby Qello the coyote/werewolf.", "ExpHumanBrown", "BS12A0" },
		{ "Experimental Mutant Human [Blue]", "", "This form of an Experimental Mutant Human is found only in Planet Strike. It has a different appearance and is usually cloaked as a seemingly harmless statue. It then morphs to attack the player. It throws energy and also punches when close.", "ExpHumanBlue", "BS30A0" },
		{ "High Security Genetic Guard", "", "High-Security Genetic Guards are large, heavily-built humanoid mutants. They carry Slow Fire Protectors. Despite their size, they are not extremely tough. They will punch Blake if he is too close to them. They will drop a Slow-Fire Protector if the player does not currently have one.", "GeneticGuard", "BS10A0" },
		{ "Pod Alien", "", "Pod Aliens are large, green, reptilian mutants. They spit acid from a distance and attack with their claws when up close. They are often found in pods, from which a pod alien may hatch if disturbed. Some pods are inactive and will not hatch into aliens.", "PodAlien", "BSE7E0" },
		{ "Cyborg Warrior", "", "The Cyborg Warrior is one of the deadliest threats that Blake will encounter. It carries a gun and has the head of a mutant but a mechanical body.", "CyborgWarrior", "BS19A0" },
		{ "Spider Mutant", "", "The Spider Mutant is one of the deadliest threats that Blake will encounter, appearing at the end of his first mission. It has six arms which fire dangerous liquid, often blinding the view. The liquid can be avoided by strafing. The Spider Mutant can be quickly defeated by continuously strafing and firing.", "SpiderMutant", "BS17A0" },
		{ "Reptilian Warrior", "", "The Reptilian Warrior is one of Blake's final challenges in his mission. It has a lizard-like appearance and carries a gun. Fighting the Reptilian Warrior can be difficult. The player should try to keep moving, even in cramped spaces.", "ReptilianWarrior", "BS20A0" },
		{ "Experimental Mech Sentinel", "", "Experimental Mech-Sentinels are robotic guards with cannons as arms. They are stronger and more dangerous than human guards. When defeated, they explode.", "MechSentinel", "BS11A0" },
		{ "Acid Dragon", "", "The Acid Dragon is one of the deadliest threats that Blake will encounter. It is a large slug-like mutant that shoots acid, which can be easily dodged by strafing.", "AcidDragon", "BS21A0" },
		{ "Bio-Mechanical Guardian", "", "The Bio-Mech Guardian is one of the deadliest threats that Blake will encounter. It appears to be mainly a machine, although a brain is seen through transparent glass atop its body. Both its arms are cannons.", "BioMech", "BS22A0" },
		{ "Breather Beast", "", "The Breather Beast is another threat that Blake once encountered in his missions. It is a large brownish mutant armed with a gun.", "BreatherBeast", "BS18A0" },
		{ "Water Alien", "", "The Fluid Alien (also called Liquid Alien), is a peculiar enemy that resembles a puddle moving around on the floor. The alien attacks the player by growing into a tentacle and then throwing watery projectiles at the player. The alien is only vulnerable when it is in its tentacle form.", "WaterAlien", "BS16G0" },
		{ "Plasma Alien", "", "High Energy Plasma Aliens, also called Electro-Aliens, are alien enemies made of irregular forms of plasma. They are not very tough, but the plasma bursts they fire cause a lot of damage.", "PlasmaAlien", "BSE8I0" },
		{ "Armored Stalker", "", "The Armored Stalker is a robot that resembles a cockpit on two mechanical legs, with cannons under the cockpit.", "ArmoredStalker", "BS28A0" },
		{ "Giant Stalker", "", "The Giant Stalker is a boss that Blake once crossed paths with during his adventure. It resembles an orange version of a High Security Genetic Guard.", "GiantStalker", "BS26A0" },
		{ "Crawler Beast", "", "The Crawler Beast is a boss that Blake once crossed paths with during his adventure. It is a powerfully-built mutant that crawls along the floor and spits acid.", "CrawlerBeast", "BS29A0" },
		{ "Spector Demon", "", "The Spector Demon is a boss that Blake once crossed paths with during his adventure. It is a ghostly demon-like creature that throws clouds of energy. This alien's appearance hints that it may be a higher mutation of the High Energy Plasma Alien.", "SpectorDemon", "BS27A0" },
		{ "Dr. Pyrus Goldfire", "", "Doctor Pyrus Goldfire is Blake Stone's greatest enemy. He has found a way to replicate pure gold, which he is using to fund his plan to take over with his deadly, mutant creations. He appears to carry a Slow Fire Protector. \n\nAfter Goldfire is killed, he transforms into an extremely powerful mutant. Morphed Dr. Goldfire shoots massive energy blasts that can kill the player extremely quickly. It remains unknown if Dr. Goldfire mutated himself or if he had alien origins.", "GoldFire", "BSE5A1", "GoldFireBoss", "BS31A0" },
	}},
	{{
		{ "Cultist", "", "Tchernobog's human soldiers are accurate and deadly. Wielding shotguns these robed menaces give you a good fight. They may also lob dynamite at you from time to time, so listen for the telltale hiss and be ready to dive for cover.", "Cultist", "YCUFA1" },
		{ "Acolyte", "", "These cultists-in-training lob dynamite at you. Keep your ears tuned for the deadly hiss of an incoming bundle. Careful, sometimes you will encounter an acolyte who is more aggressive when it comes to tossing bundles of TNT.", "BloodAcolyte", "YCU2A1" },
		{ "Fanatic", "", "These Tommy Gun packin' keepers of the dark faith want to spill your precious life blood. Keep your ears tuned for the deadly sounds of dynamite as they sometimes offer explosives instead.", "Fanatic", "YCU8A1" },
		{ "Axe Zombie", "", "These hardy undead menaces move more swiftly than you might expect. Take them out before they get close or you'll taste their rusty axe blades. Also, just because they're down doesn't mean they're dead-make sure they're down for the count before you move on. \n\nSometimes you will not see them at first because they could be buried. But once you are in sight, they will dig themselves out and hunt you down!", "AxeZombie", "BZOMI1" },
		{ "Hell Hound", "", "These fire-breathing mastiffs are swift and deadly. If they get close to you, their powerful jaws will make quick work of you, so keep your distance... if you can.", "HellHound", "HOUNA1" },
		{ "Hell Hand", "", "The corpses that the minions of Tchernobog use to make zombies aren't always in the best of shape. Sometimes, only a limb is salvageable. Usually, the Cabal's surgeons can fashion various bits and pieces into a serviceable undead soldier, but certain leftover parts can be effective all on their own. If one of these horrors gets hold of you, you've got to push it off before you can kill it.", "ChokingHand", "7H9NA1" },
		{ "Gill Beast", "", "If you have to face a gill beast in the water, you're in big trouble. While slow and ponderous above water, in their element they are vicious adversaries.", "GillBeast", "GILWA1" },
		{ "Rat", "", "While not the deadliest of creatures, these little fiends can be quite hazardous if they mob you, which is their preferred mode of attack.", "BloodRat", "BRATA1" },
		{ "Bat", "", "Bats have a nasty tendency of getting in your face when you're trying to get a bead on deadlier creatures. Take care of them quickly if you know what's good for you.", "BloodBat", "BBATA1" },
		{ "Gargoyle", "", "Your first encounter with a gargoyle will teach you to keep an eye turned skyward. They are as tough to kill as they are vicious. They hurl sharp bones at you from afar or swoop in to rake at you with their talons.", "BloodGargoyle", "BGARA1" },
		{ "Bloated Butcher", "", "Slower and more deliberate than their axe-wielding comrades, are much tougher to kill. You'll have to dish out a lot of abuse before they go down. Beware of the foul goo they vomit at you, for it is both corrosive and unpleasant smelling.", "Butcher", "BBUTD1" },
		{ "Zealot", "", "These blue-robed Tesla Cannon wielding cultists have been through special 'training' to make them very mean. Their armor protects them from electrical damage.", "Zealot", "YCU0A1" },
		{ "Priest", "", "These red-robed Chosen-in-training have started their transformation into what you once were.... The Chosen. Killing them is only the first step, as they transform into the powerful Beast, whose stomp can open up a world of pain.", "BloodPriest", "YCU7A1" },
		{ "Beast", "", "A creature resembling a wolf, twice the size of man, with stone-tough skin and blood red eyes. They attack by slashing and stomping, which creates a damaging quake and also freezes the player. This stomp can damage the player through armour and can even affect him if he's not on the ground.", "BloodBeast", "BESCA1" },
		{ "Phantasm", "", "These restless phantoms harvest the souls of their victims with vicious scythes. Because they exist more in the land of the dead than the world of the living, they are only vulnerable when attacking. Watch for them to solidify before striking or your ammo and effort will be wasted.", "BloodPhantasm", "PHANA1" },
		{ "Cheogh", "", "Cheogh rules over all gargoyles, but he has long yearned to hold higher rank in Tchernobog's army. His jealousy toward the Chosen was never kept secret. Now that you have been cast from Tchernobog's graces, envy has boiled into sheer abiding hatred. He will be anxious to meet you again and express his feelings for you. \n\nStone gargoyles are nigh invulnerable. Bullets bounce off their brittle hides and flames find little purchase. You'll have to be resourceful to survive an encounter with one of these monstrosities. ", "Cheogh", "CMPMBL16" },
		{ "Shial", "", "The spider demon Shial makes her lair deep within the earth in the frozen North. Surrounded by her arachnid spawn, she skulks through darkness, feeding on those hapless souls who stumble into her cavernous labyrinth or are brought there by her loyal children. Those who fall victim to her learn of true agony as she digests them alive.", "MotherSpider", "SPDWA1" },
		{ "Spider", "", "Don't be fooled - spiders are dangerous enemies. The little red ones pack a poison that will blur your vision. The larger green ones can blind you completely for a short time. The poison is cumulative, so the more they bite, the worse the side effects.", "BloodSpider1", "BL74A1", "BloodSpider2", "BL76A1" },
		{ "Cerberus", "", "Named for the mythical guardian of the gates of Hell, this two-headed firebreathing demon abides in a dark, sulfurous den, hidden to the world of mortals. Ferocious and nigh invulnerable, Cerberus is the deadliest adversary you will face aside from Tchernobog himself. Remember that you must destroy both heads in order to defeat him.", "Cerberus", "CERBA1" },
		{ "Beast [Boss]", "", "A more powerful version of the Beast; there is a reason why they were considered to be the next Chosen... before Caleb showed them their true place.", "BloodBeast_Boss", "BESWA1" },
		{ "Tchernobog", "", "His name is spoken only in whispers, for it is said that his interest is easily roused. Those who peer fully into His smouldering gaze are condemned to madness and death. You must find Him before his powers become complete if you are to stand a chance. Even then, defeating Him will require all your strength and ingenuity.", "Tchernobog", "CMPMBL21" },
	}},
	{{
		{ "Acolyte", "COMP_THREAT_2", "The Order uses Acolytes as guards and soldiers. They appear to be human, but no one is quite sure where they come from. They are armed with assault guns, so don't make them mad unless you are ready for a fight. At least they're not too bright. \n\nAcolytes come in eight different ranks, identified by their armor colors. \n\nFrom weakest to strongest:\n\nTan, Red, Rust, Gray, Dark Green, Gold, Light Green, Blue", "StrifeAcolyte", "AGRDA1", "StrifeAcolyte2", "AGR2A1", "StrifeAcolyte3", "AGR3A1", "StrifeAcolyte4", "AGR4A1", "StrifeAcolyte5", "AGR5A1", "StrifeAcolyte6", "AGR6A1", "StrifeAcolyte7", "AGR7A1", "StrifeAcolyte8", "AGR8A1" },
		{ "Stalker", "COMP_THREAT_2", "They're the best reason yet for arachnophobia. Stalkers like to drop down on unsuspecting visitors and chew them up. Use the assault gun if they get too close. \n\nThey may either spawn on the ground or on the ceiling. Always be cautious.", "StrifeStalker", "STLKK1" },
		{ "Sentinel", "COMP_THREAT_2", "They fly, they shoot, they seem to be everywhere. Keep your eyes (and ears) open for these guys, and drop them before they drop you.", "StrifeSentinel", "SEWRA1" },
		{ "Recycler", "COMP_THREAT_2", "Another type of Sentinel, this one can take more damage and will gun you down at sight with a machine gun, so take it down ASAP!", "Recycler", "RECIA0" },
		{ "Templar", "COMP_THREAT_3", "A nasty demonstration of The Order's mastery of technology. Templars are armed with maulers so be wary.", "StrifeTemplar", "PGRDA1" },
		{ "Reaver", "COMP_THREAT_3", "These automated troublemakers are fast... VERY fast. If you can hit a moving target, you might do okay. Otherwise, saturation bombing is the only way to take them out.", "StrifeReaver", "ROB1A1" },
		{ "Crusader", "COMP_THREAT_4", "Toting a long range missile launcher AND a flamethrower, Crusaders are trouble from the moment they show up. Dodge the missiles and you might have a chance.", "StrifeCrusader", "ROB2Q1" },
		{ "Inquisitor", "COMP_THREAT_5", "Rumor has it that The Order's Loremaster is developing a deadly new mechnical menace. It's bigger, more dangerous, flies, shoots lasers out of its eyes - well, since no one has seen one, who knows? If you DO see one, panic.", "StrifeInquisitor", "CMPMSQ08" },
		{ "Macil", "COMP_THREAT_4", "Leader of The Front. He'll send you on missions and he'll also give you rewards... in this unfortunate case, your reward is a trip to Hell. ", "NewMacil", "LEADA1" },
		{ "Programmer", "COMP_THREAT_4", "A high-ranking member of the Order who is ultimately in charge of all operations in Tarnhill, he is the programmer of the AI that controls most if not all the acolytes.", "Programmer3", "CMPMSQ10" },
		{ "Bishop", "COMP_THREAT_4", "He has bipedal legs similar to the crusaders, and a human upper body on what looks like a rotating platform. He also carries a massive missile launcher on his right arm that is able to home on its targets.", "NewStrifeBishop", "CMPMSQ11" },
		{ "Lore Master", "COMP_THREAT_4", "He is considered to be a religious leader, and the most powerful of all the Order's generals.", "StrifeLoremaster", "PRSTA1" },
		{ "Alien Spectre", "COMP_THREAT_4", "They are mysterious creatures which appear as a cloud with one eye. They possess the bodies of various characters and bend their will to evil desires, making the possessed people into dangerous maniacs, only bent on searching for the Sigil in order to release their master, the Entity. Each Spectre takes a different amount of damage, depending on whose body they possess from.", "NewAlienSpectre1", "CMPMSQ13" },
		{ "Entity", "COMP_THREAT_5", "The Entity, also known as \"The One God\", \"The True God\", and sometimes dubbed \"The Evil\", is a mysterious creature from outer space. It resembles the spectres, but it is larger and green. \n\nThere is one main entity which, when slain, splits into three smaller sub entities.", "StrifeEntity", "CMPMSQ14", "StrifeSubEntity", "CMPMSQ15" },
	}},
/*	{
		{ "Zombieman", "COMP_THREAT_2", "Once a Marine, always a Marine. Except in this case. These guys may look like your old buddies, but now they're nothing more than pistol-toing, bi-pedal maggots. Waste em!", "ZombieMan64", "64POA1" },
		{ "Sergeant", "COMP_THREAT_2", "Ditto. Except these guys are meaner, and tougher. These walking shotguns will provide you with a few extra holes if you're not careful.", "ShotgunGuy64", "64SPA1" },
		{ "Chaingunner", "COMP_THREAT_3", "Strange, you could have sworn they did not have these chaingunners before...", "ChaingunGuy64", "64CPA1" },
		{ "Imp", "COMP_THREAT_2", "You thought an imp was a cute little dude in a red suit with a pitchfork. Think again. This Imp heaves balls of fire down your throat and takes several bullets to die. It's time to find a better weapon than a pistol, if you're going to face more than one of these mutants.", "DoomImp64", "64TRA1" },
		{ "Nightmare Imp", "COMP_THREAT_3", "An Imp is bad enough, but picture a faster, more aggressive one. Now the bad news... he's harder to see, too.", "NightmareImp64", "64I2A1" },
		{ "Demon", "COMP_THREAT_3", "Sorta liked shaved gorillas, except with horns, big heads and lots of teeth. They don't kill easily. Get to close and they'll rip your sorry head off.", "Demon64", "64SRB1" },
		{ "Spectre", "COMP_THREAT_3", "Great! Just what you needed. An (nearly) invisible monster. These beasts will eat your face off. Did you expect a walk in the park?", "Spectre64", "64S2B1" },
		{ "Lost Soul", "COMP_THREAT_2", "It's Tough. It Flies. It's On Fire.", "LostSoul64", "64LSA1" },
		{ "Cacodemon", "COMP_THREAT_3", "They float in the air, belch ball-lightning, and have one horrendously big mouth. If you get too close to one of these monstrosities, you're toast.", "Cacodemon64", "64HDA1" },
		{ "Hell Knight", "COMP_THREAT_4", "Tough as a dump truck and nearly as big. These goliaths are the worst thing on two legs since the Tyrannosaurus Rex.", "HellKnight64", "64HKA1" },
		{ "Baron of Hell", "COMP_THREAT_4", "You thought the Hell Knights were bad? These guys make them look like choir boys. You better have a good supply of ammo and armor to take on this demon.", "BaronOfHell64", "64BSA1" },
		{ "Arachnotron", "COMP_THREAT_4", "Think of the pain a Black Widow causes when you disturb her nest. Then think what happens when you stir up one the size of an M60 tank.", "Arachnotron64", "64PIA1" },
		{ "Pain Elemental", "COMP_THREAT_4", "What a name. And what a pain in the butt. Killing him is almost as bad as letting him live.", "PainElemental64", "64PNA1" },
		{ "Revenant", "COMP_THREAT_4", "Oh great, the skeleton is back. First the chaingunner and now him. It can't get worse than this, can it?", "Revenant64", "SKE2A1" },
		{ "Mancubus", "COMP_THREAT_4", "The only good thing about this fat tub of demon is that he's a nice wide target. Good thing, because it takes a lot of hits to puncture him. He pumps out fire balls like nobody's business.", "Fatso64", "64FTA1" },
		{ "Arch-Vile", "COMP_THREAT_4", "Oh dear God, HE is back!?", "Archvile64", "VIL2A1" },
		{ "Spider Mastermind", "COMP_THREAT_5", "Looks like the Chaingunner, Revenant, and Arch-Vile aren't the only returning monsters. It's been a while, Spider Mastermind! I certainly did not miss that super-chaingun of yours. Crap.", "SpiderMastermind64", "CMPMD217" },
		{ "Cyberdemon", "COMP_THREAT_5", "Half machine, half raging horned devil. This walking nightmare has a rocket launcher for an arm and will definitely reach out and touch you. Make sure you're fully loaded before you take on this guy.", "Cyberdemon64", "CMPMD218" },
		{ "Mother Demon", "COMP_THREAT_6", "The military episodes code named \"DOOM\" were not actually completed: A single entity with vast rejuvenation powers, masked by the extreme radiation. In its crippled state, it systematically altered decaying dead carnage back into corrupted living tissue. \n\nThe mutations are devastating. The Demons have returned even stronger and more vicious than before.", "MotherDemon64", "CMPMD219" },
		{ "Nazi", "COMP_THREAT_2", "Members of the Schutzstaffel, they wear blue uniforms, bulletproof vests, and sadistic grins. They picked the wrong side of Hell to make their appearance!", "WolfensteinSSJagaur", "64SSA1" },
	},*/
	{{
		{ "LSD (Land Security Droid)", "", "These fellows are the standard guards and are in generous supply. They are the basic grunts of the Citadel security force.", "LSD", "LSD1A1" },
		{ "HSD (Hover Security Droid)", "", "This nasty will attack you relentlessly from the air. Explosives and rapid fire weapons are your only chances against these enemies.", "HSD", "HSD1A1" },
		{ "Archer", "", "One of the common enemies you will encounter, they will attack by shooting a burst fire of arrows.", "EradArcher", "_SKEA1" },
		{ "Skeeving", "", "Another type of common enemies you will encounter, they will fire a burst fire of deadly darts.", "Skeeving", "SKEVA1" },
		{ "Boon Bitter", "", "Boy these creatures must really smell bad. Do not let it take a bite out of you, which is easier said than done thanks to their fast speed.", "BoonBitter", "BOONA1" },
		{ "Patrol Eye", "", "Just one of these can cause a lot of trouble. If it sees you, it will set off an alarm alerting everyone of your presence and closing off areas of the level. Try to waste it before it sees you. But then again, it may just kill you instead of alerting other enemies. Comes in different colors too.", "PatrolEyeOrange", "PAEYA1", "PatrolEyeBlue", "PAE2A1", "PatrolEyeRed", "PAE3A1", "PatrolEyeGreen", "PAE4A1", "PatrolEyeHazel", "PAE5A1" },
		{ "Mini Bio", "", "These strange organisms will occasionally float around but will try to explode itself on contact. Kill these from a safe distance so that the explosion does not hurt you since they do not die peacefully.", "MiniBio", "MIBIA0" },
		{ "Mind Breaker", "", "Another type of strange organisms you will encounter. This will float around and pelt you with energy orbs.", "EradMindBreaker", "ZBROA0" },
		{ "Gun Turret", "", "These fixed emplacements are lethal at any distance. They can fire at any range and track via heat so they can always see you.", "GunTurret1", "GTURA1", "GunTurret2", "GTURD1" },
		{ "Mini Mech", "", "This floating robot will try to explode itself by flying into you, so take it out from a distance to avoid its explosive death.", "MiniMech", "_EMIA0" },
		{ "Mini Repair Droid", "", "For a repair droid, it doesn't seem that interested in repairing stuff. Just killing you by either shooting rockets or using its tools for close combat.", "MiniRepairDroid", "RDROA1" },
		{ "Repair Droid", "", "An advanced version of the Mini Repair Droid that is tougher and shoots more rockets than before. Still can't seem to repair though.", "RepairDroid", "RDROK0" },
		{ "Enhanced LSD", "", "The basic grunts of the Citadel security force just got an upgrade, making them tougher and able to deal more damage.", "LSD2", "LSD3A1" },
		{ "Enhanced HSD", "", "The original HSD was bad enough, but this enhanced model is not only tougher and stronger but is much faster.", "HSD2", "HSD2A1" },
		{ "Roto Droid", "", "No doubt one of the freakiest things you will encounter so far. Corrosive Blood, Excess Matter, Horror. The Roto Droid is definitely something to kill immediately.", "RotoDroid", "RO_DE1" },
		{ "RSAOI", "", "This big tank is the guardian of the Ion Web Node. When you are in its sight, it will fire missiles at you. If you are lucky, he will fire four missiles at once.", "RSA", "CMPMER21" },
		{ "Skaal", "", "The biolabs are protected by an ugly guardian known as Skaal. Avoid the green slime balls; they are poisonous, so you take damage overtime for a while if you get hit by one of them.", "Skaal", "CMPMER22" },
		{ "G'or", "", "Guarding the Core, G'or is a big ugly flying something, and shoots these nasty smoking cinder projectiles. They do a lot of damage but are easy enough to dodge, however you absolutely MUST use strafing if you're a player who normally doesn't. If for some reason you get close to G'or, prepare to have a powerful tail attack in your face.", "GorBoss", "CMPMER23" },
	}},
	{{
		{ "Ailoprobe", "", "This is the aliens' standard sentry. Its main purpose is to inform others of an intruder's presence. \n\nSometimes it will be harder to deal knockback on the Ailoprobes.", "Ailoprobe", "AILOB1" },
		{ "Animated Probe", "", "This is the most efficient guard roaming the levels. It responds quickly to any noise and will fire relentlessly. Some are put on ambush mode and will attack in force from every direction. \n\nSometimes it will be harder to deal knockback on the Animated Probes.", "AnimatedProbe", "6PROA1" },
		{ "Sector Probe", "", "The aliens feel that two flying eyeballs is not enough for probe patrol, so here is another one. Like with the Ailoprobe and Animated Probe, kill it on sight.", "C7SectorProbe", "7PRPA1" },
		{ "Rodex", "", "These little creatures are pure havoc. They stay in packs and attack with speed. They carry small weapons so they should not pose too much of a problem.", "Rodex", "7PROA1" },
		{ "Bandor", "", "This alien is a standard centurion guard. They have the ability to morph into other objects and surprise their prey at close range.", "Bandor", "C700A1" },
		{ "Eitak", "", "These creatures are as deadly as they are ugly. They usually work in packs so watch your back.", "Eitak", "C713A1" },
		{ "Semaj", "", "This alien can be deadly due to its ability to blend into the floor. They enjoy attacking your legs, while other aliens are keeping you busy.", "Semaj", "C703E0" },
		{ "Eniram", "", "This creature is only visible when it is firing its weapon. They generally use their cloaking ability to surprise their prey. Only the infrared vision or the proximity map will reveal their presence.", "Eniram", "C701A0" },
		{ "Eniram Boss", "", "Apparently, the aliens think the Eniram is not a big enough threat, so here is an improved version that must be taken down immediately.", "EniramBoss", "C702A0" },
		{ "Otrebor", "", "This is a lower level technician, busy changing the human surroundings into its own. They have more fire power than most aliens.", "Otrebor", "9PROA1" },
		{ "Mechanical Warrior", "", "This formidable opponent wreaks havoc. He can be heard and felt from far away. Once killed, he may leave his weapon behind.", "C7MWarrior", "0PROA0" },
		{ "Tymok", "", "This is a 100% pure warrior. He is one of the toughest around. Fire and move to avoid his deadly blaster. He will follow you wherever you go. This is where your mines will come in handy.", "Tymok", "C707A0" },
		{ "Nerraw", "", "These aliens may be small and ugly like a fuzzy spider but they still pack a punch so waste them when you get the chance.", "Nerraw", "C704A0" },
		{ "Tenaj", "", "This alien is the main technician that is setting up the atmosphere conversion. He is intelligent and moves extremely fast.", "Tenaj", "C712A1" },
		{ "Ttocs", "", "This alien is one step above the others. It has more experience and will pose a greater threat if you are armed with the M-24 only.", "Ttocs", "8PROA1" },
		{ "Solrac", "", "He resembles a demon in his actions and appearance. He fires blasts of energy from his eyes and it usually takes an alien weapon to kill him.", "Solrac", "5PROI0" },
		{ "Tebazile", "", "This leader has the ability to change into another alien once he seems to be killed. Be very careful and don't assume anything.", "Tebazile", "C710A0" },
		{ "Alien Teleport", "", "Not much intel was gathered for this... thing. But judging from its name that we managed to acquire, prepare to fight it along with the several aliens that it will summon to take you down!", "C7AlienTeleport", "C758A0" },
	}},
	{{
		{ "Unit Bluesuit", "", "Your basic ATFOR (Anti-Terrorism Force) trooper is a lot like you: he's wearing light armor, packing a laser pistol, and he'd really rather go home. The difference is, his home is a quarter-million miles away, and the only way he's going to get back there is by ending this revolution-which means, his job is to kill you. You will generally prefer the outcome if you kill him, first. The distinguishing characteristic here is that all ATFOR uniforms are a bright blue. \n\nGot that? BLUE UNIFORM = BAD GUY.", "UNBluesuit", "RM81A1" },
		{ "Unit Shock Trooper", "", "ATFOR battlesuits also come in a variety of flavors and their weaponry is comparable to ours, which is not surprising when you consider that most of ours was stolen from them.", "UnShockTrooper", "RM83A1" },
		//{ "LDF Guard", "", "", "RMRLDFRegular", "RM77A1" },
		//{ "LDF Militia", "", "", "RMRLDFMilita", "RM78A1" },
		{ "Baby Estron", "", "Finally, we come to the real mystery, and I can tell you this much: yes, the rumors are true. Intelligent aliens have been found living on Farside. Unfortunately, that's all I can tell you. There may be more than one species; they may be friendly or hostile; at this point, we simply don't know. The only four LDF members who have been in close contact with the aliens have disappeared without a trace, and we have literally no idea what has happened to them. But if you run into aliens, remember this: we really don't need any more enemies.", "BabyEstronBeast", "RM87A1" },
		{ "Big Estron Beast", "", "Well, these aliens are hostile. And it looks like we got more enemies now. Kill them all. Especially this guy since he's worse than his baby kid.", "BigEstronBeast", "RM74A1" },
		{ "Laser Drone", "", "Because of the expense involved in transporting and supplying troops on the Lunar surface, the UN has placed heavy reliance on robotic weapons system. Probes are self-propelled and used either as area patrol devices or in support of human troops. \n\nThis probe is armed with lasers and is marked with blue colors.", "RMRLaserDrone", "RM70A1" },
		{ "Grenade Drone", "", "Neither device is particularly intelligent, but the probes are harder to hit than they look, and if one sees you it will likely call for backup. If they catch you out in the open they can do considerable damage. \n\nThis probe is armed with grenade launchers and is marked with red colors.", "RMRGrenadeDrone", "RM72A1" },
		{ "Spinner", "", "Seems like the drones weren't enough. This one rapidly shoots sparks at you until you are dead so make sure it is dead instead.", "RMRSpinner", "RM85A0" },
		{ "Unit Jump Trooper", "", "Some ATFOR units are also equipped with jetpacks and similar devices. So remember, if you're under fire and you can't figure out where it's coming from, try looking up.", "UNJTrooper", "RM82A1" },
		{ "Shoggran", "", "Well looks like those Estron aliens aren't the only strange lifeforms inhabiting this place. Flies around, shoots red sparks, and worst of all, makes annoying sounds. Definitely hostile so definitely kill it on sight.", "RMRShoggran", "RM86A1" },
		{ "Black Suit Striker", "", "The Neue Deutsche Einheit (NDE) is the joker in the deck. Their stormtroopers did not appear until the battle for Tycho, and unlike the UN, it seems they're here to acquire lebensraum.", "BlacksuitStriker", "RM88A1" },
		{ "Heavy Black Suit", "", "If you run across anyone in an all-black battlesuit expect them to be heavily armed and very hard to kill. This applies to the Black Suit Strikers as well but watch out for the heavy troopers as well.", "HeavyBlacksuit", "RM89A1" },
		{ "Estron Guardian", "", "You remember I mentioned how four LDF members who have been in close contact with the aliens have disappeared without a trace and we don't know what happened to them? Judging from this alien that looks worse than the beasts, we may have an idea what happened to the LDF members...", "RMREstronBig", "RM73A1" },
		{ "Hover Gunner", "", "The spinner still wasn't enough when it comes to flying enemies. This soldier is riding a tough flying vehicle that shoots a machine gun.", "RMRHoverGunner", "RM71A1" },
		{ "Terran Commando", "", "The UN has pulled out the big guns with this commando. Or maybe not since his armor is decent so it probably won't take a lot of ammo to kill him. And speaking of ammo, the commando's rifle can shoot powerful purple orbs so watch out because he can probably easily kill you fast as well.", "TerranCommando", "RM75A1" },
		{ "Subestron", "", "Not much into on whatever the heck this thing is. Some of the remaining LDF soldiers that are still on our side are spreading rumors that it flies around, has a lot of health, fires powerful red sparks, and is a total nightmare.", "SubestronBoss", "RM84C1" },
		{ "ATF Jump Commando", "", "An improved version of the Terran Commando, this guy has a much tougher armor, can shoot more of those purple plasma bolts that pack a punch, and he even has a jetpack!", "RMRJCommando", "RM76A1" },
	}},
	{{
		{ "Storm Trooper", "", "You know them, you hate them. The assault soldiers of Imperial power. They're not overly clever, they're armed with only a standard issue laser rifle, but they're fanatically loyal, doggedly persistent, and the Empire seems to have an endless supply of them.", "storm_trooper", "STRMG1" },
		{ "Hoth Trooper", "", "These stormtroopers are deployed at Hoth, the snowy planet in the remote system. They're a bit tougher than the stormtroopers so take them out at once.", "hoth_trooper", "HOTHN1" },
		{ "Imperial Officer", "", "The average Imperial Officer prides himself on not stooping to carrying a melee weapon, but, as you well know, their accuracy with the pistol more than compensates for this.", "DF_officer", "OFFCO1" },
		{ "Imperial Commander", "", "These are, of course, drawn from the Officer corps, and so have the same aversion to melee weapons. Their laser rifles give them a longer range of fire than the average Officer, and their intensive physical training means they can generally move faster as well.", "imperial_commander", "COMMP1" },
		{ "Gamorrean Guard", "", "These pig-like creatures are incredibly tough and skillful with primitive weaponry (like the axes they usually carry). Nothing a blaster or laser rifle can't handle. Just don't let them get too close.", "gamorrean_guard", "GAMGO1" },
		{ "Remote", "", "These small droids carry a relatively mild laser blast, but their speed, both in straight-out acceleration and direction change, is considerable. They're mostly a painful annoyance.", "DFRemote", "REMOA1" },
		{ "Probe Droid", "", "Do not be taken in by the slow floating movements of these nasty pieces of Imperial technology - their laser blasts pack as much punch as the standard rifle. These babies go out with a bang when disabled, so keep your distance when finishing them off.", "probe_droid", "PROBA0" },
		{ "Interrogation Droid", "", "The more deadly \"cousin\" of the probe droid. This comes equipped not only with a stun device for \"target motivation\", but with a power blast for escape-minded prisoners.", "interrogation_droid", "INTDA1" },
		{ "Gran", "", "These scoundrels have long been attached to the court of the infamous crime boss Jabba the Hutt. You can't miss them - they've got three eyes. They're skillful hand-to-hand fighters, but first you have to get past the thermal detonators they usually have up their sleeves.", "gran___DF", "GRANR1" },
		{ "Trandoshan", "", "These reptilian bounty hunters have been known to do the occasional odd job for Darth Vader in the past. Knowing Vader's obsession with efficiency, Bossk's continued existence probably means he's very good at what he does. His usual preference in weapons is a concussion rifle.", "trandoshan_1", "TRANN1" },
		{ "Kell Dragon", "", "Kell dragons were quadrupedal predators sometimes utilized in disposing of captives by crimelords and Dark Jedi. Kell dragons were hardy creatures related to the much larger krayt dragons indigenous to Tatooine, and like their larger cousins, were most comfortable in deserts. \n\nThere's nothing like roast kell dragon...", "KellDragon", "CMPMDF11" },
		{ "Boba Fett", "", "We've both run into this joker before. His skill as a bounty hunter is legendary, as is his ruthlessness and knack for escaping tight situations. He's fast on his feet, and his jet pack adds to his mobility.", "boba_fett", "BOBAA1" },
		{ "Phase I Dark Trooper", "", "The Phase I dark trooper was the first model in the dark trooper design program. The droid was little more than a skeletal frame equipped with a vibrosword attached to its right arm and a blast shield on its left, plus basic artificial intelligence.", "phase1_DF", "PHA1P1" },
		{ "Phase II Dark Trooper", "", "The Phase II dark trooper was the second and main stage of the Dark Trooper Project. Each droid was equipped with the external elements such as the suit, a jump pack, and an assault cannon capable of firing 400 plasma shells and 20 missiles before reloading. It was also capable of being loaded into hyperspace pods for transportation. The Phase II dark trooper was intended to be used either as an artificially intelligent droid or exoskeleton - either way, it was extremely effective in battle. A small number of these soldiers destroyed a Rebel base on Talay.", "phase2_DF", "PHA2A1" },
		{ "Phase III Dark Trooper", "", "The Phase III dark trooper was the last and most powerful dark trooper exoskeleton/droid. It dwarfed even the Phase II dark trooper, and was intended to be the armor of the next generation of stormtroopers. It was sometimes even classified as a bipedal tank. Had the project come to full realization, it would have produced the perfect battlefield infantry unit-an amalgam of a clone's creativity, unpredictability, and initiative combined with the resilience and firepower of a heavy battle droid. The exoskeleton provided its wearer with increased firepower, strength, and durability. Only a small number of Phase III dark troopers were ever constructed; one was the armor of General Rom Mohc, who used it as an exosuit in single combat against Kyle Katarn during a battle onboard the colossal factory ship Arc Hammer.", "phase3_DF", "PHA3A1" },
		{ "Jerec", "", "Jerec was a powerful Miraluka Jedi Master and Jedi archaeologist who turned to the dark side under the Empire, becoming a feared Inquisitor during the Galactic Civil War. Jerec was apprenticed to a Jedi archaeologist, Jocasta Nu, and became a Jedi archaeologist himself, versed in knowledge of the Jedi's past, especially the Sith. A Jedi Master during the Clone Wars, he was on a long-term deployment searching for ancient knowledge in the Unknown Regions when Order 66 was issued. Upon his return, Jerec was found by the Inquisitorius and turned to the dark side. \n\nJerec served the Empire as an Inquisitor for many years. However, Jerec was in truth devoted only to himself. One of the most powerful Dark Jedi in the Empire, Jerec continually sought ways to increase his power and take the Empire for himself. \n\nJerec is the one who murdered Kyle Katarn's father, and he is more than willing to utilize your anger to turn you to the dark side.", "jerec", "CMPMDF16" },
	}},
	{{
		{ "Prisoner", "", "Hunter's Log: I thought I was going to use this log for weapon information, but it would be useful to use it for enemy info as well. Some of the enemies I encounter are escaped prisoners. The prisoners will punch me at sight so taking them out from a distance will guarantee me a kill.", "IPOGPrisoner", "IPO0B1" },
		{ "Trooper", "", "Hunter's Log: I forgot what these troopers are from, but I don't care. I do care that they can shoot me. At least his peashooter doesn't do much damage.", "IPOGTrooper", "IPO1B1" },
		{ "Galactic Elite Corp", "", "Hunter's Log: Hmm, so the Galactic Elite are after me? Maybe that's where the trooper came from... His weapon is a bit stronger, but he doesn't seem so elite for now.", "IPOGEliteCorp", "IPOAG0" },
		{ "Huntress", "", "Hunter's Log: Some of the hunters I encounter are not so friendly. After all, I am competition. The huntresses fire a spread shot of plasma balls. Not too hard to waste. I hope I don't end up accidentally killing my friend Lucienne, since she wears similar clothing like these huntresses.", "IPOGHuntress", "IPOBB1" },
		{ "Bighead", "", "Hunter's Log: I'm going to call these things Bighead because... well you figure it out. Shoots, I mean, spits out fire balls. Not too hard to dodge.", "IPOGBighead", "IPOFB1" },
		{ "Yrktarel Priestess", "", "Hunters Log: They can shoot magical projectiles at me, but they are hardly a threat, so that should please my score.", "IPOGPriestess", "IPO6B1" },
		{ "Yrktarel Berserker", "", "Hunter's Log: Yrktarel? Is that like some tribe in this planet or something? Either way, he only fights up close like the prisoner. Of course, he has that spiked mace and the surprisingly durable shield so that kinda makes him tougher. Well I suppose he's called a Berserker for a reason.", "IPOGBerserker", "IPO5B1" },
		{ "Prototype Sentry Sphere", "", "Hunter's Log: Thankfully, since it's a prototype, it's not too much of a threat to me. Just got to watch its red laser bolts and make sure it doesn't fly around too much and it's toast.", "IPOGSentrySphere0", "IPOCA1" },
		{ "Sentry Sphere", "", "Hunter's Log: Well, this one ain't a prototype. It's bigger, it's tougher, and shoots more red laser bolts.", "IPOGSentrySphere", "IPOCB1" },
		{ "Robot Guard", "", "Hunter's Log: Looks like me killing all those elites and troopers are starting to pay off. They brought out their little toys. This machine shoots out fireballs which kinda packs a punch.", "IPOGGuard", "IPO2B1" },
		{ "Big Robot Guard", "", "Hunter's Log: Well this ain't a little toy anymore. Bigger, tougher, and doesn't shoot fireballs, just blue plasma bolts in either a burst fire or around its body.", "IPOGBigGuard", "CMPMIG11" },
		{ "Yrktarel High Priest", "", "Hunter's Log: This guy's funny dress reminds me of the Berserker. Must be from that Yrktarel tribe or something. He's a pain in the butt; can take enough damage and throws three green magic orbs at me.", "IPOGWizard", "IPO8B1" },
		{ "Veek Warrior", "", "Hunter's Log: I have no idea what a Veek is but despite that outdated looking armor and a bow, this guy is tougher than he looks.", "IPOGVeekWarrior", "IPO7B1" },
		{ "Robot Mastiff", "", "Hunter's Log: And here I thought the Big Robot Guard was trouble. This thing shoots red laser beams and can take a lot of firepower to bring it down.", "IPOGMastiff", "IPODB1" },
		{ "Robot Sentinel", "", "Hunter's Log: Oh, where to begin with this one? Hmm... It can shoot a couple of missiles that deal a painful amount of damage, it's tall and takes a lot of ammunition to destroy, and it's a total eyesore.", "IPOGSentinal", "CMPMIG15" }, 
		{ "B'rnourd", "", "Hunter's Log: I was on my way to assassinate the Chancellor and I end up meeting this guy. He does nothing but shoot fireballs at me. Giant fireballs that have the same amount of firepower as an actual meteor. Crap.", "IPOGBrnourd", "CMPMIG16" },
		{ "Imperial Chancellor", "", "Hunter's Log: Assassinating some guy who does nothing but sit on his butt doing government stuff doesn't sound so hard. Aaaaaand, he can shoot a spread shot of powerful red laser beams that turn into floating red particles.", "IPOGChancellor", "IPOEB1" },
	}},
	{{
		{ "Spike Ball", "", "They may look like ordinary flying balls, but once you are in its sight, spikes will pop out and it will charge at you. Take them down before they hit you. Silver ones do small damage. Gold ones do a bit more damage. Psionic ones, the red spike balls, do the most damage than the other two.", "DsrptSilverSpikeBall", "CMPMDS01", "DsrptGoldSpikeBall", "CMPMDS02", "DsrptPsionicSpikeBall", "CMPMDS03" },
		{ "Mutant Soldier", "", "A colony at Triton, one of Neptune's moons, was overwhelmed with hostile aliens. Reports of mutants were starting to pop up. Some of the soldiers stationed at that colony are now mutated and must be put down at once.", "DisruptorMutantSoldier", "DISBA1" },
		{ "Cryo-Pirate", "", "Even in outer space, it is a dangerous place. These space pirates definitely make it a bad place. They are armed with blasters that shoot a spread shot so watch out and kill them all.", "DisruptorCryopirate", "DIS9A1" },
		{ "Terrorist Repeater", "", "One of the colonies in Jupiter's moon Io was taken over by terrorists, Jovian gangsters. The standard terrorist uses a customized Phase Repeater, allowing it to shoot at a burst fire rate.", "DisruptorTerroristRepeater", "DISUA1" },
		{ "Terrorist Cyclone", "", "Some of the Jovian terrorists were able to acquire AM Cyclones, so use caution when dispatching these gangsters.", "DisruptorTerroristCyclone", "_DSRA1" },
		{ "Terrorist Droid", "", "The terrorists were able to create robots of their own for support. The standard one will shoot yellow orbs at you so dodge them and then trash them.", "DisruptorTerroristDroid", "DIS7A1" },
		{ "Enhanced Terrorist Droid", "", "Looks like the terrorists upped their game when it comes to robotics. This version is tougher and shoots three orbs at a time.", "DisruptorTerroristDroid2", "DISQA1" },
		{ "Terrorist Elite", "", "The most powerful of the Jovian gangsters. When you first encounter him, he will be invisible and pop up in thin air, so don't plan on giving him a surprise attack! He shoots a powerful repeater at you on sight and can even teleport around. Show these terrorists that crime doesn't pay.", "DisruptorTerroristElite", "DISYA1" },
		{ "Mutant Rat", "", "An \"abandoned\" chemical factory in one of your missions turned out to have a few mutations of its own. Once an ordinary rat, this mutated creature will spit out fireballs at you, so kill it ASAP.", "DisruptorMRat", "DIS4A1" },
		{ "Saw Robot", "", "Don't let this thing get too close to you or else it will saw off your face!", "DsrptSawRobot", "DS99A1" },
		{ "Hostage Droid", "", "The terrorists thought of destroying these intel droids during their ravaging, but they thought it was a better idea to rig them with explosives instead. When this thing sees you, it will fly at you and then explode so take it out from a distance.", "DisruptorHostageDroid", "DISDP0" },
		{ "Guard Droid", "", "A standard robot designed for combat purposes. Shoots blue orbs at you so make sure you use caution when dealing with these things.", "DisruptorGuardDroid", "DS26F1" },
		{ "Mutant Dragonfly", "", "Because of the environment, dragonflies were also involved in the chemical factory incident. Do not let it take a bite out of you, not only does it do a decent amount of damage, but you really don't want to see its giant jaw.", "DisruptorDragonFly", "DIS6A1" },
		{ "Alien Wanderer", "", "Mars surprisingly has some lifeforms of its own. Unfortunately, that includes hostile aliens. One of them, Wanderers, are flying creatures that will take an ugly bite at you. Send it back to hell. \n\nAnd watch out for the blue ones. They are tougher.", "AlienWanderer_T1", "DISEA1", "AlienWanderer_T2", "DISFA1" },
		{ "Flying Droid", "", "A flying type robot designed for combat and recon purposes. Shoots green orbs at you so make sure you use caution when dealing with these flying things.", "DS_Flying_Droid", "DS23A1" },
		{ "Ice Disruptor", "", "Normally found in Antarctica, a mutant outbreak has turned these things into hostile enemies equipped with stolen Cyclone weapons.", "DisruptorIceDisruptor", "DISXA1" },
		{ "Disruptor", "", "These guys are from President Krieger's private army. They are tougher and stronger than the ones found in Antarctica. Use full power.", "DisruptorNDisruptor", "DISWA1" },
		{ "Acid Bloater", "", "Another strange creature that Mars has to offer. They fly around and lob acid balls from their mouth. Avoid the acid and blow them to bits.", "DisruptorAcidBloater", "DISGA0" },
		{ "Alien Guardian", "", "No doubt one of the toughest aliens to ever live in Mars. Can take a lot of damage and shoots powerful electricity at you so watch out!", "DisruptorAGuardian", "DISIA1" },
		{ "Mutant Brute", "", "Some of the mutated soldiers at Triton got enhancements of their own. Not only do they look uglier, but they are smart enough to use Lock-On Cannons. Their missiles are homing but can be shot down.", "DisruptorMBrute", "DISCA1" },
		{ "Mutant Elite", "", "One of the side effects of an induced hallucinatory nightmare is visioning strange monsters that can harm you emotionally and physically... \n\nMeet the spider. When you first encounter it, it will be invisible and pop up in thin air, so don't plan on giving it a surprise attack! Let it get to close to you and it will take a terrifying bite out of you.", "DisruptorMutantElite", "DISVA1" },
		{ "Nightmare Spider", "", "The most enhanced of the mutants. This one acts almost like the standard Mutant Soldier but packs a punch. A devastating punch. Kill immediately.", "DisruptorNightmareSpider", "DISKA1" },
		{ "Nightmare Sphere", "", "Enjoying the nightmare? Good. It is there to help erode your will... \n\nMeet the sphere. When you first encounter it, it will be invisible and pop up in thin air, so don't plan on giving it a surprise attack! Flies around and shoots yellow orbs at you that travel pretty fast.", "DisruptorNightmareSphere", "DS24F0" },
		{ "Nightmare Demon", "", "Welcome to your true nightmare... \n\nWhen you first encounter it, it will be invisible and pop up in thin air, so don't plan on giving it a surprise attack! Flies around pretty fast and shoots yellow orbs at you that travel pretty slow but will deal a lot of damage.", "Nightmare_Demon", "DISOA1" },
		{ "President Krieger", "", "President Krieger of Earth's United Nations. \n\nA former LightStormer Corps officer. \n\nYour worst enemy... \n\nHe is equipped with a customized Cyclone that not only deals more damage but comes with some new attacks that allows him to shoot homing spheres and a spread shot of deadly orbs. He is also equipped with a teleporter so be careful when you end it with Krieger.", "DS_PresidentK", "DS21A1" },
	}},
	{{
		{ "Skeleton", "", "These undead are the result of death magic rituals deep within the Witchaven. Wandering without purpose, these damned souls claw at the living with contempt.", "WTSkeleton", "WH_FE1" },
		{ "Forest Goblin", "", "Abandoned by the Witches for their innate weaknesses, the Forest Goblins are quickly being destroyed by the greater strength of the Desert Goblin tribe in a subterranean territorial war. Pushed to the higher levels near the surface, the Forest Goblins dine on rat meat and long for their Woodland home.", "ForestGoblin", "WH_0A1" },
		{ "Mountain Goblin", "", "Merely average in strength and intelligence, the brown Mountain Goblins are the easiest to control of all the transplanted Goblin tribes. Existing primarily as servants of the Witches, the Mountain Goblins scout the surface of Char for invaders and occasionally carry out death missions on the weaker Forest Goblins.", "MountainGoblin", "WH_2A1" },
		{ "Desert Goblin", "", "The strongest and most cunning of the Goblin tribes, the tan Desert Goblins control most of the areas outside the Witches' direct sphere of influence. Having pushed the weaker Forest Goblins to the surface levels, they are in a position to hinder the Mountain Goblins on their errands and dictate somewhat the movements of the other labyrinth denizens. Still, the Desert Goblins are no match for the Witches' more powerful minions, and avoid the MinoDrake and Lava Fiends unless it be to vanquish a greater outside threat.", "DesertGoblin", "WH_1A1" },
		{ "Midian Warrior - Sword", "", "Named for the energy that spawned them, the Midian were shaped from the tattered soul pieces of the vanquished High Priest Midias. These dark guardsmen exist only to protect Illwhyrin and crush her enemies to dust. \n\nThis Midian Warrior has seen many battles and is very experienced in crushing enemies with the broad sword. Be careful of their speed and ability to defend themselves. \n\nBrown Warriors are the 4th strongest of the Midian. \nRed Warriors are the 3rd strongest of the Midian. \nBlue Warriors are the 2nd strongest of the Midian. \nPurple Warriors are definitely the strongest of the Midian.", "WTBrownMidianWarriorSword", "W_HQR1", "WTRedMidianWarriorSword", "W_HRR1", "WTBlueMidianWarriorSword", "W_HKR1", "WTPurpleMidianWarriorSword", "W_HGR1" },
		{ "Midian Warrior - Halberd", "", "This warrior can hurl three halberds at a great distance before they rush to engage their foe in melee with a sword and shield. It has been said that only the strongest of warriors can pull the halberd from of their body and use it against the Midian Warrior. \n\nBrown Warriors are the 4th strongest of the Midian. \nRed Warriors are the 3rd strongest of the Midian. \nBlue Warriors are the 2nd strongest of the Midian. \nPurple Warriors are definitely the strongest of the Midian.", "WTBrownMidianWarriorHalberd", "W_HQH1", "WTRedMidianWarriorHalberd", "W_HRH1", "WTBlueMidianWarriorHalberd", "W_HKH1", "WTPurpleMidianWarriorHalberd", "W_HGH1" },
		{ "Midian Warrior - Magic User", "", "This Midian Warrior can cast three fireballs spells at a rapid pace before they unsheathe their swords and charge making even the strongest of enemies turn and run. \n\nBrown Warriors are the 4th strongest of the Midian. \nRed Warriors are the 3rd strongest of the Midian. \nBlue Warriors are the 2nd strongest of the Midian. \nPurple Warriors are definitely the strongest of the Midian.", "WTBrownMidianWarriorSpell", "W_HQE1", "WTRedMidianWarriorSpell", "W_HRE1", "WTBlueMidianWarriorSpell", "W_HKE1", "WTPurpleMidianWarriorSpell", "W_HGE1" },
		{ "Brown Ogre", "", "The weakest of their kind, the Brown Ogres are doomed to forever tread in the shadows of their more powerful brethren. As the stronger would do to them, so too the they seek out those that are weaker to prey upon, As all Ogres have a disproportionately high upper body strength, they hammer at their prey with their hard, bony fists.", "BrownOgre", "WH_NA1" },
		{ "Green Ogre", "", "Possessing a higher intellect than any other type, these Ogres were conscripted to act as overseers during the carving of the labyrinth.", "GreenOgre", "WH_CA1" },
		{ "Red Ogre", "", "Where the need for brawn was keenest, the Red Ogre was quickly drafted. By far the most violent and intemperate, they have banded together to prove that might makes right. They strive to bring about by fist and fury a world where they get the best in food and dwelling.", "RedOgre", "WH_BA1" },
		{ "Muck Demoness", "", "Often hiding in swamp like areas, it will roam around underground (but visible and vulnerable) before popping up to throw some harmful muck at you. Apparently some similar looking things like these exist in the basement of the United Nations Building.", "WTMuckDemoness", "WH_MI0" },
		{ "Lava Fiend", "", "Summoned from the Lower Planes, the Lava Fiends are bound in servitude to the Witches. Because of the low magic quality of the Prime Realms, they are greatly weakened in the Witchaven. Drawing their energy from sources of elemental fire, the Lava Fiends gravitate to Char's subterranean lava flows.", "WTLavaFiend", "WH_LA1" },
		{ "Spider", "", "Once normal arachnids, the Spiders were warped by dark magic of the Grey Witches. They attack with a venomous bite.", "WitchavenSpider", "WH_YA1" },
		{ "Imp", "", "Illwhyrin uses her ascendancy to raise the hideous Imp from Stahzia's quagmire. Once summoned by Cirae-Argoth, the Imps will amass in numbers feeding off any inhabitant they come across. Traveling in packs, they are very formidable, not to mention their ability to poison their victims, leaving them helpless and vulnerable.", "WitchavenIMP", "WH_IA1" },
		{ "Brute", "", "An ugly creature, that some villagers call Fred for an unexplained reason, he is trouble in close combat so fight carefully.", "WitchavenBrute", "WH_KO1" },
		{ "Shadow Hound", "", "Illwhyrin spawns these dog-like creatures who uses the shadows to transport everywhere to strike someone when they least suspect it.", "WitchavenShadowHound", "WH_HD0" },
		{ "Mino Drake", "", "The MinoDrakes are a race of part man, part bull and part fire drake. As such, they are an intelligent stubborn race that savors the heat of the earth. They serve as loyal soldiers for the Witches, wielding large battle axes and guarding designated areas to the death.", "MinoDrake", "WH_SA1" },
		{ "Willow Wisp", "", "Perhaps one of the strangest denizens of the Witchaven are the Willow Wisps. These amorphous creatures pushed through the Veil during the siege, attracted to the magical energies being expended by Witch and priest alike. The Willow Wisp absorbs magic and life energy, attacking with an electrical shock at a distance and draining experience levels on contact.", "WTWillOWisp", "WH_3A0" },
		{ "Demon", "", "Boo! Don't let this guy scare you when you least suspect it...", "WitchavenScaryScreamer", "WH_PD0" },
		{ "Grey Witch", "", "The outer circle of the Order of Witches, the Grey Witch lives only to defile the sacred in the Prime Realms. With their flesh sculpting ability, they have created the giant Spiders, and they have the power to summon several at will. They attack with both a stream of grey sludge and a venomous touch.", "WTGreyWitch", "WH_OA1" },
		{ "Skeletal Priestess", "", "Just above the Grey Witches in the Order, the Skeletal Witches have dedicated their souls to death magic. Over centuries, their once human forms were twisted and shaped into the image of their master. They attack with fiery missiles.", "WTSkeletalPriestess", "WH_XA1" },
		{ "Sword Giryon Knight", "", "This is the weakest of all Giryon Knights. He uses a shield in coordination with his sword attacks. It is almost impossible to penetrate his defenses when his shield is up.", "WTGiryonKnight1HSword", "WH_4G1" },
		{ "War Hammer Giryon Knight", "", "This Giryon Knight enjoys surprising his enemies and becomes relentless when doing so. His war hammer is very light, enabling many fast attacks at a close range.", "WTGiryonKnightMace", "WH_6G1" },
		{ "Two-Handed Sword Giryon Knight", "", "This Giryon Knight has mastered the two-handed sword. He is able to attack at a farther range than most single-handed weapon users and he enjoys taking advantage of this.", "WTGiryonKnight2HSword", "WH_5G1" },
		{ "Guardian (Stone)", "", "Guardians are sentient faces of magical stone, imbued with life by the cruel magic of the Witches. Embittered by their immobile existence, the Guardians despise all living things. They spit hissing balls of fire in their fury and long for an end to their suffering.", "Witchaven1Guardian", "WH_GA1" },
		{ "Guardian (Spirit)", "", "Guardians are spirits of the Nether World, doomed forever by Ikthesti to guard the two planes of existence. They spit hissing balls of fire in their fury and long to see mere mortals wince in agony before they die. Tougher than the other Guardian.", "Witchaven2Guardian", "CMPMWH35" },
		{ "Argothonian Clansman - Fist", "", "These mighty combatants were conjured by Cirae-Argoth to strengthen her army and pose a threat to anyone they encounter. This clansman uses the aid from his allies and will fight with his fists if need be.", "WTArgothonianFist", "WH_9V1" },
		{ "Argothonian Clansman - Swordsman", "", "This clansman was trained by Cirae-Argoth herself and is very skilled with a magic sword that he can conjure at will. Because of its magical properties, the sword can penetrate any type of armor known to man.", "WTArgothonianSword", "WH_GX1" },
		{ "Argothonian Clansman - Pike Axe", "", "This clansman has the ability to summon magical pike axes and hurl them with both hands. When his magical ability runs low, he will attack with a short sword until he dies. \n\nThere are three types of these clansmen that will hunt you down. All three of them will throw axes at you at long range. \nOne uses his fists for close combat (Sometimes he'll have more health than normal). \nOne uses twin pike axes for close combat (Sometimes he'll have more health than normal). \nOne uses a sword for close combat.", "WTArgothonianPikeAxeSword", "WH_9H1", "WTArgothonianPikeAxeFist", "WH_9H1", "WTArgothonianPikeAxe_3", "WH_9H1" },
		{ "Ciraen Sentinel - Bare Hands", "", "Hand chosen by Cirae-Argoth herself, these mighty sentinels protect her from would be assailants. In their bare-hand fighting form, they pose little threat but they can summon other warriors to aid in their distress.", "WTCiraenSentinelFists", "WH_7M1" },
		{ "Ciraen Sentinel - Dual Morning Stars", "", "Due to the Cirean Sentinel's rigorous training, has an ambidextrous fighting ability, not to mention their inherent primal rage, which makes them very strong and hard to knock down. Avoid their blows by keeping them at a distance with a ranged weapon.", "WTCiraenSentinelMorningStar", "WH_8E1" },
		{ "Ciraen Sentinel - Magical Bow", "", "This sentinel can conjure a bow from the Nether World and shoot many arrows at their prey. Once they relinquish their arrow supply they enjoy rushing their enemies to point blank range and attacking them into a melee battle to the death. They are usually armed with bows and morning stars (Sometimes he'll have more health than normal). \n\nYou might even get lucky and find an archer who must use his fists for close combat (Sometimes he'll have more health than normal).", "WTCiraenSentinelBow", "WH_8A1" },
		{ "Ciraen Sentinel - Magic User", "", "Trained by Ikethsti, this sentinel can conjure attack spells causing much damage. They love to attack from a distance and wear down their enemy before engaging in hand-to-hand combat. They usually appear with spells and morning stars (Sometimes he'll have more health than normal). \n\nYou might even get lucky and find a sentinel who can't use magic, just uses his fists (Sometimes he'll have more health than normal).", "WTCiraenSentinelSpell", "WH_7G1" },
		{ "Dragon", "", "Little is known about these mighty creatures other than that they are native to the Nether Reaches and they are capable of breathing long columns of flame. It is assumed that they were brought through the veil by Illwhyrin, but it is possible that they came of their own free will. Few have attempted to engage these creatures in combat and though many would claim otherwise, there is no confirmed record of a dragon being slain.", "WitchavenDragon", "CMPMWH45" },
		{ "Illwhyrin", "", "The most powerful of the Nether Reaches Order of Witches, Illwhyrin's abilities and ambitions are myriad. Since her emergence in the Prime Realms, she has led on the energies of her enemies and clouded the minds of the High King's subjects. A master of death magic, she is able to raise the dead, channel the forces of fire, and summon minions at will (mostly Willow Wisps). She toys with would be heroes, often appearing just long enough to render their weaponry useless before teleporting to the deeper levels of her Witchaven. Disconnected from her source of power in the Nether Reaches, Illwhyrin's strength dwindles daily, nevertheless each moment brings her closer to completing a permanent portal through the Veil. A portal that, once open, would replenish her dark energies and loose the forces of Chaos on a complacent world.", "WTIllwhyrin", "WH_WF1" },
		{ "Cirae-Argoth", "", "One of the most powerful of the Nether-Teaches Order of Witches. A master of death magic, she is able to raise the dead, channel the forces of fire and summon minions at will. Illwhyrin's sister is very volatile and will stop at nothing to destroy her most hated foe, who murdered her sister. She will not be happy until she punishes you for the crimes you committed and bestows the hatred of her world upon you.", "WTCiraeArgoth", "WH_JJ1" },
	}},
	{{
		{ "Headcrab", "COMP_THREAT_2", "The Headcrab can appear harmless at a glance: it is small and slow-moving with its tiptoe-like gait. Although it can quickly leap long distances using its hind legs, tilting its body upwards to turn its mouth towards its target, such an assault can only inflict minor injuries with the claws, legs and teeth. However, the Headcrab's main goal is not to kill, but to attach itself onto an appropriate host's head. Using its leaping ability, it can reach a host's head and attempt to burrow its beak through the skull. Once successful, the Headcrab takes control of the host's nervous system and causes physical alterations to the host's body, such as causing its hands to deteriorate into bony 'claws', via an unknown biological process. The host then rips open its own torso, revealing the stomach and other organs, for feeding purposes. Such a Headcrab-controlled host is commonly called a Zombie.", "Headcrab", "CMPMHL01" },
		{ "Headcrab Zombies", "COMP_THREAT_2", "Once a Headcrab successfully attaches to a host, the Headcrab will assume control of all their motor functions, able to walk and attack with the host's arms and legs. Through some unknown biological process, the host's hands turn into long, skeletal claws and a massive hole appears in their chest lined with the host's ribs, becoming a makeshift \"mouth,\" with their ribs serving as teeth (Zombies have been observed to feed by ripping chunks of flesh off of corpses and stuffing them into this maw) Removal of the Headcrab reveals that the host's head is bent abnormally upwards, their hair is matted with blood, and their face is pale, with their eyes shut and mouth open in a frozen scream. \n\nThe zombie scientists are the weakest. The security guard zombies have a bit more health. The soldier zombies have the most health out of these types.", "Headcrab_Scientist", "CMPMHL02", "Headcrab_Barney", "CMPMHL03", "Headcrab_Soldier", "CMPMHL04" },
		{ "Hazardous Environmental Combat Units", "COMP_THREAT_2", "[Not available in Opposing Force mode] \n\nYour government has sent in a dangerous and very efficient clean-up crew. Unfortunately, these military personnel don't only want to obliterate aliens, they're trying to permanently silence you and your co-workers, too. \n\nThey are either equipped with an MP5 or a SPAS-12 or even worse: an M249 Squad Automatic Weapon (SAW). \n\nOne of the soldiers equipped with an MP5 may have an M203 grenade launcher attached to his sub machine gun so be careful when you meet him. \n\nNOTE: The HECU is an enemy if you have Opposing Force mode disabled. If you have it enabled, the HECU generally serve as Adrian Shephard's allies.", "HECU_Grunt1", "CMPMHL05", "HECU_Shotgun1", "CMPMHL06", "HECU_M203", "CMPMHL07", "HECU_Commander1", "CMPMHL08", "HECU_Grunt1_Opp_MP5", "CMPMHL09", "HECU_Commander1_Opp_Shotgun", "CMPMHL10", "HECU_Major_Opp_Saw", "CMPMHL11" },
		{ "HECU Sarge", "COMP_THREAT_3", "[Not available in Opposing Force mode] \"What is your major malfunction, numbnuts? Didn't Mommy and Daddy show you enough attention when you were a child?\" Definitely a threat as he can take a lot of hits and is equipped with a minigun. \n\nNOTE: The HECU is an enemy if you have Opposing Force mode disabled. If you have it enabled, the HECU generally serve as Adrian Shephard's allies.", "HECU_Sarge", "CMPMHL12" },
		{ "Vortigaunt", "COMP_THREAT_2", "Long before the Black Mesa Incident, the Vortigaunts' homeworld was invaded by the Combine, forcing the survivors of the invasion to flee to Xen. When the Black Mesa Incident occurred, their master, a being known as the Nihilanth, viewed the rift that opened as a chance to escape, and directed the Vortigaunts to invade Earth.", "Vortigaunt", "CMPMHL13" },
		{ "Houndeye", "COMP_THREAT_2", "Bullsquids (taxonomic designation: Gastropolypus toxophlegmata, or \"Phlegm-shooting Many-legged-mouth\") are a species of highly aggressive, bipedal creatures that appear throughout the Black Mesa Research Facility during the Resonance Cascade. Bullsquids are able to survive, if not thrive, in environments that are unfriendly or even toxic to humans, including sewers and pools of radioactive chemicals or biological waste. On Xen, Bullsquids are found drinking from Healing Pools.", "HLHoundeye", "CMPMHL14" },
		{ "Bullsquid", "COMP_THREAT_2", "While the precise reasons for the secondary mutation remains unknown, it appears that if a Standard Headcrab and their host survive for an unspecified period of time or are subjected to certain conditions, the Zombie will develop into a Gonome. The host experiences a growth in overall body mass, and the gash in the chest cavity develops into a functional, vertical maw. The Gonome also obtains the ability to spew organic projectiles from their maw.", "Bullsquid", "CMPMHL15" },
		{ "Gonome", "COMP_THREAT_2", "The Houndeye is an excellent example of a social animal in terms of pack hunting. While a shy and timid creature by itself, groups of three or more display resonant behavior, emitting destructive harmonic sonic attacks in shock waves, capable of injuring those they attack or destroying nearby objects such as wooden crates or windows. The shock waves are always visible. The eyelids are seen moving only when they are excited or going to sleep.", "Gonome", "CMPMHL16" },
		{ "Pit Drone", "COMP_THREAT_3", "Pit Drones are fast, nimble and fairly intelligent, typically traveling in packs of five or six, and are capable of making flanking movements to quickly surround their prey. The Pit Drone has two forms of attack: firing their head-spines with acid jets when at long range, or charging towards their target to deliver a deadly slash from their claws. Some Pit Drones appear to be incapable of their head spine attack, appearing to have depleted their ammunition of spines.", "HLPitdrone", "CMPMHL17" },
		{ "Stukabat", "COMP_THREAT_2", "A bat-like creature with six eyes, the Stukabat attacks the player from the air with its claws. It is able to hang itself on ceilings like a normal bat, walk on the ground after being forced on it, aided by its single rear leg and its wings, and would not always attack the player. It would also emit bird of prey-like noises.", "Stukabat", "CMPMHL18" },
		{ "Alien Controller", "COMP_THREAT_3", "The Alien Controllers share many characteristics with the Nihilanth, suggesting that they may be closely related. Like other sentient creatures on Xen, the Alien Controllers have a third vestigial arm growing from the center of their chest. In addition to this, the Alien Controllers have disproportionately large heads, which can peel open to reveal a spike or cone, resembling the interior of the Nihilanth's skull. Unlike the Nihilanth, the Alien Controllers have longer legs and are able to levitate without the assistance of a mechanical seat. It is unknown whether this ability stems from their strange psychokinetic powers, or from their seemingly mechanical parts.", "HLController", "CMPMHL19" },
		{ "Xen Grunt", "COMP_THREAT_4", "Alien Grunts share several features with their Vortigaunt counterparts, such as multiple red eyes, reverse-jointed legs, hoofed feet, and a short arm extending from their mid-torso, which is used for feeding. They are classified by Earth scientists as being in the same genus as the Vortigaunts, Xenotherium. Earlier concept art of Grunts furthers the connection between the Vortigaunts and Grunts. \n\nGrunts are also equipped with metallic armour around the groin and shoulders, as well as metal helmets and shoes, though it has been speculated by fans that this is actually a natural 'shell' formed as a result of a calcium-rich diet. Interestingly, this armor completely protects the Alien Grunt's back, but is open in the front leaving the Grunt's entire lower torso exposed. This may be to allow for the third arm, or indicate that vital organs are more vulnerable from behind.", "AlienGrunt", "CMPMHL20" },
		{ "Shock Trooper", "COMP_THREAT_4", "Shock Troopers, as their name suggests, primarily use electrical attacks through the use of a weapon known as the Shock Roach - a living creature, similar to the Alien Grunt's Hivehand. The Shock Roach fires bolts of electricity, which it constantly recharges on its own just like the Hivehand.", "Shocktrooper", "CMPMHL21" },
		{ "Shock Roach", "COMP_THREAT_2", "The Shock Roach cannot survive without a living host for very long; if its Shock Trooper dies, it will detach itself and pursue a new host. If it nears a player that already has a slot 1 weapon, it will attack in a similar way to a Headcrab before dying.", "Shockroach", "CMPMHL22" },
		{ "M1A1 Abrams", "COMP_THREAT_4", "[Not available in Opposing Force mode] \n\nThe M1A1 Abrams is an American main battle tank equipped with a 120mm smoothbore cannon, and a coaxial machine turret and is encountered numerously throughout the Black Mesa compound. The Abrams is used as the primary attack and defense vehicle by the HECU during the Black Mesa Incident to combat against the invading Xen and Race X aliens. \n\nSometimes it will primarily attack with either the machine gun turret or the tank cannon.", "HLAbrams", "CMPMHL23" },
		{ "M2A3 Bradley", "COMP_THREAT_4", "[Not available in Opposing Force mode] \n\nThe M2A3 Bradley is a US military infantry fighting vehicle used by the HECU during the Black Mesa Incident. Its main uses are to transport troops around the facility and provide them support with heavy firepower. \n\nSometimes it will primarily attack with either the machine gun turret or the tank cannon.", "HLBradley", "CMPMHL24" },
		{ "Female Black Operations", "COMP_THREAT_3", "Female Black Ops are strikingly nimble and agile, able to sprint faster than any other enemy and can jump to extreme heights. They wear a black jumpsuit and use night vision goggles that include a headset with a microphone, although none are ever heard speaking. They are armed with a suppressed Glock 17 and grenades.", "HLAssassin", "CMPMHL25" },
		{ "Male Black Operations", "COMP_THREAT_3", "Male Black Ops wear black combat gear and balaclavas that only expose their eyes. Some are seen wearing night vision goggles. Although not visible, they apparently have a communicator in their ear which they are seen listening to whenever they eliminate a target. \n\nThey are either equipped with an MP5 or an M40 rifle.", "MaleAssassin1_MP5", "CMPMHL26", "MaleAssassin1_M40", "CMPMHL27" },
		{ "Baby Voltigore", "COMP_THREAT_2", "Baby Voltigores are much smaller and weaker, and they cannot use the energy attack commonly used by the adult form. Despite this, they will make valiant efforts to use it, simply producing a harmless purple spark. \n\nWhile at a great disadvantage in battle due to their underdeveloped bodies, baby Voltigores are just as aggressive as their parents and will not hesitate to attack the player. \n\nUnlike the adults, a baby Voltigore will not explode after dying but will simply collapse to the ground.", "BVoltigore", "CMPMHL28" },
		{ "Voltigore", "COMP_THREAT_4", "These aggressive creatures use their innate ability to harness electrical charges to create a devastating ranged energy bolt attack, bearing some similarity to the Vortigaunt's green energy stream, although the Voltigore's energy attack is purple, and much more lethal. Even if the electrical charge didn't hit the target directly, the splash damage can still hurt the target if it is close to a wall, though with reduced damage. At close range, they attack viciously with their claws. \n\nTheir large bulk does not enable them to move swiftly and pursue the player if the area is too small. This allows players to eliminate the Voltigore with ease in some situations. When a Voltigore dies, its carapace explodes, causing massive damage to anything in the vicinity.", "Voltigore", "CMPMHL29" },
		{ "HECU Robot", "COMP_THREAT_4", "The Robot Grunt is a mechanical HECU unit that, for some reason, was never used during the Black Mesa incident. Nevertheless, they pack a punch so be careful when encountering one. \n\nThey are either equipped with an MP5 or a SPAS-12. \n\nSupposedly they were hacked by the Black Ops. As a result, they serve as a threat to not only Gordon Freeman but also HECU soldiers such as Adrian Shephard!", "HECU_Robot1", "CMPMHL30" },
		{ "Baby Headcrab", "COMP_THREAT_1", "Headcrabs are found to have originated from a giant creature known as a Gonarch which shares similar physical qualities with Headcrabs. Underdeveloped \"baby\" Headcrabs spawn at a rapid rate from a sac that dangles beneath the creature. Baby Headcrabs look similar to baby scorpions, being very tiny creatures with soft, translucent white bodies.", "BabyHeadcrab", "CMPMHL31" },
		{ "Gonarch", "COMP_THREAT_5", "Little is known about how and when the metamorphosis from Headcrab to Gonarch takes place, as few Headcrabs ever reach that stage. The Gonarch boasts a thick exoskeleton, powerful legs, and a large sack resembling a testicle dangling from its underbelly. It can easily withstand massive amounts of projectile and explosive damage, taking even more explosive damage to kill than a Gargantua. \n\nIt can hatch Baby Headcrabs to attack you.", "Gonarch", "CMPMHL32" },
		{ "Gargantua", "COMP_THREAT_5", "The Gargantua is approximately six meters (20 feet) tall, mostly blue in color, and has one yellow eye that glows red when it perceives a hostile unit. Instead of hands, it sports two massive pincers that can be opened to emit jets of intense heat (the Alien Grunt hands are also similar), as well as a pair of vestigial legs below the trunk, a common trait in most bipedal Xen creatures. The creature has a thick shell or carapace that renders it completely bulletproof. It requires a large amount of explosive, electrical, or energy damage before being destroyed and it can rarely be defeated with conventional methods. \n\nIt is unknown if the Gargantua is a natural species or if it is manufactured like the Alien Grunt. Its integrated weaponry and bio-mechanical appearance suggest that it is an artificially created or engineered creature, not unlike the Alien Grunt.", "Gargantua", "CMPMHL33" },
		{ "Pitworm", "COMP_THREAT_5", "The Pit Worm's caterpillar-like segmented body supports a head dominated by a single large eye with two vertical eyelids, and a twelve teeth mouth under it. The Pit Worm's eye is its primary weapon, capable of firing a searing energy beam at nearby enemies and the player. If enemies get too close, the worm also has large claws to strike out with. If it is shot in the eye, it will recoil, shielding it with its claws for a few seconds before striking aggressively at the player. The Pit Worm makes bird-like vocalizations.", "HLPitWorm", "CMPMHL34" },
		{ "Nihilanth", "COMP_THREAT_5", "The Nihilanth was the supreme leader of the Xen forces that invade Earth during the Black Mesa Incident. \n\nSometime before the Black Mesa Incident, the Nihilanth's species came into contact with the Combine. What followed was an incredibly long struggle, that eventually ended with the Nihilanth's kind being hunted to near extinction. The Nihilanth himself was the only survivor, and he and his minions managed to escape into the border world, Xen, where they barely managed to survive in a new ecosystem. He enslaved the Vortigaunts and forced them under his bidding sometime until before the arrival of Gordon Freeman.", "Nihilanth", "CMPMHL35" },
		{ "Gene Worm", "COMP_THREAT_5", "The Gene Worm is the most mysterious of the Race X aliens. This life form is said to be the equivalent of a \"biological resource management factory.\" It is suspected to be capable of taking any of Earth's natural resources and assimilating it to make them useful to the aliens' needs. If one fully entered Earth and became productive, he would effectively alter the planet enough to become useful as a new homeworld for Race X.", "Geneworm", "CMPMHL36" },
		{ "Kingpin", "COMP_THREAT_6", "It is a large worm-like creature that appears to have a very large brain on its dorsal side, and has two large, scythe-like claws that are not unlike the Pit Drone's claws and are used in a similar fashion. It can move around by slithering on the ground or via teleportation. When (if) it dies, it will self-destruct in a manner similar to the Gargantua. \n\nIt is extremely hostile and will use its lighting attack to kill unarmored players instantly- unlike alien slaves that charge up their lightning bolts, the Kingpin can (and will) zap players the instant players come into its line of sight. As such, it is important to stay out of sight of this beast at all times and to engage it around corners and above cover. Its psionic attacks and psionic defenses have made it immune to missile weapons, although this is unconfirmed.", "HLKingpin", "CMPMHL37" },
		{ "Combine Overwatch", "COMP_THREAT_2", "", "Combine_Soldier_MP7", "CMPMHL38", "Combine_Soldier_Shotgun", "CMPMHL39", "Combine_Elite_AR2", "CMPMHL40" },
	}},
	{{
		{ "Evil Ninjas", "COMP_THREAT_0", "\"Zilla sends his regards, Lo Wang...\"\n\nBrown Ninja - Can do all player actions (climb, duck, hide behind boxes). Fires an Uzi or throws shurikens. Will suicide from lack of honor. \n\nRed Ninja - Can do everything his brown counterpart does, plus he can shoot small rockets at you. \n\nGray Ninja - Has the ability to launch grenades at you, and is tougher than normal. \n\nOrange Ninja - Has the added ability to shoot heat seeking rockets at you, and is tougher than normal. \n\nShadow Ninja - The most fearsome of the lot, this Ninja uses the ancient skills to stay nearly invisible. He can blast you with two type of magic napalm, or use blinding flash bombs on you.", "SWNinja", "NINJA1", "NinjaRed", "NIRJA1", "NinjaOrange", "NIOJA1", "NinjaGray", "NIGJA1", "NinjaDark", "NINJA1" },
		{ "Henchmen", "COMP_THREAT_0", "Because evil ninjas were not enough, they had to send in totally annoying mercenaries to take out Lo Wang. \n\nHenchmen behave the same as Evil Ninjas but are generally a little weaker.", "SWHenchman", "HENCA1", "SWHenchmanRed", "HENDA1", "SWHenchmanGreen", "HENEA1", "SWHenchmanPurple", "HENFA1", "SWHenchmanOrange", "HENEA1" },
		{ "Assassin", "COMP_THREAT_2", "These female warriors carry a lethal crossbow, and you will find yourself dodging bolts from long distances. When they get closer they will loft sticky bombs in your direction, making it hard to stand still. Treat these ladies with some respect.", "SWAssassin", "ASSAA1" },
		{ "Coolie", "COMP_THREAT_3", "Walks around with a box of explosives. Poses little threat from a distance, but if he gets near you he blows up, causing severe damage.", "SWCoolie", "COOLA1" },
		{ "Coolie Ghost", "COMP_THREAT_3", "Not content with attacking you once, some Coolies will spawn a spectral ghost after they make their ultimate sacrifice. These apparitions float around phasing in and out of existence, taking time out to heave nasty gobs of bloody goo at you.", "SWCoolieGhost", "GHOSA1" },
		{ "Baby Ripper", "COMP_THREAT_3", "These are smaller versions of their parents, only they move faster, spit green goo and are very hungry.", "SWRipperBaby", "RIPBA1" },
		{ "Ripper", "COMP_THREAT_3", "Big-ape like monster. Jumps around and can cling to walls above you, waiting to drop at any moment. Or they will charge you at full speed and start ripping at your flesh. Will rip your heart out if you let him get too close.", "SWRipper", "RIPRA1" },
		{ "Hornet", "COMP_THREAT_1", "These overgrown yellow jackets will do minor damage, but beware a swarm of them. They are extremely fast and erratic moving, making them hard to hit, while they continually sting away at your health.", "SWHornetWasp", "SW27A1" },
		{ "Guardian", "COMP_THREAT_4", "These hard to kill beasts use swords at short range, switching to fireballs when farther away. Note: Sometimes after killing one, you can harvest its decapitated head and use it as a weapon.", "SWGuardian", "GUARA1" },
		{ "Wizard", "COMP_THREAT_0", "Do not let these old farts fool you. They spent their lives studying the arts of the Guardian and know how to use their attacks. \n\nWizards behave the same as Guardians but are generally a little weaker.\n\nThe Blue Wizard poses a decent challenge.\n\nThe Gray Wizard is a bit tougher. \n\nThe Red Wizard requires some ancient Chinese skills to eliminate.", "SWWizard", "WIZRA1", "SWWizardGray", "WIZ2A1", "SWWizardRed", "WIZ3A1" },
		{ "Serpent Apprentice", "COMP_THREAT_4", "During your adventure, you will meet these four-armed evil snake-like creations. Be wise and careful, since there exists a more powerful counterpart of this enemy...", "SerpentGod", "SERPA1" },
		{ "Big Baby Ripper", "COMP_THREAT_3", "The stronger counterpart of the Baby Rippers. Weird that even the babies have a tougher version...", "SWRipperBabyBig", "RI2BA1" },
		{ "Giant Ripper", "COMP_THREAT_5", "No doubt one of the toughest enemies you will encounter, remember well on how to take down the normal Rippers and use it for these bad boys!", "SWRipperBig", "RIP2A1" },
		{ "Sumo Apprentice", "COMP_THREAT_4", "During your adventure, you will meet these giant nightmares of sumo wrestlers. Be wise and careful, since there exists a more powerful counterpart of this enemy...", "SumoSmall", "SUMOC1" },
		{ "Serpent God", "COMP_THREAT_5", "This is a four-armed evil snake-like creation of Zilla himself. He can shoot devastating energy balls from his eyes, and when attacked, will spawn a circle of exploding Accursed Heads. These heads will launch themselves in order to protect their evil master. Be very prepared for battle when you meet a Serpent God.", "SerpentGodBig", "CMPMSW25" },
		{ "Giant Sumo", "COMP_THREAT_5", "This giant nightmare of a sumo wrestler will meet you with a vengeance. His mass alone will cause damage as he stomps on the ground, sending shock waves your way. He can also send Accursed Heads your way with a giant clap of his hands. These guys are very tough, and hold a surprise or two for you.", "SumoBig", "CMPMSW26" },
		{ "Hung Lo", "COMP_THREAT_5", "Lo Wang's twin brother. And your worst enemy.", "SWLoWangBrother", "BROHA1" },
		{ "Master Zilla", "COMP_THREAT_6", "Prepare well, Lo Wang, and heed all that Master Leep has taught you.", "MasterZilla", "CMPMSW28" },
		{ "Forest Rabbit", "COMP_THREAT_1", "You may encounter some of these cute little creatures along the way. What you do with them is your business.", "SWRabbit", "BUNNA1" },
	}},
	{{
		{ "Trooper", "", "The Trooper is the basic soldier of NeCrom's army, they are not particularly tough, but their ranged weapons make them dangerous if they see you first.", "CMTrooper", "C_TRA1" },
		{ "Metacop", "", "Although they obviously serve the big corporations they are not necessarily corrupt and are committed to policing as fairly as possible. Do not make enemies of them as they can be helpful and are certainly fighting against NeCrom and his cronies.", "Metacop", "C_MTA1" },
		{ "Stynx", "", "The Stynx are the thugs/thieves of the city, but naturally they are genetically engineered to improve their capacity for violence. The turn up in all kinds of roles including gangster, bouncer and security guard; they are not necessarily your enemy but most are.", "CMStynx", "C_YXA1" },
		{ "Cultie", "", "The Cultie is a follower of the alien Sri-Feng and study the dark arts of the Darklight. Unlike the player they do not have a Darklight Gem so their use of the 'powers' is quite limited, but they can still give a nasty hit with a magical attack particularly if there is more than one. There is a particularly adept type of Cultie called the Psimaster and they are more difficult to kill.", "CMCultie", "C_CUA1" },
		{ "Slug", "", "Slugs come in two varieties the small Slug and the rather larger Tunnel Slug. They are the small fry of the game but don't let them get close or they will eat your feet.", "CMSlugg", "C_SLB1" },
		{ "Ghoulie", "", "These creatures of the dark inhabit the dark tunnels of the city and shamble about looking to attack the still living. They are easy to avoid and can be destroyed from a distance.", "Ghoulie", "C_GHC1" },
		{ "Powered Ghoulie", "", "Unfortunately, some Ghoulies have mutated in to Crypt and Tunnel Ghoulies these are no tougher than normal but their attacks are far more lethal.", "PoweredGhoulie", "C_GHE1" },
		{ "Ganger (Male & Female)", "", "These ruffians have been successfully banished to the slums as they did not conform to the corporate view of how people should live. Male Gangers usually carry Powerblades and Females Shock Maces, the latter are the more dangerous; in general try and take Gangers out at range.", "GangerMale", "C_GMA1", "GangerFemale", "C_GFC1" },
		{ "Genno", "", "The Genno are the result of genetic experimentation; they make up seems to involve at least human and monkey DNA with other species thrown in for good measure. Perhaps this is why they are permanently cross and pathologically violent. They attack on sight and their blows come thick and fast, you need to take these out at range and with one shot you may not get a second one. There are some Genno's that have further mutated and can deliver a psionic attack as well.", "CMGenno", "C_GEG1" },
		{ "Wild Mung", "", "The Mung are yet more genetically modified creatures, in this case engineered as laboratory assistants, they have all the traits you would expect; intelligence, computer skills, loyalty and no imagination. As Mung are loyal to their employer, you will find the ones in the Laboratory you were brought to will be friendly. However the ones you will meet in SARCorp will not be.", "WildMung", "C_WMA1" },
		{ "Exceptional Wild Mung", "", "Not much can be said other than this Wild Mung is \"exceptionally\" tougher.", "ExceptionalMung", "C_WME1" },
		{ "Hell Spider", "", "These are sneaky monsters normally crawl around in groups and pounce on the unsuspecting. They look like mutated beetles and have a savage attack combined with an acid spit. The Hellspider and its cousin the Crypt Bug are child's play compared to the mutated Exceptional Hellspider which is incredibly tough and you will need to use most of your explosive armory to kill it.", "CMHellspider", "C_HSB1" },
		{ "Drone", "", "These little robots a primarily used for surveillance and defense and although they can not take much damage; usually try to take them out with on shot, their blast of energy is to be avoided. ", "CMDrone", "C_DRA1", "CMDrone_2", "C_DRK1" },
		{ "Dragonbat", "", "These are annoying beasts that fly and maneuver really fast usually from out of nowhere. They are not particularly tough but there two attacks can do a fair bit of damage. They do screech a lot so you can often hear them from afar and be wary.", "CMDragonbat", "CMPMCM15" },
		{ "Mongo", "", "The Mungo are all clones of an original who it is thought used to be a champion gladiator in the Ripperdome. The Mungo are now produced purely for fighting in the arena and it is difficult to walk in the Slums without coming across one. Kill him quick before he practices using his Razor Axe on you. It is rumored that there are mutated Mungo's that are much bigger and are originally named Big Mungo's; these are very tough customers and unless you have a fully stocked explosive arsenal it might be better to run.", "CMMongo", "C_MNA1" },
		{ "Metabot", "", "Initially the Metabot robots were used by the police force, but they proved so useful that the Corporations now use them as security guards who won't go to sleep. They are armored and have two blasters, but they are slow and stupid and are consequently not too much of a problem.", "Metabot", "C_MBA1" },
		{ "Legion of Doom", "", "These are NeCrom's special forces, they wear heavy armor and have built in rocket launchers and appear to have an inexhaustible supply of rockets. To kill them you need to dodge their rockets whilst firing your own.", "CMLoD", "C_LDA1" },
		{ "Tank", "", "NeCrom's army has a tank!?", "CMTank", "C_TKA1" },
		{ "Police Aircar", "", "The standard police force's method of transportation, this aircar will hunt you down so stay sharp and take it down!", "CMAircar", "C_PAA1" },
		{ "Gang X", "", "The Gang X are the weird result of some early experimentation with Darklight power. NeCrom no creates them to be his unquestioning henchmen. They can deliver some punishing attacks and very quickly, blast them from a distance.", "CMGangX", "C_GXA1" },
		{ "Mung", "", "The Mung are yet more genetically modified creatures, in this case engineered as laboratory assistants, they have all the traits you would expect; intelligence, computer skills, loyalty and no imagination. As Mung are loyal to their employer, you will find the ones in the Laboratory you were brought to will be friendly. However the ones you will meet in SARCorp will not be.", "CMMung", "C_MUA1" },
		{ "Sri-Feng", "", "These are the alien reptilian creatures that brought the Darklight powers to earth in the first place; so expect them to be good at them. They are also very tough and take a lot of killing, keep pounding them with conventional weapons so they have little time to unleash a power. Just before they do use a power their eyes glow red so run or duck behind something.", "Srifeng", "C_SFA1" },
		{ "Fire Mother", "", "A creature almost as fabled as the Earthmother. In most of the stories she's depicted as a beautiful woman who rules absolutely over a secret citadel deep in the Unholy Zones. Some of the stories treat her as a villainess, others as a revolutionary leader, and still others as a mischievous trickster.", "Firemother", "C_FMA1" },
		{ "Ne Crom", "", "A corporate warlord known for his ruthlessness and ambition. He is unofficially known to have extensive dealings with the denizens of the Unholy Zones. Dark rumors hint that he has strange - perhaps supernatural - powers.", "NeCrom", "C_NCA1" },
	}},
	{{
		{ "Terrainian", "COMP_THREAT_1", "These hard-shelled and fast-moving arachnids try to leap up and latch on to you. Back off quickly and blast them with a ranged weapon. You can also crack their shell by jumping on them repeatedly.", "RedMite", "PSEND1" },
		{ "BlueScorpion", "COMP_THREAT_1", "These creatures are no stranger to Egypt but don't expect to find a docile one around these parts. Kill it before it stings you!", "BlueScorpion", "P_BSA1" },
		{ "Anubis Zombie", "COMP_THREAT_2", "The mighty Anubis, Guardian of the Dead. The bodies of those warriors who went before you have been animated by the Kilmaats in the likeness of Anubis. They hunt you down relentlessly, throwing out magical bolts of blue energy or raking you with sharp claws if you let them get too close.", "AnubisWarrior", "ANUBA1" },
		{ "Kilmaat Sentry", "COMP_THREAT_3", "Your run-of-the-mill alien worker. Usually encountered working around alien structures, he will attack with a nasty laser pistol if disturbed.", "KilmaatSentry", "KILMA1" },
		{ "Bastet", "COMP_THREAT_3", "This is one fierce and wily lioness. She is extremely fast, has razor-sharp claws and can teleport at will - a lethal mix of skills in anyone's book.", "Bastet", "BASTA1" },
		{ "Hawk", "COMP_THREAT_1", "The ancient Egyptian tombs still have hawks lurking around and unfortunately these ones are not the friendly type.", "ExHawk", "HAWKA1" },
		{ "Omen Wasp", "COMP_THREAT_2", "These buzzing nasties flit about and deliver a nasty sting. They are very hard to target, so use caution when fighting them.", "OmenWasp", "OWDEA1" },
		{ "Ancient Mummy", "COMP_THREAT_3", "Fairly slow moving, but can dole out some serious damage. They use an enchanted staff to fire powerful phantom skulls at you (which, by the way, can also resurrect fallen mummies, so be extra careful if you encounter more than two at a time). Also, some of the phantom skulls are red, and if you are hit by one you suffer the mummy's curse...", "ExMummy", "PSMUF1" },
		{ "Magmantis", "COMP_THREAT_4", "This lava-dwelling denizen rises up to unleash high-speed fire balls at unlucky individuals. Move quick, keep your distance and take advantage of whatever cover you can find.", "Magmantis", "PSMAA1" },
		{ "Omen Wasp Necromancer", "COMP_THREAT_4", "A resurrected counterpart of the Omen Wasp, this one poses a greater threat so be quick and have lots of ammunition to exterminate this!", "OmenWaspNecro", "PSONA1" },
		{ "Ammit", "COMP_THREAT_5", "The dreaded \"Eater of the Dead\". It usually feasts on the souls of the newly dead, but has been enslaved by the Kilmaat to slay the living! A fearsome and tough foe, it possesses a nearly impenetrable armored hide and can smash your bones easily within its gaping maw. Normal attacks do little to no damage, so look for a weak spot and exploit it.", "Ammit", "AMITA1" },
		{ "Selkis", "COMP_THREAT_6", "This demonic nightmare is a result of alien genetic experiments. Even the most experienced of game players will be in for a surprise when fighting this beast.", "Selkis", "CMPMPS12" },
		{ "Set", "COMP_THREAT_6", "The most foul and evil of all the Egyptian gods, Set wants nothing more than to slowly devour your soul. After he smashes your body to a pulp, of course.", "PSSet", "PSETA1" },
		{ "Kilmaatikahn", "COMP_THREAT_6", "The leader of the Kilmaat forces here on Earth. Be afraid - be VERY afraid. \n\nAnd do not let your guard down when you kill her the first time. She still has one last trick up her sleeve...", "Kilmaatikahn", "CMPMPS14", "kilmaatikahn2", "KBOSW1" },
		{ "Ancient Wasp", "COMP_THREAT_2", "Kilmaatikahn can summon strange creatures at her will. Wasps will pose a threat so take them out before Kilmaatikahn can summon more!", "KilmaatikahnWasp", "KBS2J1" },
		{ "Mouth Parasite", "COMP_THREAT_2", "Kilmaatikahn can summon strange creatures at her will. Parasites will pose a threat so take them out before Kilmaatikahn can summon more!", "KilmaatMouthMinion", "KBS2H1" },
	}},
	{{
		{ "Old Skinny Coot", "COMP_THREAT_2", "Most of the town folk are a bit scared of that skinny old coot. No one can say for sure how old he is, but he's been livin' round here since long before anyone else can remember. Folks say he's been touched by some bad mojo, and now he cain't be killed. A few people have even claimed that they've actually seen the old man die. Somehow though, he always manages to come back. To make things worse, the old fart hates tresspassers, and thinks he owns the whole county. Hell, he's so damn old that maybe that's not so impossible to believe.", "OldSkinnyCoot", "S_O2A1" },
		{ "Groovy Old Coot", "COMP_THREAT_2", "We figured that after winning a free trip to Vegas at the Hickston Bingo Parlor, the skinny old coot might loosen up a might. Fat chance. All he did was come back from Vegas with a heap o' new shirts and pants, and he picked up some of that Vegas hipsters talk to boot. Seems that he's even more pissed off than before 'cause he lost all his entitlement money, and rumor has it that he even lost his land in a poker game. Our advice? Avoid this ornery old sumbitch at all costs, and if you seem, put on a pair of sunglasses... Jeez them shirts is loud!", "BlueGroovyOldCoot", "SCOOA1", "RedGroovyOldCoot", "RR32A1", "GreenGroovyOldCoot", "RR33A1", "WhiteGroovyOldCoot", "RR34A1", "RedPantsGroovyOldCoot", "RR35A1", "GrayGroovyOldCoot", "RR36A1", "DarkGreenGroovyOldCoot", "RR37A1", "BrownGroovyOldCoot", "RR38A1", "OrangeGroovyOldCoot", "RR39A1", "GhostGroovyOldCoot", "RR40A1" },
		{ "Billy Ray Jeeter", "COMP_THREAT_3", "Billy Ray has always been a bit of a loner, and doesn't care much for comp'ny (even though he does consider most folks to be his cousin, an' in his case, he's likely right). Like many folk round these parts, Billy Ray swims in the shallow end of the gene pool, if'n you catch my drift. Because of several generations of...errrr...selective breedin', he is one mammoth of a man. That boy's skull is so thick I swear you could crack a bowlin' ball on it. \n\nI heard a rumor about Billy Ray recently. Word has it he was out frog giggin' in the swamp late one night, and one of them alien space ships sucked his big ass up. They say they done cloned that boy, but was so disappointed with the results, they dumped the whole lot back into the swamp. Now I guess there's supposed to be hundreds of them Billy Ray clones traipsin' about, and no one knows which is the original. Hell, I don't see what's so hard to figger out...just look for the one with the corn mash on his breath. ", "BillyRayJeeter", "BRJTA1", "BillyRayJeeter_Brown", "RR06A1", "BillyRayJeeter_Gray", "RR08A1", "BillyRayJeeter_DarkGray", "RR10A1", "BillyRayJeeter_Ghost", "RR12A1" },
		{ "Turd Minion", "COMP_THREAT_1", "Rumor has it that them Turd Minions is actually made from alien fecal matter. Ayup, you heard right, alien shit! Seems them buggers have found some kind'a way to recycle their own crap. They bring it to life and use them little buggers to do all their work for them. Damn, I'm startin' to think I'm on the wrong side here. I mean, can ya imagine it? You could take a dump and have the little turd go plow the back 40! Ah, just as well, those little freaks probally would never get a lick o' work done, the way they always be hoppin' around like that. Nope, more likely they wouldn't be worth...Well, worth a shit I imagine.", "TurdMinion", "_URDA1" },
		{ "Swamp Minion", "COMP_THREAT_1", "Lately a new type of turd minion has been found in the swamps. Instead of throwing crap around, it pulls a frog out of somewhere and hucks it at you. Frogs are fun to hit at the baseball plate, but a rock-hard frog hitting your face at 90 miles per hour hurts. Terminate with extreme prejudice.", "TurdSwampMinion", "_UR2A1" },
		{ "Lava Minion", "COMP_THREAT_1", "What in the hell! Guess them lil' turd minions weren't satisfied jus' mutatin' once. Sems that a new breed's been spotted around the Dev Oil lava fields. Locals are callin' 'em \"Lava Minions\" and why not? They's completely resistant to heat damage from the lava, and have been reported to now hurl flamin' turds. Yikes!", "TurdLavaMinion", "_UR4A1" },
		{ "Frank Doyle", "COMP_THREAT_3", "Frank Doyle is the only biker we've seen around Hickston lately. He's devilish fast on his hog, stay around the corner when he drives by. I recommend guns - explosives won't do, he'll dodge any dynamite you throw his way. If he jumps off the bike and starts blazing away, duck around another corner fast. But here's a tip - Frank has the habit of keeping his guns in a back holster, so if you surprise him you can get the drop on him if you're fast. Scattergun wounds to the belly are hard to heal, even with the toughest leather jacket in the way.", "BlueFrankDoyle", "FRDYC1", "BlackFrankDoyle", "FRD5C1", "GreenFrankDoyle", "FRD2C1", "RedFrankDoyle", "FRD_C1", "BrownFrankDoyle", "8FRDC1", "DarkGreenFrankDoyle", "RR41C1", "GhostFrankDoyle", "RR44C1" },
		{ "Daisy Mae", "COMP_THREAT_2", "Hickston High's cheerleader leader went missing a few months ago. Either she pro-created something fierce in those few months, or she has a heck of a lot of sisters. Septumplets, maybe, enough for a whole cheer squad. Daisy Mae was working on her flaming baton trick when she disappeared, I'd keep an eye out for her and her boyfriend.", "RedDaisyMae", "CHERA1", "GreenDaisyMae", "CHE7A1", "DarkDaisyMae", "CHE4A1", "PartiDaisyMae", "2CHRA1" },
		{ "Daisy & Doyle", "COMP_THREAT_3", "Ew, gross. \n\nWhen you interrupt their lovin', prepare to fight both of them at once!", "DaisyNDoylie", "DYCHA0" },
		{ "Guard Dog", "COMP_THREAT_3", "Dogs round here ain't like them lazy city dogs; they gots t'earn their keep. You be might careful not to go messin' 'round with no farm dogs, 'cause they're awful temperamental about strangers bein' in their territory. Ya best pay attention to what I'm sayin' now, 'cause if ya get one of them mongreloids after yer ass, you'll be prayin' for the fastest cowboy boots that's ever graced the face of this earth.", "GuardDog", "GDOGO1", "GuardDog_Blood", "RR14O1" },
		{ "Jack 'O' Lope", "COMP_THREAT_2", "That head on yer Uncle Edward's wall is for real. Between the antlers and the bite, a healthy jack o'lope will cut right through your femoral ateries in no time. Good for practicing your target pistol shooting, and if you ever meet up with a corral full of jack o'lopes, you'll be glad to be carrying around a stick of TNT...", "Jackelope", "JY_7M1" },
		{ "Alligator", "COMP_THREAT_1", "It's slow. It's dumb. It's got teeth that will bite me. It's definitely dinner.", "Alligator", "A_LJA1" },
		{ "Mosquito", "COMP_THREAT_1", "You may have heard a yarn or two about the size of the insect life here in the deep South. Now, I suggest ya don't take these stories too lightly, 'cause I've seen some mosquitos in my time that could suck a full-grown steer bone dry. Hell, some farmers 'round these parts even claim that a 'skeeter can carry off a Javelina if it gets hungry enough. Ain't no bug repellent in the world gonna keep these bastards away, so ya best be keepin' a loaded shotgun handy if'n you're gonna go traipsin' through the backwoods.", "Mosquito", "MOSQA0" },
		{ "U.F.O. Saucer", "COMP_THREAT_2", "Sweet Jesus! A flying tin can top! Bubba get mah camera! Ah dang it, that thing just shot some beam and blew my camera into bits! That's it, Bubba get mah scattergun and some cow pies! \n\nWait, who's flying that thing actually? It's either Old Skinny Coot, Billy Jay Jeeter, a Turd Minion, a Guard Dog, a chicken, or a pig. Either way, when you shoot down that UFO, prepare to kill whoever was piloting that stupid thing!", "TurdUFO", "CMPMRR25", "ChickenUFO", "CMPMRR26", "CootUFO", "CMPMRR27", "DogUFO", "CMPMRR28", "PigUFO", "CMPMRR29", "BillyRayUFO", "CMPMRR30" },
		{ "Sheriff Hobbes", "COMP_THREAT_4", "Sheriff Hobbes is not a man to cross when on the wrong side of the law. For that matter, he ain't a man to cross when on the \"right\" side of the law neither. Lester T. Hobbes makes it well known that he puts up with no guff in his county. You'd probably find his brand of southern justice is a might extreme, so be sure you don't get on his bad side if you don't wanna end up in the swamps feedin' the 'gators.", "SheriffHobbes", "HOBBA1", "SheriffHobbes_Ghost", "RR47A1" },
		{ "Alien Hulk", "COMP_THREAT_4", "Well now, them alien critters don't appear to be the sharpest pencils in the box, but I'll be damned if they ain't the biggest. Not only that, but they is armed to the teeth (and I think even those might be weapons too). Far as I can tell, they's some kind of half critter, half machine type thing. All I know for sure is that if you really wanna kill one, you better blow his ass to bits. Otherwise, they seem to have some kinda backup battery contraption that keeps rechargin' after a while.", "AlienHulk", "HULKA1", "AlienHulk_Blue", "RR16A1" },
		{ "Frank Doyle on Bike", "COMP_THREAT_4", "Oh well looky here, Doyle brought along his stupid bike. He's tougher when mounted on that piece of crap that even has some guns mounted on it. \n\nIf I play mah cards right, I can kill Doyle without harming the bike. Everybody around here knows that only a redneck such as me can ride a bike like that, heh heh heh...", "DoyleBike", "DLK_A1", "DoyleBike_Green", "_DX5E1" },
		{ "Frank Doyle & Daisy Mae on Bike", "COMP_THREAT_4", "Well ain't love grand? Frank not only spruced up his favorite bike (and made a red bike that's more tougher), but he brought along two very hot ladies: Daisy Mae and an endless supply of goddamn molotovs!", "DoyleDaisyBike", "_DX2M1", "DoyleDaisyBike_Red", "_DX4C1" },
		{ "Alien Vixen", "COMP_THREAT_5", "It just pains my heart to have to fight such a luscuous example of femanine beauty. I guess when it comes right down to it though, I just can't stomach gettin' my ass whupped by some leather wearin' girlie. I must admit though, them twin machine guns look purty appealin'. 'Course, you wouldn't never catch me tryin' to use a contraception like that...not in public anyhow.", "GreenVixen", "RR22E1", "BrownVixen", "RR19E1", "BlueVixen", "VIXXE1", "RedVixen", "RR25E1", "DarkGreenVixen", "RR31E1", "SpecialVixen", "RR28E1" },
		{ "Momma Jack 'O' Lope", "COMP_THREAT_5", "Well, I guess the Jack 'O' Lopes had to come from somewhere. Hi, mama. It's basically just a bigger jackelope but tougher and can fart some deadly gas and... did she just crap out jackelopes from her butt?! I'm gonna tear yer head off and make lov-I mean- shit down your neck!", "BigJackelope", "J2_MO1" },
		//{ "King Hulk", "COMP_THREAT_5", "I only believe in one king, the King of Rock N' Roll! This bastard can fire one hell of a laser cannon and will plant those spikey dinosaur turf shit mines all around. And he smells like dog piss!", "KingHulk", "_ULKA1" },
		{ "Ass Face", "COMP_THREAT_5", "Well sweet Jesus on a flying unicorn humping its sweet cornbread doll! I suppose the locals around here call him Ass Face for a reason. What more can I say? He shits out turd minions from his butt and craps out poo from his mouth. And all that's poo making me hungry but for the wrong reasons. Boy oh boy, this son of a gun is toast!", "AssFace", "CMPMRR43" },
		{ "Queen Vixen", "COMP_THREAT_6", "Well cover me in gravy and set mah ass on fire! And I thought the regular Alien Vixens were so purty and kick ass. She ain't no quick rodeo so I better take care of her without getting mah ass killed!", "QueenVixen", "VIX7E1" },
	}},
	{{
		{ "Light Guard", "COMP_THREAT_2", "Weakest of the three processed humans, armed solely with a simple blaster.", "Q2LightGuard", "CMPMQ201" },
		{ "Shotgun Guard", "COMP_THREAT_2", "These loyal troops have an automatic scatter gun prosthetic.", "Q2ShotgunGuard", "CMPMQ202" },
		{ "Machine Gun Guard", "COMP_THREAT_2", "Bigger, meaner, and deadlier than above... with a machine gun for a right arm.", "Q2MachinegunGuard", "CMPMQ203" },
		{ "Enhanced Light Guard", "COMP_THREAT_2", "Feeling that the light guard still isn’t enough, they decided to improve him a bit.", "Q2EnhancedLightGuard", "CMPMQ204" },
		{ "Ripper Guard", "COMP_THREAT_2", "His arm-mounted weapon has been modified to accommodate a body-shredding Ion Ripper.", "Q2RipperGuard", "CMPMQ205" },
		{ "Hyper Blaster Guard", "COMP_THREAT_2", "These troops have a modified version of the Hyper Blaster as a deadly prosthetic.", "Q2HyperBlasterGuard", "CMPMQ206" },
		{ "Laser Guard", "COMP_THREAT_2", "Advancing Strogg technology has given these guards the ability to mount a high-powered laser on their arm.", "Q2LaserGuard", "CMPMQ207" },
		{ "Enforcer", "COMP_THREAT_2", "Description: Strong, muscle-bound warrior who dishes out chain gun speed damage.", "Q2Infantry", "CMPMQ208" },
		{ "Berserker", "COMP_THREAT_2", "This Bald-mutha is one deadly freak. He may hit the dirt easy, but he’ll get up and is relentless in his pursuits.", "Q2Berserker", "CMPMQ209" },
		{ "Gunner", "COMP_THREAT_3", "This cybernetic terror eats Mutants for breakfast before coming to work - on you. He does have one weakness, though. It takes a second for his hand to open up into the machine gun so take advantage of the brief delay.", "Q2Gunner", "CMPMQ210" },
		{ "Brains", "COMP_THREAT_2", "A vicious cyborg abomination with life-stealing tentacles protruding from its chest during attack.", "Q2Brain", "CMPMQ211" },
		{ "Parasite", "COMP_THREAT_3", "The Parasite makes Cujo look like Lassie on Prozac.", "Q2Parasite", "CMPMQ212" },
		{ "Mutant", "COMP_THREAT_3", "Comments: Run.", "Q2Mutant", "CMPMQ213" },
		{ "Gekk", "COMP_THREAT_2", "A lightning-fast amphibious creature that lives and hunts in the planet's proto-swamps.", "Q2Gekk", "CMPMQ214" },
		{ "Stalker", "COMP_THREAT_3", "These little buggers are vicious. They can cling to ceilings, pounce down on top of you to attack, then re-attach to the ceilings to evade your retaliation.", "Q2Stalker", "CMPMQ215" },
		{ "Flyer", "COMP_THREAT_2", "A small two-winged monster, comprised of a controlling brain and a cyborg body that allows it to levitate. ", "Q2Flyer", "CMPMQ216" },
		{ "Icarus", "COMP_THREAT_3", "Relies on a huge jet packed attached to its back, with laser blasters mounted into his shoulders.", "Q2Icarus", "CMPMQ217" },
		{ "Daedalus", "COMP_THREAT_4", "This is a more powerful version of the Icarus. He shoots an upgraded Blaster from his shoulder-mounted lasers. He utilizes the Power Screen to blunt the force of your attacks.", "Q2Daedalus", "CMPMQ218" },
		{ "Tank", "COMP_THREAT_4", "Get in, take your shot, and get out. Repeat as often as necessary. These metallic beasts can endure massive gunfire.", "Q2Tank", "CMPMQ219" },
		{ "Tank Commander", "COMP_THREAT_4", "These Tanks are a special class, designed to secure the Inner City from infiltrators.", "Q2TankCommander", "CMPMQ220" },
		{ "Medic", "COMP_THREAT_3", "As the name suggests, this threatening organism has the ability to awaken dead Strogg from eternal sleep.", "Q2Medic", "CMPMQ221" },
		{ "Brains (Beta Class)", "COMP_THREAT_4", "When revealed, his tentacles will pull you within range of his slashing hooked arms. When out of tentacle range, lasers from his eyes will cut his prey in half.", "Q2BrainBetaClass", "CMPMQ211" },
		{ "Technician", "COMP_THREAT_3", "An almost completely robotic brute, controlled by a brain that floats around inside it’s metal body in a red preserving fluid. This creature moves about by hovering on four jets that sit under its body and is equipped with three weapons: a shocking prod, a flesh-ripping claw, and a laser blaster. Use energy armor if you’ve got any.", "Q2Technician", "CMPMQ223" },
		{ "Iron Maiden", "COMP_THREAT_4", "The cyber-bitch from hell...not the kind of girl to take home to mom.", "Q2IronMaiden", "CMPMQ224" },
		{ "Gladiator", "COMP_THREAT_4", "With two massively mechanized legs and one shoulder-mounted railgun, the Gladiator is the daddy of all the adapted humanoids.", "Q2Gladiator", "CMPMQ225" },
		{ "Iron Maiden (Beta Class)", "COMP_THREAT_4", "This bitch is bad news. Her rockets will track your ass down, but they won’t around objects. So if she fires one off, look fast for cover.", "Q2IronMaidenBetaClass", "CMPMQ226" },
		{ "Gladiator (Beta Class)", "COMP_THREAT_5", "Persistence is the key in defeating this powerhouse. You must first deplete his Energy Armor, then you can move in for the kill.", "Q2GladiatorBetaClass", "CMPMQ227" },
		{ "Medic Commander", "COMP_THREAT_4", "If re-animating dead comrades and creating new enemies were not enough, this guy also fires an upgraded Blaster. Keep your eyes peeled for the S.O.B. He's itching to kick your butt!", "Q2MedicCommander", "CMPMQ228" },
		{ "Super Tank", "COMP_THREAT_5", "They defend highly important sectors of the city including the Laser Grid in Unit 3 and the Power Plant in Unit 6. They possess armor that outclasses even the Tank Commander. They are about three times the size of the Tank. They are essentially a giant tank torso mounted on a caterpillar tank tread base, hence the trademark \"squeaking tread\" sound they make while rolling about.", "Q2TankBoss", "CMPMQ229" },
		{ "Hornet", "COMP_THREAT_5", "The Hornet, also known as the \"Guardian\" or the Flying Boss, is a special class of Strogg above that of even the Tank Commander, rivaled only by the Tank Boss and the Makron itself. It has the appearance of an insectoid creature (thus the name Hornet).", "Q2Hornet", "CMPMQ230" },
		{ "Super Tank (Beta Class)", "COMP_THREAT_5", "The ultimate combination of man and machine has been enhanced with powerful energy armor.", "Q2SuperTank", "CMPMQ231" },
		{ "Carrier", "COMP_THREAT_5", "They don't call this guy, the Carrier for nothing. Make sure to concentrate your fire on it first and then take care of those pesky Flyers.", "Q2Carrier", "CMPMQ232" },
		{ "The Makron", "COMP_THREAT_5", "The Jorg is a Strogg exoskeleton piloted by the Strogg leader, the Makron. The Jorg is one of the most powerful enemies, second only to the Makron himself. After destroying the leader's communication, Bitterman chases the Makron to the rooftop of the Palace and through a teleporter that leads to the Final Showdown. It's here that the Bitterman confronts the Makron one on one. The Makron will always go into battle piloting the Jorg and will use it until it succumbs to damage, at which point the Makron will dismount it and attack the player on his own. \n\nThe Makron is the codename given by Humans to the supreme leader of the Strogg, chosen from the warlords based on strength, power, and endurance. The Makron resides in the northern area of Cerberon in the Palace City, where he commands the planet. The Makron serves as the link for all the Stroggs and his death would be catastrophic for thier forces as they are left confused and in turmoil.", "Q2Makron", "CMPMQ233", "Q2Jorg", "CMPMQ234" },
		{ "Black Widow Guardian", "COMP_THREAT_6", "The Black Widow is found in the Widow's Lair, protecting the Gravity Well and must be defeated to gain access to the Gravity Well's computer in order to plant the anti-matter bomb. As well as having the ability to spawn in Stalkers, the Widow is one of the few Strogg who have two forms. When her first form is defeated, she will teleport away and return moments later, suited up with stronger armor and more powerful weapons.", "Q2Widow", "CMPMQ235", "Q2Widow2", "CMPMQ236" },
	}},
	{{
		{"Knight Archer", "COMP_THREAT_1", "Sharpshooters brought into the world of Thyrion by Eidolon to assist in its conquest. Characterized by their horned helmets and armored tunics, these knights will fire a mix of green and red arrows at any foe it encounters. Although they deal decent damage, they move and attack slowly and can be easily overwhelmed. Encountered throught Thyrion, they are found mostly in Blackmarsh.", "Hexen2KnightArcher", "CMPMH201"},
		{"Ice Archer", "COMP_THREAT_2", "Knight Archers with icy cold abilities that only show up when the realm of Thyrion plunges into a dark winter following Eidolon's death. The most damaging of the Archer variants, as blue arrows are more powerful than red arrows. However, they are no tougher than ordinary Knight Archers.", "Hexen2IceArcher", "CMPMH202"},
		{"Archer Lord", "COMP_THREAT_3", "The Elite Knight Archers, possessing heavy armor and firing red and gold arrows at their enemies. They are very tough, do a lot of damage, and tend to guard important items.", "Hexen2ArcherLord", "CMPMH203"},
		{"Black Spider (small)", "COMP_THREAT_1", "Giant Arachnids brought into the world by Eidolon. Although they are quick, intimidating, and come in large numbers, they are nothing more than pests.", "Hexen2BlackSpiderSmall", "CMPMH204"},
		{"Black Spider (large)", "COMP_THREAT_1", "Giant Arachnids brought into the world by Eidolon. Although they are quick, intimidating, and come in large numbers, they are nothing more than pests.", "Hexen2BlackSpiderLarge", "CMPMH204"},
		{"Red Spider (small)", "COMP_THREAT_1", "Red Spiders native to hotter regions such as Mazaera and Thysis. Much tougher than Black Spiders, making them slightly more dangerous.", "Hexen2RedSpiderSmall", "CMPMH205"},
		{"Red Spider (large)", "COMP_THREAT_1", "Red Spiders native to hotter regions such as Mazaera and Thysis. Much tougher than Black Spiders, making them slightly more dangerous.", "Hexen2RedSpiderLarge", "CMPMH205"},
		{"Skull Wizard", "COMP_THREAT_3", "Sorcerers with steer skulls for a head that work for Eidolon. They teleport frequently and take frequent shots with their flaming skull spells. When they die they seeminly vanish into thin air, leaving behind their robes, their skull, and a single black spider. This suggests they may just be a magic cloak animated by a spider.", "Hexen2SkullWizard", "CMPMH206"},
		{"Shadow Wizard", "COMP_THREAT_4", "Much more powerful versions of the Skull Wizards first encountered in the militaristic continent of Septimus, they teleport more often, shoot more often, have more than 4x the HP, and can even summon spiders. On death, they collapse into the usual cloak as well as leaving behind up to 4 spiders.", "Hexen2ShadowWizard", "CMPMH207"},
		{"Stone Golem", "COMP_THREAT_2", "Soldiers made of animated rock who were formed during Eidolon's invasion. They rush potential targets implacably, attempting to beat them to death with their large fists and will sometimes attempt to slide into their enemies with great force. When killed, they fall to their knees and explode.", "Hexen2StoneGolem", "CMPMH208"},
		{"Crystal Golem", "COMP_THREAT_2", "A Golem made of pure crystal. Slightly tougher than the Stone Golem, there was one guarding the entrance to the chamber of Famine that heroes would need to enchant their weapons to defeat. Now you don't need any special magic to kill this thing, but unfortunately there is more than one.", "Hexen2CrystalGolem", "CMPMH209"},
		{"Fire Imp", "COMP_THREAT_1", "An insufferable little winged demon. They will hover around their prey in large numbers, evading frequently and throwing fireballs. They take 50% less damage from fire-based attacks. Not very deadly on their own.", "Hexen2FireImp", "CMPMH210"},
		{"Ice Imp", "COMP_THREAT_2", "Imps armed with ice magic, fires a spread of powerful icicle daggers at their enemies. Takes 50% less damage from ice-based attacks. Only moderately more dangerous than fire imps.", "Hexen2IceImp", "CMPMH211"},
		{"Iron Golem", "COMP_THREAT_3", "Golems made of pure iron that first appear in Thysis. As they are made of pure metal, they are much tougher than Stone Golems. Although they are too heavy to slide tackle, they possess a ranged attack: a gemstone missile that seeks its prey.", "Hexen2IronGolem", "CMPMH212"},
		{"Bronze Golem", "COMP_THREAT_4", "The most powerful of the Golem variants, and therefore the rarest. They are extremely large and durable, shaking the earth with their stomps. They can also sweep the area in front of them with a powerful laser.", "Hexen2BronzeGolem", "CMPMH213"},
		{"Sand Scorpion", "COMP_THREAT_2", "An oversized scorpion found in arid desert regions. Hardly the most fearsome opponents you will face, but their pincers and stinger can rip apart full grown humans, especially when caught in that fiendish three-hit combo.", "Hexen2YellowScorpion", "CMPMH215"},		
		{"Bog Scorpion", "COMP_THREAT_2", "Giant black scorpions that appear in volcanic and swampy regions. Very similar to sand scorpions. In fact, nearly identical. They do only marginally more damage and have twice the health.", "Hexen2BlackScorpion", "CMPMH216"},	
		{"WereJaguar", "COMP_THREAT_3", "Man-like apex predators wielding swords and shields found in Mazaera. They are quite agile, effortless dodging most attacks the player can throw at them as they close in to bash their enemies with their weapons. They can also block incoming attacks, and when their health falls below half they will grow berserk. When berserk, they move faster and deal more damage.", "Hexen2WereJaguar", "CMPMH217"},	
		{"WerePanther", "COMP_THREAT_4", "More deadly versions of the WereJaguar, found later in Mazaera. They do much more damage and are a lot tougher than ordinary WereJaguars, and possess a reflect ability.", "Hexen2WerePanther", "CMPMH218"},	
		{"Mummy", "COMP_THREAT_2", "Reanimated mummified corpses found in the tombs of Thysis, they shamble very slowly towards and attack by firing red arrows in bursts from their scepters. When they get close, they will simply whack their victims with the scepter. As they take damage, their limbs fall off until all they can do is feebly crawl towards their enemies in an attempt to bite them.", "Hexen2Mummy", "CMPMH220"},	
		{"Mummy Lord", "COMP_THREAT_4", "Mummified pharaohs and other nobles that are similar to ordinary mummies. However, they are twice as tough and can send a deadly wave of fire towards their enemies.", "Hexen2MummyLord", "CMPMH221"},	
		{"Medusa", "COMP_THREAT_5", "Gorgons that are only found in Septimus. They are extremely dangerous, firing lasers from their gaze to petrify their prey. When their prey retreats, they will fire powerful seeking snake daggers around corners. They take quite a bit of damage before they fall down, and their heads will stay alive a while after being disconnected from their head.", "Hexen2Medusa", "CMPMH223"},	
		{"Fallen Angel", "COMP_THREAT_3", "Fallen Angels who serve Eidolon, these monsters hover in the air and dash around frequently while firing magic stars and blades at would-be targets. When fired upon themselves, they retaliate by guarding with their wings.", "Hexen2FallenAngel", "CMPMH225"},		
		{"Fallen Angel Lords", "COMP_THREAT_4", "Experienced Fallen Angels who are much tougher and deadlier than their underlings. They have all the same abilities, in addition to a powerful laser they can use to cut down their targets.", "Hexen2FallenAngelLord", "CMPMH226"},		
		{"Snow Pentacle", "COMP_THREAT_1", "Strange leech-like creatures made of ice and stone found in groups in the caverns of Tulku. Their white color camouflaging them against their snowy environments, they lie in wait for unsuspecting prey. They hop from surface to surface, clinging to walls and ceilings and firing blood magic at their opponents. When leaping at a foe or just being delt sufficient damage, they willl self-destruct.", "Hexen2WhitePentacle", "CMPMH228"},		
		{"Stone Pentacle", "COMP_THREAT_1", "Strange leech-like creatures made of pure stone found in groups in the abandoned mines of Blackmarsh. Their white color camouflaging them against rocky terrain, they lie in wait for unsuspecting prey. They hop from surface to surface, clinging to walls and ceilings and firing blood magic at their opponents. When leaping at a foe or just being delt sufficient damage, they willl self-destruct.", "Hexen2BrownPentacle", "CMPMH229"},	
		{"Brown Yakman", "COMP_THREAT_3", "Large Ox-like beasts with ice-based magic abilities encountered throughout Tulku. They leap several feet into the air, charge at great speed, swipe with their claws, and shoot balls of ice magic at their opponents. They also have a very rare chance of using a special other attack. Brown Yakmen have an equal chance of ramming and using ice magic.", "Hexen2BrownYakman", "CMPMH230"},		
		{"Black Yakman", "COMP_THREAT_3", "Large Ox-like beasts with ice-based magic abilities encountered throughout Tulku. They leap several feet into the air, charge at great speed, swipe with their claws, and shoot balls of ice magic at their opponents. They also have a very rare chance of using a special other attack. Black Yakmen have a greater chance of using ice magic.", "Hexen2BlackYakman", "CMPMH231"},	
		{"White Yakman", "COMP_THREAT_3", "Large Ox-like beasts with ice-based magic abilities encountered throughout Tulku. They leap several feet into the air, charge at great speed, swipe with their claws, and shoot balls of ice magic at their opponents. They also have a very rare chance of using a special other attack. White Yakmen have a greater chance of charging.", "Hexen2WhiteYakman", "CMPMH232"},	
		{"Snow Tiger", "COMP_THREAT_4", "Endemic to Tulku, these are very similar to the WerePanther enemies with greater health and more damaging attacks.", "Hexen2SnowTiger", "CMPMH233"},	
		{"Siberian WereTiger", "COMP_THREAT_5", "Far and away the strongest Werecat enemy, having the most health, being the fastest, and doing the most damage. They also have the same reflect ability as the WerePanther.", "Hexen2WereTiger", "CMPMH234"},	
		{"Famine", "COMP_THREAT_5", "One of the Four Horsemen of the Apocalypse sent out to do the bidding of Eidolon. Controlling Blackmarsh, Famine teleports frequently and fires three seeking magic daggers. Occasionally, Famine will fire a laser that deals moderate damage and pulling the victim towards him.", "Hexen2Famine", "CMPMH214"},	
		{"Death", "COMP_THREAT_5", "The horseman who turned Mazaera into a volcanic wasteland, Death floats above the arena firing 3 different types of seeking projectiles. One is the same 3-dagger spread that Famine uses primarily, one is a seeking fireball that leaves a deadly ring of fire on the ground below it for several seconds. The last is a seeking skull that, on contact, summons a rain of bones from the sky above the victim.", "Hexen2Death", "CMPMH219"},	
		{"Pestilence", "COMP_THREAT_5", "Despite being one of the four horsemen of the apocalypse, Pestilence sets himself apart by riding atop a boar. Using his powers of disease and famine to topple the cultural and academic center of Thysis, Pestilence rules over the desolate wasteland with his crossbow in hand. Anyone who seeks to challenge his rule will more than likely be shot with his poisonous crossbow bolts or stunge to death by wasps, if they weren't trampled before hand. He is the fastest of the four horsemen.", "Hexen2Pestilence", "CMPMH236"},	
		{"War", "COMP_THREAT_5", "The horseman who appropriately conquered the most militaristic kingdom in Thyrion: Septimus. War rides at varying speeds on his armored horse and throws barrages of powerful homing axes. These metal axes are quite damaging just on their own, let alone in volleys of 3-8. Additionally, War will occasionally charge up a red magical axe, which does enough damage to nearly kill a player at full health on its own. War is the most durable of the four horsemen.", "Hexen2War", "CMPMH224"},
		{"Eidolon", "COMP_THREAT_6", "The third and most powerul of the Serpent Rider brothers, he entered a portal with the Chaos Sphere to take over the realm of Thyrion just like his brothers before him took Parthoris and Cronos. Eidolon frequently fires bouncing electric blasts and casts lightning strikes from the sky. After losing about half health, Eidolon grows to gargantuan size, after which his attacks grow far more frequent.", "Hexen2Eidolon", "CMPMH227"},	
		{"Praevus", "COMP_THREAT_6", "The toughest enemy in Hexen 2, and the toughest enemy in all of Samsara as well, Praevus is a powerful sorcerer who took the souls of the Serpent Riders several months after Eidolon's death to fuel his own ambitions. The attacks Praevus has access to are numerous and often very powerful and difficult to avoid. His magic spells include seeking stars, large waves of fire travelling across the ground, meteors from the sky, earthquakes, and even lightning strikes. During this battle, Praevus is surrounded by shield-like runes that change shape with his forms and defend him from oncoming attacks. Arguably the toughest foe you will ever face.", "Hexen2Praevus", "CMPMH235"},	
	}},
	{{
		{ "Siberian Guard (Arkangelsk)", "COMP_THREAT_1", "Soviet Conscripts tasked with guarding the Arkangelsk Dam in Siberia, these guys are seen wearing brown overcoats and exclusively carry KF7s. As they lack experience, they tend to miss a lot and can be dispatched rather easily.", "Goldeneye_GreatGuard2", "CMPMGE01" },
		{ "Russian Commandant", "COMP_THREAT_1", "Russian officers of high rank who gaurd the old Soviet outposts you find yourself sneaking through. Although they command a lot of heavily-armed men, they tend to wield only small handguns such as the DD44, Klobb, and PP7. Some are armed with grenades, but they are still a rather insignificant threat.", "Goldeneye_CommGuard", "CMPMGE02" },
		{ "Siberian Guard (St. Petersburg)", "COMP_THREAT_2", "Russian soldiers stationed in St. Petersburg Russia, assigned to defending cultural sites, intelligence HQs, and the city streets. Armed mostly with standard issue KF7s and DD44s, they can occasionally be seen dual-wielding DD44s.", "Goldeneye_GreatGuard", "CMPMGE03" },
		{ "Russian Soldier", "COMP_THREAT_3", "Standard soldiers of the standing army of the Russian Federation. Russian Soldiers are often seen with helmets, defending them from head trauma, and are armed with an assortment of mostly Ex-Soviet Bloc firearms, as well as rarely some heavy weapons. They come armed with grenades more often than not, giving them tools to help flush out their enemies. They have the second most diverse weaponry of any other guard type, and the only common enemy to be seen with either Rocket Launchers or Grenade Launchers.", "Goldeneye_OliveGuard", "CMPMGE04" },
		{ "Russian Infantry", "COMP_THREAT_2", "Traitorous troops of low rank who defected from the Russian Army, these brown fatigue-wearing henchmen are seen once in a Soviet missile silo in Kyrgystan wielding KF7s and covering Ouromov's escape. They are only engaged by Bond again in an Egyptian tomb serving Baron Samedi armed with ZMGs, both single and dual. The rapid fire rate of these SMGs can make them rather dangerous, and they wear helmets just like other Russian Soldiers do.", "Goldeneye_OliveGuard", "CMPMGE05" },
		{ "Siberian Special Forces", "COMP_THREAT_3", "Russian Special Forces agents clad in heavy winter coats. They are stationed at an abandoned outpost in Siberia where Goldeneye satellite testing was reported. They are the only enemies seen wielding Sniper Rifles, and some can even be seen using a Sniper Rifle in one hand and a Kloob in the other. Other Siberian Special Forces are seen with KF7s and Klobbs. As they are more experienced soldiers, they have a greater chance of hitting their target with their weapons.", "Goldeneye_SiberianForces", "CMPMGE06" },
		{ "Arctic Spetznaz Commandos", "COMP_THREAT_2", "Elite Spetznaz Forces sent to do the dirty work of the Russian state. Armed with KF7s, DD44s, and Klobbs, they will show up in great numbers as reinforcments. They can dual wield their smaller weapons and throw grenades. Spetznaz are one of few enemies to rarely show up in 'Elite' form, signified by wearing sunglasses. This gives them greater accuracy.", "Goldeneye_BlueCamGuard", "CMPMGE07" },
		{ "Janus Marine", "COMP_THREAT_3", "Heavily armed Mercs who serve the terrorist organization known as Janus. Janus Marines are mostly armed with D5K's and Phantoms, both single and dual. Their Flak Jackets give them much higher defenses than most other guard types, and can sometimes be classified as Elite. Elite variants always dual wield their weapons and have greater accuracy than normal.", "Goldeneye_ArmorGuard", "CMPMGE08" },
		{ "Jetpack Guard", "COMP_THREAT_2", "Janus Marines equipped with Jetpacks giving them limited flight capabilities. Although they use the same weapons as their more grounded counterparts, they are much less accurate and durable. Nevertheless, their jetpacks still give them a leg up in battle.", "Goldeneye_JetpackGuard", "CMPMGE09" },
		{ "Jungle Commando", "COMP_THREAT_3", "One of the few soldiers seen wielding US AR33 Assault Rifles, Jungle Commandos are Janus soldiers clad in green camoflage uniforms that disguise them against the lush jungle landscape of Cuba. They can throw grenades, frequently wear helmets, and when they're not using AR33s the instead use D5Ks and Cougar Magnums. The latter of which can pierce multiple targets and deal great damage to each.", "Goldeneye_CamGuard", "CMPMGE10" },
		{ "Janus Special Forces", "COMP_THREAT_4", "The Elite agents of the Janus Crime Sydicate, wherever Janus himself goes these guys are not far behind. They mean business, as the come with grenades and a substantial 'Elite' chance, but that's not all. They're armored and have access to the greatest variety of weaponry of any other guard, appearing with the typical Russian armaments of most guards along with AR33s, D5Ks, ZMGs, SPAS-12 Automatic Shotguns, and even single and dual RCP90s. They are the best at what they do, so engage with caution.", "Goldeneye_TrevGuard", "CMPMGE11" },
		{ "Drone", "COMP_THREAT_3", "An experimental Soviet copter drone armed with a pair of autoguns designed for defending important outposts. While they can do a lot of damage, they are rather large targets and you can hear them coming a mile away. Destroy them with caution, as they explode as soon as they fall to the ground.", "Goldeneye_Drone", "CMPMGE12" },
		{ "Oddjob", "COMP_THREAT_4", "An enigmatic assassin working for Aurum Goldfinger. He seemingly has super human strength, being able to smash a wooden banister with his bare hands. His main weapon is a razor-edged Bowler Hat, which he will throw like a frisby. This hat will slice through multiple opponents and bounce off surfaces until it eventually explodes. Despite his short appearance here, he's actually around Bond's height in Goldfinger.", "Goldeneye_Oddjob", "CMPMGE13" },
		{ "Jaws", "COMP_THREAT_4", "An assassin of massive stature working for Hugo Drax and one of Bond's toughest foes yet, Jaws is named for his jagged metal teeth that he uses to bite through objects such as thick rope. He is encountered in a launch base hidden in a an Aztec temple wielding two AR33s.", "Goldeneye_Jaws", "CMPMGE14" },
		{ "Moonraker Elite (Male)", "COMP_THREAT_5", "Yellow jumpsuit-clad henchmen who work for Hugo Drax, Moonraker elites guard the Moonraker launch base hidden in an Aztec ruin. Their choice of weapons make them quite formiddable. They are armed with AR33s primarily, but reinforcements are armed with a unique weapon: Moonraker Lasers, both single and dual. Moonraker Lasers can pierce multiple enemies and deal tremendous damage, but unlike the Cougar Magnum they shoot decently fast.", "Goldeneye_Moonguard", "CMPMGE15" },
		{ "Arkady Ourumov", "COMP_THREAT_4", "A general of the former Soviet Union who is first encountered in the 80s developing chemical weapons under the Arkangelsk dam. Now working for Janus securing the Goldeneye satellite key, Ourumov spends most of his time fleeing Bond. His choice of weapon is a single Silver PP7, which a custom-made PP7 handgun that fires the piercing magnum shots of the Cougar at an improved rate of fire.", "Goldeneye_Arkady", "CMPMGE16" },
		{ "Xenia Onatopp", "COMP_THREAT_5", "A sadistic Russian assassin with tremendous agility and strength. Normally using her looks to lure men into slow and painful death by asphixiation, when this doesn't work she opts instead for a rather deadly combination of weapons. Possessing a Grenade Launcher in one hand and an RCP90 in the other and great proficiency with both weapons, Xenia is not someone to stop moving around.", "Goldeneye_Xenia", "CMPMGE17" },
		{ "Baron Samedi", "COMP_THREAT_5", "Originally encountered in Haiti, Baron Samedi is a voodoo priest who possesses the seemingly supernatural abilities to raise from the dead and enchant his weapons. Met in the ruins of Egypt mainly to steal Fransisco Scaramanga's Golden Gun and taunt Bond, Samedi raises from the dead at least 3 times, each time with greater health and his DD44s using different attacks. MI6 intelligence has yet to conclude if he indeed has supernatural abilities or if he is a subject of genetic experimentation by S.P.E.C.T.R.E.", "Goldeneye_BaronSamedi", "CMPMGE18" },
		{ "Alec Trevelyan", "COMP_THREAT_5", "Going by many names, such as 006 and Janus, Alec Trevelyan is a former MI6 operative who turned coat after faking his own death back in 1985. He is the mastermind of the Goldeneye satellite hijacking and the final foe faced by Bond during the Goldeneye Operation atop an antenna cradle. Although Trevelyan is only encountered with a set of grenades and an AR33, Automatic Shotgun, or ZMG, don't be fooled. Trevelyan is a super spy just like James Bond, meaning he has mastered these weapons and has nearly flawless aim and reflexes. He's good.", "Goldeneye_Trevelyan", "CMPMGE19" },
		{ "Moscow Police", "COMP_THREAT_2", "The police force of the Russian capitol. Although they are not as skilled as the Mercenary commandos and Spentznaz operatives you would normally encounter, their access to police armaments gives them a wide variety of weapons to attack the player with. They have the third highest variety of weapons of any other guard.", "Goldeneye_GrayGuard", "CMPMGE20" },
	}},
	{{
		{ "Orc Warrior [3D]", "COMP_THREAT_1", "These treacherous little brutes come in groups guarding the halls of the Catacomb. Armed with spears, they don't do a lot of damage on their own, and they're not too durable, either. However, you still won't want to be cornered by a group of them. A little shorter than what you may expect an orc to look.", "Catacomb3D_Orc", "CT03A0" },
		{ "Mage [3D]", "COMP_THREAT_2", "Evil spellcasters under the employ of the Lich King Nemesis. These guys have grown more adept in their spellcasting over the years, dealing moderate damage per shot over the scratch damage they used to back in the day. On their own, they're a mere nuisance. In groups, however, they can be a significant threat.", "Catacomb3D_Mage", "CT04A0" },
		{ "Troll [3D]", "COMP_THREAT_3", "Large brutish beasts brainwashed by Nemesis that infest the caverns of the Catacomb. Armed with heavy morning stars, these monsters deal more damage than orcs, and have a much tougher hide to boot. Takes several magic missiles to bring down, but as long as you keep your distance you should be fine.", "Catacomb3D_Troll", "CT05A0" },
		{ "Bat [3D]", "COMP_THREAT_1", "Small, annoying flying rodents that camp out in dark, damp, and cool areas. The Catacomb happens to be one of those areas. Although they are swift and hard to hit, they pose very little to no threat whatsoever, even in swarms. You're not even likely to get rabies from them. Only thing is that you may find yourself ankle deep in quano wherever these bastards nest. Gross!", "Catacomb3D_Bat", "CT06A0" },
		{ "Red Demon", "COMP_THREAT_5", "Massive, primordial demonic beasts that dwell deep beneath the Catacombs, these big dudes are not to be messed with. They can tank several shots from your most powerful weapons, and close in on you quick. Once up close, they can tear you limb from limb in no time flat. Worse, Nemesis is often seen with a small army of these accompanying him. Keep your distance, stay cautious and aware of your surroundings, and don't try to give them a bear hug.", "Catacomb3D_RedDemon", "CT02A0" },
		{ "Nemesis [3D]", "COMP_THREAT_5", "Nemesis in one of his earliest incarnations (or perhaps a mere clone?). Although not at his full power just yet, he is still a significant threat. He shoots fireballs, which take away more than a quarter of the victim's life energy, and tends to respond to pain with more fireballs. When fighting any form of the Lich, it is best to come prepared.", "Catacomb3D_NemesisClone", "CT07A0" },
		{ "Zombie [Abyss]", "COMP_THREAT_1", "Lurking in the Towne Cemetary, a sad place where many souls have unfortunately departed this earth, lies dozens of shambling corpses of the dead. They rise from holes in the ground and quickly sneak up on unsuspecting prey, hoping to make them join their ranks.", "CatacombAbyss_Zombie", "CT08E0" },
		{ "Skeletal Warrior [Abyss]", "COMP_THREAT_3", "Living Skeletons who were talented swordsmen in their former lives. Their ehields give them added resiliance, withstanding your magic and allowing them to get close enough to cut you down.", "CatacombAbyss_SkeletonWarrior", "CT12A0" },
		{ "Orc Warrior [Abyss]", "COMP_THREAT_1", "These orcs found down in the Orc Mines beneath the Towne are different from the ones you found in the Catacomb. These ones have horns and a bigger spear, signifying higher toughness and authority over the Orcs you remember.", "CatacombAbyss_Orc", "CT03K0" },
		{ "Mage [Abyss]", "COMP_THREAT_2", "More deadly sorcerers employed by Nemesis, these mages make themselves distinct with the red robes as opposed to blue. However, these guys move and shoot much faster, making them far more of a threat.", "CatacombAbyss_Mage", "CT04G0" },		
		{ "Blue Demon", "COMP_THREAT_4", "Large, imposing horned demons found deep under the earth, Blue Demons have less health and do less damage than their red older brethren, but don't be fooled. They are still a big threat to you. Take them one at a time and don't careless, or you will be Satan Kibble.", "CatacombAbyss_BlueDemon", "CT09A0" },	
		{ "Wraith", "COMP_THREAT_1", "Shadowy, mischievous creatures found in the Cemetary and Mausoleum. These little freaks will appear out of seemingly nowhere to swipe at people with their sharp claws. A few decent shots, and they disappear into the darkness whence they came.", "CatacombAbyss_Wraith", "CT11A0" },	
		{ "Evil Eye (Abyss)", "COMP_THREAT_4", "Large, floating eyeballs with powerful lightning attacks that will viciously attack anything in sight with a stream of electric blasts. They can kill you in seconds and are also incorporeal, allowing them to sneak up on you effortlessly. However, they are slow, a large target, and don't have much health, making them relatively easy to dispose of.", "CatacombAbyss_EvilEye", "CT10A0" },	
		{ "Nemesis [Abyss]", "COMP_THREAT_5", "Nemesis after being resurrected by cultists deep beneath the Towne Cemetary. Tougher than any foe encountered up until now, Nemesis fires flaming skulls that will take away 1/4th of you HP, and will respond in kind to any damage directed towards him. Do not take on Nemesis without being prepared first.", "Catacomb3D_Nemesis", "CT07A0" },
		{ "Zombie [Armageddon]", "COMP_THREAT_2", "Lurking in the Towne or Morbidity, a haunting city abandoned on the edge of nowhere where only the dead dwell. They are tougher than other forms of zombies, and no less hungry for living flesh.", "CatacombArmageddon_Zombie", "CT08Q0" },
		{ "Skeletal Warrior [Armageddon]", "COMP_THREAT_3", "Former swordsmen who were tortured to death by Nemesis' minions. They now wander the halls of their passing, looking to avenge themselves with their sword and shield.", "CatacombArmageddon_Skeleton", "CT12K0" },
		{ "Mage [Armageddon]", "COMP_THREAT_0", "The most dangerous of wizards scheming under Nemesis, these wizards are more adept and tougher than their coworkers, and are not to be underestimated. Tougher variants have 100 HP.", "CatacombArmageddon_Mage1", "CT04M0" },		
		{ "Evil Eye [Armageddon]", "COMP_THREAT_4", "Similar to the eyes you found at the Mausoleum, these will fire continuously as long as there is a target in their line of sight, rather than a single rapid burst.", "CatacombArmageddon_EvilEye", "CT10A0" },
		{ "Killer Rabbit", "COMP_THREAT_2", "Seemingly unassuming, cute, fluffy bunnies that hide a deadly secret: These are no ordinary rabbits. Anyone who approaches them will be wildly swiped at with razor sharp claws by a hideous wererabbit with a thirst for blood.", "CatacombArmageddon_Bunny", "CT19A0" },
		{ "Giant Ant", "COMP_THREAT_1", "Rottweiler-sized ants that hatch deep beneath the caverns of morbidity, these enormous insects will swarm anything that invades their territory. Although they are quite durable, their mandibles are not very sharp and will do very little damage. Tougher variants have 180 health.", "CatacombArmageddon_GiantAnt1", "CT14A0" },
		{ "Succubus", "COMP_THREAT_3", "Conniving Demonesses who reside in the lair of the succubus. They fire flaming hearts that charm those who are weak of resolve into being mindless servants of hell. Until then, the hearts do devastating damage from a distance. Succubi are also a little hard to take out, possessing moderate HP.", "CatacombArmageddon_Succubus", "CT17A0" },
		{ "Treant", "COMP_THREAT_4", "Living trees whom reside in the dark woods. Although they move slow, they are exceptionally tough and deal a lot of damage. When slain they burst into flames, damaging anything that dares wonder nearby.", "CatacombArmageddon_Treant", "CT18A0" },
		{ "Viper", "COMP_THREAT_3", "Gorgons who lurk in the mysterious gardens outside the Towne. Disguising themselves as statues until prey wonders nearby, they emerge with a pair of scimitars and slice down foolhardy mortals.", "CatacombArmageddon_Viper", "CT15A0" },
		{ "Two-Headed Demon", "COMP_THREAT_5", "Similar to Red Demons and perhaps even deadlier, as they can withstand hitstun to get in closer and faster to rip you apart. Found held captive in a high-tech facility located underground, and for good reason.", "CatacombArmageddon_TwoHeadedDemon", "CT16A0" },
		{ "Wretched Pox", "COMP_THREAT_2", "Hideous ogres hiding in the forest and cave regions. These beast swipe with their claws like a lot of other monsters of the Catacomb, but this one has a catch. Inside their bulbous exterior are highly volatile stomach acids, causing them to explode violently upon death.", "CatacombArmageddon_Pox", "CT20A0" },
		{ "Nemesis [Armageddon]", "COMP_THREAT_6", "Nemesis after coming back yet again to conquer the crystal tower and rule the world. This time his shots take away 40 health. That's right, 3 hits and you're done. Don't make too many mistakes.", "CatacombArmageddon_Nemesis", "CT07L0" },
		{ "Android Mage", "COMP_THREAT_3", "Similar to the robed magicians of the distant past, these machines will float high above the ground and fire on targets with their dual plasma blasters. They deal moderate damage and have moderate health, and are more a threat in groups.", "CatacombApocalypse_CyberMage", "CT21C0" },	
	    { "Cyber Ant", "COMP_THREAT_4", "Cybernetic insects with laser cannons and a tough, armored shell. They may not seem all that dangerous, but they move quickly, do a fair amount of damage, and are very quick to retaliate.", "CatacombApocalypse_CyberAnt", "CT23A0" },		
		{ "Invisible Horror", "COMP_THREAT_4", "Camoflaged experimental creatures that are entirely invisible until attacking, dying, or being hurt. Good luck detecting one of these before it's too late, and you get your entrails scooped out.", "CatacombApocalypse_InvisibleHorror", "CT22C0" },		
		{ "Oil Monster", "COMP_THREAT_2", "Creatures made entirely out of some strange black liquid. They appear at first as puddles that can't be shot, rise and solidify to a more solid form, and shoot a strange magical bolt, before receding back into the puddle. Rather stealthy and annoying, and can corner players at inconvenient moments.", "CatacombApocalypse_Spectre", "CT29D0" },		
		{ "Orc Wizard", "COMP_THREAT_4", "Powerful Orcish spellcasters that pack a punch. They don't have that much health, but deal far more damage than the robed mages they replace, and can potentially kill a healthy player in 3 hits.", "CatacombApocalypse_Wizard", "CT31A0" },	
		{ "Cyber Demon", "COMP_THREAT_4", "Cybernetic Beasts the resemble the demonic hordes of yore. While they are too tough, they can walk through a fusilade of missiles without breaking stride. You had better back off before you become a mechanical abomination's lunch.", "CatacombApocalypse_CyberDemon", "CT25A0" },
		{ "Sentry Eye", "COMP_THREAT_5", "Futuristic counterpart of the Evil Eyes of the past. They behave mostly the same, however, with the upgrade in technology comes much higher damage and more projectiles. You cannot tank these shots, take cover and take your time or you will be cooked.", "CatacombApocalypse_SentryEye", "CT24A0" },
		{ "Devil Ray", "COMP_THREAT_3", "Floating stingrays that shoot sonic blasts at foes from afar. Not all that dangerous on their own, but they are prone to swarming in larger numbers.", "CatacombApocalypse_MantaRay", "CT26A0" },
		{ "Cyber Pox", "COMP_THREAT_4", "Cybernetic beasts that are similar to Wretched Poxes. However, instead of being frail melee combatants, they are durable ranged mechs with plasma cannons. When slain, they short circuit and explode, damaging anything nearby and leaking some kind of strange white fluid.", "CatacombApocalypse_CyberPox", "CT27A0" },
		{ "Walking Tank", "COMP_THREAT_4", "Exactly as it sounds. These are found stamping around in the fire nodes of time, shooting quickly with their cannons at opponents. Take quite a bit of punishment and dish out just as much, as you would expect a tank to do.", "CatacombApocalypse_WalkingTank", "CT30A0" },
		{ "Time Lord", "COMP_THREAT_5", "A terrifying visage of a future most bleak. Time Lords are found in the corridors of time, protecting the twisted fabric of reality from being taken from Nemesis' grasp. And boy are they good for the job. Armed with magic missile streams similar to Petton's own Zappers, these nasty skulls can end you in no time.", "CatacombApocalypse_TimeLord", "CT28K0" },
		{ "Red Mutant", "COMP_THREAT_1", "A large red mutant found in the wastes outside the city. They have sharp claws that are capable of clawing through tank armor, but are too slow to make good use of them, and die quickly.", "Hovertank3D_RedDemon", "HT00A0" },
		{ "Squid", "COMP_THREAT_1", "Some kind of floating, cybernetic, tentacled creature. All that it can really do is flail around, but it's damaging enough.", "Hovertank3D_Squid", "HT01A0" },
		{ "Hovertank", "COMP_THREAT_3", "A hostile enemy Hovertank encountered in the wasteland. It's decently durable, but what is most concerning is its cannon, which can do up to half your health in damage.", "Hovertank3D_Hovertank", "HT02A0" },
		
	}},
};

str CompendiumCredits = "\cmLead Developer\n\cjShiny Metagross
\n\n\cmExecutive Developers\cj\nMagnolia\nShadowlink223
\n\n\cmAssistant Developers\cj\nRadioactiveTurtle\nLtMajorDude\nNorwegianLoki\nZircon
\n\n\cmLead Beta Tester\cj\nPangoro
\n\n\cmBeta Testers\cj\nFlynn Taggart\nNecron 99\nLaserPope\nLaggy Blazko\nCubebert\nRadioactiveTurtle\nCrazyboy88\nLuisDHR19971\nNautilus\nTriaxis
\n\n\cmDiscord Managment\cj\nMeleemario\nLuisDHR19971\nZircon\nPangoro
\n\n\cmFormer Developers\cj\nJesh\nDynamo\nHiragamer98\nIvanDobrovski
\n\n\cmAdditional Credits\cj
\nTerminus for creating Samsara
\nIjon Tichy for making many Samsara systems
\nKinsie for maintaining Samsara after 0.31
\nDonald for creating Witchaven and Half Life class
\nGardevoir for their Strife addon
\nCyantusk for balance tweaks and In Pursuit of Greed Class
\nCruduxy Pegg for polishing ZBloodX addon
\nBouncyTEM for their Corridor 7 addon
\ntehvappy50 for their Doom64 addon
\nThe_Riet for adding Katarn
\nLex Safonov for their Shadow Warrior TC
\nPresidentPeople for allowing the use of their Zandronum player sprites temporarily
\nMax-ED for their Re-Exhumed addon
\nDoorhenge for making widescreen friendly hexen mace
\nKnight_Kin for making the Hexen weapons improvement project
\nScotty for creating the code for a laser guided RPG system
\nTheCamaleonMaligno for their Q2 addon as a base
\nLanHikariDS for making a fullscreen bitterman hud
\n-Jes- for tweaking Eleena
\n\n\cmSpecial Thanks\cj
\nHiragamer for his amazing work on HUDs and every art related stuff
\nZircon for coming up with tipbox and some Hexen 2 ideas
\nWatermelon for teaching Jesh ACS
\nFlynn Taggart for coming up with ideas and being a good artist
\nJack Freeman for services for the mod and creating the original Bond class
\nMeleemario for being a good friend to Shiny Metagross
\nLtMajordude for gathering information needed to make this Compendium possible
\nGZDoom and Zandronum developers
\nID Software (For Doom, Doom II, Catacomb 3D, Wolfenstein 3D, Quake, and Quake II, as well as publishing Heretic, Hexen, and Hexen II. And the Doom engine, this project wouldn't be possible without it)
\nTeam TNT for TNT Evilution
\nRaven Software (For Heretic, Hexen, Hexen II, Hexen II Portals of Praevus, CyClones, and ShadowCaster)
\nJAM Productions (For Blake Stone)
\nDIP (Developers of Incredible Power) (For Rise of the Triad)
\nApogee Software (For publishing Blake Stone & Rise of the Triad)
\nAccolade Inc. (For Eradicator)
\nMonolith Productions (For Blood)
\nMidway Games LtD. (For Doom 64)
\nCapstone Software (For Corridor 7, Witchaven, and Operation Body Count)
\nFenris Wolf (For Rebel Moon Rising)
\nRogue Entertainment (For Strife and Quake Mission Pack 2: Dissolution of Eternity)
\nMind Shear Software (For In Pursuit Of Greed/Assassinators)
\nInsomniac Games (For Disruptor)
\nXatrix Entertainment (For Redneck Rampage and Quake 2 Ground Zeros)
\nLucasArts Entertainment Company LLC (For Star Wars Dark Forces and Jedi Knight Dark Forces II)
\nValve Software (For Half Life and Half-Life 2)
\nGearbox Software (For Half-Life Opposing Force and Blue Shift)
\n3D Realms Entertainment Inc. (For Duke Nukem 3D and Shadow Warrior)
\nOrigin Systems (For Cybermage)
\nLobotomy Software (For Powerslave)
\nHipnotic Software (For Quake Mission Pack 1: Scourge of Armagon)
\nRareWare LtD. (For Goldeneye 007)
\nEon Productions (For the James Bond 007 film franchise and the Goldeneye Movie)
\nSoftDisk Inc. (For Catacomb Adventure series)
\nWolf Skevos Jones (For the Castle Totenkopf SDL mod for Wolfenstein 3D), as well as being an inspiration to develop mods
";

// I don't see the need to congest the regular hero arrays with double the length for one hero, so I will bite a bullet and make a separate one

int drawclouds = 0;

Script "Samsara_Compendium_Initiate" (void) Net
{
	if(!CheckInventory("BondWatchToken"))
	{
		if(!CheckInventory("CompendiumOpened"))
		{
			GiveInventory("CompendiumOpened",1);
			int execute = ACS_NamedExecuteWithResult("Samsara_Compendium");
			SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
		}
		else
		{
			TakeInventory("CompendiumOpened",1);
			SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
		}
	}
}

Script "Samsara_Compendium" (void) Net Clientside
{
	int idstart = 100;
	int cursorx, cursory, offsety, offsetx, menuindex, lastmenuindex, a, menutab, lastmenutab, menuitem, lastmenuitem, scrollcounter, scrolltimer, index, scalex, scaley, hitpoints, newtid, listyposition, listindex, condition, listclick, monsterskin, altskin, prevskin, monsteraccess;
	str seesound, activesound, painsound, deathsound, description;
	int hudboundsx = 1440;
	int hudboundsy = 972;
	int hudcenterx = hudboundsx/2;
	int hudcentery = hudboundsy/2;
	int squarecenter = FixedDiv(hudboundsx+hudboundsy,2.0);
	int scrollmax = 400;
	int scrollmaxcounter;
	int scrollstep = 4;
	int hoverindex, lasthover;
	int previewopened = false;
	cursorx = hudcenterx;
	cursory = hudcentery;
	//SetPlayerProperty(0,1,PROP_TOTALLYFROZEN);
	int revolutions = 0;
	int maxrevolutions = 32;
	int fontscaledx, fontscaledy;
	while(CheckInventory("CompendiumOpened"))
	{
		int mousesensitivity = 1.0;//GetCvar("mouse_sensitivity");
		int forwardmove = GetPlayerInput(-1, INPUT_FORWARDMOVE);
		int sidemove = GetPlayerInput(-1, INPUT_SIDEMOVE);
		int yaw = GetPlayerInput(-1, INPUT_YAW);
		int pitch = GetPlayerInput(-1, INPUT_PITCH);
		int buttons = GetPlayerInput(-1, INPUT_BUTTONS);
		int oldbuttons = GetPlayerInput(-1, INPUT_OLDBUTTONS);
						
		if(yaw > 1 || yaw < -1)
			cursorx -= FixedMul(yaw/16,mousesensitivity);
		
		if(pitch > 1 || pitch < -1)
			cursory -= FixedMul(pitch/16,mousesensitivity);
		
		if(cursorx < 0)
			cursorx = 0;	
		else if(cursorx > hudboundsx)
			cursorx = hudboundsx;
			
		if(cursory < 0)
			cursory = 0;
		else if(cursory > hudboundsy)
			cursory = hudboundsy;
		
		//PrintBold(s:"cursorx: ", d:cursorx, s:" cursory: ", d:cursory);
		SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.95), FixedMul(hudboundsx,0.425));
		SetFont("CMPSKYD");
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16200, CR_UNTRANSLATED, hudcenterx*1.0, hudcentery*1.0, 0);
		SetHudClipRect(0,0,0,0,0);
		SetFont("SXHCURS");
		SetHudSize(hudboundsx,hudboundsy,true);
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15986, CR_UNTRANSLATED, (cursorx*1.0), (cursory*1.0), 1.0);
		SetFont("CMPSDOOM");

		if(menuindex == 0)
		{
			scrollstep = 4;
			scrollmax = 400;
			drawclouds = 1;
			ACS_NamedExecuteAlways("CompendiumCloudGenerator",0,1440,972,0);
			SetFont("CMPSDOOM");
			SetHudClipRect(0,0,0,0,0);
			SetHudSize(hudcenterx,hudcentery,true);
			HudMessage(s:"Close: ",k:"samsara_compendium"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15988, CR_BLACK, (FixedMul(hudcenterx,0.033)<<16)+0.1, (FixedMul(hudcentery,0.955)<<16)+0.1, 0.1);
			
			if(cursorx < (FixedMul(hudboundsx,0.98)) && cursorx > (FixedMul(hudboundsx,0.905)) && cursory < (FixedMul(hudboundsy,0.9875)) && cursory > (FixedMul(hudboundsy,0.967)))
			{
				hoverindex = CLASSCOUNT+1;
				if(hoverindex != lasthover && hoverindex != 0)	{ lasthover = hoverindex; LocalAmbientSound("Compendium/Hover",104); }	
				HudMessage(s:"Credits"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15987, CR_WHITE, (FixedMul(hudcenterx,0.967)<<16)+0.2, (FixedMul(hudcentery,0.955)<<16)+0.1, 0.1);
				if(buttons & (BT_USE|BT_ATTACK))
						menuindex = hoverindex;
			}
			else
			{
				if(lasthover > CLASSCOUNT) { hoverindex = 0; lasthover = 0; }
				HudMessage(s:"Credits"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15987, CR_BLACK, (FixedMul(hudcenterx,0.967)<<16)+0.2, (FixedMul(hudcentery,0.955)<<16)+0.1, 0.1);
			}
			
			SetHudSize(hudboundsx,hudboundsy,true);
			if(lastmenuindex != menuindex) { removemessages(15987,16185); removemessages(16180,16189); lastmenuindex = 0; scrollcounter = 0; scrolltimer = 368; }
			int locationx, locationy;
			int wheelangle = -0.25;
			int rot;
			for(a = 0; a < CLASSCOUNT; a++)
			{		
				//SetHudClipRect(hudcenterx-64,16,128,rectboundariesy+16);
				//HudMessage(s:ClassInfo[a][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16000+a, CR_UNTRANSLATED, hudcenterx*1.0, offsety*1.0, 1.0);
				locationx = hudcenterx+((squarecenter/4*cos(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*a)))>>16);
				locationy = hudcentery+((squarecenter/4*sin(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*a)))>>16);
				if((cursorx < locationx+24 && cursorx > locationx-24) && (cursory < locationy+24 && cursory > locationy-24))
				{
					hoverindex = a+1;
					if(hoverindex != lasthover && hoverindex != 0)	{ lasthover = hoverindex; LocalAmbientSound("Compendium/Hover",104); }	
					SetFont(ClassInfo[a][0][9]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16000+a, "white", locationx*1.0, locationy*1.0, 1.0, 0.9);
					if(buttons & (BT_USE|BT_ATTACK))
						menuindex = a+1;
				}
				else 
				{	
					SetFont(ClassInfo[a][0][8]); 
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING|HUDMSG_ALPHA, 16000+a, "black", locationx*1.0, locationy*1.0, 1.0, 0.9); 	
					locationx = hudcenterx+((squarecenter/4*cos(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*(lasthover-1))))>>16);
					locationy = hudcentery+((squarecenter/4*sin(wheelangle+(FixedDiv(1.0,CLASSCOUNT*1.0)*(lasthover-1))))>>16);
					if(((cursorx > locationx+24 || cursorx < locationx-24) || (cursory > locationy+24 || cursory < locationy-24)) && lasthover <= CLASSCOUNT) { hoverindex = 0; lasthover = 0; }	
				}			
				//SetHudClipRect(0,0,0,0);
			}
			//wheel rotation
			if(rot >= 29) { rot = 0;  }
			
			SetHudSize(fixedmul(hudboundsx,0.55),fixedmul(hudboundsy,0.55),true);
			SetFont(CompendiumWheelRot[rot]);
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16181, CR_UNTRANSLATED, fixedmul(hudcenterx,0.55)*1.0, fixedmul(hudcentery,0.55)*1.0, 0);
			SetHudSize(hudboundsx,hudboundsy,true);
			SetFont("CMPCNTSK");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16180, CR_UNTRANSLATED, hudcenterx*1.0, hudcentery*1.0, 0);
			if(revolutions <= maxrevolutions)
			{
				PrintBold(d:rot);
				rot += 2 * (maxrevolutions - revolutions)/4;
				if(rot >= 29) { rot = 0; revolutions++; LocalAmbientSound("Compendium/Wheel/Spin",127);}
			}
		}
		else if(menuindex <= CLASSCOUNT)
		{
			scrollstep = 4;
			scrollmax = 400;
			drawclouds = 0;
			//======================================================================================================== Draw
			if(lastmenuindex != menuindex || lastmenutab != menutab || lastmenuitem != menuitem || altskin != prevskin)
			{
				//Init
				if(lastmenuindex != menuindex)
				{
					LocalAmbientSound("marathon/shieldhit",88);
					altskin = 0;
					listyposition = 0;
					menutab = 1;
					menuitem = 1;
					listindex = 1;
					removemessages(16180,16189);
				}
				if(lastmenutab != menutab)
				{
					LocalAmbientSound("marathon/shieldhit",88);
					listyposition = 0;
					menuitem = 1;
					listindex = 1;
					removemessages(16170,16175);
				}
				if(altskin != prevskin)
				{
					listyposition = 0;
					menuitem = 1;
					listindex = 1;
				}
					
				SelectionColors[0] = ClassInfo[menuindex-1][altskin][25];
				SelectionColors[1] = ClassInfo[menuindex-1][altskin][26];
				prevskin = altskin;
				monsterskin = 0;
				removemessages(15987,16180);
				scrollcounter = 368;
				scrolltimer = 0;
				lastmenuindex = menuindex;
				lastmenutab = menutab;
				lastmenuitem = menuitem;
				previewopened = false;
				
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][0]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][0]);
				
				SetHudSize(fontscaledx,fontscaledy,true);
				SetFont(ClassInfo[(menuindex-1)][altskin][13]);
				HudMessage(s:"Back: ",k:"+altattack"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 15988, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.033)<<16)+0.1, (FixedMul(fontscaledy,0.955)<<16)+0.1, 0);
				
				HudMessage(s:"Role: ",s:ClassInfo[menuindex-1][altskin][7]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16002, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.05)*1.0, 0);
						
				// need consistent spacing so I must separate these into two
				HudMessage(s:"Damage:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16003, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.07)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][altskin][2]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16004, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.9)<<16)+0.1, FixedMul(fontscaledy,0.07)*1.0, 0);

				HudMessage(s:"Defense:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16005, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.09)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][altskin][3]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16006, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.9)<<16)+0.1, FixedMul(fontscaledy,0.09)*1.0, 0);
						
				HudMessage(s:"Range:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16007, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.11)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][altskin][4]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16008, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.9)<<16)+0.1, FixedMul(fontscaledy,0.11)*1.0, 0);
						
				HudMessage(s:"Attack Speed:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16009, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.13)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][altskin][5]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16010, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.9)<<16)+0.1, FixedMul(fontscaledy,0.13)*1.0, 0);
						
				HudMessage(s:"Difficulty:"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16011, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.75)<<16)+0.1, FixedMul(fontscaledy,0.15)*1.0, 0);
				HudMessage(s:ClassInfo[menuindex-1][altskin][6]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16012, ClassInfo[(menuindex-1)][altskin][14], (FixedMul(fontscaledx,0.9)<<16)+0.1, FixedMul(fontscaledy,0.15)*1.0, 0);
					
				SetHudSize(hudcenterx,hudcentery,true);
				SetFont(ClassInfo[menuindex-1][altskin][10]);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16180, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.725)<<16), FixedMul(hudcentery,0.1)*1.0, 0);
				SetFont(ClassInfo[menuindex-1][altskin][11]);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16013, CR_UNTRANSLATED, (hudcenterx/2)*1.0, FixedMul(hudcentery,0.1)*1.0, 0);
				SetFont(ClassInfo[menuindex-1][altskin][12]);
				SetHudSize(hudboundsx,hudboundsy,true);
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16014, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.5)<<16)+0.1, (FixedMul(hudcentery,0.33)<<16)+0.2, 0);

				if(strlen(ClassInfo[(menuindex-1)][altskin][17]) != 0)
				{
					SetFont(ClassInfo[(menuindex-1)][altskin][17]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.1525));
					HudMessage(s:"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16187, CR_UNTRANSLATED, 0.1, (FixedMul(hudcentery,0.05)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][18]) != 0)
				{
					SetFont(ClassInfo[(menuindex-1)][altskin][18]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.175), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.8), FixedMul(hudboundsx,1.1));
					HudMessage(s:"aaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaaa"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16188, CR_UNTRANSLATED, 0.1, (FixedMul(hudcentery,0.175)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][19]) != 0 && strlen(ClassInfo[(menuindex-1)][altskin][22]) == 0)
				{
					SetFont(ClassInfo[(menuindex-1)][altskin][19]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.95), FixedMul(hudboundsx,1.1));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16186, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.025)<<16)+0.1, (FixedMul(hudboundsy,0.175)<<16)+0.1, 0);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16185, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.975)<<16)+0.2, (FixedMul(hudboundsy,0.175)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				else if(strlen(ClassInfo[(menuindex-1)][altskin][19]) != 0)
				{
					SetFont(ClassInfo[(menuindex-1)][altskin][19]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.95), FixedMul(hudboundsx,1.1));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16186, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.025)<<16)+0.1, (FixedMul(hudboundsy,0.175)<<16)+0.1, 0);
					SetFont(ClassInfo[(menuindex-1)][altskin][22]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16185, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.975)<<16)+0.2, (FixedMul(hudboundsy,0.175)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][20]) != 0)
				{
					SetFont(ClassInfo[(menuindex-1)][altskin][20]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.975), FixedMul(hudboundsx,1.1));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16184, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.975)<<16)+0.2, (FixedMul(hudboundsy,0.975)<<16)+0.2, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][21]) != 0)
				{
					SetHudSize(hudboundsx/14,hudboundsy/14,true);
					SetFont(ClassInfo[(menuindex-1)][altskin][21]);
					SetHudClipRect(0,0,0,0,0);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16183, CR_UNTRANSLATED, FixedMul(hudboundsx/14,0.5)*1.0, FixedMul(hudboundsy/14,0.575)*1.0, 0, 0.5);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][23]) != 0)
				{
					SetHudSize(hudboundsx,hudboundsy,true);
					SetFont(ClassInfo[(menuindex-1)][altskin][23]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.1525));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16182, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.025)<<16)+0.1, (FixedMul(hudcentery,0.05)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				if(strlen(ClassInfo[(menuindex-1)][altskin][24]) != 0)
				{
					SetHudSize(hudboundsx,hudboundsy,true);
					SetFont(ClassInfo[(menuindex-1)][altskin][24]);
					SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.1525));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16181, CR_UNTRANSLATED, (FixedMul(hudboundsx,0.975)<<16)+0.2, (FixedMul(hudcentery,0.05)<<16)+0.1, 0);
					SetHudClipRect(0,0,0,0,0);
				}
				//SetHudSize(hudboundsx,hudboundsy,true);
			}	
			
			if(menutab == 1)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB4");
				if(StrLen(HeroInformation[menuindex-1][altskin][menuitem-1][2]) != 0)
				{
					SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.5),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.475));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16175, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					SetHudClipRect(FixedMul(hudboundsx,0.049),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.1755),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.115));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16174, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.25),FixedMul(hudboundsx,0.15));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16173, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.45),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.5),FixedMul(hudboundsx,0.15));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16172, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				}
				else
				{
					SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.7),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.675));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16175, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					SetHudClipRect(FixedMul(hudboundsx,0.049),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.1755),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.115));
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16174, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					HudMessage(s:""; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16173, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
					HudMessage(s:""; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16172, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				}
				SetHudClipRect(0,0,0,0,0);
				index = -1;
				SetFont(ClassInfo[(menuindex-1)][altskin][13]);
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][0]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][0]);
				SetHudSize(fontscaledx,fontscaledy,true);
				SetHudClipRect(FixedMul(fontscaledx,0.05),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.1755),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.2));
				for(a = 1; a < 25; a++)
				{
					if(StrLen(HeroInformation[menuindex-1][altskin][a-1][0]) != 0)
					{
						index++;
						HudMessage(s:HeroInformation[menuindex-1][altskin][a-1][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+index, SelectionColors[(menuitem==index+1)], (FixedMul(fontscaledx*2,0.0685)<<16)+0.4, FixedMul(fontscaledy*2,0.105+(0.025*(index-listyposition)))<<16, 0);
						if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.22) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))+24 && cursory > FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))-24) && (cursory > FixedMul(hudboundsy,0.215) && cursory < FixedMul(hudboundsy,0.95)) && listclick < 1)
							{
								menuitem = a;
								listindex = menuitem;

								//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.95));
								condition = (cursory >= FixedMul(hudboundsy,0.9));
								if(condition) { listclick = 4; listyposition+=condition; }
								else
								{
									//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) <= FixedMul(hudboundsy,0.175));
									condition = (cursory >= FixedMul(hudboundsy,0.175));
									if(condition) 
									{
										listclick = 4; 
										listyposition-=condition; 
										if(listyposition < 0)
											listyposition = 0;
									}
								}
							}
						}
					}
					else { break; }
				}
				listclick--;
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			if(menutab == 2)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB4");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.5),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.475));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16175, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.049),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.1755),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.115));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16174, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.25),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16173, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.45),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.5),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16172, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(0,0,0,0,0);
				index = -1;
				SetFont(ClassInfo[(menuindex-1)][altskin][13]);
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][0]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][0]);
				SetHudSize(fontscaledx,fontscaledy,true);
				SetHudClipRect(FixedMul(fontscaledx,0.05),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.1755),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.18));
				for(a = 1; a < 21; a++)
				{
					if(StrLen(ClassWeaponInfo[menuindex-1][altskin][a-1][0]) != 0)
					{
						index++;
						HudMessage(s:ClassWeaponInfo[menuindex-1][altskin][a-1][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+index, SelectionColors[(menuitem==index+1)], (FixedMul(fontscaledx*2,0.0685)<<16)+0.4, FixedMul(fontscaledy*2,0.105+(0.025*(index-listyposition)))<<16, 0);
						//SetHudSize(hudboundsx,hudboundsy,true);
						if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.22) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))+24 && cursory > FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))-24) && (cursory > FixedMul(hudboundsy,0.215) && cursory < FixedMul(hudboundsy,0.95)) && listclick < 1)
							{
								menuitem = a;
								listindex = menuitem;
								//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.95));
								condition = (cursory >= FixedMul(hudboundsy,0.9));
								if(condition) { listclick = 4; listyposition+=condition; }
								else
								{
									//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) <= FixedMul(hudboundsy,0.175));
									condition = (cursory >= FixedMul(hudboundsy,0.175));
									if(condition) 
									{
										listclick = 4; 
										listyposition-=condition; 
										if(listyposition < 0)
											listyposition = 0;
									}
								}
							}
						}
					}
				}
				listclick--;
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			if(menutab == 3)
			{
				SetHudSize(hudboundsx,hudboundsy,true);
				SetFont("SAMCMPB4");
				SetHudClipRect(FixedMul(hudboundsx,0.25),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.5),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.475));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16175, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.049),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.1755),FixedMul(hudboundsy,0.775),FixedMul(hudboundsx,0.115));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16174, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.175),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.25),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16173, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(FixedMul(hudboundsx,0.775),FixedMul(hudboundsy,0.5),FixedMul(hudboundsx,0.175),FixedMul(hudboundsy,0.45),FixedMul(hudboundsx,0.15));
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16172, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
				SetHudClipRect(0,0,0,0,0);
				index = -1;
				SetFont(ClassInfo[(menuindex-1)][altskin][13]);
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][0]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][0]);
				SetHudSize(fontscaledx,fontscaledy,true);
				SetHudClipRect(FixedMul(fontscaledx,0.05),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.1755),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.2));
				for(a = 1; a < 65; a++)
				{
					if(StrLen(ClassInfo[menuindex-1][altskin][27]) != 0)
						monsteraccess = altskin;
					else
						monsteraccess = 0;
					if(StrLen(MonsterInfo[menuindex-1][monsteraccess][a-1][0]) != 0)
					{
						index++;
						HudMessage(s:MonsterInfo[menuindex-1][monsteraccess][a-1][0]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16030+index, SelectionColors[(menuitem==index+1)], (FixedMul(fontscaledx*2,0.0685)<<16)+0.4, FixedMul(fontscaledy*2,0.105+(0.025*(index-listyposition)))<<16, 0);
						//SetHudSize(hudboundsx,hudboundsy,true);
						if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.22) && cursorx > FixedMul(hudboundsx,0.05)) && (cursory < FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))+24 && cursory > FixedMul(hudboundsy,0.215+(0.05*(index-listyposition)))-24) && (cursory > FixedMul(hudboundsy,0.215) && cursory < FixedMul(hudboundsy,0.95)) && listclick < 1)
							{
								menuitem = a;
								listindex = menuitem;
								//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) >= FixedMul(hudboundsy,0.95));
								condition = (cursory >= FixedMul(hudboundsy,0.9));
								if(condition) { listclick = 4; listyposition+=condition; }
								else
								{
									//condition = (FixedMul(hudboundsy*2,0.1+(0.025*(index-listyposition))) <= FixedMul(hudboundsy,0.175));
									condition = (cursory >= FixedMul(hudboundsy,0.175));
									if(condition) 
									{
										listclick = 4; 
										listyposition-=condition; 
										if(listyposition < 0)
											listyposition = 0;
									}
								}
							}
						}
					}
					else { break; }
				}
				listclick--;
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			
			//======================================================================================================== Tab Shit
			
			scrollmaxcounter = (2+StrLen(description)/4);
			scrolltimer++;
			if(scrolltimer%scrollstep==0) { scrollcounter--; }
			if(scrolltimer == scrollstep) scrolltimer = 1;
			if(scrollcounter < -scrollmaxcounter)
				scrollcounter = scrollmax;
				
			//Tab Specific Info
			if(menutab == 1)
			{
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][1]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][1]);
				if(StrLen(HeroInformation[menuindex-1][altskin][menuitem-1][2]) != 0)
				{
					SetHudSize(hudcenterx,hudcentery,true);
					SetFont(HeroInformation[menuindex-1][altskin][menuitem-1][2]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16016, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.855)<<16)+0.1, (FixedMul(hudcentery,0.31)<<16)+0.1, 0);
					SetHudClipRect(FixedMul(fontscaledx,0.25),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.5),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.475));
				}
				else
					SetHudClipRect(FixedMul(fontscaledx,0.25),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.7),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.675));
				
				//SetHudSize(hudcenterx,hudcentery,true);
				SetFont(ClassInfo[(menuindex-1)][altskin][15]);
				SetHudSize(fontscaledx,fontscaledy,true);
				description = HeroInformation[menuindex-1][altskin][menuitem-1][1];
				HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);
				/*if(menuitem == 1)
				{
					description = HeroSummaries[(menuindex-1)][altskin];
					HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);
				}
				if(menuitem == 2)
				{
					description = HeroTraits[(menuindex-1)*(1+altskin)][altskin];
					HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);
				}
				if(menuitem == 3)
				{
					description = HeroChanges[(menuindex-1)*(1+altskin)][altskin];
					HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);
				}*/
				SetHudClipRect(0,0,0,0,0);							
				SetHudSize(hudcenterx,hudcentery,true);
				if(abs(forwardmove) > 8 && buttons != oldbuttons)	
				{	
					if(StrLen(HeroInformation[menuindex-1][altskin][(menuitem-1)-sign(forwardmove)][0]) != 0) 	
					{ 	
						listindex-=sign(forwardmove); 	
						condition = (FixedMul(hudboundsy*2,0.1+(0.025*(listindex-listyposition))) > FixedMul(hudboundsy,0.95));	
						if(condition && sign(forwardmove) < 0)	
							listyposition+=condition;	
						else if (sign(forwardmove) > 0 && listyposition > 0)	
							listyposition--;	
					}	
					else if(listindex == 1 && sign(forwardmove) > 0)	
					{	
						for(a = 0; a < 20; a++)	
						{	
							condition = (FixedMul(hudboundsy*2,0.1+(0.025*a)) > FixedMul(hudboundsy,0.95));	
							if(condition)	
								listyposition+=condition;	
									
							if(StrLen(HeroInformation[menuindex-1][altskin][a][0]) == 0) { menuitem = a; listindex = menuitem; break; }	
						}	
					}	
					else { listindex = 1; listyposition = 0; }			
					menuitem = listindex;	
				}
			}
			else if(menutab == 2)
			{
				SetFont(ClassInfo[(menuindex-1)][altskin][15]);
				//SetHudSize(hudcenterx,hudcentery,true);
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][1]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][1]);
				SetHudSize(fontscaledx,fontscaledy,true);
				SetHudClipRect(FixedMul(fontscaledx,0.25),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.5),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.475));
				description = ClassWeaponInfo[menuindex-1][altskin][menuitem-1][1];
				HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);	
				SetHudSize(hudcenterx,hudcentery,true);
				SetHudClipRect(0,0,0,0,0);		
				if(StrLen(ClassWeaponInfo[menuindex-1][altskin][menuitem-1][2]) != 0)
				{
					newtid = UniqueTid();
					SpawnForced(ClassWeaponInfo[menuindex-1][altskin][menuitem-1][3],0,0,0,newtid,0);
					scalex = GetActorProperty(newtid,APROP_SCALEX);
					scaley = GetActorProperty(newtid,APROP_SCALEY);
					Thing_remove(newtid);
					SetFont(ClassWeaponInfo[menuindex-1][altskin][menuitem-1][2]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16016, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.855)<<16)+0.1, (FixedMul(hudcentery,0.31)<<16)+0.1, 0);
				}
				
				SetHudClipRect(FixedMul(hudcenterx,0.775),FixedMul(hudcentery,0.5),FixedMul(hudcenterx,0.175),FixedMul(hudcentery,0.45),FixedMul(hudcenterx,0.15));
				SetFont("CMPWEPFT");
				HudMessage(s:ClassWeaponInfo[menuindex-1][altskin][menuitem-1][4]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16160, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.865)<<16), (FixedMul(hudcentery,0.5)<<16)+0.1, 0);	
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudcenterx,hudcentery,true);
				
				if(abs(forwardmove) > 8 && buttons != oldbuttons)
				{
					if(StrLen(ClassWeaponInfo[menuindex-1][altskin][(menuitem-1)-sign(forwardmove)][0]) != 0) 
					{ 
						listindex-=sign(forwardmove); 
						condition = (FixedMul(hudboundsy*2,0.1+(0.025*(listindex-listyposition))) > FixedMul(hudboundsy,0.95));
						if(condition && sign(forwardmove) < 0)
							listyposition+=condition;
						else if (sign(forwardmove) > 0 && listyposition > 0)
							listyposition--;
					}
					else if(listindex == 1 && sign(forwardmove) > 0)
					{
						for(a = 0; a < 20; a++)
						{
							condition = (FixedMul(hudboundsy*2,0.1+(0.025*a)) > FixedMul(hudboundsy,0.95));
							if(condition)
								listyposition+=condition;
								
							if(StrLen(ClassWeaponInfo[menuindex-1][altskin][a][0]) == 0) { menuitem = a; listindex = menuitem; break; }
						}
					}
					else { listindex = 1; listyposition = 0; }		
					menuitem = listindex;
				}
			}
			else if(menutab == 3)
			{
				SetFont(ClassInfo[(menuindex-1)][altskin][15]);
				//SetHudSize(hudcenterx,hudcentery,true);
				fontscaledx = FixedMul(hudcenterx,ClassFontScales[menuindex-1][1]);
				fontscaledy = FixedMul(hudcentery,ClassFontScales[menuindex-1][1]);
				SetHudSize(fontscaledx,fontscaledy,true);
				SetHudClipRect(FixedMul(fontscaledx,0.25),FixedMul(fontscaledy,0.175),FixedMul(fontscaledx,0.5),FixedMul(fontscaledy,0.775),FixedMul(fontscaledx,0.475));
				description = MonsterInfo[menuindex-1][monsteraccess][menuitem-1][2];
				HudMessage(s:description; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16015, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.26)<<16)+0.1, floorwhole(scrollcounter*ClassFontScales[menuindex-1][1])+(88*ClassFontScales[menuindex-1][1])+0.1, 0);	
				SetHudClipRect(0,0,0,0,0);		
				if(StrLen(MonsterInfo[menuindex-1][monsteraccess][menuitem-1][0]) != 0)
				{			
					newtid = UniqueTid();
					SpawnForced(MonsterInfo[menuindex-1][monsteraccess][menuitem-1][3+(2*monsterskin)],0,0,0,newtid,0);
					
					scalex = GetActorProperty(newtid,APROP_SCALEX);
					scaley = GetActorProperty(newtid,APROP_SCALEY);
					hitpoints = GetActorProperty(newtid,APROP_SPAWNHEALTH);
					
					SetHudClipRect(FixedMul(fontscaledx,0.775),FixedMul(fontscaledy,0.5),FixedMul(fontscaledx,0.175),FixedMul(fontscaledy,0.45),FixedMul(fontscaledx,0.15));
					HudMessage(s:"Health: ", d:hitpoints; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16160, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.7825)<<16)+0.1, (FixedMul(fontscaledy,0.51)<<16)+0.1, 0);	
					HudMessage(l:MonsterInfo[menuindex-1][monsteraccess][menuitem-1][1]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16161, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.7825)<<16)+0.1, (FixedMul(fontscaledy,0.54)<<16)+0.1, 0);	
					HudMessage(s:"Spawn Class: ", s:MonsterInfo[menuindex-1][monsteraccess][menuitem-1][3+(2*monsterskin)]; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_COLORSTRING, 16162, ClassInfo[(menuindex-1)][altskin][16], (FixedMul(fontscaledx,0.7825)<<16)+0.1, (FixedMul(fontscaledy,0.59)<<16)+0.1, 0);	
					SetHudClipRect(0,0,0,0,0);
					SetHudSize(hudcenterx,hudcentery,true);
					
					if(!CheckActorProperty(newtid,APROP_SeeSound,""))
					{
						seesound = GetActorProperty(newtid,APROP_SeeSound);
						SetFont("CMPALRT2");
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.7925)+32 && cursorx > FixedMul(hudboundsx,0.7925)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
							{
								SetFont("CMPALRT1");
								LocalAmbientSound(seesound,127);
							}
						}
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16155, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.775)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0, 0.9);
					}
					else { RemoveMessages(16155,16155); }
					if(!CheckActorProperty(newtid,APROP_ActiveSound,""))
					{
						activesound = GetActorProperty(newtid,APROP_ActiveSound);
						SetFont("CMPACTV2");
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.8350)+32 && cursorx > FixedMul(hudboundsx,0.8350)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
							{	
								SetFont("CMPACTV1");
								LocalAmbientSound(activesound,127);
							}
						}
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16156, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.8175)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0, 0.9);
					}
					else { RemoveMessages(16156,16156); }
					if(!CheckActorProperty(newtid,APROP_PainSound,""))
					{
						painsound = GetActorProperty(newtid,APROP_PainSound);
						SetFont("CMPPAIN2");
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.8775)+32 && cursorx > FixedMul(hudboundsx,0.8775)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
							{
								SetFont("CMPPAIN1");
								LocalAmbientSound(painsound,127);
							}
						}
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16157, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.86)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0, 0.95);
					}
					else { RemoveMessages(16157,16157); }
					if(!CheckActorProperty(newtid,APROP_DeathSound,""))
					{
						deathsound = GetActorProperty(newtid,APROP_DeathSound);
						SetFont("CMPDETH2");
						if (buttons & (BT_USE|BT_ATTACK))
						{
							if((cursorx < FixedMul(hudboundsx,0.92)+32 && cursorx > FixedMul(hudboundsx,0.92)-32) && (cursory < FixedMul(hudboundsy,0.4675)+32 && cursory > FixedMul(hudboundsy,0.4675)-32) && buttons != oldbuttons)
							{
								SetFont("CMPDETH1");
								LocalAmbientSound(deathsound,127);
							}
						}
						HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16158, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.9025)<<16)+0.1, FixedMul(hudcentery,0.4675)*1.0, 0, 0.9);
					}
					else { RemoveMessages(16158,16158); }
					Thing_remove(newtid);
					SetHudSize(FixedDiv(hudcenterx,scalex),FixedDiv(hudcentery,scaley),true);
					SetFont(MonsterInfo[menuindex-1][monsteraccess][menuitem-1][4+(2*monsterskin)]);
					HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 16016, CR_UNTRANSLATED, (FixedMul(FixedDiv(hudcenterx,scalex),0.86)<<16)+0.5, (FixedMul(FixedDiv(hudcentery,scaley),0.4)<<16)+0.1, 0);
				}
				if (buttons & (BT_USE|BT_ATTACK))
				{
					if(strlen(MonsterInfo[menuindex-1][monsteraccess][menuitem-1][5+((monsterskin)*2)]) != 0)
					{
						if((cursorx < FixedMul(hudboundsx,0.86)+120 && cursorx > FixedMul(hudboundsx,0.86)-120) && (cursory < FixedMul(hudboundsy,0.295)+120 && cursory > FixedMul(hudboundsy,0.295)-120) && buttons != oldbuttons)
						{ 
							LocalAmbientSound("marathon/shieldhit",88);
							monsterskin++; 
							previewopened = 0;
						}
					}
					else
					{
						if((cursorx < FixedMul(hudboundsx,0.86)+120 && cursorx > FixedMul(hudboundsx,0.86)-120) && (cursory < FixedMul(hudboundsy,0.295)+120 && cursory > FixedMul(hudboundsy,0.295)-120) && buttons != oldbuttons)
						{ 
							LocalAmbientSound("marathon/shieldhit",88);
							monsterskin = 0; 
							previewopened = 0;
						}
					}
				}
				SetHudSize(hudcenterx,hudcentery,true);
				
				if(abs(forwardmove) > 8 && buttons != oldbuttons)
				{
					if(StrLen(MonsterInfo[menuindex-1][monsteraccess][(menuitem-1)-sign(forwardmove)][0]) != 0) 
					{ 
						listindex-=sign(forwardmove); 
						condition = (FixedMul(hudboundsy*2,0.1+(0.025*(listindex-listyposition))) > FixedMul(hudboundsy,0.95));
						if(condition && sign(forwardmove) < 0)
							listyposition+=condition;
						else if (sign(forwardmove) > 0 && listyposition > 0)
							listyposition--;
					}
					else if(listindex == 1 && sign(forwardmove) > 0)
					{
						for(a = 0; a < 64; a++)
						{
							condition = (FixedMul(hudboundsy*2,0.1+(0.025*a)) > FixedMul(hudboundsy,0.95));
							if(condition)
								listyposition+=condition;
								
							if(StrLen(MonsterInfo[menuindex-1][monsteraccess][a][0]) == 0) { menuitem = a; listindex = menuitem; break; }
						}
					}
					else { listindex = 1; listyposition = 0; }		
					menuitem = listindex;
				}
			}
			
			// Tab selection
			if(menutab!=1)
				SetFont("CMPSKLT2");
			else
				SetFont("CMPSKLT1");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16025, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.05)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0, 0.9);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < (FixedMul(hudcenterx,0.1325)+32) && cursorx > (FixedMul(hudcenterx,0.1325)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
					menutab = 1;
			}
			
			if(menutab!=2)
				SetFont("CMPGUNT2");
			else
				SetFont("CMPGUNT1");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16026, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.0935)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0, 0.9);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < (FixedMul(hudcenterx,0.225)+32) && cursorx > (FixedMul(hudcenterx,0.225)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
					menutab = 2;
			}
	
			if(ThingCountName("SamsaraMixerCompendiumToken",0) > 0)
			{
				if(menutab!=3)
					SetFont("CMPENMT2");
				else
					SetFont("CMPENMT1");	
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16027, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.1375)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0, 0.9);
				
				if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
				{		
					if(((cursorx < (FixedMul(hudcenterx,0.3175)+32) && cursorx > (FixedMul(hudcenterx,0.3175)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)))
						menutab = 3;
				}
			}
			
			if(StrLen(ClassInfo[(menuindex-1)][1][0]) != 0)
			{			
				/*if(altskin!=true)
					SetFont("CMPSKNT2");
				else
					SetFont("CMPSKNT1");*/
					
				SetFont("CMPSKNT2");
				if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
				{		
					if(((cursorx < (FixedMul(hudcenterx,0.41)+32) && cursorx > (FixedMul(hudcenterx,0.41)-32)) && (cursory < FixedMul(hudcentery,0.275)+32 && cursory > FixedMul(hudcentery,0.275)-32)) && buttons != oldbuttons)
					{	
						SetFont("CMPSKNT1");
						LocalAmbientSound("marathon/shieldhit",88);
						if(StrLen(ClassInfo[(menuindex-1)][altskin+1][0]) != 0 && altskin < 4)
							altskin++;
						else
							altskin = 0;
						
						//altskin = !altskin;
					}
				}
				HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 16028, CR_UNTRANSLATED, (FixedMul(hudcenterx,0.18)<<16)+0.1, FixedMul(hudcentery,0.143)*1.0, 0, 0.9);
			}
			
			//======================================================================================================== Back button
			
			SetFont("STPB3");
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15999, CR_UNTRANSLATED, 32.0, (hudboundsy-32)*1.0, 0);
			
			if (buttons & (BT_USE|BT_ATTACK) || buttons & (BT_ALTATTACK))
			{		
				if(((cursorx < 32 && cursorx > 0) && (cursory < hudboundsy && cursory > hudboundsy-32)) || buttons & (BT_ALTATTACK))
					menuindex = 0;
			}
			SetHudSize(hudboundsx,hudboundsy,true);
		}
		else if(menuindex == CLASSCOUNT+1)
		{
			scrollstep = 3;
			scrollmax = 448;
			drawclouds = 1;
			ACS_NamedExecuteAlways("CompendiumCloudGenerator",0,1440,972,0);
				
			if(lastmenuindex != menuindex)
			{		
				LocalAmbientSound("marathon/shieldhit",88);
				removemessages(15987,16189);
				scrollcounter = 448;
				scrolltimer = 0;
				lastmenuindex = menuindex;
				previewopened = false;
				
				SetFont("CMPSDOOM");
				SetHudClipRect(0,0,0,0,0);
				SetHudSize(hudcenterx,hudcentery,true);
				HudMessage(s:"Back: ",k:"+altattack"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15988, CR_BLACK, (FixedMul(hudcenterx,0.033)<<16)+0.1, (FixedMul(hudcentery,0.955)<<16)+0.1, 0);
				SetHudSize(hudboundsx,hudboundsy,true);
			}
			if (buttons & (BT_ALTATTACK))
				menuindex = 0;
				
			SetHudSize(hudboundsx,hudboundsy,true);
			SetFont("SAMCMPB4");
			SetHudClipRect(FixedMul(hudboundsx,0.05),FixedMul(hudboundsy,0.05),FixedMul(hudboundsx,0.9),FixedMul(hudboundsy,0.9),FixedMul(hudboundsx,0.85));
			HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, 15990, CR_UNTRANSLATED, 2.0, 2.0, 0, 0.75);
			SetFont("CMPSDOOM");
			SetHudSize(hudcenterx,hudcentery,true);
			SetHudClipRect(FixedMul(hudcenterx,0.05),FixedMul(hudcentery,0.05),FixedMul(hudcenterx,0.9),FixedMul(hudcentery,0.9),FixedMul(hudcenterx,0.85));
			HudMessage(s:CompendiumCredits; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD, 15987, CR_WHITE, (FixedMul(hudcenterx,0.5)<<16)+0.4, 32.0+(scrollcounter*1.0)+0.1, 0);
			SetHudSize(hudboundsx,hudboundsy,true);
			SetHudClipRect(0,0,0,0,0);
		
			scrollmaxcounter = 128+(2+StrLen(CompendiumCredits)/4); //little buffer for it complete properly
			scrolltimer++;
			if(scrolltimer%scrollstep==0) { scrollcounter--; }
			if(scrolltimer == scrollstep) scrolltimer = 1;
			if(scrollcounter < -scrollmaxcounter)
				scrollcounter = scrollmax;
		}
		Delay(1);
	}	
	drawclouds = 0;
	removemessages(15800,16200);
	SetPlayerProperty(0,0,PROP_TOTALLYFROZEN);
}

str CloudImages[4] = { "CMPCLD01", "CMPCLD02", "CMPCLD03", "CMPCLD04" };
int CloudMessageIDs[10] = {};

Script "CompendiumCloudGenerator" (int hudboundsx, int hudboundsy)
{
	if(random(0,17) != 0)
		terminate;
	
	int cloudid = random(0,9);

	if(CloudMessageIDs[cloudid] == 16199-cloudid)
		terminate;
		
	int cloudlifetime = 384;
	int cloudstartx = (hudboundsx/2)+random(-768,768);
	int cloudstarty = (hudboundsy/2)+random(-768,768);
	int clouddirectionx = 1 * (2 * random(0,1) - 1);
	int clouddirectiony = 1 * (2 * random(0,1) - 1);
	int cloudimage = random(0,3);
	int cloudalpha = 0.0;
	int cloudtimer;
	int cloudstep = 2;
		
	CloudMessageIDs[cloudid] = 16199-cloudid;
		
	SetHudSize(hudboundsx,hudboundsy,true);
	SetHudClipRect(FixedMul(hudboundsx,0.025), FixedMul(hudboundsy,0.025), FixedMul(hudboundsx,0.95), FixedMul(hudboundsy,0.95), FixedMul(hudboundsx,0.425));
	while(cloudtimer < cloudlifetime && drawclouds == 1)
	{
		if(cloudtimer < 100)
			cloudalpha+=0.01;
		if(cloudtimer > cloudlifetime-100)
			cloudalpha-=0.01;
			
		SetFont(CloudImages[cloudimage]);
		HudMessage(s:"a"; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, CloudMessageIDs[cloudid], CR_UNTRANSLATED, (cloudstartx + (cloudtimer * clouddirectionx)) << 16, (cloudstarty + (cloudtimer * clouddirectiony)) << 16, 0.0, cloudalpha);
		Delay(cloudstep);
		cloudtimer++;
	}
	HudMessage(s:""; HUDMSG_PLAIN|HUDMSG_NOTWITHFULLMAP|HUDMSG_LAYER_OVERHUD|HUDMSG_ALPHA, CloudMessageIDs[cloudid], CR_UNTRANSLATED, (cloudstartx + (cloudtimer * clouddirectionx)) << 16, (cloudstarty + (cloudtimer * clouddirectiony)) << 16, 0.0, cloudalpha);
	CloudMessageIDs[cloudid] = 0;
}