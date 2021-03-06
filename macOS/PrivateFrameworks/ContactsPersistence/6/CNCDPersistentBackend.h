//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CNCDPersistenceBackend.h"

@class NSPersistentStoreCoordinator, NSString;

__attribute__((visibility("hidden")))
@interface CNCDPersistentBackend : NSObject <CNCDPersistenceBackend>
{
    NSPersistentStoreCoordinator *_coordinator;
    id <CNAccountCollection> _accountCollection;
}

+ (id)backendWithAccountCollection:(id)arg1;
+ (id)os_log;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <CNAccountCollection> accountCollection; // @synthesize accountCollection=_accountCollection;
@property(readonly, nonatomic) NSPersistentStoreCoordinator *coordinator; // @synthesize coordinator=_coordinator;
- (void)applyDiff:(id)arg1 toContainerWithIdentifier:(id)arg2;
- (id)defaultContainer;
- (id)allContainers;
- (id)makePersistenceContextWithNotificationSource:(id)arg1;
- (id)makeManagedObjectContextWithConcurrencyType:(unsigned long long)arg1;
- (id)initWithPersistentStoreCoordinator:(id)arg1 accountCollection:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

