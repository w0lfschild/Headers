//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class MKMuninView, UIView;

__attribute__((visibility("hidden")))
@interface _MuninViewState : NSObject
{
    BOOL _compassHidden;
    BOOL _navigatingEnabled;
    BOOL _panningEnabled;
    BOOL _pinchingEnabled;
    BOOL _showsPointLabels;
    BOOL _showsRoadLabels;
    MKMuninView *_muninView;
    UIView *_superview;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) BOOL showsRoadLabels; // @synthesize showsRoadLabels=_showsRoadLabels;
@property(readonly, nonatomic) BOOL showsPointLabels; // @synthesize showsPointLabels=_showsPointLabels;
@property(readonly, nonatomic) BOOL pinchingEnabled; // @synthesize pinchingEnabled=_pinchingEnabled;
@property(readonly, nonatomic) BOOL panningEnabled; // @synthesize panningEnabled=_panningEnabled;
@property(readonly, nonatomic) BOOL navigatingEnabled; // @synthesize navigatingEnabled=_navigatingEnabled;
@property(readonly, nonatomic) BOOL compassHidden; // @synthesize compassHidden=_compassHidden;
@property(readonly, nonatomic) UIView *superview; // @synthesize superview=_superview;
@property(readonly, nonatomic) MKMuninView *muninView; // @synthesize muninView=_muninView;
- (void)restoreStateToMuninView:(id)arg1;
- (id)initWithMuninView:(id)arg1;

@end

