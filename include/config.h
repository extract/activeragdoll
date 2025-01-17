#pragma once

#include <set>

#include "skse64/NiNodes.h"
#include "skse64/GameData.h"


namespace Config {
	struct Options {
		float activeRagdollStartDistance = 50.f;
		float activeRagdollEndDistance = 60.f;

		double blendInTime = 0.2;
		double getUpBlendTime = 0.2;

		bool enableKeyframes = true;
		double blendInKeyframeTime = 0.05;

		double hitCooldownTimeStoppedColliding = 0.2;
		double hitCooldownTimeFallback = 1.0;
		double physicsHitRecoveryTime = 0.01;

		double thrownObjectLingerTime = 5.0;

		double worldChangedWaitTime = 0.4;

		bool enableActorShove = true;
		bool disableShoveWhileWeaponsDrawn = true;
		bool enableShoveFromFurniture = true;
		bool playShovePhysicsSound = true;
		bool playSoundOnShoveNoStamina = true;
		float shoveStaggerMagnitude = 0.25f;
		float shoveStaminaCost = 40.f;
		float shoveSpeedThreshold = 2.5f;
		float shoveRumbleIntensity = 0.2f;
		float shoveRumbleDuration = 0.15f;
		float shoveAggressionImpact = 2.5f;
		double shoveCooldown = 2.0;
		double collisionCooldownTime = 0.7;
		std::vector<UInt32> shoveTopicInfos = {
			0x0006CB2C, // Be careful!
			0x0006CB2D, // Hey, watch it!
			0x0006AE39, // What are you doing that for?
			0x0007038E, // What do you think you're doing?
			0x0002A460, // Hey! Hands off!
		};

		bool enableBump = true;
		bool doAggression = true;
		bool followersSkipAggression = true;
		bool stopUsingFurnitureOnHighAggression = true;
		double aggressionBumpCooldownTime = 1.0;
		double aggressionStopDelay = 2.0;
		double aggressionDialogueInitMaxTime = 0.15f;
		double aggressionDialogueTimerMaxDeviation = 0.1f;
		double aggressionDialogueCooldownFallback = 1.8;
		double aggressionDialogueCooldown = 0.2f;
		float aggressionRequiredGrabTimeLow = 0.2f;
		float aggressionRequiredGrabTimeHigh = 3.5f;
		float aggressionRequiredGrabTimeAssault = 7.f;
		float aggressionMaxAccumulatedGrabTime = 20.f;
		float aggressionStopCombatAlarmDistance = 1500.f;
		int aggressionMaxRelationshipRank = 0; // Acquantaince
		std::vector<UInt32> aggressionLowTopicInfos = {
			0x0006CB2C, // Be careful!
			0x0006CB2D, // Hey, watch it!
			0x0006CB2E, // Don't do that
			0x0006AE39, // What are you doing that for?
			0x0006CB30, // Keep your hands to yourself
			0x000142B7, // Hands off
			0x0002A460, // Hey! Hands off!
//			0x000142BB, // Don't even think about it
		};
		std::vector<UInt32> aggressionHighTopicInfos = {
			0x000BABE1, // I'm warning you, back off!
			0x000D3E92, // Get away from me
			0x000BABE0, // That's close enough
			0x0007038E, // What do you think you're doing?
		};

		bool doSpeedReduction = true;
		float smallRaceSpeedReduction = 35.f;
		float mediumRaceSpeedReduction = 55.f;
		float largeRaceSpeedReduction = 70.f;
		float extraLargeRaceSpeedReduction = 85.f;
		float maxSpeedReduction = 85.f;
		float speedReductionHealthInfluence = 0.5f;
		float followerSpeedReductionMultiplier = 0.25f;

		bool followersSkipStaminaCost = true;
		bool playSoundOnGrabStaminaDepletion = true;
		float grabbedActorStaminaCost = 10.f;
		float grabbedActorStaminaCostHealthInfluence = 0.8f;

		bool ragdollOnGrab = false;
		bool ragdollSmallRacesOnGrab = true;
		float smallRaceHealthThreshold = 6.f;

		bool doKeepOffset = true;
		bool bumpActorIfKeepOffsetFails = true;
		double keepOffsetRetryInterval = 1.0;

		float collisionDamageMinSpeed = 400.f; // skyrim units
		float collisionDamageMinMass = 6.f;

		bool doWarp = true;
		float maxAllowedDistBeforeWarp = 15.f;

		float hierarchyGain = 0.6f;
		float velocityGain = 0.6f;
		float positionGain = 0.05f;

		float poweredControllerOnFraction = 0.05f;

