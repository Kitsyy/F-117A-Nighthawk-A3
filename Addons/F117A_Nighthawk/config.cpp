#include "defines.cpp"

class CfgPatches
{
	class F117A
	{
		requiredAddons[]={"A3_Data_F_AoW_Loadorder"};
		requiredVersion=0.1;
		units[]={"F117A"};
		weapons[]={};
	};
};
class SensorTemplatePassiveRadar;
class SensorTemplateAntiRadiation;
class SensorTemplateActiveRadar;
class SensorTemplateIR;
class SensorTemplateVisual;
class SensorTemplateMan;
class SensorTemplateLaser;
class SensorTemplateNV;
class SensorTemplateDataLink;
class Eventhandlers;
class CfgVehicles
{
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};
	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class ViewPilot;
	};
	class Plane_Fighter_01_Base_F: Plane_Base_F
	{
	};
	class B_Plane_Fighter_01_Stealth_F: Plane_Fighter_01_Base_F
	{
		class Components;
	};
	class F117A_Nighthawk: B_Plane_Fighter_01_Stealth_F
	{
		displayName="F-117A Nighthawk";
		author="Kitsy ;3 / IronKoldo";
		model="\F117A_Nighthawk\model\F117A.p3d";
		weapons[]=
		{
			"Laserdesignator_pilotCamera",
			"CMFlareLauncher_Triples"
		};
		magazines[]=
		{
			"Laserbatteries",
			"240Rnd_CMFlare_Chaff_Magazine"
		};
		armor=45;
		getInAction="Pilot_Plane_Fighter_01_Enter";
		getOutAction="Pilot_Plane_Fighter_01_Exit";
		getInRadius=5.5;
		editorPreview="\A3\EditorPreviews_F_Jets\Data\Cfgvehicles\B_Plane_Fighter_01_F.jpg";
		picture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter01_picture_ca.paa";
		icon="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter01_icon_ca.paa";
		mapSize=18.25;
		animated=1;
		gearRetracting=1;
		geardowntime=3;
		gearuptime=4.5;
		fuelCapacity=1550;
		availableForSupportTypes[]=
		{
			"CAS_Bombing"
		};
		armorStructural=1;
		damageResistance=0.0040000002;
		LockDetectionSystem=8;
		incomingMissileDetectionSystem="8 + 16";
		enableGPS=1;
		radarTarget=1;
		visualTarget=1;
		radarTargetSize=0.025000001;
		visualTargetSize=0.05;
		irTargetSize=0.1;
		nvScanner=1;
		laserScanner=1;
		irScanGround=1;
		countermeasureActivationRadius=10000;
		driverCanSee=31;
		allowTabLock=1;
		memoryPointDriverOptics="FLIR_pos";
		memoryPointExhaust[]=
		{
			"Exhaust_L_start",
			"Exhaust_R_start"
		};
		memoryPointExhaustDir[]=
		{
			"Exhaust_L_end",
			"Exhaust_R_end"
		};
		airBrake=1;
		airBrakeFrictionCoef=2.4000001;
		flaps=1;
		flapsFrictionCoef=0.36000001;
		gearsUpFrictionCoef=0.80000001;
		brakeDistance=350;
		wheelSteeringSensitivity=4;
		maxSpeed=1100;
		altFullForce=5000;
		altNoForce=15000;
		rudderInfluence=0.76599997;
		aileronSensitivity=1.1;
		elevatorSensitivity=1.3;
		elevatorControlsSensitivityCoef=4;
		aileronControlsSensitivityCoef=3.5;
		rudderControlsSensitivityCoef=4;
		envelope[]={0,0.11,0.43000001,0.97000003,1.72,2.6900001,3.8699999,5.27,6.8899999,8.7200003,9.6999998,9.6000004,9.1999998,8.5,8.1999998,8};
		thrustCoef[]={1.76,1.6900001,1.62,1.6799999,1.74,1.8099999,1.89,1.95,1.96,1.96,1.92,1.4,0.40000001,0,0,0};
		elevatorCoef[]={0.30000001,0.5,0.66000003,0.51999998,0.49000001,0.46000001,0.43000001,0.40000001,0.34999999,0.30000001,0.25,0.18000001,0.17,0.16,0.15000001,0.15000001};
		aileronCoef[]={0.40000001,0.5,0.80000001,0.94999999,1.02,1.04,1.03,1.01,1,0.69999999,0.60000002,0.55000001,0.5,0.44999999,0.40000001,0.34999999};
		rudderCoef[]={0.5,1.8,2.5999999,2.75,2.8,2.8499999,2.9000001,2.95,2.98,3.01,2.7,1.1,0.89999998,0.69999999,0.5,0.30000001};
		angleOfIndicence="-1.0*3.1415/180";
		draconicForceXCoef=7;
		draconicForceYCoef=1.1;
		draconicForceZCoef=1;
		draconicTorqueXCoef[]={4,5.0999999,6.0999999,7,7.6999998,8.3000002,9,9.1000004,9.1999998,9.1999998,9.1999998};
		draconicTorqueYCoef[]={6.8000002,5.5,4,1.5,0.1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
		airFrictionCoefs0[]={0,0,0};
		airFrictionCoefs1[]={0.1,0.5,0.0074999998};
		airFrictionCoefs2[]={0.001,0.0049999999,6.7000001e-005};
		gunAimDown=0;
		landingSpeed=260;
		stallSpeed=200;
		stallWarningTreshold=0.12;
		acceleration=325;
		maxOmega=2000;
		antiRollbarForceCoef=0;
		antiRollbarForceLimit=0;
		antiRollbarSpeedMin=50;
		antiRollbarSpeedMax=300;
		class Wheels
		{
			class FWheel
			{
				boneName="Wheel Front";
				steering=1;
				side="left";
				center="Front_wheel_center";
				boundary="Front_wheel_rim";
				width=0.40000001;
				mass=30;
				MOI=0.40000001;
				dampingRate=0.1;
				dampingRateDamaged=1;
				dampingRateDestroyed=1000;
				maxBrakeTorque=0;
				maxHandBrakeTorque=0;
				suspTravelDirection[]={0,-1,0};
				suspForceAppPointOffset="Front_wheel_center";
				tireForceAppPointOffset="Front_wheel_center";
				maxCompression=0.30000001;
				maxDroop=0.30000001;
				sprungMass=1500;
				springStrength=150000;
				springDamperRate=30000;
				longitudinalStiffnessPerUnitGravity=300;
				latStiffX=3;
				latStiffY=20;
				frictionVsSlipGraph[]=
				{
					{0,1},
					{0.5,1},
					{1,1}
				};
			};

			class RWheel: FWheel
			{
				steering=0;
				boneName="Wheel_backR";
				center="Back_right_wheel_center";
				boundary="Back_right_wheel_rim";
				mass=35;
				MOI=1.575;
				width=0.60000002;
				maxBrakeTorque=1500;
				maxCompression=0.30000001;
				maxDroop=0.30000001;
				sprungMass=3350;
				springStrength=335000;
				springDamperRate=67000;
				longitudinalStiffnessPerUnitGravity=500;
				suspForceAppPointOffset="Back_right_wheel_center";
				tireForceAppPointOffset="Back_right_wheel_center";
			};

			class LWheel: RWheel
			{
				boneName="Wheel_backL";
				side="right";
				center="Back_left_wheel_center";
				boundary="Back_left_wheel_rim";
				suspForceAppPointOffset="Back_left_wheel_center";
				tireForceAppPointOffset="Back_left_wheel_center";
			};
		};

		class ViewPilot: ViewPilot
		{
			initFov=0.89999998;
			initAngleX=0;
			minAngleX=-45;
			maxAngleX=85;
			initAngleY=0;
			minAngleY=-130;
			maxAngleY=130;
			minMoveX=-0.1;
			maxMoveX=0.1;
			minMoveY=-0.025;
			maxMoveY=0.050000001;
			minMoveZ=-0.1;
			maxMoveZ=0.1;
		};

		class Components: Components
		{
			class TransportPylonsComponent
			{
				UIPicture="\A3\Air_F_Jets\Plane_Fighter_01\Data\UI\Fighter_01_3DEN_CA.paa";
				class pylons
				{
					class pylons1
					{
						maxweight=2500;
						hardpoints[]=
						{"B_BOMB_PYLON", "B_ASRAAM"};
						attachment="PylonMissile_1Rnd_BombCluster_01_F";
						bay=-1;
						priority=2;
						UIposition="{0.1, 0.25}";
						turret[]={};
					};
					class pylons2: pylons1
					{
						priority=1;
					};
				};
			};
		};
	};
};
class CfgFunctions
{
	tag = "Camera_Switch";
	class Actions
	{
		file = "\F117A_Nighthawk\functions\FlirDlir.sqf";
	};
};
