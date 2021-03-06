//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Photos/PHCompositeMediaResult.h>

@class NSNumber;

@interface PHImageResult : PHCompositeMediaResult
{
    struct CGImage *_imageRef;
    NSNumber *_exifOrientation;
}

@property(copy, nonatomic) NSNumber *exifOrientation; // @synthesize exifOrientation=_exifOrientation;
- (void).cxx_destruct;
- (unsigned int)cgOrientation;
- (long long)uiOrientation;
- (id)imageUTI;
- (void)setImageUTI:(id)arg1;
- (id)imageData;
- (void)setImageData:(id)arg1;
- (id)imageURL;
- (void)setImageURL:(id)arg1;
- (struct CGImage *)imageRef;
- (void)setImageRef:(struct CGImage *)arg1;
- (BOOL)containsValidData;
- (void)dealloc;

@end

