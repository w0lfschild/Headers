//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <CalendarPersistence/CalTruthFileMethod-Protocol.h>

@class NSData, NSString;

@interface CalTruthFileDataWrite : NSObject <CalTruthFileMethod>
{
    NSString *_path;
    NSData *_data;
}

+ (id)methodWithPath:(id)arg1 data:(id)arg2;
- (id)description;
- (void)main;
- (void)dealloc;
- (id)initWithPath:(id)arg1 data:(id)arg2;

@end

