//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSTableCellView.h>

@class NSImage;

__attribute__((visibility("hidden")))
@interface LPFilesOutlineFileCellView : NSTableCellView
{
    struct CGColor *_greenFillColor;
    struct CGColor *_greenStrokeColor;
    BOOL _wantsDimmedState;
    BOOL _drawsRightMarker;
    NSImage *_iconForStandardRowState;
    NSImage *_iconForSelectedRowState;
}

@property(nonatomic) BOOL drawsRightMarker; // @synthesize drawsRightMarker=_drawsRightMarker;
@property(nonatomic) BOOL wantsDimmedState; // @synthesize wantsDimmedState=_wantsDimmedState;
@property(retain, nonatomic) NSImage *iconForSelectedRowState; // @synthesize iconForSelectedRowState=_iconForSelectedRowState;
@property(retain, nonatomic) NSImage *iconForStandardRowState; // @synthesize iconForStandardRowState=_iconForStandardRowState;
- (void)setBackgroundStyle:(long long)arg1;
- (void)dealloc;

@end

