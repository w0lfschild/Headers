//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import "RAPCheckmark-Protocol.h"

@class NSLayoutConstraint, NSString, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface RAPCategorySearchTableViewCell : UITableViewCell <RAPCheckmark>
{
    UIImageView *_checkmarkImageView;
    UILabel *_categoryLabel;
    NSLayoutConstraint *_topLayoutConstraint;
    NSLayoutConstraint *_bottomLayoutConstraint;
    BOOL _checked;
    NSString *_displayText;
}

+ (id)identifier;
- (void).cxx_destruct;
@property(nonatomic, getter=isChecked) BOOL checked; // @synthesize checked=_checked;
@property(copy, nonatomic) NSString *displayText; // @synthesize displayText=_displayText;
- (void)_contentSizeDidChange;
- (void)_updateCheckmarkImageView;
- (void)_setupConstraints;
- (void)_setupSubviews;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

