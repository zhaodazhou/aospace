#import <Foundation/Foundation.h>
#import "ESSecretCheckResult.h"
#import "ESApi.h"

/**
* EulixOS Platform Server API
* Platform open APIs
*
* OpenAPI spec version: 0.1.0
* Contact: dev-support@eulixos.com
*
* NOTE: This class is auto generated by the swagger code generator program.
* https://github.com/swagger-api/swagger-codegen.git
* Do not edit the class manually.
*/



@interface ESOpenApiPlatformServiceApi: NSObject <ESApi>

extern NSString* kESOpenApiPlatformServiceApiErrorDomain;
extern NSInteger kESOpenApiPlatformServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(ESApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// 
///
/// @param appletId 
/// @param appletSecret 
/// @param boxRegKey 
/// 
///  code:200 message:"OK"
///
/// @return ESSecretCheckResult*
-(NSURLSessionTask*) spaceV1ApiAppletCheckSecretGetWithAppletId: (NSString*) appletId
    appletSecret: (NSString*) appletSecret
    boxRegKey: (NSString*) boxRegKey
    completionHandler: (void (^)(ESSecretCheckResult* output, NSError* error)) handler;



@end