//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <SilexVideo/SVVideoTransitionObserver-Protocol.h>

@class AVControlItem, NSString;
@protocol SVVideoSharingPolicy;

@interface SVShareButtonManager : NSObject <SVVideoTransitionObserver>
{
    AVControlItem *_controlItem;
    id <SVVideoSharingPolicy> _sharingPolicy;
}

@property(readonly, nonatomic) id <SVVideoSharingPolicy> sharingPolicy; // @synthesize sharingPolicy=_sharingPolicy;
@property(readonly, nonatomic) AVControlItem *controlItem; // @synthesize controlItem=_controlItem;
- (void).cxx_destruct;
- (void)willTransitionToVideo:(id)arg1 withTransitionCoordinator:(id)arg2;
- (id)initWithShareControlItem:(id)arg1 sharingPolicy:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

