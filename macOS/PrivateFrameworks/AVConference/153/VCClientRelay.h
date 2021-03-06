//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, NSObject<OS_dispatch_source>;

__attribute__((visibility("hidden")))
@interface VCClientRelay : NSObject
{
    int _vtpSocket;
    int _idsSocket;
    NSObject<OS_dispatch_source> *_idsReadSource;
    NSObject<OS_dispatch_queue> *_idsReadQueue;
    BOOL _isConnectionResultSet;
    struct tagCONNRESULT _connectionResult;
    struct sockaddr_storage _vtpDestination;
    unsigned int _vtpDestinationLength;
    struct OpaqueFigThread *_vtpReceiveTID;
    BOOL _stopVTPReceiveThread;
}

@property(readonly) BOOL stopVTPReceiveThread; // @synthesize stopVTPReceiveThread=_stopVTPReceiveThread;
- (BOOL)relayVTPPacket;
- (BOOL)relayIDSPacket;
- (int)stopRelay;
- (int)startRelay;
- (int)setupVTPSocket;
- (void)setConnectionResult:(struct tagCONNRESULT *)arg1;
- (void)dealloc;
- (id)initWithIDSSocket:(int)arg1;

@end

