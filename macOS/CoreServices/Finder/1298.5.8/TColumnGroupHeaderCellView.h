//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage;

@interface TColumnGroupHeaderCellView : NSTableCellView
{
    _Bool _isInFloatingHeader;
}

@property(nonatomic, getter=isInFloatingHeader) _Bool inFloatingHeader; // @synthesize inFloatingHeader=_isInFloatingHeader;
- (void)layout;
- (void)updateLayer;
@property(retain, nonatomic) NSImage *tagImage; // @dynamic tagImage;
- (id)initWithFrame:(const struct CGRect *)arg1 withGroupTextField:(id)arg2;

@end

