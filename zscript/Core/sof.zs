Class SoF_WallBloodGibs_ZScript : Actor
{
	Default
	{
		health 1;
		radius 8;
		height 1;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
		+NOINTERACTION;
	}
	
	States
	{
		Spawn:
			TNT1 A 3 NoDelay
			{
				if(master)
				{
					CopyBloodColor(master);
					A_SetAngle(random(0, 360));
					A_SetPitch(random(-50, 50));
					A_SprayDecal("SoFBloodWall", 144, (0, 0, 0), (0, 0, 0), true, 0);
				}
			}
			stop;
	}
}

Class SoF_WallBlood_ZScript : Actor
{
	Default
	{
		health 1;
		radius 8;
		height 1;
		+NOGRAVITY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
		+NOINTERACTION;
	}
	
	States
	{
		Spawn:
			TNT1 A 3 NoDelay
			{
				if(master)
				{
					CopyBloodColor(master);
					A_SetPitch(frandom(-15, 15));
					A_SetAngle(angle+frandom(-15, 15));
					A_SprayDecal("SoFBloodWall", 80, (0, 0, 0), (0, 0, 0), true, 0);
				}
			}
			stop;
	}
}