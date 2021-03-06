//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSTextView.h>

#import "NSLayoutManagerDelegate.h"

@class NSString;

@interface NSSecureTextView : NSTextView <NSLayoutManagerDelegate>
{
    long long _outerTag;
    long long _innerTag;
    struct {
        unsigned int _secureInput:1;
        unsigned int _capsLockDown:1;
        unsigned int _numLockDown:1;
        unsigned int _invalidated:1;
        unsigned int _reserved:28;
    } _sdvFlags;
}

+ (BOOL)_allowKillRing;
+ (void)initialize;
+ (id)secureTextViewForWindow:(id)arg1;
+ (void)_doMenu:(id)arg1;
- (BOOL)_shouldUseBoundsOutsets;
- (void)updateCandidates;
- (BOOL)isAutomaticTextCompletionEnabled;
- (id)candidateListTouchBarItem;
- (id)_definitionAnimationControllerForAttributedString:(id)arg1 range:(struct _NSRange)arg2 options:(id)arg3 baselineOriginProvider:(CDUnknownBlockType)arg4;
- (id)_revealAnimationControllerForCharacterAtIndex:(unsigned long long)arg1;
- (id)_immediateActionAnimationControllerForCharacterAtIndex:(unsigned long long)arg1 withRecognizer:(id)arg2;
- (void)quickLookWithEvent:(id)arg1;
- (void)updateTrackingAreas;
- (id)view:(id)arg1 stringForToolTip:(long long)arg2 point:(struct CGPoint)arg3 userData:(void *)arg4;
- (void)_drawInsertionPointInRect:(struct CGRect)arg1 color:(id)arg2;
- (void)drawRect:(struct CGRect)arg1;
- (void)getCapsLockRect:(struct CGRect *)arg1 numLockRect:(struct CGRect *)arg2;
- (void)layoutManagerDidInvalidateLayout:(id)arg1;
- (void)didChangeText;
- (void)flagsChanged:(id)arg1;
- (void)setMarkedText:(id)arg1 selectedRange:(struct _NSRange)arg2 replacementRange:(struct _NSRange)arg3;
- (id)inputContext;
- (void)resignKeyWindow;
- (void)becomeKeyWindow;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (void)_updateIndicators;
- (BOOL)validateUserInterfaceItem:(id)arg1;
- (id)menuForEvent:(id)arg1;
- (unsigned long long)enabledTextCheckingTypes;
- (void)orderFrontSubstitutionsPanel:(id)arg1;
- (void)checkSpelling:(id)arg1;
- (void)showGuessPanel:(id)arg1;
- (void)complete:(id)arg1;
- (void)startSpeaking:(id)arg1;
- (BOOL)_allowsMultipleTextSelectionByMouse;
- (BOOL)_continuousCheckingAllowed;
- (id)itemsForSharingServiceInRanges:(id)arg1;
- (void)copy:(id)arg1;
- (BOOL)writeSelectionToPasteboard:(id)arg1 type:(id)arg2;
- (id)writablePasteboardTypes;
- (void)setImportsGraphics:(BOOL)arg1;
- (void)setRichText:(BOOL)arg1;
- (void)setSelectable:(BOOL)arg1;
- (void)enableSecureInput:(BOOL)arg1;
- (void)setDelegate:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_resetTooltips;
- (void)_detachFieldEditorFromWindow:(id)arg1;
- (id)_accessibilityIndicatorImageUnderPoint:(struct CGPoint)arg1 forParent:(id)arg2;
- (id)_accessibilityIndicatorImageChildrenWithParent:(id)arg1;
- (id)accessibilityRTFForRangeAttributeForParameter:(id)arg1;
- (id)accessibilityAXAttributedStringForCharacterRange:(struct _NSRange)arg1 parent:(id)arg2;
- (id)accessibilityValueAttribute;
- (void)_accessibilityPostValueChangeNotificationAfterDelay;
- (void)accessibilityPostNotification:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

