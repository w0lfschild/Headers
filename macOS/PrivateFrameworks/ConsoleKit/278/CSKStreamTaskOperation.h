//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSOperation.h"

@class CSKStreamTask, NSString;

@interface CSKStreamTaskOperation : NSOperation
{
    BOOL _delegateWasSignaled;
    id <CSKStreamTaskOperationDelegate> _delegate;
    CSKStreamTask *_representedTask;
    NSString *_initiatorIdentifier;
    NSString *_uniqueIdentifier;
}

@property(nonatomic) BOOL delegateWasSignaled; // @synthesize delegateWasSignaled=_delegateWasSignaled;
@property(readonly, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property(retain, nonatomic) NSString *initiatorIdentifier; // @synthesize initiatorIdentifier=_initiatorIdentifier;
@property(readonly, nonatomic) CSKStreamTask *representedTask; // @synthesize representedTask=_representedTask;
@property(nonatomic) __weak id <CSKStreamTaskOperationDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)_signalDelegateDidFinishIfNeeded;
- (void)cancel;
- (void)main;
- (BOOL)isReady;
- (BOOL)isAsynchronous;
- (BOOL)isConcurrent;
- (id)name;
- (id)initWithTask:(id)arg1;

@end

