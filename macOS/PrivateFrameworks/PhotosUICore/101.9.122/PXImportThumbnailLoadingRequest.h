//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PHImportAssetDataRequest, PXImportItemViewModel;

@interface PXImportThumbnailLoadingRequest : NSObject
{
    PXImportItemViewModel *_importItem;
    long long _requestID;
    unsigned long long _requestSize;
    CDUnknownBlockType _completionBlock;
    PHImportAssetDataRequest *_assetDataRequest;
}

@property(retain) PHImportAssetDataRequest *assetDataRequest; // @synthesize assetDataRequest=_assetDataRequest;
@property(readonly, copy, nonatomic) CDUnknownBlockType completionBlock; // @synthesize completionBlock=_completionBlock;
@property(readonly, nonatomic) unsigned long long requestSize; // @synthesize requestSize=_requestSize;
@property(readonly, nonatomic) long long requestID; // @synthesize requestID=_requestID;
@property(readonly, nonatomic) __weak PXImportItemViewModel *importItem; // @synthesize importItem=_importItem;
- (void).cxx_destruct;
- (id)initWithImportItem:(id)arg1 requestID:(long long)arg2 requestSize:(unsigned long long)arg3 completionBlock:(CDUnknownBlockType)arg4;

@end

