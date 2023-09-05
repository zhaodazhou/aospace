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





@protocol ESUserRegistryResetInfo
@end

@interface ESUserRegistryResetInfo : ESObject

/* 盒子的 UUID 
 */
@property(nonatomic) NSString* boxUUID;
/* 用户的 ID 
 */
@property(nonatomic) NSString* userId;
/* 用户的注册码 
 */
@property(nonatomic) NSString* userRegKey;

@end