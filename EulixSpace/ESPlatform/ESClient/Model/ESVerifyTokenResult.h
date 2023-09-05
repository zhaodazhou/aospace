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





@protocol ESVerifyTokenResult
@end

@interface ESVerifyTokenResult : ESObject

/* 请求标识，用于跟踪业务请求过程。 [optional]
 */
@property(nonatomic) NSString* requestId;
/* 合法性结果值，true：验证成功，false：验证失败。 [optional]
 */
@property(nonatomic) NSNumber* result;

@end