//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDictionary, NSNumber, NSObject<OS_dispatch_source>, NSString;

__attribute__((visibility("hidden")))
@interface RPSendEntry : NSObject
{
    unsigned int _xid;
    unsigned int _xpcID;
    CDUnknownBlockType _completion;
    NSData *_eventData;
    NSString *_eventID;
    NSDictionary *_options;
    unsigned long long _queueTicks;
    NSString *_requestID;
    NSDictionary *_request;
    CDUnknownBlockType _responseHandler;
    NSObject<OS_dispatch_source> *_timer;
    NSNumber *_xidObj;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned int xpcID; // @synthesize xpcID=_xpcID;
@property(retain, nonatomic) NSNumber *xidObj; // @synthesize xidObj=_xidObj;
@property(nonatomic) unsigned int xid; // @synthesize xid=_xid;
@property(retain, nonatomic) NSObject<OS_dispatch_source> *timer; // @synthesize timer=_timer;
@property(copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property(copy, nonatomic) NSDictionary *request; // @synthesize request=_request;
@property(copy, nonatomic) NSString *requestID; // @synthesize requestID=_requestID;
@property(nonatomic) unsigned long long queueTicks; // @synthesize queueTicks=_queueTicks;
@property(copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property(copy, nonatomic) NSString *eventID; // @synthesize eventID=_eventID;
@property(copy, nonatomic) NSData *eventData; // @synthesize eventData=_eventData;
@property(copy, nonatomic) CDUnknownBlockType completion; // @synthesize completion=_completion;

@end

