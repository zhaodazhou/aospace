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





@protocol ESPasswdTryInfo
@end

@interface ESPasswdTryInfo : ESObject

/* boxUUID 
 */
@property(nonatomic) NSString* boxUUID;
/* 失败次数 [optional]
 */
@property(nonatomic) NSNumber* errorTimes;
/* 剩余尝试次数 [optional]
 */
@property(nonatomic) NSNumber* leftTryTimes;
/* 用户剩余时间 [optional]
 */
@property(nonatomic) NSNumber* tryAfterSeconds;

@end