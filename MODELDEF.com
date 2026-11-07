Model ComplexDoom_Tracer
{ 
   Path "Models/ComplexDoom"
   SKIN 0 "tracer1.png"
   MODEL 0 "Tracer.md3"
   Scale 4.5 4.5 1.5
   PITCHFROMMOMENTUM
   FrameIndex CD28 \ 0 0
}

Model ComplexDoom_SGTracer
{ 
   Path "Models/ComplexDoom"
   SKIN 0 "tracer1.png"
   MODEL 0 "Tracer.md3"
   Scale 4.5 4.5 1.5
   PITCHFROMMOMENTUM
   FrameIndex CD28 \ 0 0
}

/*
Model ComplexDoom_10KProjectile
{ 
   Path "Models/ComplexDoom"
   SKIN 0 "tracer2.png"
   MODEL 0 "Tracer.md3"
   Scale 10.0 10.0 5.0
   PITCHFROMMOMENTUM
   FrameIndex CD29 Y 0 0
}
*/