#import <Foundation/Foundation.h>
#import "ESObject.h"

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





@protocol ESCreateAuthCodeInfo
@end

@interface ESCreateAuthCodeInfo : ESObject

/* 业务接口访问 token。 [optional]
 */
@property(nonatomic) NSString* accessToken;
/* 使用对称密钥加密后的 auth-key。 [optional]
 */
@property(nonatomic) NSString* authKey;
/* 使用对称密钥加密后的 box name。 [optional]
 */
@property(nonatomic) NSString* boxName;
/* 使用对称密钥加密后的 box uuid。 [optional]
 */
@property(nonatomic) NSString* boxUUID;
/* 使用对称密钥加密后的 client-uuid。 [optional]
 */
@property(nonatomic) NSString* clientUUID;

@end