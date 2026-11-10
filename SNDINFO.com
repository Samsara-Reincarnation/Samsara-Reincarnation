$pitchshiftrange 0

// Melee
$random complexdoom/weapons/fistpunch { complexdoom/weapons/fistpunch1 complexdoom/weapons/fistpunch2 complexdoom/weapons/fistpunch3 }
complexdoom/weapons/fistpunch1		"sounds/ComplexDoom/complexdoom_FISTPUN1.wav"
complexdoom/weapons/fistpunch2		"sounds/ComplexDoom/complexdoom_FISTPUN2.wav"
complexdoom/weapons/fistpunch3		"sounds/ComplexDoom/complexdoom_FISTPUN3.wav"
complexdoom/weapons/fistwiff		"sounds/ComplexDoom/complexdoom_DSWIFF.wav"
complexdoom/weapons/kick			"sounds/ComplexDoom/complexdoom_dsmkick.wav"
complexdoom/weapons/berserkkick		"sounds/ComplexDoom/complexdoom_dsmbkick.ogg"
complexdoom/weapons/kickhit			"sounds/ComplexDoom/complexdoom_dskickpf.wav"

// Chainsaw
complexdoom/weapons/pickupsaw		"sounds/ComplexDoom/complexdoom_dsgetsaw.wav"
complexdoom/weapons/sawup		"sounds/ComplexDoom/complexdoom_DSSAWUP.wav"
complexdoom/weapons/sawidle		"sounds/ComplexDoom/complexdoom_DSSAWIDL.ogg"
complexdoom/weapons/sawfull		"sounds/ComplexDoom/complexdoom_DSSAWFUL.wav"
$volume complexdoom/Weapons/SawScreech 0.6
$random complexdoom/Weapons/SawScreech { complexdoom/chainsaw/hitwall1 complexdoom/chainsaw/hitwall2 complexdoom/chainsaw/hitwall3 complexdoom/chainsaw/hitwall4 }
complexdoom/chainsaw/hitwall1	"sounds/ComplexDoom/complexdoom_DSSAWAL1.ogg"
complexdoom/chainsaw/hitwall2	"sounds/ComplexDoom/complexdoom_DSSAWAL2.ogg"
complexdoom/chainsaw/hitwall3	"sounds/ComplexDoom/complexdoom_DSSAWAL3.ogg"
complexdoom/chainsaw/hitwall4	"sounds/ComplexDoom/complexdoom_DSSAWAL4.ogg"
$random complexdoom/saw/flesh { complexdoom/HIT01 complexdoom/HIT02 complexdoom/HIT03 complexdoom/HIT04 complexdoom/HIT05 complexdoom/HIT06 complexdoom/HIT07 complexdoom/HIT08 complexdoom/HIT09 }
complexdoom/HIT01	"sounds/ComplexDoom/complexdoom_DSAWH01.wav"
complexdoom/HIT02	"sounds/ComplexDoom/complexdoom_DSAWH02.wav"
complexdoom/HIT03	"sounds/ComplexDoom/complexdoom_DSAWH03.wav"
complexdoom/HIT04	"sounds/ComplexDoom/complexdoom_DSAWH04.wav"
complexdoom/HIT05	"sounds/ComplexDoom/complexdoom_DSAWH05.wav"
complexdoom/HIT06	"sounds/ComplexDoom/complexdoom_DSAWH06.wav"
complexdoom/HIT07	"sounds/ComplexDoom/complexdoom_DSAWH07.wav"
complexdoom/HIT08	"sounds/ComplexDoom/complexdoom_DSAWH08.wav"
complexdoom/HIT09	"sounds/ComplexDoom/complexdoom_DSAWH09.wav"

