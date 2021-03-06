//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, TSDImager;
@protocol TSDThumbnailIdentifier;

@protocol TSDThumbnailProducer <NSObject>
- (struct CGRect)unscaledClipRectForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (struct CGSize)thumbnailSizeForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (NSArray *)rootInfosForIdentifier:(id <TSDThumbnailIdentifier>)arg1;

@optional
- (BOOL)wantsBlankImageForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (void)configureImager:(TSDImager *)arg1 forIdentifier:(id <TSDThumbnailIdentifier>)arg2;
- (BOOL)shouldReuseBitmapContext;
- (BOOL)distortedToMatch;
- (BOOL)reuseThumbnailerUntilIdleForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
- (BOOL)suppressOverlayLayerForIdentifier:(id <TSDThumbnailIdentifier>)arg1;
@end

