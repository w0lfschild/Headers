//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSSharingService.h"

@interface NSSharingService (SHKNSBridge)
- (BOOL)sharingService:(id)arg1 prepareAlternateItemsWithIdentifier:(id)arg2 forItems:(id)arg3 block:(CDUnknownBlockType)arg4;
- (id)sharingService:(id)arg1 optionsForItems:(id)arg2;
- (id)sharingServiceSourceWindow:(id)arg1 contentRect:(struct CGRect *)arg2;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2 transitionImage:(id *)arg3;
- (id)sharingService:(id)arg1 sourceWindowForShareItems:(id)arg2 sharingContentScope:(long long *)arg3;
- (id)sharingService:(id)arg1 transitionImageForShareItem:(id)arg2 contentRect:(struct CGRect *)arg3;
- (struct CGRect)sharingService:(id)arg1 sourceFrameOnScreenForShareItem:(id)arg2;
- (id)sharingService:(id)arg1 imageForShareItem:(id)arg2 size:(struct CGSize)arg3 contentRect:(struct CGRect *)arg4;
- (void)sharingService:(id)arg1 didShareItems:(id)arg2;
- (void)sharingService:(id)arg1 didFailToShareItems:(id)arg2 error:(id)arg3;
- (void)sharingService:(id)arg1 willShareItems:(id)arg2;
- (id)sharingService:(id)arg1 sharedItemsFromProposedItems:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (void)setName:(id)arg1;
@end

