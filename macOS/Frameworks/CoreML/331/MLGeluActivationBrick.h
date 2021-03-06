//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "EspressoBrick.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface MLGeluActivationBrick : NSObject <EspressoBrick>
{
    unsigned long long _size;
}

@property(readonly, nonatomic) unsigned long long size; // @synthesize size=_size;
- (void)computeOnCPUWithInputTensors:(id)arg1 outputTensors:(id)arg2;
- (BOOL)hasGPUSupport;
- (id)initWithParameters:(id)arg1;
- (id)setupForInputShapes:(id)arg1 withParameters:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

