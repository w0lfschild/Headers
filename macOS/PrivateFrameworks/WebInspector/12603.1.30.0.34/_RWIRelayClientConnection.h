//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebInspector/_RWIRelayToClientMessageProxy-Protocol.h>

@class NSString;
@protocol _RWIRelayClientConnectionDelegate;

__attribute__((visibility("hidden")))
@interface _RWIRelayClientConnection : NSObject <_RWIRelayToClientMessageProxy>
{
    BOOL _didReportClose;
    id <_RWIRelayClientConnectionDelegate> _delegate;
    NSString *_tag;
}

@property(copy, nonatomic) NSString *tag; // @synthesize tag=_tag;
@property(readonly, nonatomic) id <_RWIRelayClientConnectionDelegate> delegate; // @synthesize delegate=_delegate;
- (id)methodSignatureForSelector:(SEL)arg1;
- (void)forwardInvocation:(id)arg1;
- (void)_dispatchMessage:(id)arg1;
- (void)_reportClose;
- (void)sendMessage:(id)arg1;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1;

@end

