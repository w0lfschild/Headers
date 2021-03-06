//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSWindow.h>

@class LPAppController, LPDragOverlayWindow;

__attribute__((visibility("hidden")))
@interface LPMainWindow : NSWindow
{
    LPAppController *_appController;
    LPDragOverlayWindow *_overlayWindow;
    unsigned long long _cachedDragOperation;
}

@property(readonly, nonatomic) LPDragOverlayWindow *overlayWindow; // @synthesize overlayWindow=_overlayWindow;
@property(readonly, nonatomic) unsigned long long cachedDragOperation; // @synthesize cachedDragOperation=_cachedDragOperation;
- (void)mouseUp:(id)arg1;
- (void)setFrameTopLeftPoint:(struct CGPoint)arg1;
- (void)setFrameOrigin:(struct CGPoint)arg1;
- (void)setFrameFromString:(id)arg1;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2 animate:(BOOL)arg3;
- (void)setFrame:(struct CGRect)arg1 display:(BOOL)arg2;
- (void)draggingExited:(id)arg1;
- (BOOL)performDragOperation:(id)arg1;
- (BOOL)prepareForDragOperation:(id)arg1;
- (unsigned long long)draggingUpdated:(id)arg1;
- (unsigned long long)draggingEntered:(id)arg1;
- (void)hideOverlay:(id)arg1;
- (void)showOverlayWithDescriptorString:(id)arg1 isPlural:(BOOL)arg2;
- (void)dealloc;
- (void)awakeFromNib;

@end

