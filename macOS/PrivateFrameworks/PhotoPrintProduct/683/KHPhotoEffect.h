//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class CIFilter, NSString;

@interface KHPhotoEffect : NSObject
{
    BOOL _hidden;
    NSString *_filterName;
    NSString *_displayName;
}

+ (id)effectWithFilterName:(id)arg1;
+ (unsigned long long)indexOfEffectWithFilterName:(id)arg1;
+ (id)visibleEffects;
+ (id)allEffects;
+ (id)_effectWithFilterName:(id)arg1 displayName:(id)arg2 hidden:(BOOL)arg3;
@property(readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property(readonly, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) NSString *filterName; // @synthesize filterName=_filterName;
- (void).cxx_destruct;
@property(readonly, nonatomic) CIFilter *filter;

@end

