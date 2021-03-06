//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "CLgViewAccessibilityObj.h"

#import "GCLineEditorObserver-Protocol.h"

@class NSString;

@interface CLgViewAccessibilityTrackRenameField : CLgViewAccessibilityObj <GCLineEditorObserver>
{
    struct GCLineEditor *_lineEditor;
    BOOL keepNameEditing;
}

@property BOOL keepNameEditing; // @synthesize keepNameEditing;
- (void)lineEditorWillClose:(struct GCLineEditor *)arg1;
- (void)startEditing;
- (long long)objectType;
- (void)dealloc;
- (void)accessibilitySetValue:(id)arg1 forAttribute:(id)arg2;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

