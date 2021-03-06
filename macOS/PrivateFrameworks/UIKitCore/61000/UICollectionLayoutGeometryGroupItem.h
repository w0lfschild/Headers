//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>

@class NSArray, UICollectionLayoutGeometry, UICollectionLayoutGeometryGroupItemConfiguration;

__attribute__((visibility("hidden")))
@interface UICollectionLayoutGeometryGroupItem : NSObject <NSCopying>
{
    BOOL _heightUseActualHeight;
    BOOL _widthUseActualWidth;
    BOOL _spacingLeadingSpaceComputedIntrinsic;
    BOOL _spacingTrailingSpaceComputedIntrinsic;
    BOOL _spacingTopSpaceComputedIntrinsic;
    BOOL _spacingBottomSpaceComputedIntrinsic;
    NSArray *_attributes;
    UICollectionLayoutGeometryGroupItemConfiguration *_configuration;
    double _height;
    double _heightComputedContainerHeightFactor;
    double _heightComputedContainerWidthFactor;
    double _width;
    double _widthComputedContainerWidthFactor;
    double _widthComputedContainerHeightFactor;
    double _spacingLeadingSpaceFixedSpace;
    double _spacingTrailingSpaceFixedSpace;
    double _spacingTopSpaceFixedSpace;
    double _spacingBottomSpaceFixedSpace;
    UICollectionLayoutGeometry *_geometry;
}

+ (id)itemWithConfiguration:(id)arg1;
+ (id)itemWithAttributes:(id)arg1;
@property(retain, nonatomic) UICollectionLayoutGeometry *geometry; // @synthesize geometry=_geometry;
@property(nonatomic) double spacingBottomSpaceFixedSpace; // @synthesize spacingBottomSpaceFixedSpace=_spacingBottomSpaceFixedSpace;
@property(nonatomic) BOOL spacingBottomSpaceComputedIntrinsic; // @synthesize spacingBottomSpaceComputedIntrinsic=_spacingBottomSpaceComputedIntrinsic;
@property(nonatomic) double spacingTopSpaceFixedSpace; // @synthesize spacingTopSpaceFixedSpace=_spacingTopSpaceFixedSpace;
@property(nonatomic) BOOL spacingTopSpaceComputedIntrinsic; // @synthesize spacingTopSpaceComputedIntrinsic=_spacingTopSpaceComputedIntrinsic;
@property(nonatomic) double spacingTrailingSpaceFixedSpace; // @synthesize spacingTrailingSpaceFixedSpace=_spacingTrailingSpaceFixedSpace;
@property(nonatomic) BOOL spacingTrailingSpaceComputedIntrinsic; // @synthesize spacingTrailingSpaceComputedIntrinsic=_spacingTrailingSpaceComputedIntrinsic;
@property(nonatomic) double spacingLeadingSpaceFixedSpace; // @synthesize spacingLeadingSpaceFixedSpace=_spacingLeadingSpaceFixedSpace;
@property(nonatomic) BOOL spacingLeadingSpaceComputedIntrinsic; // @synthesize spacingLeadingSpaceComputedIntrinsic=_spacingLeadingSpaceComputedIntrinsic;
@property(nonatomic) double widthComputedContainerHeightFactor; // @synthesize widthComputedContainerHeightFactor=_widthComputedContainerHeightFactor;
@property(nonatomic) double widthComputedContainerWidthFactor; // @synthesize widthComputedContainerWidthFactor=_widthComputedContainerWidthFactor;
@property(nonatomic) BOOL widthUseActualWidth; // @synthesize widthUseActualWidth=_widthUseActualWidth;
@property(nonatomic) double width; // @synthesize width=_width;
@property(nonatomic) double heightComputedContainerWidthFactor; // @synthesize heightComputedContainerWidthFactor=_heightComputedContainerWidthFactor;
@property(nonatomic) double heightComputedContainerHeightFactor; // @synthesize heightComputedContainerHeightFactor=_heightComputedContainerHeightFactor;
@property(nonatomic) BOOL heightUseActualHeight; // @synthesize heightUseActualHeight=_heightUseActualHeight;
@property(nonatomic) double height; // @synthesize height=_height;
@property(retain, nonatomic) UICollectionLayoutGeometryGroupItemConfiguration *configuration; // @synthesize configuration=_configuration;
@property(retain, nonatomic) NSArray *attributes; // @synthesize attributes=_attributes;
- (void).cxx_destruct;
- (void)_parseAttributes:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (struct UIEdgeInsets)effectiveEdgeInsets;
- (struct UIEdgeInsets)contentEdgeInsets;
- (BOOL)hasHorizontalIntrinsicSpacing;
- (BOOL)hasVerticalIntrinsicSpacing;
- (double)spacingSizeRequiredForSize:(struct CGSize)arg1 layoutAxis:(int)arg2;
- (struct CGSize)sizeForActualSize:(struct CGSize)arg1 containerDimensions:(struct CGSize)arg2;
- (void)addAttribute:(id)arg1;
- (id)description;
- (id)initWithAttributes:(id)arg1;
- (id)initWithConfiguration:(id)arg1;

@end

