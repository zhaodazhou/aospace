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





@protocol ESNetwork
@end

@interface ESNetwork : ESObject


@property(nonatomic) NSString* ip;

@property(nonatomic) NSNumber* port;

@property(nonatomic) NSString* wifiName;
/* 有线 [optional]
 */
@property(nonatomic) NSNumber* wire;

@end