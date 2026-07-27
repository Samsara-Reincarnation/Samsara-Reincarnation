Class JohnMullinsWeaponUpdater : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
                if (Player.ReadyWeapon == null)
                {
                    A_ChangeModel("",1,"Models/SoF/player","w_assault_rifle.md3",1,"Models","", CMDL_HIDEMODEL);
				}
				else
				{
					let weaponname = player.ReadyWeapon.GetClassName();
					switch(weaponname)
					{
						default:
							A_ChangeModel("",1,"Models/SoF/player","w_assault_rifle.md3",1,"Models","", CMDL_HIDEMODEL);
							break;
						case 'SoF_Knife':
							A_ChangeModel("",1,"Models/SoF/player","w_knife.md3",1,"","",0,0);
							break;
						case 'SoF_Pistol1':
							A_ChangeModel("",1,"Models/SoF/player","w_pistol1.md3",1,"","",0,0);
							break;
						case 'SoF_Pistol2':
							A_ChangeModel("",1,"Models/SoF/player","w_pistol2.md3",1,"","",0,0);
							break;
						case 'SoF_AssaultRifle':
							A_ChangeModel("",1,"Models/SoF/player","w_assault_rifle.md3",1,"","",0,0);
							break;
						case 'SoF_Shotgun':
							A_ChangeModel("",1,"Models/SoF/player","w_shotgun.md3",1,"","",0,0);
							break;
						case 'SoF_Machinegun':
							A_ChangeModel("",1,"Models/SoF/player","w_machinegun.md3",1,"","",0,0);
							break;
						case 'SoF_Rocket':
							A_ChangeModel("",1,"Models/SoF/player","w_rocket.md3",1,"","",0,0);
							break;
						case 'SoF_Flamegun':
							A_ChangeModel("",1,"Models/SoF/player","w_flamethrower.md3",1,"","",0,0);
							break;
						case 'SoF_Slugger':
							A_ChangeModel("",1,"Models/SoF/player","w_autoshotgun.md3",1,"","",0,0);
							break;
						case 'SoF_MPG':
							A_ChangeModel("",1,"Models/SoF/player","w_mpg.md3",1,"","",0,0);
							break;
						case 'SoF_MPistol':
							A_ChangeModel("",1,"Models/SoF/player","w_machinepistol.md3",1,"","",0,0);
							break;
						case 'SoF_SniperRifle':
							A_ChangeModel("",1,"Models/SoF/player","w_sniperrifle.md3",1,"","",0,0);
							break;
					}
				}
			}
	}
}