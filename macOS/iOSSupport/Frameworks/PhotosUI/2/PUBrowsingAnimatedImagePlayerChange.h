//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotosUI/PUViewModelChange.h>

__attribute__((visibility("hidden")))
@interface PUBrowsingAnimatedImagePlayerChange : PUViewModelChange
{
    BOOL _animatedImageDidChange;
    BOOL _animatedImageLoadingAllowedDidChange;
}

@property(nonatomic, setter=_setAnimatedImageLoadingAllowedDidChange:) BOOL animatedImageLoadingAllowedDidChange; // @synthesize animatedImageLoadingAllowedDidChange=_animatedImageLoadingAllowedDidChange;
@property(nonatomic, setter=_setAnimatedImageDidChange:) BOOL animatedImageDidChange; // @synthesize animatedImageDidChange=_animatedImageDidChange;
- (BOOL)hasChanges;

@end

