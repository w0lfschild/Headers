//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <ShareServicesCore/SBLShareKitManager.h>

@class NSMapTable;

@interface SBLDebugShareKitManager : SBLShareKitManager
{
    NSMapTable *_assetPerItemProvider;
}

- (void).cxx_destruct;
- (void)preflightItemProviders:(id)arg1;
- (void)cleanupItems:(id)arg1;
- (void)reset;
- (id)assetForItemProvider:(id)arg1;
- (id)sharingItemsForAssets:(id)arg1 allowLocation:(BOOL)arg2;

@end

