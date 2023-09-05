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





@protocol ESClientRegistryResetResult
@end

@interface ESClientRegistryResetResult : ESObject

/* 盒子的 UUID [optional]
 */
@property(nonatomic) NSString* boxUUID;
/* 客户端的 UUID [optional]
 */
@property(nonatomic) NSString* clientUUID;
/* 用户的 ID [optional]
 */
@property(nonatomic) NSString* userId;

@end