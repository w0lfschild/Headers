//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

#import "KNMacPlayToolbarPopUpButtonDelegate-Protocol.h"

@class NSString;

@interface KNMacPlayToolbarItemButtonViewController : NSViewController <KNMacPlayToolbarPopUpButtonDelegate>
{
    BOOL _forWindowedPlayback;
    BOOL _showcastActive;
    BOOL _recordingActive;
    unsigned long long _viewerCount;
}

@property(nonatomic, getter=isRecordingActive) BOOL recordingActive; // @synthesize recordingActive=_recordingActive;
@property(nonatomic, getter=isShowcastActive) BOOL showcastActive; // @synthesize showcastActive=_showcastActive;
@property(nonatomic) unsigned long long viewerCount; // @synthesize viewerCount=_viewerCount;
- (void)popupButtonDidFinishAnimating:(id)arg1;
- (void)p_updateConfiguration;
- (id)p_buttonImage;
- (SEL)p_buttonAction;
- (void)viewDidLoad;
- (id)i_view;
- (id)nibName;
- (id)initForWindowedPlayback:(BOOL)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

