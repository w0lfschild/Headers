//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSObject, NSTextField, NSView;
@protocol ICMSearchFieldFloatingViewControllerItem;

@interface ICMSearchFieldFloatingHeaderCellView : NSTableCellView
{
    NSObject<ICMSearchFieldFloatingViewControllerItem> *_item;
    NSTextField *_titleTextField;
    NSView *_dividerLine;
}

- (void).cxx_destruct;
@property __weak NSView *dividerLine; // @synthesize dividerLine=_dividerLine;
@property(nonatomic) __weak NSTextField *titleTextField; // @synthesize titleTextField=_titleTextField;
@property(retain, nonatomic) NSObject<ICMSearchFieldFloatingViewControllerItem> *item; // @synthesize item=_item;
- (void)updateValuesFromSearchItem;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)awakeFromNib;
- (BOOL)wantsLayer;
- (BOOL)allowsVibrancy;
- (void)dealloc;

@end

