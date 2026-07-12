Class SamsaraCountKillEnablerZS : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0;
			TNT1 A 0 A_ChangeCountFlags(true, FLAG_NO_CHANGE, FLAG_NO_CHANGE);
			stop;
	}
}

Class SamsaraCountKillDisablerZS : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0;
			TNT1 A 0 A_ChangeCountFlags(false, FLAG_NO_CHANGE, FLAG_NO_CHANGE);
			stop;
	}
}
