//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TPMacPublishPageViewController.h"

@class NSImageView, NSLayoutConstraint, NSTextField;

@interface TPMacPublishPageWithBookPreviewViewController : TPMacPublishPageViewController
{
    NSImageView *_bookImageView;
    NSTextField *_bookTitleLabel;
    NSLayoutConstraint *_bookImageNormalHorizontalConstraint;
    NSLayoutConstraint *_bookImageNormalVerticalConstraint;
    NSLayoutConstraint *_bookImageNormalVerticalMinimumConstraint;
    NSLayoutConstraint *_bookImageWidthConstraint;
    NSLayoutConstraint *_bookImageHeightConstraint;
}

- (void).cxx_destruct;
@property(nonatomic) __weak NSLayoutConstraint *bookImageHeightConstraint; // @synthesize bookImageHeightConstraint=_bookImageHeightConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bookImageWidthConstraint; // @synthesize bookImageWidthConstraint=_bookImageWidthConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bookImageNormalVerticalMinimumConstraint; // @synthesize bookImageNormalVerticalMinimumConstraint=_bookImageNormalVerticalMinimumConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bookImageNormalVerticalConstraint; // @synthesize bookImageNormalVerticalConstraint=_bookImageNormalVerticalConstraint;
@property(nonatomic) __weak NSLayoutConstraint *bookImageNormalHorizontalConstraint; // @synthesize bookImageNormalHorizontalConstraint=_bookImageNormalHorizontalConstraint;
@property(retain, nonatomic) NSTextField *bookTitleLabel; // @synthesize bookTitleLabel=_bookTitleLabel;
@property(retain, nonatomic) NSImageView *bookImageView; // @synthesize bookImageView=_bookImageView;
- (void)updateBookImageWith:(id)arg1;
- (void)viewDidLoad;
@property(readonly, nonatomic) double actionButtonsWidth;
@property(readonly, nonatomic) double actionButtonsHeight;

@end

