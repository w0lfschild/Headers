//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSInputStream, NSString, SIGIdentity;

@protocol SIGSigningAlgorithm <NSObject>
+ (NSString *)name;
- (NSData *)signatureForInputStream:(NSInputStream *)arg1 usingIdentity:(SIGIdentity *)arg2 error:(out id *)arg3;
@end

