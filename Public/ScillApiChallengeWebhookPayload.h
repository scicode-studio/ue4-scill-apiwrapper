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
#include "ScillApiChallenge.h"

namespace ScillSDK
{

/*
 * ScillApiChallengeWebhookPayload
 *
 * The payload sent to the users webhook.
 */
class SCILLSDK_API ScillApiChallengeWebhookPayload : public Model
{
public:
    virtual ~ScillApiChallengeWebhookPayload() {}
	bool FromJson(const TSharedPtr<FJsonValue>& JsonValue) final;
	void WriteJson(JsonWriter& Writer) const final;

	/* The type of the webhook. Depending on the module, there are different webhook types indicating different events. Check the reference documentation to see all types. */
	TOptional<FString> WebhookType;
	/* The index of the category this challenge is linked to. When you request personal challenges, you get an array of categories which contain an array of challenges in their challenges property. This value indicates in which category this challenge can be found. Speeds up updating UI as you don't need to iterate through all catagories and challenges to find the challenge. */
	TOptional<double> CategoryPosition;
	/* The access token for the user of that challenge. You can use that user_token to directly send another event and therefore to chain different SCILL pieces together. For example you can send another event driving another challenge or battle pass whenever a user has completed a challenge. */
	TOptional<FString> UserToken;
	TOptional<ScillApiChallenge> NewChallenge;
	TOptional<ScillApiChallenge> OldChallenge;
};

}
