//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class NSButton, NSString;

@interface _TtC15screencaptureui22TouchBarViewController : NSViewController
{
    // Error parsing type: , name: touchBarController
    // Error parsing type: , name: locationButton
    // Error parsing type: , name: closeButton
}

- (void).cxx_destruct;
- (void)locationPopUpAction:(id)arg1;
- (void)closeAction:(id)arg1;
- (void)screenCaptureStyleDidChange:(id)arg1;
- (void)screenCaptureDestinationDidChange:(id)arg1;
- (void)viewWillDisappear;
- (void)viewWillAppear;
- (void)viewDidLoad;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (id)initWithCoder:(id)arg1;
@property(nonatomic, readonly) NSString *nibName;
@property(nonatomic, retain) NSButton *closeButton; // @synthesize closeButton;
@property(nonatomic, retain) NSButton *locationButton; // @synthesize locationButton;

@end

