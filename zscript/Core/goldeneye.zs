Class BondWeaponAppearanceUpdate : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
                if (Player.ReadyWeapon == null)
                {
                    A_ChangeModel("",1,"Models/Goldeneye/player","goldengun_left.md3",1,"Models","", CMDL_HIDEMODEL);
                    A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"Models","", CMDL_HIDEMODEL);
                    A_ChangeModel("",3,"Models/Goldeneye/player","goldengun_left.md3",3,"Models","", CMDL_HIDEMODEL);
                    A_ChangeModel("",4,"Models/Goldeneye/player","goldengun_left.md3",4,"Models","", CMDL_HIDEMODEL);
                } else {
					let weaponname = player.ReadyWeapon.GetClassName();
					let firing = CheckInventory("BondFiringToken",1);
					let alternate = CheckInventory("BondAlternateFire",1);
					if(CheckInventory("Goldeneye_PlayerAltClassToken",1))
					{
						switch(weaponname)
						{
							default:
								A_ChangeModel("",1,"Models/Goldeneye/player","goldengun_left.md3",1,"Models","", CMDL_HIDEMODEL);
								A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"Models","", CMDL_HIDEMODEL);
								break;
							case 'Goldfinger_PPKSilenced':
								A_ChangeModel("",1,"Models/Goldfinger/player","ppks_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","ppks_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","ppks_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","ppks_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_PPK':
								A_ChangeModel("",1,"Models/Goldfinger/player","ppk_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","ppk_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","ppk_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","ppk_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_LugerP08':
								A_ChangeModel("",1,"Models/Goldfinger/player","luger_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","luger_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","luger_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","luger_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_WaltherP38':
								A_ChangeModel("",1,"Models/Goldfinger/player","p38_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","p38_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","p38_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","p38_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_ColtM1911':
								A_ChangeModel("",1,"Models/Goldfinger/player","colt_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","colt_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","colt_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","colt_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_OddjobHat':
								A_ChangeModel("",1,"Models/Goldfinger/player","oddjobhat.md3",1,"","",0,0);
								A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"Models","", CMDL_HIDEMODEL);
								break;
							case 'Goldfinger_MP40':
								A_ChangeModel("",1,"Models/Goldfinger/player","mp40_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldfinger/player","mp40_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","mp40_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","mp40_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_Shotgun':
								A_ChangeModel("",1,"Models/Goldfinger/player","remington_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","remington_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","remington_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","remington_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_OverUnder':
								A_ChangeModel("",1,"Models/Goldfinger/player","purdy_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","purdy_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","purdy_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","purdy_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_AK47':
								A_ChangeModel("",1,"Models/Goldfinger/player","ak47_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldfinger/player","ak47_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","ak47_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","ak47_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_Thompson':
								A_ChangeModel("",1,"Models/Goldfinger/player","thompson_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","thompson_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","thompson_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","thompson_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_ThompsonDrum':
								A_ChangeModel("",1,"Models/Goldfinger/player","thompsondrum_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldfinger/player","thompson_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","thompsondrum_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","thompson_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_SuperBazooka':
								A_ChangeModel("",1,"Models/Goldfinger/player","bazooka_right.md3",1,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
									A_ChangeModel("",2,"Models/Goldfinger/player","bazooka_left.md3",2,"","",0,0);
								break;
							case 'Goldfinger_M79':
								A_ChangeModel("",1,"Models/Goldfinger/player","m79_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","m79_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","m79_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","m79_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_M1Carbine':
								A_ChangeModel("",1,"Models/Goldfinger/player","m1carbine_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","m1carbine_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","m1carbine_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","m1carbine_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_M1Garand':
								A_ChangeModel("",1,"Models/Goldfinger/player","garand_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","garand_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","garand_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","garand_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_Kar98K':
								A_ChangeModel("",1,"Models/Goldfinger/player","kar98k_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","kar98k_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","kar98k_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","kar98k_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_Laser':
								A_ChangeModel("",1,"Models/Goldfinger/player","laser_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","laser_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","laser_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","laser_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_M14':
								A_ChangeModel("",1,"Models/Goldfinger/player","m14_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldfinger/player","m14_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","m14_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","m14_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_GoldMagnum':
								A_ChangeModel("",1,"Models/Goldfinger/player","goldrevolver_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","sw22_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","goldrevolver_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","sw22_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_AR7':
								A_ChangeModel("",1,"Models/Goldfinger/player","ar7_right.md3",1,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
									A_ChangeModel("",2,"Models/Goldfinger/player","ar7_left.md3",2,"","",0,0);
								break;
							case 'Goldfinger_Uzi':
								A_ChangeModel("",1,"Models/Goldfinger/player","uzi_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldfinger/player","uzi_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","uzi_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldfinger/player","uzi_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_SmithWesson22':
								A_ChangeModel("",1,"Models/Goldfinger/player","sw22_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","sw22_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","sw22_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","sw22_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldfinger_SmithWesson36':
								A_ChangeModel("",1,"Models/Goldfinger/player","sw36_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldfinger/player","sw36_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldfinger/player","sw36_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldfinger/player","sw36_flash_left.md3",4,"","",0,0);
								}
								break;
						}
					}
					else
					{
						switch(weaponname)
						{
							default:
								A_ChangeModel("",1,"Models/Goldeneye/player","goldengun_left.md3",1,"Models","", CMDL_HIDEMODEL);
								A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"Models","", CMDL_HIDEMODEL);
								break;
							case 'Goldeneye_PP7Silenced':
								A_ChangeModel("",1,"Models/Goldeneye/player","pp7s_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","pp7s_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","pp7s_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","pp7s_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_PP7SpecialIssue':
								A_ChangeModel("",1,"Models/Goldeneye/player","pp7_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","pp7_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","pp7_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","pp7_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_DD44':
								A_ChangeModel("",1,"Models/Goldeneye/player","dd44_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","dd44_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","dd44_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","dd44_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_Klobb':
								A_ChangeModel("",1,"Models/Goldeneye/player","klobb_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","klobb_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","klobb_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","klobb_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_ThrowingKnives':
								A_ChangeModel("",1,"Models/Goldeneye/player","knife_right.md3",1,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
									A_ChangeModel("",2,"Models/Goldeneye/player","knife_left.md3",2,"","",0,0);
								break;
							case 'Goldeneye_KF7Soviet':
								A_ChangeModel("",1,"Models/Goldeneye/player","kf7_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","kf7_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","kf7_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","kf7_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_Shotgun':
								A_ChangeModel("",1,"Models/Goldeneye/player","shotgun_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","shotgun_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","shotgun_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","shotgun_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_AutoShotgun':
								A_ChangeModel("",1,"Models/Goldeneye/player","autoshotgun_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","autoshotgun_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","autoshotgun_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","autoshotgun_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_AR33':
								A_ChangeModel("",1,"Models/Goldeneye/player","ar33_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","ar33_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","ar33_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","ar33_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_Phantom':
								A_ChangeModel("",1,"Models/Goldeneye/player","phantom_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","phantom_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","phantom_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","phantom_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_RocketLauncher':
								A_ChangeModel("",1,"Models/Goldeneye/player","rocketlauncher_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","goldengun_left.md3",3,"Models","", CMDL_HIDEMODEL);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","rocketlauncher_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","goldengun_left.md3",4,"Models","", CMDL_HIDEMODEL);
								}
								break;
							case 'Goldeneye_GrenadeLauncher':
								A_ChangeModel("",1,"Models/Goldeneye/player","grenadelauncher_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","grenadelauncher_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","grenadelauncher_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","grenadelauncher_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_RCP90':
								A_ChangeModel("",1,"Models/Goldeneye/player","rcp90_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","rcp90_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","rcp90_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","rcp90_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_Cougar':
								A_ChangeModel("",1,"Models/Goldeneye/player","cougar_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","cougar_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","cougar_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","cougar_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_SilverPP7':
								A_ChangeModel("",1,"Models/Goldeneye/player","metalpp7_right.md3",1,"Models/Goldeneye/player","tempImgEd010B.png",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","pp7_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","metalpp7_left.md3",2,"Models/Goldeneye/player","tempImgEd010B.png",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","pp7_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_ArabahViper':
								A_ChangeModel("",1,"Models/Goldeneye/player","viper_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","dd44_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","viper_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","dd44_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_Moonraker':
								A_ChangeModel("",1,"Models/Goldeneye/player","laser_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","laser_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","laser_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","laser_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_GoldenGun':
								A_ChangeModel("",1,"Models/Goldeneye/player","goldengun_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","goldengun_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","goldengun_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_GoldPP7':
								A_ChangeModel("",1,"Models/Goldeneye/player","metalpp7_right.md3",1,"","",0,0);
								if(firing && !alternate) A_ChangeModel("",3,"Models/Goldeneye/player","pp7_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","metalpp7_left.md3",2,"","",0,0);
									if(firing && alternate) A_ChangeModel("",4,"Models/Goldeneye/player","pp7_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_SniperRifle':
								A_ChangeModel("",1,"Models/Goldeneye/player","sniper_right.md3",1,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
									A_ChangeModel("",2,"Models/Goldeneye/player","sniper_left.md3",2,"","",0,0);
								break;
							case 'Goldeneye_ZMG':
								A_ChangeModel("",1,"Models/Goldeneye/player","zmg_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","zmg_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","zmg_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","zmg_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_D5KDeutsche':
								A_ChangeModel("",1,"Models/Goldeneye/player","d5k_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","d5k_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","d5k_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","d5k_flash_left.md3",4,"","",0,0);
								}
								break;
							case 'Goldeneye_SilencedD5K':
								A_ChangeModel("",1,"Models/Goldeneye/player","d5ks_right.md3",1,"","",0,0);
								if(firing) A_ChangeModel("",3,"Models/Goldeneye/player","d5ks_flash_right.md3",3,"","",0,0);

								if(CheckInventory("BondDualWieldToken",1))
								{
									A_ChangeModel("",2,"Models/Goldeneye/player","d5ks_left.md3",2,"","",0,0);
									if(firing) A_ChangeModel("",4,"Models/Goldeneye/player","d5ks_flash_left.md3",4,"","",0,0);
								}
								break;
						}
					}

					if(!CheckInventory("BondDualWieldToken",1))
						A_ChangeModel("",2,"Models/Goldeneye/player","goldengun_left.md3",2,"Models","", CMDL_HIDEMODEL);

					if(!firing)
					{
						if(weaponname == 'Goldeneye_RocketLauncher')
						{
							A_ChangeModel("",3,"Models/Goldeneye/player","rocketlauncher_flash_right.md3",3,"","",0,0);
							if(CheckInventory("BondDualWieldToken",1))
								A_ChangeModel("",4,"Models/Goldeneye/player","rocketlauncher_flash_left.md3",4,"","",0,0);
						}
						else
						{
							A_ChangeModel("",3,"Models/Goldeneye/player","goldengun_left.md3",3,"Models","", CMDL_HIDEMODEL);
							A_ChangeModel("",4,"Models/Goldeneye/player","goldengun_left.md3",4,"Models","", CMDL_HIDEMODEL);
						}
					}
				}
			}
			Stop;
	}
}
