//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSPopUpButton.h"

__attribute__((visibility("hidden")))
@interface DocumentModePopUpButton : NSPopUpButton
{
    BOOL I_automaticMode;
}

- (void)documentModeListChanged:(id)arg1;
- (void)dealloc;
- (void)setSelectedMode:(id)arg1;
- (id)selectedMode;
- (void)setSelectedModeIdentifier:(id)arg1;
- (id)selectedModeIdentifier;
- (void)setHasAutomaticMode:(BOOL)arg1;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

