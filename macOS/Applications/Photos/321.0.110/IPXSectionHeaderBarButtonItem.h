//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UXKit/UXBarButtonItem.h>

@class _IPXSectionHeaderBarButtonItemHeader;
@protocol PXPhotosGridFloatingHeaderInfo;

__attribute__((visibility("hidden")))
@interface IPXSectionHeaderBarButtonItem : UXBarButtonItem
{
    id <PXPhotosGridFloatingHeaderInfo> _sectionHeaderInfo;
    double _height;
    double _firstBaselineOffsetFromTop;
}

- (void).cxx_destruct;
@property(nonatomic) double firstBaselineOffsetFromTop; // @synthesize firstBaselineOffsetFromTop=_firstBaselineOffsetFromTop;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) id <PXPhotosGridFloatingHeaderInfo> sectionHeaderInfo; // @synthesize sectionHeaderInfo=_sectionHeaderInfo;
- (double)preferredSpacingToItem:(id)arg1 proposedSpacing:(double)arg2;
- (void)sectionHeaderPropertiesDidChange;
@property(readonly, nonatomic) _IPXSectionHeaderBarButtonItemHeader *customHeader;
- (id)init;

@end

