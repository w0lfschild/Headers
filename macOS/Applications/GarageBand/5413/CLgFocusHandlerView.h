//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgUnilibView.h"

@class NSView;

@interface CLgFocusHandlerView : CLgUnilibView
{
    BOOL hasFirstResponderLook;
    BOOL hadFirstResponderLook;
    BOOL forceAttachedSubResponder;
    BOOL hasFocus;
    NSView *attachedSubResponder;
    BOOL _clickOnBoundsForcesFirstResponder;
    id _focusStateObserver;
}

+ (void)focusHandlerSubviewWasMadeFirstResponder:(id)arg1;
+ (BOOL)focusHandlerViewsWillBeRemoved:(id)arg1;
+ (void)noFocusedUnilibView;
+ (id)focusedUnilibView;
@property BOOL clickOnBoundsForcesFirstResponder; // @synthesize clickOnBoundsForcesFirstResponder=_clickOnBoundsForcesFirstResponder;
@property id focusStateObserver; // @synthesize focusStateObserver=_focusStateObserver;
- (void)setFrame:(struct CGRect)arg1;
- (void)rebuildControlHeader;
- (struct CGRect)customFocusRect;
- (BOOL)hasFocus;
- (id)initialSubResponder;
- (void)setForceAttachedSubResponder:(BOOL)arg1;
- (void)setAttachedSubResponder:(id)arg1;
- (BOOL)hasAttachedSubResponder;
- (id)windowTitle;
- (void)willResignFocus;
- (void)willBecomeFocus;
- (void)resignFocusedUnilibView;
- (void)becomeFocusedUnilibView;
- (void)windowDidResignKey3:(id)arg1;
- (void)windowDidBecomeKey3:(id)arg1;
- (void)maybeFirstResponderStateChanged;
- (void)private_willResignFocus;
- (void)private_willBecomeFocus;
- (BOOL)isFocusedUnilibView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;

@end

