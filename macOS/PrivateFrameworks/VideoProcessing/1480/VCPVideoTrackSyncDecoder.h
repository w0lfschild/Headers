//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <VideoProcessing/VCPVideoTrackDecoder.h>

@class AVAssetReader, AVAssetReaderSampleReferenceOutput, NSObject<OS_dispatch_group>, NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_semaphore>;

@interface VCPVideoTrackSyncDecoder : VCPVideoTrackDecoder
{
    AVAssetReader *_assetReader;
    AVAssetReaderSampleReferenceOutput *_trackReader;
    CDStruct_e83c9415 _timerange;
    BOOL _launchOnce;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_group> *_group;
    NSObject<OS_dispatch_semaphore> *_inputSemaphore;
    NSObject<OS_dispatch_semaphore> *_outputSemaphore;
    BOOL _cancelDecode;
    int _decodeError;
    BOOL _decodeFinished;
    int _decodedFrames;
    int _outputFrameIdx;
    struct opaqueCMSampleBuffer *_sampleBuffer[2];
}

- (void).cxx_destruct;
- (struct opaqueCMSampleBuffer *)copyNextSampleBuffer;
- (void)decodeTask;
- (int)decodeSample:(CDStruct_e83c9415)arg1 sample:(struct opaqueCMSampleBuffer **)arg2;
- (int)findNextSample:(BOOL)arg1 timerange:(CDStruct_e83c9415 *)arg2;
- (long long)status;
- (void)dealloc;
- (id)initWithTrack:(id)arg1 timerange:(const CDStruct_e83c9415 *)arg2;

@end

