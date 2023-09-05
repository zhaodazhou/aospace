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





@protocol ESMessage
@end

@interface ESMessage : ESObject


@property(nonatomic) NSString* clientUUID;

@property(nonatomic) NSString* data;

@property(nonatomic) NSString* optType;

@property(nonatomic) NSString* requestId;

@property(nonatomic) NSString* userId;

@end