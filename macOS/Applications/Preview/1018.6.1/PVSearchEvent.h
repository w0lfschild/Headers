//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "PVAnalyticsEventProtocol-Protocol.h"

@class NSString;

@interface PVSearchEvent : NSObject <PVAnalyticsEventProtocol>
{
    NSString *_searchStateString;
    NSString *_resultOrderingString;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSString *resultOrderingString; // @synthesize resultOrderingString=_resultOrderingString;
@property(readonly, copy, nonatomic) NSString *searchStateString; // @synthesize searchStateString=_searchStateString;
- (id)build;
@property(readonly) CDUnknownBlockType propertiesBuilder;
@property(readonly) NSString *name;
- (id)initWithSearchStateString:(id)arg1 resultOrderingString:(id)arg2;

@end

