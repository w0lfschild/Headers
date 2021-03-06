//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <ContactsAutocompleteUI/NSObject-Protocol.h>

@class UIColor, UIFont;

@protocol CNAtomViewResembling <NSObject>
@property(retain, nonatomic) UIFont *titleFont;
@property(readonly, nonatomic) struct UIEdgeInsets edgeInsets;
@property(readonly, nonatomic) struct CGPoint baselinePoint;
@property(nonatomic) unsigned long long presentationOptions;
@property(nonatomic) int separatorStyle;
@property(nonatomic) double scale;
@property(nonatomic) BOOL separatorIsLeftAligned;
@property(nonatomic) BOOL separatorHidden;
@property(nonatomic) BOOL hidesVIPIndicator;
@property(nonatomic) BOOL isPrimaryAddressAtom;
- (void)performBuildInAnimationFromTextColor:(UIColor *)arg1 withDuration:(double)arg2;
@end

