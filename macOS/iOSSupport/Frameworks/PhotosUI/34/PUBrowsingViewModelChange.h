//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

@class NSDictionary, NSMapTable, NSMutableDictionary;

@interface PUBrowsingViewModelChange : PUViewModelChange
{
    NSMutableDictionary *_mutableViewModelChangesByAssetReference;
    NSMapTable *_mutableSharedViewModelChangesByAsset;
    BOOL _assetsDataSourceDidChange;
    BOOL _currentAssetDidChange;
    BOOL _currentAssetTransitionProgressDidChange;
    BOOL _transitionDriverIdentifierDidChange;
    BOOL _browsingSpeedRegimeDidChange;
    BOOL _isScrubbingDidChange;
    BOOL _isScrollingDidChange;
    BOOL _isAnimatingAnyTransitionDidChange;
    BOOL _secondScreenSizeDidChange;
    BOOL _chromeVisibilityDidChange;
    BOOL _presentingOverOneUpDidChange;
    BOOL _reviewScreenBarsModelDidChange;
    BOOL _videoOverlayPlayStateDidChange;
    BOOL _isAttemptingToPlayVideoOverlayDidChange;
    BOOL _isScrubbingActivationDidChange;
    BOOL _isVideoContentAllowedDidChange;
}

- (void).cxx_destruct;
@property(nonatomic) BOOL isVideoContentAllowedDidChange; // @synthesize isVideoContentAllowedDidChange=_isVideoContentAllowedDidChange;
@property(nonatomic, setter=_setIsScrubbingActivationDidChange:) BOOL isScrubbingActivationDidChange; // @synthesize isScrubbingActivationDidChange=_isScrubbingActivationDidChange;
@property(nonatomic, setter=_setIsAttemptingToPlayVideoOverlayDidChange:) BOOL isAttemptingToPlayVideoOverlayDidChange; // @synthesize isAttemptingToPlayVideoOverlayDidChange=_isAttemptingToPlayVideoOverlayDidChange;
@property(nonatomic, setter=_setVideoOverlayPlayStateDidChange:) BOOL videoOverlayPlayStateDidChange; // @synthesize videoOverlayPlayStateDidChange=_videoOverlayPlayStateDidChange;
@property(nonatomic, setter=_setReviewScreenBarsModelDidChange:) BOOL reviewScreenBarsModelDidChange; // @synthesize reviewScreenBarsModelDidChange=_reviewScreenBarsModelDidChange;
@property(nonatomic, setter=_setPresentingOverOneUpDidChange:) BOOL presentingOverOneUpDidChange; // @synthesize presentingOverOneUpDidChange=_presentingOverOneUpDidChange;
@property(nonatomic, setter=_setChromeVisibilityDidChange:) BOOL chromeVisibilityDidChange; // @synthesize chromeVisibilityDidChange=_chromeVisibilityDidChange;
@property(nonatomic, setter=_setSecondScreenSizeDidChange:) BOOL secondScreenSizeDidChange; // @synthesize secondScreenSizeDidChange=_secondScreenSizeDidChange;
@property(nonatomic, setter=_setAnimatingAnyTransitionDidChange:) BOOL isAnimatingAnyTransitionDidChange; // @synthesize isAnimatingAnyTransitionDidChange=_isAnimatingAnyTransitionDidChange;
@property(nonatomic, setter=_setIsScrollingDidChange:) BOOL isScrollingDidChange; // @synthesize isScrollingDidChange=_isScrollingDidChange;
@property(nonatomic, setter=_setIsScrubbingDidChange:) BOOL isScrubbingDidChange; // @synthesize isScrubbingDidChange=_isScrubbingDidChange;
@property(nonatomic, setter=_setBrowsingSpeedRegimeDidChange:) BOOL browsingSpeedRegimeDidChange; // @synthesize browsingSpeedRegimeDidChange=_browsingSpeedRegimeDidChange;
@property(nonatomic, setter=_setTransitionDriverIdentifierDidChange:) BOOL transitionDriverIdentifierDidChange; // @synthesize transitionDriverIdentifierDidChange=_transitionDriverIdentifierDidChange;
@property(nonatomic, setter=_setCurrentAssetTransitionProgressDidChange:) BOOL currentAssetTransitionProgressDidChange; // @synthesize currentAssetTransitionProgressDidChange=_currentAssetTransitionProgressDidChange;
@property(nonatomic, setter=_setCurrentAssetDidChange:) BOOL currentAssetDidChange; // @synthesize currentAssetDidChange=_currentAssetDidChange;
@property(nonatomic, setter=_setAssetsDataSourceDidChange:) BOOL assetsDataSourceDidChange; // @synthesize assetsDataSourceDidChange=_assetsDataSourceDidChange;
- (BOOL)hasChanges;
@property(readonly, nonatomic) NSMapTable *assetSharedViewModelChangesByAsset;
@property(readonly, nonatomic) NSMapTable *_mutableSharedViewModelChangesByAsset;
@property(readonly, nonatomic) NSDictionary *assetViewModelChangesByAssetReference;
@property(readonly, nonatomic) NSMutableDictionary *_mutableViewModelChangesByAssetReference;

@end

