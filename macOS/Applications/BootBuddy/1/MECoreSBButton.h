//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSButton, NSImageView, NSTextField;

@interface MECoreSBButton : NSView
{
    unsigned char _selected;
    NSImageView *_buttonImage;
    NSButton *_buttonClickArea;
    NSButton *_buttonExtra;
    NSView *_buttonHighlightArea;
    NSTextField *_buttonLabel;
    NSView *_linkedView;
}

- (void).cxx_destruct;
@property(retain) NSView *linkedView; // @synthesize linkedView=_linkedView;
@property(retain) NSTextField *buttonLabel; // @synthesize buttonLabel=_buttonLabel;
@property(retain) NSView *buttonHighlightArea; // @synthesize buttonHighlightArea=_buttonHighlightArea;
@property(retain) NSButton *buttonExtra; // @synthesize buttonExtra=_buttonExtra;
@property(retain) NSButton *buttonClickArea; // @synthesize buttonClickArea=_buttonClickArea;
@property(retain) NSImageView *buttonImage; // @synthesize buttonImage=_buttonImage;
@property unsigned char selected; // @synthesize selected=_selected;

@end

