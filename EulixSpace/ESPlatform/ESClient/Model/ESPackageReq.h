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





@protocol ESPackageReq
@end

@interface ESPackageReq : ESObject


@property(nonatomic) NSString* downloadUrl;
/* 是否强制更新 [optional]
 */
@property(nonatomic) NSNumber* isForceUpdate;

@property(nonatomic) NSString* md5;
/* 最小兼容版本（更新盒子，兼容的最小App版本；更新App，兼容的最小盒子版本； [optional]
 */
@property(nonatomic) NSString* minAndroidVersion;
/* 最小兼容版本（更新盒子，兼容的最小App版本；更新App，兼容的最小盒子版本； [optional]
 */
@property(nonatomic) NSString* minBoxVersion;
/* 最小兼容版本（更新盒子，兼容的最小App版本；更新App，兼容的最小盒子版本； [optional]
 */
@property(nonatomic) NSString* minIOSVersion;

@property(nonatomic) NSString* pkgName;
/* 文件大小，单位byte [optional]
 */
@property(nonatomic) NSNumber* pkgSize;

@property(nonatomic) NSString* pkgType;
/* 版本号 
 */
@property(nonatomic) NSString* pkgVersion;
/* 版本特性 [optional]
 */
@property(nonatomic) NSString* updateDesc;

@end