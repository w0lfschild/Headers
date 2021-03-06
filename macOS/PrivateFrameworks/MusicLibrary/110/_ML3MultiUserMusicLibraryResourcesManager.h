//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>

#import "MLMediaLibraryAccountChangeObserver.h"

@class NSObject<OS_dispatch_queue>, NSString;

__attribute__((visibility("hidden")))
@interface _ML3MultiUserMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <MLMediaLibraryAccountChangeObserver>
{
    NSString *_cachedLibraryContainerPath;
    NSObject<OS_dispatch_queue> *_serialQueue;
    id <MLMediaLibraryResourcesServiceProtocol> _libraryResourcesServices;
}

@property(retain, nonatomic) id <MLMediaLibraryResourcesServiceProtocol> libraryResourcesServices; // @synthesize libraryResourcesServices=_libraryResourcesServices;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *serialQueue; // @synthesize serialQueue=_serialQueue;
- (void).cxx_destruct;
- (void)terminateForFailureToPerformDatabasePathChange;
- (void)emergencyDisconnectWithCompletion:(CDUnknownBlockType)arg1;
- (void)performDatabasePathChange:(id)arg1 completion:(CDUnknownBlockType)arg2;
@property(copy, nonatomic) NSString *cachedLibraryContainerPath; // @synthesize cachedLibraryContainerPath=_cachedLibraryContainerPath;
- (id)libraryContainerPath;
- (id)initWithLibraryResourcesService:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

