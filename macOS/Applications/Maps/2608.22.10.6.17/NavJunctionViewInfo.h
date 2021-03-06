//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSUUID, UIImage;

__attribute__((visibility("hidden")))
@interface NavJunctionViewInfo : NSObject
{
    UIImage *_junctionViewImage;
    UIImage *_junctionViewDarkenedImage;
    NSUUID *_junctionViewId;
    NSArray *_imagesData;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSArray *imagesData; // @synthesize imagesData=_imagesData;
@property(readonly, copy, nonatomic) NSUUID *junctionViewId; // @synthesize junctionViewId=_junctionViewId;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)compositeImages:(id)arg1;
- (id)images;
@property(readonly, nonatomic) UIImage *junctionViewDarkenedImage; // @synthesize junctionViewDarkenedImage=_junctionViewDarkenedImage;
@property(readonly, nonatomic) UIImage *junctionViewImage; // @synthesize junctionViewImage=_junctionViewImage;
- (id)initWithGuidanceJunctionViewInfo:(id)arg1;

@end