// Handgun
complexdoom/weapons/pickuptp		"sounds/ComplexDoom/complexdoom_DSGETTP.wav"
complexdoom/weapons/tpfire			"sounds/ComplexDoom/complexdoom_DSTPFIR.wav"
complexdoom/weapons/pistolsnap		"sounds/ComplexDoom/complexdoom_DSPISNP.wav"
complexdoom/weapons/pistolclipin	"sounds/ComplexDoom/complexdoom_DSCIN.wav"
complexdoom/weapons/pistolclipout	"sounds/ComplexDoom/complexdoom_DSCOUT.wav"

// Combat Shotgun
complexdoom/weapons/12gsgcock		"sounds/ComplexDoom/complexdoom_DS12GCK.wav"
complexdoom/weapons/12gaugefire	"sounds/ComplexDoom/complexdoom_DS12GFIR.wav"
complexdoom/Weapons/ShellLoad	"sounds/ComplexDoom/complexdoom_DSSHLOD1.ogg"

// Double Barrel Shotgun
complexdoom/weapons/pickupssg		"sounds/ComplexDoom/complexdoom_DSGTSSG.wav"
complexdoom/weapons/sshotf			"sounds/ComplexDoom/complexdoom_DSDSHTGN.wav"
complexdoom/weapons/ssgsingleshot	"sounds/ComplexDoom/complexdoom_DSSGOB.wav"
complexdoom/weapons/sawedopen		"sounds/ComplexDoom/complexdoom_DSSAWOPN.lmp"
complexdoom/weapons/shellslide		"sounds/ComplexDoom/complexdoom_DSSLSLID.wav"
complexdoom/weapons/sawedclose		"sounds/ComplexDoom/complexdoom_DSSAWCLS.lmp"

// Assault Shotgun
complexdoom/AShotgun/Fire 				"sounds/ComplexDoom/complexdoom_DSASGFR1.wav"
complexdoom/AShotgun/Cock				"sounds/ComplexDoom/complexdoom_DSASHUP.wav"
complexdoom/Weapons/ASGShellLoad		"sounds/ComplexDoom/complexdoom_DSASHL1.ogg"
complexdoom/AShotgun/DrumOut			"sounds/ComplexDoom/complexdoom_DSDRUMO.ogg"
complexdoom/AShotgun/DrumIn				"sounds/ComplexDoom/complexdoom_DSDRUMI.ogg"

// Assault Rifle
complexdoom/weapons/assaultrifle		"sounds/ComplexDoom/complexdoom_DSCGUN.wav"
complexdoom/items/assaultrifle			"sounds/ComplexDoom/complexdoom_CG-GET.wav"
complexdoom/weapons/arreload   			"sounds/ComplexDoom/complexdoom_DSARMOU.wav"
complexdoom/weapons/arclick				"sounds/ComplexDoom/complexdoom_DSARPRM.wav"

// Minigun
complexdoom/weapons/mgunspinstart		"sounds/ComplexDoom/complexdoom_DSMINSTA.wav"
complexdoom/weapons/mgunspin			"sounds/ComplexDoom/complexdoom_DSMINSPI.wav"
complexdoom/weapons/mgunspinstop		"sounds/ComplexDoom/complexdoom_DSMINSTO.wav"
complexdoom/weapons/minigunpickup 		"sounds/ComplexDoom/complexdoom_DSMNGUP.wav"
complexdoom/weapons/minigunfire 		"sounds/ComplexDoom/complexdoom_DSMINI1.wav"
complexdoom/weapons/minigundown 		"sounds/ComplexDoom/complexdoom_DSMGDOWN.wav"

// Rocket Launcher
complexdoom/weapons/pickupml		"sounds/ComplexDoom/complexdoom_DSGETML.wav"
complexdoom/rocket/fire				"sounds/ComplexDoom/complexdoom_DSRLFIRE.ogg"
complexdoom/rocket/drumspin			"sounds/ComplexDoom/complexdoom_DSRLDSP.wav"
complexdoom/weapons/mlfire			"sounds/ComplexDoom/complexdoom_DSMISFIR.wav"
complexdoom/weapons/rocketdrumin    "sounds/ComplexDoom/complexdoom_DSMSDIN.wav"
complexdoom/weapons/rocketdrumbounce "sounds/ComplexDoom/complexdoom_DSEDRUB.ogg"

