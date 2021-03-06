//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class CEProjectChooserImageView, CEProjectChooserItemLabel, CEProjectChooserItemSelectionView, CEProjectChooserLoadingIndicator, CEProjectChooserPlayButton, CEProjectChooserThumbnailView, FFAnchoredSequence, FFMediaEventDocument, FFPlayerModule, LKWindowModule, NSString;

@interface CEProjectChooserItemViewController : NSViewController
{
    BOOL _selected;
    BOOL _playing;
    int _projectType;
    NSString *_projectID;
    FFPlayerModule *_playerModule;
    FFAnchoredSequence *_previewSequence;
    FFMediaEventDocument *_previewDocument;
    CEProjectChooserLoadingIndicator *_previewSpinner;
    CEProjectChooserItemSelectionView *_selectionView;
    CEProjectChooserThumbnailView *_thumbnailView;
    CEProjectChooserItemLabel *_castInfoText;
    CEProjectChooserItemLabel *_durationText;
    CEProjectChooserPlayButton *_playBtn;
    CEProjectChooserImageView *_highlightView;
    CEProjectChooserImageView *_glossView;
    LKWindowModule *_windowModule;
}

@property(nonatomic) LKWindowModule *windowModule; // @synthesize windowModule=_windowModule;
@property(retain, nonatomic) CEProjectChooserImageView *glossView; // @synthesize glossView=_glossView;
@property(retain, nonatomic) CEProjectChooserImageView *highlightView; // @synthesize highlightView=_highlightView;
@property(retain, nonatomic) CEProjectChooserPlayButton *playBtn; // @synthesize playBtn=_playBtn;
@property(retain, nonatomic) CEProjectChooserItemLabel *durationText; // @synthesize durationText=_durationText;
@property(retain, nonatomic) CEProjectChooserItemLabel *castInfoText; // @synthesize castInfoText=_castInfoText;
@property(retain, nonatomic) CEProjectChooserThumbnailView *thumbnailView; // @synthesize thumbnailView=_thumbnailView;
@property(retain, nonatomic) CEProjectChooserItemSelectionView *selectionView; // @synthesize selectionView=_selectionView;
@property(retain, nonatomic) CEProjectChooserLoadingIndicator *previewSpinner; // @synthesize previewSpinner=_previewSpinner;
@property(retain, nonatomic) FFMediaEventDocument *previewDocument; // @synthesize previewDocument=_previewDocument;
@property(retain, nonatomic) FFAnchoredSequence *previewSequence; // @synthesize previewSequence=_previewSequence;
@property(retain, nonatomic) FFPlayerModule *playerModule; // @synthesize playerModule=_playerModule;
@property(retain, nonatomic) NSString *projectID; // @synthesize projectID=_projectID;
@property(nonatomic) int projectType; // @synthesize projectType=_projectType;
@property(nonatomic) BOOL playing; // @synthesize playing=_playing;
@property(nonatomic) BOOL selected; // @synthesize selected=_selected;
- (void)timeRateChangedForContext:(id)arg1;
- (id)newPreviewSequence:(id *)arg1;
- (void)stopPlayback;
- (void)startPlayback;
- (void)removePlayer;
- (void)loadPlayer;
- (BOOL)hasPlayer;
- (void)previewCancelled;
- (void)previewCreated:(id)arg1;
- (void)syncTrailerDurationCaption:(id)arg1;
- (void)syncTrailerCastInfoCaption:(id)arg1;
- (void)syncThemedDurationCaption:(id)arg1;
- (void)syncThemedCastInfoCaption:(id)arg1;
- (void)syncItem;
- (void)syncPlayBtn;
- (void)togglePlay:(id)arg1;
- (void)notificationHandler:(id)arg1;
- (void)removeNotifications;
- (void)installNotifications;
- (id)displayName;
- (id)itemView;
- (void)awakeFromNib;
- (void)dealloc;
- (id)initWithProjectID:(id)arg1 projectType:(int)arg2;

@end

