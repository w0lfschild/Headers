//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class CABasicAnimation, CALayer, NSString;

@interface TPMacPublishActivityIndicator : NSImageView
{
    BOOL _hidesWhenStopped;
    BOOL _updatingLayer;
    BOOL _isAnimating;
    NSString *_accessibilityLabel;
    double _fullRotationTime;
    CABasicAnimation *_rotationAnimation;
    CALayer *_imageLayer;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isAnimating; // @synthesize isAnimating=_isAnimating;
@property(nonatomic) BOOL updatingLayer; // @synthesize updatingLayer=_updatingLayer;
@property(retain, nonatomic) CALayer *imageLayer; // @synthesize imageLayer=_imageLayer;
@property(retain, nonatomic) CABasicAnimation *rotationAnimation; // @synthesize rotationAnimation=_rotationAnimation;
@property(nonatomic) double fullRotationTime; // @synthesize fullRotationTime=_fullRotationTime;
@property(nonatomic) BOOL hidesWhenStopped; // @synthesize hidesWhenStopped=_hidesWhenStopped;
- (void)setAccessibilityLabel:(id)arg1;
- (void)p_displayImageForCurrentControlSizeAndAppearance;
- (void)p_setupInstance;
- (id)accessibilityLabel;
- (void)setControlSize:(unsigned long long)arg1;
- (void)stopAnimating;
- (void)startAnimating;
- (void)updateLayer;
- (BOOL)wantsUpdateLayer;
- (long long)layerContentsRedrawPolicy;
- (struct CGSize)intrinsicContentSize;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