// Grenade Launcher
complexdoom/Weapons/GrenadeFire		"sounds/ComplexDoom/complexdoom_DSGRFIRE.wav"
complexdoom/Weapons/GrenadeSpin		"sounds/ComplexDoom/complexdoom_DSGRSPIN.ogg"
complexdoom/Weapons/GrenadeBounce		"sounds/ComplexDoom/complexdoom_DGLGBNC1.wav"
complexdoom/Weapons/GrenadePickup		"sounds/ComplexDoom/complexdoom_DSGRPUP.ogg"
complexdoom/Weapons/GrenadeReload		"sounds/ComplexDoom/complexdoom_DSGLML.wav"
complexdoom/Weapons/GrenadeCycle		"sounds/ComplexDoom/complexdoom_DSGLOD.wav"

// Plasma Rifle
complexdoom/weapons/pickuphr		"sounds/ComplexDoom/complexdoom_DSGETPL.wav"
$random complexdoom/weapons/hrfire { complexdoom/weapons/plasma1 complexdoom/weapons/plasma2 }
$random complexdoom/weapons/hrballexplode { complexdoom/weapons/plasmax1 complexdoom/weapons/plasmax2 complexdoom/weapons/plasmax3 }
complexdoom/weapons/plasma1			"sounds/ComplexDoom/complexdoom_DSPLAS1.wav"
complexdoom/weapons/plasma2			"sounds/ComplexDoom/complexdoom_DSPLAS2.wav"
complexdoom/weapons/plasmax1		"sounds/ComplexDoom/complexdoom_DSD3PH1.wav"
complexdoom/weapons/plasmax2		"sounds/ComplexDoom/complexdoom_DSD3PH2.wav"
complexdoom/weapons/plasmax3		"sounds/ComplexDoom/complexdoom_DSD3PH3.wav"
complexdoom/weapons/plasmacellout   "sounds/ComplexDoom/complexdoom_DSPLREL.wav"
complexdoom/weapons/plasmacellin    "sounds/ComplexDoom/complexdoom_DSPLCIN.ogg"

// Railgun
complexdoom/weapons/pickuprg		"sounds/ComplexDoom/complexdoom_DSRGPKU.wav"
$rolloff complexdoom/weapons/rgcharge 300 1800
complexdoom/weapons/rgcharge		"sounds/ComplexDoom/complexdoom_DSRGCHAR.ogg"
complexdoom/weapons/cellreload		"sounds/ComplexDoom/complexdoom_DSCERL.wav"
complexdoom/weapons/railgunhum		"sounds/ComplexDoom/complexdoom_DSRAHUM.wav"
complexdoom/weapons/railselect		"sounds/ComplexDoom/complexdoom_DSRGSEL.wav"
$alias complexdoom/weapons/railfire doomguy/railgf

// BFG9500
complexdoom/weapons/bfgpickup		"sounds/ComplexDoom/complexdoom_DSGETBFG.wav"
complexdoom/weapons/bfgselect		"sounds/ComplexDoom/complexdoom_DSSBFG.wav"
$rolloff complexdoom/weapons/bfgf 600 2200
complexdoom/weapons/bfgf		"sounds/ComplexDoom/complexdoom_DSBFG.wav"
$rolloff complexdoom/BFG9K/Explode 800 2200
complexdoom/BFG9K/Explode			"sounds/ComplexDoom/complexdoom_DSBFG9EX.ogg"

// BFG10K
complexdoom/weapons/pickup15k		"sounds/ComplexDoom/complexdoom_DSGET15K.wav"
$rolloff complexdoom/weapons/charge15k 400 2200
complexdoom/weapons/charge15k		"sounds/ComplexDoom/complexdoom_DSBFG15K.ogg"
$rolloff complexdoom/weapons/bfg15kfire 600 2200
complexdoom/weapons/bfg15kfire		"sounds/ComplexDoom/complexdoom_DSBFG15F.wav"
complexdoom/weapons/bfg15kidle		"sounds/ComplexDoom/complexdoom_DSBFG15I.wav"
complexdoom/weapons/bfg15kcooldown	"sounds/ComplexDoom/complexdoom_DSBFG15C.flac"
$rolloff complexdoom/weapons/bfg95explode 800 1800
complexdoom/weapons/bfg95explode	"sounds/ComplexDoom/complexdoom_DSBFG10X.wav"

