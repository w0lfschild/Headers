//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

#import "NSCoding-Protocol.h"
#import "SRValidatorDelegate-Protocol.h"

@class NSGradient, NSString, SRValidator;
@protocol SRRecorderCellDelegate;

@interface SRRecorderCell : NSActionCell <SRValidatorDelegate, NSCoding>
{
    NSGradient *recordingGradient;
    BOOL _isRecording;
    BOOL _mouseInsideTrackingArea;
    BOOL _mouseDown;
    long long _removeTrackingRectTag;
    long long _snapbackTrackingRectTag;
    unsigned long long _recordingFlags;
    SRValidator *validator;
    void *hotKeyModeToken;
    BOOL allowsBareKeys;
    BOOL recordsEscapeKey;
    BOOL canCaptureGlobalHotKeys;
    unsigned long long requiredModifierFlags;
    unsigned long long allowedModifierFlags;
    id <SRRecorderCellDelegate> delegate;
    struct _KeyCombo keyCombo;
}

- (void).cxx_destruct;
@property(nonatomic) struct _KeyCombo keyCombo; // @synthesize keyCombo;
@property(retain, nonatomic) id <SRRecorderCellDelegate> delegate; // @synthesize delegate;
@property(nonatomic) BOOL canCaptureGlobalHotKeys; // @synthesize canCaptureGlobalHotKeys;
@property(nonatomic) unsigned long long allowedModifierFlags; // @synthesize allowedModifierFlags;
@property(nonatomic) unsigned long long requiredModifierFlags; // @synthesize requiredModifierFlags;
@property(nonatomic) BOOL recordsEscapeKey; // @synthesize recordsEscapeKey;
@property(nonatomic) BOOL allowsBareKeys; // @synthesize allowsBareKeys;
- (BOOL)shortcutValidator:(id)arg1 isKeyCode:(long long)arg2 andFlagsTaken:(unsigned long long)arg3 reason:(id *)arg4;
- (BOOL)_isEmpty;
- (unsigned long long)_filteredCocoaToCarbonFlags:(unsigned long long)arg1;
- (BOOL)_validModifierFlags:(unsigned long long)arg1;
- (unsigned long long)_filteredCocoaFlags:(unsigned long long)arg1;
- (struct CGRect)_snapbackRectForFrame:(struct CGRect)arg1;
- (struct CGRect)_removeButtonRectForFrame:(struct CGRect)arg1;
- (void)_endRecording;
- (void)_startRecording;
- (void)_createGradient;
- (void)_privateInit;
- (id)charactersIgnoringModifiers;
- (id)characters;
- (id)keyComboString;
- (void)flagsChanged:(id)arg1;
- (BOOL)performKeyEquivalent:(id)arg1;
- (BOOL)resignFirstResponder;
- (BOOL)becomeFirstResponder;
- (BOOL)trackMouse:(id)arg1 inRect:(struct CGRect)arg2 ofView:(id)arg3 untilMouseUp:(BOOL)arg4;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)resetTrackingRects;
- (id)AttStringForCocoaModifierFlags:(unsigned long long)arg1 allowedFlags:(unsigned long long)arg2;
- (void)drawWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

