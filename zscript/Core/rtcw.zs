Class RTCWThirdPersonChecker : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				if(player.cheats & CF_ChaseCam)
					A_GiveInventory("RTCW_ThirdPersonToken",1);
				else
					A_TakeInventory("RTCW_ThirdPersonToken",1);
			}
			stop;
	}
}

Class RTCW_KickActivator : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				FLineTraceData KickRay;
				bool impact = LineTrace(angle,110,pitch,0,32,0,0,KickRay);
				
				if (impact && KickRay.HitType == TRACE_HitWall)
				{
				   KickRay.HitLine.Activate(self, 0, SPAC_Use);
				}
			}
			stop;
	}
}