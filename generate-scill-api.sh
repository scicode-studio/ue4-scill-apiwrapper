npx @openapitools/openapi-generator-cli generate -i https://raw.githubusercontent.com/scillgame/openapi/main/scill.yaml -g cpp-ue4 --model-name-prefix ScillApi -o ./ --additional-properties=unrealModuleName=ScillSDK,cppNamespace=ScillSDK,disallowAdditionalPropertiesIfNotPresent=false -t ./templates