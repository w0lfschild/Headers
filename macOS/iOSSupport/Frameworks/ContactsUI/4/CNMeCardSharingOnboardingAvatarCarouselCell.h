//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSString, NSUUID, UIImage, UIImageView, UILabel;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselCell : UICollectionViewCell
{
    NSUUID *_displaySessionUUID;
    double _imageInsetPercentage;
    UIImageView *_imageView;
    UILabel *_label;
}

+ (id)cellIdentifier;
@property(retain, nonatomic) UILabel *label; // @synthesize label=_label;
@property(retain, nonatomic) UIImageView *imageView; // @synthesize imageView=_imageView;
@property(nonatomic) double imageInsetPercentage; // @synthesize imageInsetPercentage=_imageInsetPercentage;
@property(retain, nonatomic) NSUUID *displaySessionUUID; // @synthesize displaySessionUUID=_displaySessionUUID;
- (void).cxx_destruct;
- (void)prepareForReuse;
- (void)layoutSubviews;
@property(copy, nonatomic) NSString *title;
@property(retain, nonatomic) UIImage *image;
- (id)initWithFrame:(struct CGRect)arg1;

@end

