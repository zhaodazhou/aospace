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





@protocol ESShareDetailRsp
@end

@interface ESShareDetailRsp : ESObject


@property(nonatomic) NSNumber* autoFill;

@property(nonatomic) NSNumber* boxTime;

@property(nonatomic) NSNumber* createTime;

@property(nonatomic) NSNumber* expiredTime;

@property(nonatomic) NSString* extractedCode;

@property(nonatomic) NSNumber* fileCount;

@property(nonatomic) NSString* fileName;

@property(nonatomic) NSNumber* haveExploredTimes;

@property(nonatomic) NSNumber* isDir;

@property(nonatomic) NSNumber* maxExploredTimes;

@property(nonatomic) NSString* shareId;

@property(nonatomic) NSString* shareUrl;

@end