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





@protocol ESAppletInfoRes
@end

@interface ESAppletInfoRes : ESObject

/* appletid [optional]
 */
@property(nonatomic) NSString* appletId;
/* 小应用版本 [optional]
 */
@property(nonatomic) NSString* appletVersion;
/* iconurl [optional]
 */
@property(nonatomic) NSString* iconUrl;
/* 是否强制更新 [optional]
 */
@property(nonatomic) NSNumber* isForceUpdate;
/* md5 [optional]
 */
@property(nonatomic) NSString* md5;
/* 小应用名字 [optional]
 */
@property(nonatomic) NSString* name;
/* 小应用英文名字 [optional]
 */
@property(nonatomic) NSString* nameEn;
/* 小应用发布状态：0-支持安装;1-敬请期待 [optional]
 */
@property(nonatomic) NSNumber* state;
/* 上一次更新时间 [optional]
 */
@property(nonatomic) NSDate* updateAt;
/* 小应用描述 [optional]
 */
@property(nonatomic) NSString* updateDesc;

@end