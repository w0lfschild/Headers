//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PodcastsUI/IMImageStore.h>

@interface MTImageStore : IMImageStore
{
}

+ (id)defaultPodcastArtworkWithWidth:(double)arg1;
+ (double)defaultMaxImageDimensionInPixels;
+ (id)defaultBasePath;
+ (id)defaultStore;
- (void)addImage:(id)arg1 forKey:(id)arg2;
- (void)asyncImageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)imageForKey:(id)arg1 size:(struct CGSize)arg2 resizeOptions:(int)arg3 modifier:(id)arg4;
- (BOOL)requireSquareImages;
- (id)initWithName:(id)arg1 basePath:(id)arg2 maxImageDimensionInPixels:(double)arg3 maxConcurrentOperations:(unsigned long long)arg4 alternativeSizeBlock:(CDUnknownBlockType)arg5;

@end

