//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNPlaybackSession;

@interface KNAnimationAnalyticsLogger : NSObject
{
    KNPlaybackSession *_session;
    BOOL _isShowcast;
}

+ (BOOL)logAnalyticsWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL isShowcast; // @synthesize isShowcast=_isShowcast;
- (id)p_generatePlaybackCompletedPayload;
- (BOOL)logAnalytics;
@property(readonly, nonatomic) BOOL shouldLogAnalytics;
- (id)initWithPlaybackSession:(id)arg1 isShowcast:(BOOL)arg2;
- (id)init;

@end

