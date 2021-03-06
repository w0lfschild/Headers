//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <EmailDaemon/NSObject-Protocol.h>

@class CSSearchableItem, EDSearchableIndexVerificationData, EMSearchableIndexQueryExpression, NSArray, NSDictionary;

@protocol EDSearchableIndexTesting <NSObject>
@property(readonly, copy, nonatomic) NSArray *fetchAttributes;
- (BOOL)verifySearchableItem:(CSSearchableItem *)arg1 againstExpectedData:(EDSearchableIndexVerificationData *)arg2;
- (EMSearchableIndexQueryExpression *)expressionFromDataSamples:(NSDictionary *)arg1;
- (EDSearchableIndexVerificationData *)transformDataForVerification:(EDSearchableIndexVerificationData *)arg1;
@end

