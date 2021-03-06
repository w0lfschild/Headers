//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface NEIKEv2RTT : NSObject
{
    unsigned short _rxt_shift;
    int _lastRequestMessageID;
    unsigned long long _rtt_cur;
    unsigned long long _srtt;
    unsigned long long _rtt_var;
    unsigned long long _rtt_start_time;
    unsigned long long _rtt_min;
    unsigned long long _rtt_updated;
    unsigned long long _rxt_cur;
}

@property(nonatomic) unsigned short rxt_shift; // @synthesize rxt_shift=_rxt_shift;
@property(nonatomic) unsigned long long rxt_cur; // @synthesize rxt_cur=_rxt_cur;
@property(nonatomic) unsigned long long rtt_updated; // @synthesize rtt_updated=_rtt_updated;
@property(nonatomic) unsigned long long rtt_min; // @synthesize rtt_min=_rtt_min;
@property(nonatomic) unsigned long long rtt_start_time; // @synthesize rtt_start_time=_rtt_start_time;
@property(nonatomic) unsigned long long rtt_var; // @synthesize rtt_var=_rtt_var;
@property(nonatomic) unsigned long long srtt; // @synthesize srtt=_srtt;
@property(nonatomic) unsigned long long rtt_cur; // @synthesize rtt_cur=_rtt_cur;
@property(nonatomic) int lastRequestMessageID; // @synthesize lastRequestMessageID=_lastRequestMessageID;
- (unsigned long long)nextRetransmissionInterval;
- (void)updateRTT:(id)arg1 responseMessageID:(int)arg2;
- (void)resetRTTMeasurement;
- (BOOL)startRTTMeasurement:(id)arg1 requestMessageID:(int)arg2;
- (BOOL)getCurrentTime:(struct timeval *)arg1;
- (id)init;
- (void)reset;

@end