		float poweredMaxForce = 500.f;
		float poweredTau = 0.8f;
		float poweredDaming = 1.0f;
		float poweredProportionalRecoveryVelocity = 5.f;
		float poweredConstantRecoveryVelocity = 0.2f;

		float ragdollBoneMaxLinearVelocity = 500.f;
		float ragdollBoneMaxAngularVelocity = 500.f;

		bool overrideSoundVelForRagdollCollisions = true;
		float ragdollSoundVel = 1000.f;

		float playerVsBipedInteractionImpulseMultiplier = 0.f;

		bool stopRagdollNonSelfCollisionForCloseActors = true;
		float closeActorMinDistance = 2.f;
		bool stopRagdollNonSelfCollisionForActorsWithVehicle = true;

		bool stopAggressionForCloseActors = true;
		bool stopAggressionForActorsWithVehicle = true;

		bool enableBipedBipedCollision = true;
		bool enableBipedBipedCollisionNoCC = true;
		bool doBipedSelfCollision = true;
		bool doBipedSelfCollisionForNPCs = true;
		bool doBipedNonSelfCollision = true;
		bool enableBipedDeadBipCollision = true;
		bool enablePlayerBipedCollision = true;
		bool disableBipedCollisionWithWorld = true;
		bool enableBipedClutterCollision = true;
		bool enableBipedWeaponCollision = true;
		bool enableBipedProjectileCollision = true;
		bool disableGravityForActiveRagdolls = true;
		bool loosenRagdollContraintsToMatchPose = true;
		bool convertHingeConstraintsToRagdollConstraints = true;
		bool copyFootIkToPoseTrack = true;
		bool disableCullingForActiveRagdolls = true;
		bool forceGenerateForActiveRagdolls = true;
		bool forceAnimationUpdateForActiveActors = true;
		bool disableClutterVsCharacterControllerCollisionForActiveActors = true;
		bool doClutterVsBipedCollisionDamage = true;
		bool showCollisionDamageHitFx = false;
		bool forceAnimPose = false;
		bool forceRagdollPose = false;
		bool doBlending = true;
		bool applyImpulseOnHit = true;
		bool useHandVelocityForStabHitDirection = true;
		bool disableHitIfSheathed = false;
		bool blendWhenGettingUp = false;
		bool disableConstraints = false;

		float hitImpulseBaseStrength = 1.f;
		float hitImpulseProportionalStrength = -0.15f;
		float hitImpulseMassExponent = 0.5f;

		float hitImpulseMinStrength = 0.2f;
		float hitImpulseMaxStrength = 1.f;
		float hitImpulseMaxVelocity = 1500.f; // skyrim units

		float hitImpulseDownwardsMultiplier = 0.5f;

		float hitSwingSpeedThreshold = 5.f;
		float hitSwingImpulseMult = 1.f;

		float hitStabDirectionThreshold = 0.8f;
		float hitStabSpeedThreshold = 2.f;
		float hitStabImpulseMult = 5.0f;

		float hitPunchDirectionThreshold = 0.7f;
		float hitPunchSpeedThreshold = 2.5f;
		float hitPunchImpulseMult = 2.25f;

		float hitRequiredHandSpeedRoomspace = 1.f;

		float hitImpulseDecayMult1 = 0.225f;
		float hitImpulseDecayMult2 = 0.125f;
		float hitImpulseDecayMult3 = 0.075f;

		float meleeSwingLinearVelocityThreshold = 3.f;
		float shieldSwingLinearVelocityThreshold = 3.f;

		bool resizePlayerCharController = true;
		bool adjustPlayerCharControllerBottomRingHeightToMaintainSlope = true;
		bool resizePlayerCapsule = true;
		bool centerPlayerCapsule = true;
		float playerCharControllerRadius = 0.15f;
		float playerCapsuleRadius = 0.15f;

		std::set<std::string, std::less<>> additionalSelfCollisionRaces;
		std::set<std::string, std::less<>> excludeRaces;
		std::set<std::string, std::less<>> aggressionExcludeRaces;
	};
	extern Options options; // global object containing options


	// Fills Options struct from INI file
	bool ReadConfigOptions();

	bool ReloadIfModified();

	const std::string & GetConfigPath();

	std::string GetConfigOption(const char * section, const char * key);

	bool GetConfigOptionDouble(const char *section, const char *key, double *out);
	bool GetConfigOptionFloat(const char *section, const char *key, float *out);
	bool GetConfigOptionInt(const char *section, const char *key, int *out);
	bool GetConfigOptionBool(const char *section, const char *key, bool *out);
}
