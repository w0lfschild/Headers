//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "CALayer.h"

#import "KNPlaybackConcealer.h"

@class NSString;

@interface KNAnimatedPlaybackConcealerLayer : CALayer <KNPlaybackConcealer>
{
    long long _concealingStyle;
    id <KNAnimatedPlaybackConcealerLayerVisibilityDelegate> _visibilityDelegate;
}

@property(nonatomic) __weak id <KNAnimatedPlaybackConcealerLayerVisibilityDelegate> visibilityDelegate; // @synthesize visibilityDelegate=_visibilityDelegate;
@property(nonatomic) long long concealingStyle; // @synthesize concealingStyle=_concealingStyle;
- (void).cxx_destruct;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

