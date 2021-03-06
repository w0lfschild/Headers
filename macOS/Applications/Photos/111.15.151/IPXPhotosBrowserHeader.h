//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPXPhotosHeader.h"

#import "NSAccessibilityContainsTransientUI-Protocol.h"

@class NSButton, NSImageView, NSString;
@protocol IPXPhotosBrowserHeaderDelegate;

__attribute__((visibility("hidden")))
@interface IPXPhotosBrowserHeader : IPXPhotosHeader <NSAccessibilityContainsTransientUI>
{
    BOOL _axAlternateUIIsShowing;
    BOOL _overviewControlsAvailable;
    NSButton *_transparentOverviewButton;
    NSImageView *_locationChevronView;
    struct {
        char overviewAction;
    } _delegateRespondsTo;
    BOOL _enableOverviewControls;
    id <IPXPhotosBrowserHeaderDelegate> _delegate;
}

+ (id)newTransparentOverviewButtonWithTarget:(id)arg1;
+ (id)chevronImageViewForTextField:(id)arg1;
@property(nonatomic) BOOL enableOverviewControls; // @synthesize enableOverviewControls=_enableOverviewControls;
@property(nonatomic) __weak id <IPXPhotosBrowserHeaderDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)ipx_reflectDisplayedContentFromSupplementaryHeader:(id)arg1;
- (BOOL)isAccessibilityAlternateUIVisible;
- (BOOL)accessibilityPerformShowDefaultUI;
- (BOOL)accessibilityPerformShowAlternateUI;
- (void)sendTransientUIChangedNotification:(BOOL)arg1;
- (id)accessibilityTransientUIElements;
- (BOOL)accessibilityPerformShowMenu;
- (BOOL)_isMouseInside;
- (void)_updateOverviewControls;
- (void)updateWithMediaSection:(id)arg1;
- (BOOL)resizeTextFields;
- (double)subtitleBaselineOffsetFromBottom;
- (double)titleBaselineOffsetFromBottom;
- (struct CGSize)fittingSize;
- (void)a_showOverview:(id)arg1;
- (BOOL)sectionContainsPoint:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithCoder:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

