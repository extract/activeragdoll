#pragma once

#include "skse64/GameReferences.h"

#include "blender.h"
#include "RE/offsets.h"


enum class RagdollState : UInt8
{
	Keyframed,
	BlendIn,
	Collide,
	BlendOut,
};

struct ActiveRagdoll
{
	ActiveRagdoll()
	{
		easeConstraintsAction = (hkpEaseConstraintsAction *)Heap_Allocate(sizeof(hkpEaseConstraintsAction));
	}

	~ActiveRagdoll()
	{
		hkReferencedObject_removeReference(easeConstraintsAction);
	}

	Blender blender{};
	std::vector<hkQsTransform> animPose{};
	std::vector<float> stress{};
	std::vector<float> restStress{};
	float avgStress = 0.f;
	hkpEaseConstraintsAction *easeConstraintsAction = nullptr;
	double frameTime = 0.0;
	double stateChangedTime = 0.0;
	RagdollState state = RagdollState::Keyframed;
	bool isOn = false;
};
