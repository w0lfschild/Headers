//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MAToolKit/MAKitView.h>

#import "OverlayHelpDataSource-Protocol.h"

@class CLgMasterLevelMeter, CLgMasterVolumeSlider, CLgTransportBtnsView, CLgTransportButton, CLgUnilibTransportView, CLgViewBtnsView, NSDictionary, NSMutableArray, NSString;

@interface CLgTransportBarView : MAKitView <OverlayHelpDataSource>
{
    CLgTransportBtnsView *_transportBtnsView;
    CLgViewBtnsView *_viewBtnsViewLeft;
    CLgViewBtnsView *_viewBtnsViewRight;
    CLgUnilibTransportView *_timeDisplayView;
    NSMutableArray *_btnsArrayLeft;
    NSMutableArray *_btnsArrayRight;
    CLgMasterLevelMeter *_masterLevel;
    CLgMasterVolumeSlider *_masterVolume;
    CLgTransportButton *_chevronBtn;
    NSDictionary *_transpLayoutDict;
    BOOL _isFloatTransport;
    int _mouseInside;
}

+ (id)defaultLayoutDict:(BOOL)arg1;
+ (void)setDefaultLayoutDict:(id)arg1;
+ (id)factoryDefaultLayoutDict;
+ (id)factoryDefaultLayoutDict_UL1;
+ (id)factoryDefaultLayoutDict_UL0;
- (void)updateRecordButton1;
- (void)updateControlRoomLevel1;
- (void)headerVolumeSliderAction:(id)arg1;
- (long long)numberOfTransportButtonStatesForTransportBtnID1:(int)arg1;
- (long long)transportButtonStateForTransportBtnID1:(int)arg1;
- (void)updateAllTransportButtonStates;
- (void)updateTunerButton;
- (void)updateTransportButtonState:(int)arg1;
- (BOOL)setTransportButtonState1:(long long)arg1 enabled:(BOOL)arg2 forTranspBtnID:(int)arg3;
- (BOOL)setTransportButtonState1:(long long)arg1 enabled:(BOOL)arg2 forTranspBtn:(id)arg3;
- (id)transportBtnForID:(int)arg1;
- (id)displayOptionsArray;
- (id)transportLayoutDictUL;
- (id)transportLayoutDict;
- (void)setupWithTransportLayoutDict:(id)arg1;
- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)transportDisplayChangedFrame;
- (void)setMinWindowSizeIfNeeded;
- (void)presentTransportChevronMenu:(id)arg1 forView:(id)arg2;
- (void)addMenuItemForViewButton:(id)arg1 menu:(id)arg2;
- (void)transportChevronViewsAction:(id)arg1;
- (void)transportChevronAction:(id)arg1;
- (void)resizeTransportBarSubviews;
- (void)addControlsWithTranspRects:(struct CGRect *)arg1 numVisibleBtnsLeft:(struct CLgBtnGroup *)arg2 numVisibleBtnsRight:(struct CLgBtnGroup *)arg3 hasMasterVol:(BOOL)arg4 chevronNeededForViewButtons:(BOOL)arg5;
- (void)setBackColumnIndexForButtonGroup:(id)arg1;
- (void)setUnilibViewsUserData:(id)arg1;
- (BOOL)acceptsFirstMouse:(id)arg1;
- (void)mouseDragged:(id)arg1;
- (BOOL)mouseDownCanMoveWindow;
- (void)setMouseInside:(int)arg1;
- (int)mouseInside;
- (void)renderAllButtonGroups;
- (id)viewBtnsViewRight;
- (id)viewBtnsViewLeft;
- (id)timeDisplayView;
- (id)windowTitle;
- (BOOL)isOpaque;
- (void)keyCommandChanged:(id)arg1;
- (void)updateTransportButtons:(id)arg1;
- (id)overlayHelpObjects;
- (void)viewWillMoveToWindow:(id)arg1;
- (void)viewDidMoveToWindow;
- (void)displayHelpWindowForHelpButton;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1 docwLayout:(id)arg2 layoutCreator:(id)arg3;
- (id)filterNotAllowedItemsInDict:(id)arg1;
- (id)filterNotAllowedItemsInArray:(id)arg1;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (BOOL)accessibilityIsIgnored;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

