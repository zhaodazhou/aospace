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


#import "ESABContact.h"
#import "ESPageInfo.h"
@protocol ESABContact;
@class ESABContact;
@protocol ESPageInfo;
@class ESPageInfo;



@protocol ESPageListResultABContact
@end

@interface ESPageListResultABContact : ESObject


@property(nonatomic) NSArray<ESABContact>* list;

@property(nonatomic) ESPageInfo* pageInfo;

@end