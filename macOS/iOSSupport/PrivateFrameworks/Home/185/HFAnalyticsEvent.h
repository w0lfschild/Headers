//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDate, NSDictionary, NSString;

@interface HFAnalyticsEvent : NSObject
{
    unsigned long long _type;
    NSDate *_timestamp;
}

@property(retain, nonatomic) NSDate *timestamp; // @synthesize timestamp=_timestamp;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSDictionary *payload;
@property(readonly, nonatomic) NSString *name;
- (id)description;
- (id)initWithEventType:(unsigned long long)arg1;

@end

