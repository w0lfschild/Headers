//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

@class NUFaceDetectionRequest;

@interface PIApertureRedEyeAutoCalculator : NUAutoCalculator
{
    NUFaceDetectionRequest *_faceRequest;
}

- (void).cxx_destruct;
- (id)apertureRedEyeResultFromFaceObservations:(id)arg1 imageSize:(CDStruct_912cb5d2)arg2;
- (void)submit:(CDUnknownBlockType)arg1;
- (void)cancel;

@end

