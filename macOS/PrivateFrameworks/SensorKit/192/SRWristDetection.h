//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "SRSampleExporting.h"
#import "SRSampling.h"

@class NSString;

@interface SRWristDetection : NSObject <SRSampling, SRSampleExporting>
{
    unsigned char _wristDetectionRawValue;
}

+ (void)initialize;
@property(nonatomic) unsigned char wristDetectionRawValue; // @synthesize wristDetectionRawValue=_wristDetectionRawValue;
- (id)sr_dictionaryRepresentation;
@property(readonly) long long crownOrientation;
@property(readonly) long long wristLocation;
@property(readonly) BOOL onWrist;
- (id)initWithBinarySampleRepresentation:(id)arg1 metadata:(id)arg2 timestamp:(double)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

