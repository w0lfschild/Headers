//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IPropertyValueExtractor.h"

@interface TKindAndSizePropertyValueExtractor : IPropertyValueExtractor
{
    IPropertyValueExtractor *_kindExtractor;
    IPropertyValueExtractor *_sizeExtractor;
}

- (void).cxx_destruct;
- (id)defaultValue;
- (_Bool)needsUpdateForProperty:(unsigned int)arg1;
- (void)flush;
- (id)extractValueFromNodes:(const struct TFENodeVector *)arg1;
- (void)prefetchValueOnSecondaryThread:(const struct TFENodeVector *)arg1 cancelled:(const struct atomic<bool> *)arg2;
- (_Bool)isApplicableToNodes:(const struct TFENodeVector *)arg1;
- (id)init;

@end

