//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "__KNMacPresenterDisplayContentViewControllerAccessibility_super.h"

@class KNPlaybackControllerAccessibility, NSString;

@interface KNMacPresenterDisplayContentViewControllerAccessibility : __KNMacPresenterDisplayContentViewControllerAccessibility_super
{
}

+ (Class)tsaxBaseSafeCategoryClass;
+ (id)tsaxTargetClassName;
- (void)_tsaxApplyAccessibilityInfo;
- (void)tsaxLoadAccessibilityInformation;
- (void)setAnimatedPlaybackViewController:(id)arg1;
- (void)loadView;
@property(readonly, nonatomic) NSString *_tsaxPresenterNotesForCurrentSlide;
- (void)tsaxAnnounceCurrentSlideOrBuild;
- (id)_tsaxAnnouncementForCurrentBuild;
- (id)_tsaxAnnouncementForCurrentSlide;
@property(readonly, nonatomic) KNPlaybackControllerAccessibility *_tsaxPlaybackController;
@property(readonly, nonatomic) unsigned long long _tsaxEventCount;
@property(readonly, nonatomic) unsigned long long _tsaxCurrentEventNumber;
@property(readonly, nonatomic) unsigned long long _tsaxSlideCount;
@property(readonly, nonatomic) unsigned long long _tsaxCurrentSlideNumber;
- (void)p_updateForCurrentEventAnimated:(BOOL)arg1;
@property(copy, nonatomic, setter=_tsaxSetLastSeenPresenterNotesString:) NSString *_tsaxLastSeenPresenterNotesString;
@property(nonatomic, setter=_tsaxSetLastSeenEventNumber:) unsigned long long _tsaxLastSeenEventNumber;
@property(nonatomic, setter=_tsaxSetLastSeenSlideNumber:) unsigned long long _tsaxLastSeenSlideNumber;
- (id)tsaxTarget;

@end

