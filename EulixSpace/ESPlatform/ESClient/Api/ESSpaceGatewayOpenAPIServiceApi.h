#import <Foundation/Foundation.h>
#import "ESCreateTokenResult.h"
#import "ESGetAccessTokenRequest.h"
#import "ESOAuthProcessData.h"
#import "ESRefreshTokenRequest.h"
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



@interface ESSpaceGatewayOpenAPIServiceApi: NSObject <ESApi>

extern NSString* kESSpaceGatewayOpenAPIServiceApiErrorDomain;
extern NSInteger kESSpaceGatewayOpenAPIServiceApiMissingParamErrorCode;

-(instancetype) initWithApiClient:(ESApiClient *)apiClient NS_DESIGNATED_INITIALIZER;

/// 
/// 通过 JSONP 的方式获得用户（owner）点击授权后相应的授权码
///
/// @param appletId 调用小应用 ID
/// @param appletSecret 调用小应用 secret
/// @param callback JSONP 回调
/// @param tempSecret 临时对称密钥，用户传输后续的 auth-code，该密钥需要通过盒子公钥加密
/// @param tempSecretIv 临时对称密钥IV，用户传输后续的 auth-code，该密钥 iv 需要通过 base64 编码
/// 
///  code:200 message:"OK"
///
/// @return void
-(NSURLSessionTask*) spaceV1ApiGatewayOpenapiAuthCodeGetWithAppletId: (NSString*) appletId
    appletSecret: (NSString*) appletSecret
    callback: (NSString*) callback
    tempSecret: (NSString*) tempSecret
    tempSecretIv: (NSString*) tempSecretIv
    completionHandler: (void (^)(NSError* error)) handler;


/// 
/// 获取用户（owner）确认授权
///
/// @param appletId 调用小应用 ID
/// @param appletSecret 调用小应用 secret
/// 
///  code:200 message:"OK"
///
/// @return ESOAuthProcessData*
-(NSURLSessionTask*) spaceV1ApiGatewayOpenapiAuthConfirmGetWithAppletId: (NSString*) appletId
    appletSecret: (NSString*) appletSecret
    completionHandler: (void (^)(ESOAuthProcessData* output, NSError* error)) handler;


/// 
/// 获取指定 applet-id 所申请的服务能力分组，每个分组包括对应的权限列表
///
/// @param appletId 调用客户端 ID
/// @param appletSecret 调用客户端 secret
/// 
///  code:200 message:"OK"
///
/// @return ESOAuthProcessData*
-(NSURLSessionTask*) spaceV1ApiGatewayOpenapiAuthScopesGetWithAppletId: (NSString*) appletId
    appletSecret: (NSString*) appletSecret
    completionHandler: (void (^)(ESOAuthProcessData* output, NSError* error)) handler;


/// 
/// 用户（owner）点击授权获得相应的授权码
///
/// @param body  (optional)
/// 
///  code:200 message:"OK"
///
/// @return ESCreateTokenResult*
-(NSURLSessionTask*) spaceV1ApiGatewayOpenapiAuthTokenCreatePostWithBody: (ESGetAccessTokenRequest*) body
    completionHandler: (void (^)(ESCreateTokenResult* output, NSError* error)) handler;


/// 
/// 用户（owner）点击授权获得相应的授权码
///
/// @param body  (optional)
/// 
///  code:200 message:"OK"
///
/// @return ESCreateTokenResult*
-(NSURLSessionTask*) spaceV1ApiGatewayOpenapiAuthTokenRefreshPostWithBody: (ESRefreshTokenRequest*) body
    completionHandler: (void (^)(ESCreateTokenResult* output, NSError* error)) handler;



@end