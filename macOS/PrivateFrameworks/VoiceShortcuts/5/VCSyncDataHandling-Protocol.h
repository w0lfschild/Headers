//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "VCIncomingSyncDataHandling.h"
#import "VCOutgoingSyncDataHandling.h"

@protocol VCSyncDataHandling <VCOutgoingSyncDataHandling, VCIncomingSyncDataHandling>
- (void)deregisterSyncService:(id <VCShortcutSyncService>)arg1;
- (void)registerSyncService:(id <VCShortcutSyncService>)arg1;
@end

