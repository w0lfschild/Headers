//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Memories/PHAssetWriter.h>

@class AVAssetExportSession;

__attribute__((visibility("hidden")))
@interface PHVideoAssetWriter : PHAssetWriter
{
    AVAssetExportSession *_exportSession;
}

@property(retain, nonatomic) AVAssetExportSession *exportSession; // @synthesize exportSession=_exportSession;
- (void).cxx_destruct;
- (id)requestWithNetworkAccess:(BOOL)arg1;
- (id)request;
- (unsigned long long)_estimatedOutputSizeWithError:(id *)arg1;
- (unsigned long long)estimatedOutputSizeWithError:(id *)arg1;
- (id)transfer;

@end

