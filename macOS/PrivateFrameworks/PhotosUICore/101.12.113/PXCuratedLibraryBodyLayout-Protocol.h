//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class PXCuratedLibraryLayoutSpec;

@protocol PXCuratedLibraryBodyLayout <NSObject>
@property(retain, nonatomic) PXCuratedLibraryLayoutSpec *spec;
- (NSArray * (^)(unsigned long long))locationNamesFutureForContentInRect:(struct CGRect)arg1;
- (NSDateInterval * (^)(unsigned long long))dateIntervalFutureForContentInRect:(struct CGRect)arg1;
@end

