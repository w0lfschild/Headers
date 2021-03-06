//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Vision/VNRequest.h>

#import <Vision/VNFaceObservationAcceptingInternal-Protocol.h>

@class NSArray, NSString;

@interface VNImageBasedRequest : VNRequest <VNFaceObservationAcceptingInternal>
{
    struct CGRect _regionOfInterest;
    NSArray *_inputFaceObservations;
}

+ (void)recordDefaultOptionsInDictionary:(id)arg1;
- (void).cxx_destruct;
- (id)validatedInputFaceObservationsClippedToRegionOfInterest:(BOOL)arg1 error:(id *)arg2;
- (BOOL)getOptionalValidatedInputFaceObservations:(id *)arg1 clippedToRegionOfInterest:(BOOL)arg2 error:(id *)arg3;
- (id)_faceObservationsForRegionOfInterestContainingFaceObservations:(id)arg1;
@property(copy, nonatomic) NSArray *inputFaceObservations;
- (void)applyConfigurationOfRequest:(id)arg1;
- (struct CGRect)regionOfInterestPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (struct CGRect)regionOfInterestNonIntegralPixelRectForWidth:(unsigned long long)arg1 height:(unsigned long long)arg2;
- (BOOL)isFullCoverageRegionOfInterest;
- (BOOL)validateConfigurationAndReturnError:(id *)arg1;
@property(nonatomic) struct CGRect regionOfInterest; // @synthesize regionOfInterest=_regionOfInterest;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)initWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sequencedRequestPreviousObservationsKey;
- (id)observationsCacheKey;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

