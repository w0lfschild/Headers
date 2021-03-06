//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <SceneKit/SCNCommonProfileProgramGenerator.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface SCNCommonProfileProgramGeneratorMetal : SCNCommonProfileProgramGenerator
{
    BOOL _useFunctionConstants;
    NSString *_originalSourceCode;
    NSArray *_injectionPointRanges;
    NSString *_originalLightingSourceCode;
    NSArray *_lightingInjectionPointRanges;
}

- (struct __C3DFXProgram *)_newProgramWithHashCode:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;
- (struct __C3DFXProgram *)_newProgramWithHashCodeWithFunctionConstants:(struct __C3DProgramHashCode *)arg1 engineContext:(struct __C3DEngineContext *)arg2 introspectionDataPtr:(void *)arg3;
- (void)dealloc;
- (id)init;
- (void)emptyShaderCache;
- (void)_loadSourceCode;
- (int)profile;

@end

