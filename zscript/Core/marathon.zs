Class MarathonPunchActivator : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				FLineTraceData PunchRay;
				bool impact = LineTrace(angle,110,pitch,0,32,0,0,PunchRay);
				
				if (impact && PunchRay.HitType == TRACE_HitWall)
				{
				   PunchRay.HitLine.Activate(self, 0, SPAC_Use);
				}
			}
			stop;
	}
}