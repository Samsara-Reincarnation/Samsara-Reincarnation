Class DetermineValidCellZS : Actor
{
	Default
	{
		+CORPSE
	}
	States
	{
		Spawn:
			TNT1 A 0 NoDelay A_GiveInventory("isCellCheckerToken",1);
			TNT1 A 0 A_RadiusGive("DetermineValidCellBroadcastZS",1024,RGF_PLAYERS|RGF_OBJECTS|RGF_MONSTERS|RGF_NOSIGHT|RGF_ITEMS|RGF_CUBE);
			TNT1 A 4;
			Stop;
	}
}

Class DetermineValidCellBroadcastZS : CustomInventory
{
	States
	{
		Pickup:	
			TNT1 A 0 A_RadiusGive("IsValidCellBroadcastZS",1024,RGF_CORPSES|RGF_NOSIGHT|RGF_CUBE);
			Stop;
	}
}

Class IsValidCellBroadcastZS : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0 A_JumpIfInventory("isCellCheckerToken",1,1);
			fail;
			TNT1 A 0 ACS_NamedExecuteWithResult("CellDoneScanning");
			TNT1 A 0 Thing_Remove(0);
			Stop;
	}
}

Class DetermineValidSpawnZS : Actor
{
	Default
	{
		Height 52;
		Radius 32;
		+CORPSE
		+SOLID
        +CANNOTPUSH
        +NOTELEPORT
        +NOTELESTOMP
		+FLOORHUGGER
        +DONTSPLASH
	}
	States
	{
		Spawn:
			TNT1 A 0 NoDelay A_GiveInventory("isSpawnCheckerToken",1);
			TNT1 A 0 A_UnsetSolid;
			TNT1 A 0 A_RadiusGive("DetermineValidSpawnBroadcastZS",1024,RGF_PLAYERS|RGF_MONSTERS|RGF_OBJECTS|RGF_ITEMS|RGF_CUBE);
			TNT1 A 35;
			TNT1 A 0 Thing_Remove(0);
			Stop;
	}
}

Class DetermineValidSpawnBroadcastZS : CustomInventory
{
	States
	{
		Pickup:	
			TNT1 A 0 A_RadiusGive("IsValidSpawnBroadcastZS",1024,RGF_CORPSES|RGF_CUBE);
			Stop;
	}
}

Class IsValidSpawnBroadcastZS : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0 A_JumpIfInventory("isSpawnCheckerToken",1,1);
			fail;
			TNT1 A 0 A_JumpIfInventory("ValidSpawnToken",1,"Failure");
			TNT1 A 0 A_GiveInventory("ValidSpawnToken",1);
			TNT1 A 0 A_JumpIfInventory("ValidSpawnCheckAll",1,"SpawnAll");
			TNT1 A 0 A_JumpIfInventory("ValidSpawnCheckItems",1,"SpawnItems");
			TNT1 A 0 ACS_NamedExecuteWithResult("Samsara2689");
			Stop;
		SpawnAll:
			TNT1 A 0 ACS_NamedExecuteWithResult("Samsara2689");
			TNT1 A 0 ACS_NamedExecuteWithResult("Samsara2689_Items");
			Stop;
		SpawnItems:
			TNT1 A 0 ACS_NamedExecuteWithResult("Samsara2689_Items");
			Stop;
		Failure:
			TNT1 A 0;
			fail;
	}
}