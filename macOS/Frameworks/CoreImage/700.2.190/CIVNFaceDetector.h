//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <CoreImage/CIDetector.h>

@class CIContext;

__attribute__((visibility("hidden")))
@interface CIVNFaceDetector : CIDetector
{
    CIContext *context;
}

@property(readonly, retain) CIContext *context; // @synthesize context;
- (void)dealloc;
- (id)featuresInImage:(id)arg1 options:(id)arg2;
- (id)initWithContext:(id)arg1 options:(id)arg2;

@end

