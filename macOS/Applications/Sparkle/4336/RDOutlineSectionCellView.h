//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSButton, NSTextField, NSTrackingArea;

@interface RDOutlineSectionCellView : NSTableCellView
{
    NSTextField *_customTextField;
    NSButton *_deleteBtn;
    id _invalidateThumbnailNotification;
    NSTrackingArea *_trackingArea;
}

@property(retain, nonatomic) NSTrackingArea *trackingArea; // @synthesize trackingArea=_trackingArea;
@property(retain, nonatomic) id invalidateThumbnailNotification; // @synthesize invalidateThumbnailNotification=_invalidateThumbnailNotification;
@property(nonatomic) __weak NSButton *deleteBtn; // @synthesize deleteBtn=_deleteBtn;
@property(nonatomic) __weak NSTextField *customTextField; // @synthesize customTextField=_customTextField;
- (void).cxx_destruct;
- (void)updateTrackingAreas;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)viewWillMoveToWindow:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

