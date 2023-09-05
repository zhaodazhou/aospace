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


#import "ESVersionDownInfo.h"
@protocol ESVersionDownInfo;
@class ESVersionDownInfo;



@protocol ESTask
@end

@interface ESTask : ESObject

/* docker-compose.yml [optional]
 */
@property(nonatomic) ESVersionDownInfo* cFile;

@property(nonatomic) ESVersionDownInfo* containerImg;

@property(nonatomic) NSString* doneDownTime;

@property(nonatomic) NSString* doneInstallTime;
/* 下载状态：\"\", ing, done, err [optional]
 */
@property(nonatomic) NSString* downStatus;
/* 安装状态：\"\", ing, done, err [optional]
 */
@property(nonatomic) NSString* installStatus;

@property(nonatomic) ESVersionDownInfo* rpmPkg;

@property(nonatomic) NSString* startDownTime;

@property(nonatomic) NSString* startInstallTime;
/* 整体流程状态：\"\", downloading, downloaded, installing, installed, download-err，install-err [optional]
 */
@property(nonatomic) NSString* status;

@property(nonatomic) NSString* versionId;

@end