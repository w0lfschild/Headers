//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface ACDEventLedger : NSObject
{
    char *_crashInfoString;
    NSMutableArray *_eventLedger;
}

+ (id)sharedLedger;
- (void).cxx_destruct;
@property(retain) NSMutableArray *eventLedger; // @synthesize eventLedger=_eventLedger;
- (void)simulateCrashWithMessage:(id)arg1;
- (id)historyDescription;
- (void)recordEvent:(id)arg1;
- (id)init;

@end

