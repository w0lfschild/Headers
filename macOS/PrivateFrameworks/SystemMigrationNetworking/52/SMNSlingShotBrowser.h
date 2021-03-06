//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSNetServiceBrowserDelegate.h"
#import "NSNetServiceDelegate.h"

@class NSMutableArray, NSNetServiceBrowser, NSObject<OS_dispatch_queue>, NSString;

@interface SMNSlingShotBrowser : NSObject <NSNetServiceBrowserDelegate, NSNetServiceDelegate>
{
    CDUnknownBlockType _knownSystemBlock;
    CDUnknownBlockType _newSystemAppearedBlock;
    CDUnknownBlockType _systemDisappearedBlock;
    NSNetServiceBrowser *_browser;
    NSObject<OS_dispatch_queue> *_serviceMapQueue;
    NSMutableArray *_resolvingServices;
}

+ (void)addStringFromTXTDictionary:(id)arg1 forKey:(id)arg2 toDictionary:(id)arg3;
+ (id)decodeSystemDescriptionFromSlingShotRock:(id)arg1;
- (void).cxx_destruct;
@property(retain) NSMutableArray *resolvingServices; // @synthesize resolvingServices=_resolvingServices;
@property(retain) NSObject<OS_dispatch_queue> *serviceMapQueue; // @synthesize serviceMapQueue=_serviceMapQueue;
@property(retain) NSNetServiceBrowser *browser; // @synthesize browser=_browser;
@property(copy) CDUnknownBlockType systemDisappearedBlock; // @synthesize systemDisappearedBlock=_systemDisappearedBlock;
@property(copy) CDUnknownBlockType newSystemAppearedBlock; // @synthesize newSystemAppearedBlock=_newSystemAppearedBlock;
@property(copy) CDUnknownBlockType knownSystemBlock; // @synthesize knownSystemBlock=_knownSystemBlock;
- (void)netServiceBrowser:(id)arg1 didRemoveService:(id)arg2 moreComing:(BOOL)arg3;
- (void)netService:(id)arg1 didNotResolve:(id)arg2;
- (void)netServiceDidResolveAddress:(id)arg1;
- (id)iconForUTI:(id)arg1;
- (void)netServiceBrowser:(id)arg1 didFindService:(id)arg2 moreComing:(BOOL)arg3;
- (void)stop;
- (void)start;
- (void)dealloc;
- (id)initWithKnownSystemBlock:(CDUnknownBlockType)arg1 newSystemAppearedBlock:(CDUnknownBlockType)arg2 andSystemDisappearedBlock:(CDUnknownBlockType)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

