//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CNQuickActionButton;

__attribute__((visibility("hidden")))
@interface CNQuickActionCell : UICollectionViewCell
{
    BOOL _showTitle;
    BOOL _showBackgroundPlatter;
    CNQuickActionButton *_button;
}

@property(nonatomic) BOOL showBackgroundPlatter; // @synthesize showBackgroundPlatter=_showBackgroundPlatter;
@property(retain, nonatomic) CNQuickActionButton *button; // @synthesize button=_button;
@property(nonatomic) BOOL showTitle; // @synthesize showTitle=_showTitle;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect)arg1;

@end

