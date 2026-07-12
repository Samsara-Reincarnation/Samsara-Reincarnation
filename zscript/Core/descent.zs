Class DescentThirdPersonChecker : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				if(player.cheats & CF_ChaseCam)
					A_GiveInventory("DescentThirdPerson",1);
				else
					A_TakeInventory("DescentThirdPerson",1);
			}
			stop;
	}
}