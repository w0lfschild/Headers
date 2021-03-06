//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@class GKAccountViewController, NSButton, NSImageView, NSView, NSWindow;

@interface GKGreenBuddyViewController : NSViewController
{
    NSWindow *_window;
    NSView *_mainView;
    NSButton *_innerRightButton;
    NSButton *_outerRightButton;
    NSButton *_innerLeftButton;
    NSButton *_outerLeftButton;
    NSImageView *_bubbleImageView;
    long long _mode;
    GKAccountViewController *_webViewController;
}

@property(retain) GKAccountViewController *webViewController; // @synthesize webViewController=_webViewController;
@property NSImageView *bubbleImageView; // @synthesize bubbleImageView=_bubbleImageView;
@property NSButton *outerLeftButton; // @synthesize outerLeftButton=_outerLeftButton;
@property NSButton *innerLeftButton; // @synthesize innerLeftButton=_innerLeftButton;
@property NSButton *outerRightButton; // @synthesize outerRightButton=_outerRightButton;
@property NSButton *innerRightButton; // @synthesize innerRightButton=_innerRightButton;
@property NSView *mainView; // @synthesize mainView=_mainView;
@property NSWindow *window; // @synthesize window=_window;
- (void)startLoadingURLForLocalPlayer:(id)arg1;
- (void)dealloc;
- (void)awakeFromNib;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @dynamic completionHandler;
@property long long mode; // @dynamic mode;

@end

