//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPCMessageObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface IPCTrafficIncidentAlertMessage : IPCMessageObject
{
    unsigned long long _type;
    NSString *_title;
    NSString *_subtitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(copy, nonatomic) NSString *title; // @synthesize title=_title;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
- (id)description;
- (id)dictionaryValue;
- (id)initWithDictionary:(id)arg1;

@end

