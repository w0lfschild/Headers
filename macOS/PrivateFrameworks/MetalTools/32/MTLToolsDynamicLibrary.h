//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MetalTools/MTLToolsObject.h>

#import "MTLDynamicLibrarySPI.h"

@class NSArray, NSObject<OS_dispatch_data>, NSString;

@interface MTLToolsDynamicLibrary : MTLToolsObject <MTLDynamicLibrarySPI>
{
}

@property(readonly) NSArray *linkedLibraries;
- (void)serializeToURL:(id)arg1 error:(id *)arg2;
@property(readonly) const CDStruct_5af0f983 *libraryUUID;
@property(readonly) NSString *libraryPath;
@property(readonly) NSArray *functionNames;
@property(readonly) NSObject<OS_dispatch_data> *binaryData;
@property(readonly) id <MTLDevice> device;
@property(copy) NSString *label;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

