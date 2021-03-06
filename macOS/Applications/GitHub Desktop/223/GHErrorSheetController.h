//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "GHWindowController.h"

@class NSButton, NSError, NSImageView, NSTextField, NSTextView, RACSubject;

@interface GHErrorSheetController : GHWindowController
{
    BOOL _visible;
    NSTextField *_titleTextField;
    NSTextView *_descriptionTextView;
    NSImageView *_octocatImageView;
    NSButton *_rightButton;
    NSButton *_leftButton;
    NSTextView *_plainTextTextView;
    NSError *_presentedError;
    GHWindowController *_hostWindowController;
    RACSubject *_latestSubject;
}

@property(retain, nonatomic) RACSubject *latestSubject; // @synthesize latestSubject=_latestSubject;
@property(readonly, nonatomic) __weak GHWindowController *hostWindowController; // @synthesize hostWindowController=_hostWindowController;
@property(retain, nonatomic) NSError *presentedError; // @synthesize presentedError=_presentedError;
@property(nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;
@property(nonatomic) NSTextView *plainTextTextView; // @synthesize plainTextTextView=_plainTextTextView;
@property(nonatomic) __weak NSButton *leftButton; // @synthesize leftButton=_leftButton;
@property(nonatomic) __weak NSButton *rightButton; // @synthesize rightButton=_rightButton;
@property(nonatomic) __weak NSImageView *octocatImageView; // @synthesize octocatImageView=_octocatImageView;
@property(nonatomic) NSTextView *descriptionTextView; // @synthesize descriptionTextView=_descriptionTextView;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
- (void).cxx_destruct;
- (void)close;
- (void)retryWithOption:(unsigned long long)arg1;
- (void)leftButtonClicked:(id)arg1;
- (void)rightButtonClicked:(id)arg1;
- (id)presentWithError:(id)arg1;
- (void)awakeFromNib;
- (id)initWithHostWindowController:(id)arg1;

@end