// Hand Grenade
complexdoom/weapons/hgrenadethrow 		"sounds/ComplexDoom/complexdoom_DSHGREN1.wav"
complexdoom/weapons/hgrenadepin			"sounds/ComplexDoom/complexdoom_DSHGREN2.wav"
complexdoom/weapons/hgrenadebounce		"sounds/ComplexDoom/complexdoom_DSHGREN3.wav"
complexdoom/weapons/hgrenadepickup		"sounds/ComplexDoom/complexdoom_DSHGREN4.wav"
$rolloff complexdoom/weapons/hgrenadeex 400 1600
complexdoom/weapons/hgrenadeex			"sounds/ComplexDoom/complexdoom_DSHGREN5.wav"

// Explosions 
$rolloff complexdoom/weapons/rocklx 600 1800
$random complexdoom/weapons/rocklx { complexdoom/exp1 complexdoom/exp2 complexdoom/exp3 complexdoom/exp4 complexdoom/exp5 complexdoom/exp6 complexdoom/exp7 }
complexdoom/exp1					"sounds/ComplexDoom/complexdoom_DSLAGEX1.ogg"
complexdoom/exp2					"sounds/ComplexDoom/complexdoom_DSLAGEX2.ogg"
complexdoom/exp3					"sounds/ComplexDoom/complexdoom_DSLAGEX3.ogg"
complexdoom/exp4					"sounds/ComplexDoom/complexdoom_DSLAGEX4.ogg"
complexdoom/exp5					"sounds/ComplexDoom/complexdoom_DSLAGEX5.ogg"
complexdoom/exp6					"sounds/ComplexDoom/complexdoom_DSLAGEX6.ogg"
complexdoom/exp7					"sounds/ComplexDoom/complexdoom_DSLAGEX7.ogg"

// Player Sounds
$random complexdoom/player/death { complexdoom/player/death1 complexdoom/player/death2 complexdoom/player/death3 }
complexdoom/player/death1 "sounds/ComplexDoom/complexdoom_DSCPDE1.wav"
complexdoom/player/death2 "sounds/ComplexDoom/complexdoom_DSCPDE2.wav"
complexdoom/player/death3 "sounds/ComplexDoom/complexdoom_DSCPDE3.wav"

complexdoom/player/crazydeath "sounds/ComplexDoom/complexdoom_dscpdhi.wav"

complexdoom/player/burndeath dgdethf

$random complexdoom/player/gibbed { complexdoom/player/gib1 complexdoom/player/gib2 complexdoom/player/gib3 complexdoom/player/gib4 }
complexdoom/player/gib1 "sounds/ComplexDoom/complexdoom_SPLAT1.wav"
complexdoom/player/gib2 "sounds/ComplexDoom/complexdoom_SPLAT2.wav"
complexdoom/player/gib3 "sounds/ComplexDoom/complexdoom_SPLAT3.wav"
complexdoom/player/gib4 "sounds/ComplexDoom/complexdoom_SPLAT4.wav"

$random complexdoom/player/land	{ complexdoom/player/land1 complexdoom/player/land2 complexdoom/player/land3 complexdoom/player/land4 }
complexdoom/player/land1 "sounds/ComplexDoom/complexdoom_LAND1.ogg"
complexdoom/player/land2 "sounds/ComplexDoom/complexdoom_LAND2.ogg"
complexdoom/player/land3 "sounds/ComplexDoom/complexdoom_LAND3.ogg"
complexdoom/player/land4 "sounds/ComplexDoom/complexdoom_LAND4.ogg"

