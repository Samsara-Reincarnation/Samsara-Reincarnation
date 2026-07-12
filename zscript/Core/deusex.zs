Class DeusEx_DroneActivator : CustomInventory
{
	States
	{
		Pickup:
			TNT1 A 0
			{
				FLineTraceData UseRay;
				bool impact = LineTrace(angle,110,pitch,0,32,0,0,UseRay);
				
				if (impact && UseRay.HitType == TRACE_HitWall)
				{
				   UseRay.HitLine.Activate(self, 0, SPAC_Use);
				}
			}
			stop;
	}
}