//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MSACSessionHistoryInfo, NSMutableArray;

@interface MSACSessionContext : NSObject
{
    MSACSessionHistoryInfo *_currentSessionInfo;
    NSMutableArray *_sessionHistory;
}

+ (void)resetSharedInstance;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *sessionHistory; // @synthesize sessionHistory=_sessionHistory;
@property(retain, nonatomic) MSACSessionHistoryInfo *currentSessionInfo; // @synthesize currentSessionInfo=_currentSessionInfo;
- (void)clearSessionHistoryAndKeepCurrentSession:(BOOL)arg1;
- (id)sessionIdAt:(id)arg1;
- (void)setSessionId:(id)arg1;
- (id)sessionId;
- (id)init;

@end

