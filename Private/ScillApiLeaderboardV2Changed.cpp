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

#include "ScillApiWrapper/ScillApiLeaderboardV2Changed.h"

#include "ScillSDKModule.h"
#include "ScillApiWrapper/ScillApiHelpers.h"

#include "Templates/SharedPointer.h"

namespace ScillSDK
{

void ScillApiLeaderboardV2Changed::WriteJson(JsonWriter& Writer) const
{
	Writer->WriteObjectStart();
	if (WebhookType.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("webhook_type")); WriteJsonValue(Writer, WebhookType.GetValue());
	}
	if (OldLeaderboard.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("old_leaderboard")); WriteJsonValue(Writer, OldLeaderboard.GetValue());
	}
	if (NewLeaderboard.IsSet())
	{
		Writer->WriteIdentifierPrefix(TEXT("new_leaderboard")); WriteJsonValue(Writer, NewLeaderboard.GetValue());
	}
	Writer->WriteObjectEnd();
}

bool ScillApiLeaderboardV2Changed::FromJson(const TSharedPtr<FJsonValue>& JsonValue)
{
	const TSharedPtr<FJsonObject>* Object;
	if (!JsonValue->TryGetObject(Object))
		return false;

	bool ParseSuccess = true;

	ParseSuccess &= TryGetJsonValue(*Object, TEXT("webhook_type"), WebhookType);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("old_leaderboard"), OldLeaderboard);
	ParseSuccess &= TryGetJsonValue(*Object, TEXT("new_leaderboard"), NewLeaderboard);

	return ParseSuccess;
}

}
