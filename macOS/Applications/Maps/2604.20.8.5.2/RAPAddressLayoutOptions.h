//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

__attribute__((visibility("hidden")))
@interface RAPAddressLayoutOptions : NSObject <NSCopying>
{
    BOOL _showUnit;
    BOOL _showBuilding;
    BOOL _showFloor;
}

+ (id)allFieldsDisabledOptions;
+ (id)allFieldsEnabledOptions;
+ (id)clientOverrideOptions;
@property(nonatomic) BOOL showFloor; // @synthesize showFloor=_showFloor;
@property(nonatomic) BOOL showBuilding; // @synthesize showBuilding=_showBuilding;
@property(nonatomic) BOOL showUnit; // @synthesize showUnit=_showUnit;
@property(readonly, nonatomic) long long numberOfEnabledOptions;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

