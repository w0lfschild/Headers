//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetExportSession, GQDImageBinary, NSString, SFUCryptoKey, TSUMutableRetainedPointerSet, TSUPathSet, TSUPointerKeyDictionary, TSURetainedPointerKeyDictionary, TSUTemporaryDirectory;
@protocol OS_dispatch_queue;

@interface ICEDataManager : NSObject
{
    TSUPathSet *mDataPaths;
    TSUTemporaryDirectory *mTempDirectory;
    TSUMutableRetainedPointerSet *mDatas;
    SFUCryptoKey *mCryptoKey;
    NSString *mPassphraseHint;
    TSURetainedPointerKeyDictionary *mTspDataToGqDataMap;
    TSURetainedPointerKeyDictionary *mTspDataToImageBinaryMap;
    TSUPointerKeyDictionary *mGqDataToTspDataMap;
    GQDImageBinary *mMissingImageBinary;
    AVAssetExportSession *mMovieExportSession;
    NSObject<OS_dispatch_queue> *mMovieExportQueue;
    BOOL mMovieExportCancelled;
    TSURetainedPointerKeyDictionary *mTspGifDataToGqMovieDataMap;
}

- (void)_addData:(id)arg1 forTspData:(id)arg2;
- (id)_uniqueNameForTspDataFilename:(id)arg1;
- (id)dataFromTspData:(id)arg1;
- (id)_missingImageBinary;
- (void)setCryptoKey:(id)arg1 passphraseHint:(id)arg2;
- (id)imageBinaryFromTspData:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelMovieExport;
- (void)_exportAsset:(id)arg1 toOutputURL:(id)arg2 withFileType:(id)arg3 exportPresetName:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (id)_newDataFromMovieDataExportedToRequiredFileType:(id)arg1 displayName:(id)arg2 relativePath:(id)arg3;
- (id)_newDataFromAnimatedGIFDataExportedToRequiredFileType:(id)arg1 displayName:(id)arg2 relativePath:(id)arg3;
- (id)dataFromMovieData:(id)arg1;
- (void)dealloc;
- (id)init;
- (id)tspDataForGqData:(id)arg1;
- (id)passphraseHint;
- (id)cryptoKey;

@end

