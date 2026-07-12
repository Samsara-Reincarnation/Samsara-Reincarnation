Class Chunky_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 32; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("BrutalBloodSplat", 172, (0, 0, 0), (0, 0, 0), true, 0);
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("BrutalBloodSmear", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class Bolognese_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 32; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("BologneseBloodDecal1", 172, (0, 0, 0), (0, 0, 0), true, 0);
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("BologneseBloodDecal2", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class Ketchup_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 32; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("KetchupBloodDecal1", 172, (0, 0, 0), (0, 0, 0), true, 0);
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("KetchupBloodDecal2", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class Q3_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 7 NoDelay
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 8; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("Q3BloodDecal", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class DBT_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 32; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("DBThanatosBloodDecal", 172, (0, 0, 0), (0, 0, 0), true, 0);
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("DBThanatosBloodDecal", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class Strife_WallBlood_ZScript : Actor
{
	Default
	{
		scale 0.6;
		speed 7;
		health 1;
		radius 8;
		height 1;
		Gravity 0.7;
		damage 0;
		+MISSILE;
		+CLIENTSIDEONLY;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}
	
	States
	{
		Spawn:
			TNT1 A 7 NoDelay
			{
				if(master)
				{
					CopyBloodColor(master);
					for(int i = 8; i >= 0; i--)
					{
						A_SetAngle(random(0, 360));
						A_SetPitch(random(-50, 50));
						A_SprayDecal("StrifeBloodDecal", 172, (0, 0, 0), (0, 0, 0), true, 0);
					}
				}
			}
			stop;
	}
}

Class NashGoreGibSpawner_ZScript : Actor
{
	Default
	{
		Monster;
		-ACTIVATEMCROSS;
		-CANPASS;
		-COUNTKILL;
		-SOLID;
		+CLIENTSIDEONLY;
		+EXTREMEDEATH;
		+ISMONSTER;
		+NOTELEPORT;
		+NOBLOCKMAP;
		+THRUACTORS;
	}

	States
	{
		Spawn:
			TNT1 A 0;
			TNT1 A 0
			{
				if(master)
				{
					CopyBloodColor(master);
				}
			}
			TNT1 A 0 A_Die("Extreme");
			Stop;
		Death:
			BLUD A 1;
			Stop;
		XDeath:
			BLUD B 1;
			Stop;
	}
}