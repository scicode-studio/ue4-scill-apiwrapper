/**
 * SCILL API
 * SCILL gives you the tools to activate, retain and grow your user base in your app or game by bringing you features well known in the gaming industry: Gamification. We take care of the services and technology involved so you can focus on your game and content.
 *
 * OpenAPI spec version: 1.0.0
 * Contact: support@scillgame.com
 *
 * NOTE: This class is auto generated by OpenAPI Generator
 * https://github.com/OpenAPITools/openapi-generator
 * Do not edit the class manually.
 */

#pragma once

#include "ScillApiBaseModel.h"

namespace ScillSDK
{

/*
 * ScillApiBattlePassLevelChallenge
 *
 * Each level in battle passes contains one or more challenges that need to be fullfilled to unlock the next level. This structure holds challenge information and is based on the Challenge structure. However, as Battle Passes manage the lifecycle of challenges, this data structure is a bit simpler. The same principles apply mostly as for the personal challenges, i.e. you can share the exact same UI to render personal challenges and battle pass challenges.
 */
class SCILLSDK_API ScillApiBattlePassLevelChallenge : public Model
{
public:
    virtual ~ScillApiBattlePassLevelChallenge() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique id of this challenge. Every challenge is linked to a product. */
	TOptional<FString> ChallengeId;
	/* The name of the challenge in the language set by the language parameter. */
	TOptional<FString> ChallengeName;
	/* Indicates how many “tasks” must be completed or done to complete this challenge. */
	TOptional<int32> ChallengeGoal;
	/* With this you can set the way how the SCILL system approaches the challenges state. 0 means, that the counter of the challenge must be brought above the goal. If this is 1, then the counter must be kept below the goal. This is often useful for challenges that include times, like: Manage the level in under 50 seconds. */
	TOptional<int32> ChallengeGoalCondition;
	/* Indicates how many tasks the user already has completed. Use this in combination with challenge_goal to render a nice progress bar. */
	TOptional<int32> UserChallengeCurrentScore;
	/* If you have experience, player rankings whatever, you can use this field to set the gain in that when this challenge is rewarded. */
	TOptional<int32> ChallengeXp;
	/* In the admin panel you can set a string representing an image. This can be a URL, but it can also be an image or texture that you have in your games asset database. */
	TOptional<FString> ChallengeIcon;
	/* This is the HD variant of the challenge icon image. If you have a game, that runs on multiple platforms that could come in handy. Otherwise just leave blank. */
	TOptional<FString> ChallengeIconHd;
	/* Indicates the status of the challenge. This can be one of the following unlock: Challenge does not track anything. in-progress: Challenge is active and tracking. overtime: User did not manage to finish the challenge in time. unclaimed: The challenge has been completed but the reward has not yet been claimed. finished: The challenge has been successfully be completed and the reward has been claimed */
	TOptional<FString> Type;
};

}