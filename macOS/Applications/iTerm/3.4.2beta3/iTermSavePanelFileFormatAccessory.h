//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSViewController.h"

@class NSPopUpButton;

@interface iTermSavePanelFileFormatAccessory : NSViewController
{
    NSPopUpButton *_popupButton;
    CDUnknownBlockType _onChange;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType onChange; // @synthesize onChange=_onChange;
@property(retain, nonatomic) NSPopUpButton *popupButton; // @synthesize popupButton=_popupButton;
- (void)popupButtonDidChange:(id)arg1;
- (void)viewDidLoad;

@end

