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
 * ScillApiBattlePassLevelReward
 *
 * This objects holds information about a battle pass reward
 */
class SCILLSDK_API ScillApiBattlePassLevelReward : public Model
{
public:
    virtual ~ScillApiBattlePassLevelReward() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The unique id of the app */
	TOptional<FString> AppId;
	/* The unique id of this battle pass. */
	TOptional<FString> BattlePassId;
	/* Unique id of this BattlePassLevel object. */
	TOptional<FString> LevelId;
	/* This is your user id. You can set this to whatever you like, either your real user id or an obfuscated user id. However you need to be consistent here. Events linked to this user id only track if challenges or battle passes are unlocked with the same user id. */
	TOptional<FString> UserId;
	/* Typical usage pattern is to load battle pass levels with getBattlePassLevels operation and store them for rendering. Using this value you can quickly identify the index of the level that changed. */
	TOptional<int32> LevelPositionIndex;
	/* In the Admin Panel you can set different types of rewards. You can also set an identifier of an in-game-item or anything you like. Use this to include the reward into your own business logic. */
	TOptional<FString> RewardAmount;
	/* There are different types of rewards available. Possible values are Coins, Voucher, Money and Experience. */
	TOptional<FString> RewardTypeName;
};

}
