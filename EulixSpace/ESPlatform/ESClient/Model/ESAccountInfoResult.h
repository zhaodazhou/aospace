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





@protocol ESAccountInfoResult
@end

@interface ESAccountInfoResult : ESObject

/* 用户实际上的aoid [optional]
 */
@property(nonatomic) NSString* aoId;
/* 用户clientUUID [optional]
 */
@property(nonatomic) NSString* clientUUID;
/* 用户创建时间 [optional]
 */
@property(nonatomic) NSDate* createAt;
/* 用户image的md5值 [optional]
 */
@property(nonatomic) NSString* imageMd5;
/* 用户昵称 [optional]
 */
@property(nonatomic) NSString* personalName;
/* 用户签名 [optional]
 */
@property(nonatomic) NSString* personalSign;
/* 绑定手机型号 [optional]
 */
@property(nonatomic) NSString* phoneModel;
/* 用户是admin还是guest [optional]
 */
@property(nonatomic) NSString* role;
/* 用户域名 [optional]
 */
@property(nonatomic) NSString* userDomain;

@property(nonatomic) NSString* headImagePath;

@property(nonatomic,assign) BOOL isSelect;

@property(nonatomic) NSString* aoSpaceId;
@property(nonatomic) NSString* did;
@property(nonatomic) NSString* userStorage;
@property(nonatomic) NSString* totalStorage;

@end