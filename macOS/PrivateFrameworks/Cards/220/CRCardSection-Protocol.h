//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCopying.h"
#import "NSObject.h"

@class NSArray, NSString;

@protocol CRCardSection <NSObject, NSCopying>
@property(readonly, nonatomic) NSString *cardSectionIdentifier;

@optional
@property(readonly, nonatomic) BOOL hasNextCard;
@property(readonly, nonatomic) NSArray *actionCommands;
@property(readonly, nonatomic) id <SFCardSection> backingCardSection;
@end

