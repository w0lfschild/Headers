//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"
#import "NSMutableCopying.h"

@class NSMutableArray, PADevice;

@interface PAMultiLevelImage : NSObject <NSCopying, NSMutableCopying>
{
    PADevice *_device;
    NSMutableArray *_levels;
    long long _orientation;
    long long _displayOrientation;
    struct CGSize _size;
}

+ (id)imageWithImage:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) PADevice *device; // @synthesize device=_device;
- (BOOL)isValid;
- (unsigned long long)foregroundLevelForImageSize:(struct CGSize)arg1;
- (unsigned long long)backgroundLevelForImageSize:(struct CGSize)arg1;
- (id)convertRegion:(id)arg1 fromImageRect:(struct CGRect)arg2 toLevel:(unsigned long long)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromImageRect:(struct CGRect)arg2 toLevel:(unsigned long long)arg3;
- (id)convertRegion:(id)arg1 fromLevel:(unsigned long long)arg2 toImageRect:(struct CGRect)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLevel:(unsigned long long)arg2 toImageRect:(struct CGRect)arg3;
- (id)convertRegion:(id)arg1 fromLevel:(unsigned long long)arg2 toLevel:(unsigned long long)arg3;
- (struct CGRect)convertRect:(struct CGRect)arg1 fromLevel:(unsigned long long)arg2 toLevel:(unsigned long long)arg3;
- (void)_enumerateLevelsUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateLevelsWithOptions:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateLevelsUsingBlock:(CDUnknownBlockType)arg1;
- (BOOL)isEqualToTiledImage:(id)arg1;
- (BOOL)isEqualToMultiLevelImage:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)_insertImage:(id)arg1 atLevel:(unsigned long long)arg2;
- (double)_resolutionForOriginalImageSize:(struct CGSize)arg1;
- (double)_resolutionForImage:(id)arg1;
- (double)_resolutionAtLevel:(unsigned long long)arg1;
- (unsigned long long)_levelForResolution:(double)arg1;
- (unsigned long long)_levelOfImage:(id)arg1;
- (id)imageAtLevel:(unsigned long long)arg1;
- (unsigned long long)numberOfLevels;
- (long long)displayOrientation;
- (long long)orientation;
- (struct CGSize)size;
- (id)description;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithMultiLevelImage:(id)arg1;
- (id)initWithImages:(id)arg1;
- (id)initWithImage:(id)arg1;
- (id)initWithDevice:(id)arg1;
- (id)init;

@end

