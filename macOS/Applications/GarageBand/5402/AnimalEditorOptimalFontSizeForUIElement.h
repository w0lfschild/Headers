//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AnimalEditorOptimalFontSizeForUIElementCache, NSDictionary;

@interface AnimalEditorOptimalFontSizeForUIElement : NSObject
{
    AnimalEditorOptimalFontSizeForUIElementCache *_cache;
    NSDictionary *_options;
    CDUnknownBlockType _callback;
}

+ (id)cache;
- (void).cxx_destruct;
@property(copy) CDUnknownBlockType callback; // @synthesize callback=_callback;
@property(retain) NSDictionary *options; // @synthesize options=_options;
@property(retain) AnimalEditorOptimalFontSizeForUIElementCache *cache; // @synthesize cache=_cache;
- (void)clearCache;
- (id)optimalFontSizeForString:(id)arg1;
- (id)resultInCacheForString:(id)arg1;
- (id)initWithCache:(id)arg1 options:(id)arg2 callback:(CDUnknownBlockType)arg3;
- (id)init;

@end

