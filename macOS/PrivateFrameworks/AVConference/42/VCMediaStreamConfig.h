//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSMutableDictionary, NSString, VCMediaStreamMultiwayConfig, VCNetworkAddress;

__attribute__((visibility("hidden")))
@interface VCMediaStreamConfig : NSObject
{
    long long _direction;
    VCNetworkAddress *_localAddress;
    NSString *_cName;
    unsigned int _localSSRC;
    VCNetworkAddress *_remoteAddress;
    unsigned int _remoteSSRC;
    unsigned long long _recommendedMTU;
    NSData *_sendMasterKey;
    NSMutableDictionary *_txPayloadMap;
    NSData *_receiveMasterKey;
    NSMutableDictionary *_rxPayloadMap;
    long long _SRTPCipherSuite;
    BOOL _rtpTimeOutEnabled;
    double _rtpTimeOutInterval;
    BOOL _decryptionTimeOutEnabled;
    double _decryptionTimeOutInterval;
    unsigned int _cellularUniqueTag;
    BOOL _rtcpEnabled;
    double _rtcpSendInterval;
    long long _SRTCPCipherSuite;
    BOOL _rtcpTimeOutEnabled;
    double _rtcpTimeOutInterval;
    BOOL _rtcpReceiveCallbackEnabled;
    unsigned short _rtcpRemotePort;
    BOOL _rateAdaptationEnabled;
    VCMediaStreamMultiwayConfig *_multiwayConfig;
}

@property(nonatomic, getter=isRTCPReceiveCallbackEnabled) BOOL rtcpReceiveCallbackEnabled; // @synthesize rtcpReceiveCallbackEnabled=_rtcpReceiveCallbackEnabled;
@property(retain, nonatomic) VCMediaStreamMultiwayConfig *multiwayConfig; // @synthesize multiwayConfig=_multiwayConfig;
@property(nonatomic, getter=isRateAdaptationEnabled) BOOL rateAdaptationEnabled; // @synthesize rateAdaptationEnabled=_rateAdaptationEnabled;
@property(readonly, nonatomic) NSDictionary *txPayloadMap; // @synthesize txPayloadMap=_txPayloadMap;
@property(readonly, nonatomic) NSDictionary *rxPayloadMap; // @synthesize rxPayloadMap=_rxPayloadMap;
@property(nonatomic) long long SRTCPCipherSuite; // @synthesize SRTCPCipherSuite=_SRTCPCipherSuite;
@property(nonatomic) long long SRTPCipherSuite; // @synthesize SRTPCipherSuite=_SRTPCipherSuite;
@property(retain, nonatomic) NSData *receiveMasterKey; // @synthesize receiveMasterKey=_receiveMasterKey;
@property(retain, nonatomic) NSData *sendMasterKey; // @synthesize sendMasterKey=_sendMasterKey;
@property(nonatomic) unsigned long long recommendedMTU; // @synthesize recommendedMTU=_recommendedMTU;
@property(nonatomic) unsigned int cellularUniqueTag; // @synthesize cellularUniqueTag=_cellularUniqueTag;
@property(nonatomic) double decryptionTimeOutInterval; // @synthesize decryptionTimeOutInterval=_decryptionTimeOutInterval;
@property(nonatomic) double rtcpTimeOutInterval; // @synthesize rtcpTimeOutInterval=_rtcpTimeOutInterval;
@property(nonatomic) double rtpTimeOutInterval; // @synthesize rtpTimeOutInterval=_rtpTimeOutInterval;
@property(nonatomic, getter=isDecryptionTimeOutEnabled) BOOL decryptionTimeOutEnabled; // @synthesize decryptionTimeOutEnabled=_decryptionTimeOutEnabled;
@property(nonatomic, getter=isRTCPTimeOutEnabled) BOOL rtcpTimeOutEnabled; // @synthesize rtcpTimeOutEnabled=_rtcpTimeOutEnabled;
@property(nonatomic, getter=isRTPTimeOutEnabled) BOOL rtpTimeOutEnabled; // @synthesize rtpTimeOutEnabled=_rtpTimeOutEnabled;
@property(nonatomic) double rtcpSendInterval; // @synthesize rtcpSendInterval=_rtcpSendInterval;
@property(nonatomic) unsigned short rtcpRemotePort; // @synthesize rtcpRemotePort=_rtcpRemotePort;
@property(nonatomic, getter=isRTCPEnabled) BOOL rtcpEnabled; // @synthesize rtcpEnabled=_rtcpEnabled;
@property(nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property(nonatomic) unsigned int localSSRC; // @synthesize localSSRC=_localSSRC;
@property(nonatomic) long long direction; // @synthesize direction=_direction;
@property(copy, nonatomic) NSString *cName; // @synthesize cName=_cName;
@property(retain, nonatomic) VCNetworkAddress *remoteAddress; // @synthesize remoteAddress=_remoteAddress;
@property(retain, nonatomic) VCNetworkAddress *localAddress; // @synthesize localAddress=_localAddress;
- (void)applyMediaStreamClientDictionary:(id)arg1;
- (void)setupMediaStreamConfig;
@property(readonly, nonatomic) long long primaryTxCodecType;
- (void)addTxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addTxPayloadType:(int)arg1;
- (void)addRxPayloadType:(int)arg1 networkPayload:(unsigned int)arg2;
- (void)addRxPayloadType:(int)arg1;
- (id)description;
- (void)dealloc;
- (id)initWithClientDictionary:(id)arg1;
- (id)init;

@end

