//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "UITextViewDelegate-Protocol.h"

@class NSString, UITextView;

__attribute__((visibility("hidden")))
@interface TextViewTableViewCell : UITableViewCell <UITextViewDelegate>
{
    UITextView *_textView;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UITextView *textView; // @synthesize textView=_textView;
- (void)setupConstraints;
- (void)configureToolbar;
- (void)doneButtonTapped:(id)arg1;
- (BOOL)textView:(id)arg1 shouldChangeTextInRange:(struct _NSRange)arg2 replacementText:(id)arg3;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

