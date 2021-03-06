//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <CoreThemeDefinition/TDModelObjectRenditionSpec.h>

@class NSOrderedSet;

@interface TDModelMeshRenditionSpec : TDModelObjectRenditionSpec
{
}

+ (id)fetchRequest;
- (id)createCSIRepresentationWithCompression:(BOOL)arg1 colorSpaceID:(unsigned long long)arg2 document:(id)arg3;
- (void)processSubMesh:(id)arg1 withAssetSubmeshIndex:(unsigned int *)arg2 assetKeySpec:(id)arg3 inDocument:(id)arg4;

// Remaining properties
@property(retain, nonatomic) NSOrderedSet *submeshes; // @dynamic submeshes;

@end

