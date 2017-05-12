//
//  RestClient.h
//  photo-wal
//
//  Created by 劉士豪 on 2017/5/12.
//  Copyright © 2017年 劉士豪. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "RestRequest.h"

@protocol RequestAuthenticator <NSObject>

- (void)authenticate:(RestRequest*)request;

@end

@interface RestClient : NSObject
+ (NSString*)defaultEndPoint;

- (instancetype)initWithAuthenticator:(id<RequestAuthenticator>)authenticator;

- (instancetype)initWithEndPoint:(NSString*)endPoint andAuthenticator:(id<RequestAuthenticator>)authenticator;

- (RestRequest*)path:(NSString*)path;
@end
