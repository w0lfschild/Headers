//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryPrivate/RDTable.h>

@class LiKeyPath;

@interface RDFaceCropTable : RDTable
{
    LiKeyPath *_versionIdKeyPath;
    LiKeyPath *_personIdKeyPath;
    LiKeyPath *_faceIdKeyPath;
    LiKeyPath *_resourceDataKeyPath;
    LiKeyPath *_faceCropPropertiesDataKeyPath;
    LiKeyPath *_typeKeyPath;
    LiKeyPath *_faceCropTypeKeyPath;
    LiKeyPath *_stateKeyPath;
    LiKeyPath *_hasBeenSyncedKeyPath;
    LiKeyPath *_cloudLibraryStateKeyPath;
    LiKeyPath *_cloudIdentifierKeyPath;
    LiKeyPath *_isCloudQuarantinedKeyPath;
}

+ (id)tableClassName;
+ (id)tableName;
+ (id)modelName;
+ (Class)modelClass;
@property(readonly, nonatomic) LiKeyPath *isCloudQuarantinedKeyPath; // @synthesize isCloudQuarantinedKeyPath=_isCloudQuarantinedKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudIdentifierKeyPath; // @synthesize cloudIdentifierKeyPath=_cloudIdentifierKeyPath;
@property(readonly, nonatomic) LiKeyPath *cloudLibraryStateKeyPath; // @synthesize cloudLibraryStateKeyPath=_cloudLibraryStateKeyPath;
@property(readonly, nonatomic) LiKeyPath *hasBeenSyncedKeyPath; // @synthesize hasBeenSyncedKeyPath=_hasBeenSyncedKeyPath;
@property(readonly, nonatomic) LiKeyPath *stateKeyPath; // @synthesize stateKeyPath=_stateKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceCropTypeKeyPath; // @synthesize faceCropTypeKeyPath=_faceCropTypeKeyPath;
@property(readonly, nonatomic) LiKeyPath *typeKeyPath; // @synthesize typeKeyPath=_typeKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceCropPropertiesDataKeyPath; // @synthesize faceCropPropertiesDataKeyPath=_faceCropPropertiesDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *resourceDataKeyPath; // @synthesize resourceDataKeyPath=_resourceDataKeyPath;
@property(readonly, nonatomic) LiKeyPath *faceIdKeyPath; // @synthesize faceIdKeyPath=_faceIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *personIdKeyPath; // @synthesize personIdKeyPath=_personIdKeyPath;
@property(readonly, nonatomic) LiKeyPath *versionIdKeyPath; // @synthesize versionIdKeyPath=_versionIdKeyPath;
- (void).cxx_destruct;
- (void)declareProperties;
- (id)initWithTableId:(unsigned long long)arg1 tableType:(unsigned char)arg2 withLibrary:(id)arg3;
- (unsigned long long)saveOrder;
- (id)notifyUpdateKeyPathAtoms;
- (unsigned long long *)faultedKeyPath;

@end

