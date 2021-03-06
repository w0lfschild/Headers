//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSCloudKitMirroringDelegateOptions;

__attribute__((visibility("hidden")))
@interface PFCloudKitOptionsValidator : NSObject
{
    NSCloudKitMirroringDelegateOptions *_parsedOptions;
}

@property(readonly, nonatomic) NSCloudKitMirroringDelegateOptions *parsedOptions; // @synthesize parsedOptions=_parsedOptions;
- (BOOL)_validateMemoryThreshold:(id)arg1 error:(id *)arg2;
- (BOOL)_validateAssetThreshold:(id)arg1 error:(id *)arg2;
- (BOOL)_validateContainerOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_validateHistoryTrackingOptions:(id)arg1 error:(id *)arg2;
- (BOOL)_validateContainerIdentifier:(id)arg1 error:(id *)arg2;
- (BOOL)validateOptions:(id)arg1 andStoreOptions:(id)arg2 error:(id *)arg3;
- (void)dealloc;

@end

