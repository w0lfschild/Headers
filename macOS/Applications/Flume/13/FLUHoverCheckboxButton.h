//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "FLUHoverButton.h"

#import "NSAccessibilityCheckBox.h"

@class NSString;

@interface FLUHoverCheckboxButton : FLUHoverButton <NSAccessibilityCheckBox>
{
}

+ (Class)cellClass;
- (void)refreshView;
- (void)didChangeDesignModeOption:(id)arg1;
- (void)mouseMoved:(id)arg1;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)mouseExited:(id)arg1;
- (void)mouseEntered:(id)arg1;
- (void)setState:(long long)arg1;
- (id)accessibilityHelp;
- (id)accessibilityValue;
- (id)accessibilityRole;
- (id)cell;
- (void)dealloc;
- (void)setupButton;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

