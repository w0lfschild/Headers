//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "VCRenderDelegateProtocol-Protocol.h"

@class CIContext, FrameReader, FrameResizer, FramerateTracker, NSArray, NSMutableDictionary, NSOpenGLContext, NSRecursiveLock, NSString, QCComposition, QCPatchController, QCRenderer, Texture;
@protocol OS_dispatch_queue;

@interface VideoProcessor : NSObject <VCRenderDelegateProtocol>
{
    NSOpenGLContext *_displayContext;
    CIContext *_ciCtx;
    CIContext *_colorCorrectingCtx;
    struct __CVOpenGLBufferPool *_displayBufferPool;
    FrameResizer *_localResizer;
    FrameResizer *_remoteResizer;
    FrameReader *_localReader;
    NSObject<OS_dispatch_queue> *_startStopQueue;
    struct OpaqueVTPixelTransferSession *_scaleAndResizeTransferSession;
    NSMutableDictionary *_inputPorts;
    QCRenderer *_renderer;
    QCRenderer *_gamma;
    NSArray *_keyPaths;
    QCPatchController *_qcController;
    struct CGPoint _inputXY;
    BOOL _backdropsSupported;
    BOOL _effectsSupported;
    BOOL _cameraLocked;
    unsigned long long _auxVideoMode;
    BOOL _dvWorkaround;
    Texture *_spotlightFrame;
    FramerateTracker *_framerateTracker;
    NSRecursiveLock *_renderLock;
    QCComposition *_composition;
    BOOL _backdropsEnabled;
    NSMutableDictionary *_remoteTextures;
    Texture *_auxVideoFrame;
    BOOL _auxVideoNeedsRendering;
    BOOL _showRecordingBadge;
    unsigned int _rendererStarted:1;
}

+ (BOOL)isBackdropsAvailable;
+ (BOOL)isEffectsAvailable;
+ (BOOL)_realCameraConnected;
+ (id)sharedProcessor;
@property(readonly) BOOL backdropsEnabled; // @synthesize backdropsEnabled=_backdropsEnabled;
@property struct CGPoint inputXY; // @synthesize inputXY=_inputXY;
- (int)resizeRemoteVideoForUserID:(id)arg1 outBuffer:(struct __CVBuffer *)arg2;
- (void)newRemoteCVPixelBuffer:(struct __CVBuffer *)arg1;
- (void)gammaCorrectBuffer:(struct __CVBuffer *)arg1;
- (int)processCVPixelBuffer:(struct __CVBuffer *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 withHint:(id)arg3;
- (int)_AuxVideo_processCVPixelBufferIntoCVPixelBuffer:(struct __CVBuffer *)arg1 withHint:(id)arg2;
- (int)_GPU_processCVPixelBuffer:(struct __CVBuffer *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 withHint:(id)arg3;
- (int)_Software_processCVPixelBuffer:(struct __CVBuffer *)arg1 intoCVPixelBuffer:(struct __CVBuffer *)arg2 withHint:(id)arg3;
- (struct __CVBuffer *)_convertToARGB:(struct __CVBuffer *)arg1;
- (struct __CVBuffer *)_normalizeDVBuffer:(struct __CVBuffer *)arg1;
- (BOOL)auxVideoModeIsReplacement;
- (unsigned long long)auxVideoMode;
- (void)setAuxVideoMode:(unsigned long long)arg1;
@property(retain) QCComposition *composition;
- (void)_setBackdropPaths;
- (void)setBackPath:(id)arg1 forePath:(id)arg2;
- (id)auxVideoFrame;
- (void)setAuxVideoFrame:(struct __CVBuffer *)arg1;
- (void)observeValueForKeyPathOnMainThread:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_captureTimedout;
- (void)_stopCapture;
- (void)_captureEnded;
- (void)startCapture;
- (void)_updateCapture;
- (void)setShowBackgroundMotion:(BOOL)arg1;
- (BOOL)finishedCapture;
- (BOOL)hasCaptured;
- (void)setHasCaptured:(BOOL)arg1;
- (BOOL)capture;
- (void)setCapture:(BOOL)arg1;
@property NSString *backdropsMessage;
- (void)frameNotifier:(id)arg1 didRemoveListener:(id)arg2;
- (void)frameNotifier:(id)arg1 didAddListener:(id)arg2;
- (void)handleVirtualScreenChangedNotificiation:(int)arg1;
- (void)_stopRenderer;
- (void)_startRenderer;
- (void)_stopGPURenderer;
- (BOOL)_startGPURenderer;
- (void)lockCamera:(BOOL)arg1;
- (void)_setMicronCameraAELock:(BOOL)arg1;
- (void)_applicationWillTerminate:(id)arg1;
- (void)dealloc;
- (id)init;

@end

