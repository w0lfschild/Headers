//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TNSheet.h"

#import "GSSPAutoEncodable-Protocol.h"

@class NSString, TSTTableInfo;

@interface TNFormBasedSheet : TNSheet <GSSPAutoEncodable>
{
    TSTTableInfo *_tableInfo;
    NSString *_importedTargetName;
    UUIDData_5fbc143e _tableUID;
}

- (id).cxx_construct;
- (void).cxx_destruct;
@property(retain, nonatomic) NSString *importedTargetName; // @synthesize importedTargetName=_importedTargetName;
@property(nonatomic) UUIDData_5fbc143e tableUID; // @synthesize tableUID=_tableUID;
- (void)resolveImportedTargetNameInDocumentRoot:(id)arg1;
- (id)initWithContext:(id)arg1 importedTargetName:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (void)loadFromUnarchiver:(id)arg1;
- (BOOL)shouldBeDisplayed;
- (void)clearTableInfoCache;
@property(readonly, nonatomic) BOOL hasValidTableInfoForBuildingForm;
@property(readonly, nonatomic) BOOL hasValidTableInfoForViewingForm;
@property(retain, nonatomic) TSTTableInfo *tableInfo; // @synthesize tableInfo=_tableInfo;
- (BOOL)isForm;
- (double)contentScale;
- (void)populateGSSPFormBasedSheet:(id)arg1 withEncodeContext:(struct GSSPEncodeConversionContext *)arg2;
- (void)populateGSSPMessageInstance:(id)arg1 withContext:(struct GSSPEncodeConversionContext *)arg2;
- (id)newGsspMessageInstance;
- (id)gsspMessageInstance;
- (int)gsspSharingFlag;

@end

