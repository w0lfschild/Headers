//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AUPasscodeEncoder, AVAudioEngine, AVAudioPCMBuffer, AVAudioPlayerNode, AVAudioUnit;
@protocol OS_dispatch_queue;

@interface APCPlayerEngine : NSObject
{
    AVAudioEngine *_engine;
    AVAudioUnit *_encoderAUNode;
    AUPasscodeEncoder *_encoderAU;
    AVAudioPlayerNode *_player;
    AVAudioPCMBuffer *_assetBuffer;
    BOOL _isRunning;
    float _prePlayVolume;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _stopEngineCompletion;
}

+ (id)playerWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id *)arg4;
@property(copy, nonatomic) CDUnknownBlockType stopEngineCompletion; // @synthesize stopEngineCompletion=_stopEngineCompletion;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void).cxx_destruct;
- (void)stopEngine:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_stopAudioEngineAndSession;
- (BOOL)startEngine;
- (float)evaluateAsset;
- (void)makeEngineConnections;
- (void)createEngineAndAttachNodes;
- (void)setupAudioSession;
- (id)initWithAssetURL:(id)arg1 codecConfig:(id)arg2 payload:(id)arg3 error:(id *)arg4;
- (id)createAU:(struct AudioComponentDescription)arg1;

@end

