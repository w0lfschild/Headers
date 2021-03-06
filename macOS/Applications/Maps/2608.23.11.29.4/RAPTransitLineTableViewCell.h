//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

@class NSLayoutConstraint, UIImageView;

__attribute__((visibility("hidden")))
@interface RAPTransitLineTableViewCell : UITableViewCell
{
    UIImageView *_imageView;
    NSLayoutConstraint *_leadingConstraint;
    NSLayoutConstraint *_imageViewWidthConstraint;
    double _shieldWidth;
    BOOL _didSetupConstraints;
}

+ (id)measuringCell;
- (void).cxx_destruct;
- (double)preferredHeightInTableView:(id)arg1;
- (void)alignWithShieldWidth:(double)arg1;
- (void)setImage:(id)arg1;
- (void)setContentsFromTransitLine:(id)arg1;
- (void)updateImageConstraints;
- (void)layoutMarginsDidChange;
- (void)updateConstraints;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