complexdoom/player/pain100 "sounds/ComplexDoom/complexdoom_dscppa1.wav"
complexdoom/player/pain75 "sounds/ComplexDoom/complexdoom_dscppa2.wav"
$alias complexdoom/player/pain50 complexdoom/player/pain75
complexdoom/player/pain25 "sounds/ComplexDoom/complexdoom_dscppa3.wav"

$playeralias	DoomguyCom  male	*death			complexdoom/player/death
$playersound	DoomguyCom  male	*xdeath			sounds/ComplexDoom/complexdoom_dscpdhi.wav
$playersound	DoomguyCom  male	*burndeath		dgdethf
$playersound	DoomguyCom  male	*crazydeath		sounds/ComplexDoom/complexdoom_dscpdhi.wav
$playersounddup DoomguyCom  male	*wimpydeath 	*death
$playeralias	DoomguyCom  male	*gibbed			complexdoom/player/gibbed
$playersound	DoomguyCom  male	*falling		dgfall
$playeralias	DoomguyCom  male	*pain100		complexdoom/player/pain100
$playeralias	DoomguyCom  male	*pain75			complexdoom/player/pain75
$playersounddup	DoomguyCom  male	*pain50			*pain75
$playeralias	DoomguyCom  male	*pain25			complexdoom/player/pain25
$playersound	DoomguyCom  male	*grunt			sounds/ComplexDoom/complexdoom_dscpoof.wav
$playeralias	DoomguyCom  male	*land			complexdoom/player/land
$playersound	DoomguyCom  male    *jump           sounds/ComplexDoom/complexdoom_dscpnwy.wav
$playersound	DoomguyCom  male	*usefail		sounds/ComplexDoom/complexdoom_dscpnwy.wav
$playersound	DoomguyCom  male	*puzzfail		sounds/ComplexDoom/complexdoom_dscpnwy.wav
$playersound	DoomguyCom  male	*taunt			sounds/ComplexDoom/complexdoom_dscptau.wav
$playersound    DoomguyCom  male	*poison         silence

// Misc. Sounds
complexdoom/weapons/weapondown		"sounds/ComplexDoom/complexdoom_DSWEPDWN.wav"
complexdoom/weapons/click			"sounds/ComplexDoom/complexdoom_DSCLICKY.wav"
complexdoom/weapons/click2			"sounds/ComplexDoom/complexdoom_DSCLICK2.ogg"
complexdoom/weapons/click3			"sounds/ComplexDoom/complexdoom_DSCLICK3.wav"
complexdoom/weapons/click4			"sounds/ComplexDoom/complexdoom_DSCLICK4.wav"

$random complexdoom/weapons/casing1	{ complexdoom/weapons/bullet1 complexdoom/weapons/bullet2 complexdoom/weapons/bullet3 }
complexdoom/weapons/bullet1			"sounds/ComplexDoom/complexdoom_DSCASING.wav"
complexdoom/weapons/bullet2			"sounds/ComplexDoom/complexdoom_DSCASIN2.wav"
complexdoom/weapons/bullet3			"sounds/ComplexDoom/complexdoom_DSCASIN3.wav"

$random complexdoom/weapons/cellcasing { complexdoom/casing/cell1 complexdoom/casing/cell2 complexdoom/casing/cell3 complexdoom/casing/cell4 }
complexdoom/casing/cell1			"sounds/ComplexDoom/complexdoom_DSECELL1.wav"
complexdoom/casing/cell2			"sounds/ComplexDoom/complexdoom_DSECELL2.wav"
complexdoom/casing/cell3			"sounds/ComplexDoom/complexdoom_DSECELL3.wav"
complexdoom/casing/cell4			"sounds/ComplexDoom/complexdoom_DSECELL4.wav"

complexdoom/weapons/emptymagazine		"sounds/ComplexDoom/complexdoom_DSCLIP.wav"
complexdoom/pickups/berserk				"sounds/ComplexDoom/complexdoom_DSBERSK.wav"