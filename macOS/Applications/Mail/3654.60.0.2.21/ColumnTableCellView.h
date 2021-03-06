//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MessageListTableCellView.h"

#import "EFLoggable-Protocol.h"

@class NSStackView, NSString, ThreadDisclosureControl;

@interface ColumnTableCellView : MessageListTableCellView <EFLoggable>
{
    long long _column;
    NSStackView *_stackView;
    ThreadDisclosureControl *_threadControl;
}

+ (id)keyPathsForValuesAffectingThreadCount;
+ (id)keyPathsForValuesAffectingIsOpen;
+ (id)textFieldThresholds;
+ (void)resetTextFieldThresholds;
+ (id)log;
- (void).cxx_destruct;
@property(nonatomic) __weak ThreadDisclosureControl *threadControl; // @synthesize threadControl=_threadControl;
@property(nonatomic) __weak NSStackView *stackView; // @synthesize stackView=_stackView;
@property(nonatomic) long long column; // @synthesize column=_column;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_textFieldThresholdDidChange:(id)arg1;
- (void)_postTextFieldThresholdDidChangeNotificationWithWidth:(double)arg1;
@property(readonly, nonatomic) double minimumColumnWidth;
@property(readonly, nonatomic) unsigned long long threadCount;
@property(readonly, nonatomic) BOOL isOpen;
- (void)setBackgroundStyle:(long long)arg1;
- (void)setObjectValue:(id)arg1;
- (void)_updateFirstFlagImage:(id)arg1;
- (void)_updateThreshold:(double)arg1;
- (void)_updateTextFieldWithString:(id)arg1;
- (BOOL)_shouldHideTextField;
@property(readonly, nonatomic) BOOL canHideTextField;
- (void)_refreshTextFieldVisibility;
- (void)updateFontsUsingBold:(BOOL)arg1;
- (void)_setSymbolFonts;
- (void)layout;
- (void)prepareForReuse;
- (void)dealloc;
- (void)awakeFromNib;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

