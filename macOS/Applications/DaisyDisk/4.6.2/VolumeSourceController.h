//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "FileSourceController.h"

#import "VolumeSourceObserver-Protocol.h"

@class NSMenuItem, VolumeSourceErrorController;

@interface VolumeSourceController : FileSourceController <VolumeSourceObserver>
{
    VolumeSourceErrorController *_errorController;
    NSMenuItem *_rescanAsAdminMenuItem;
    BOOL _includePurgeableIntoFree;
}

- (id)rescanAsAdminMenuItem;
- (BOOL)includePurgeableIntoFree;
- (void).cxx_destruct;
- (void)ejectVolumeSource:(id)arg1;
- (void)forgetVolumeSource:(id)arg1;
- (BOOL)validateMenuItem:(id)arg1;
- (void)makeOverviewButtonMenu:(id)arg1;
- (void)setIncludePurgeableIntoFree:(BOOL)arg1;
- (void)updateSlice;
- (void)updateData;
- (void)refreshSourceAsync;
- (void)refreshSourceDescription;
- (void)sourceIsUnmountedDidChange:(id)arg1;
- (void)volumeSourceSliceDidChange:(id)arg1;
- (void)volumeSourceSpaceSummaryDidChange:(id)arg1;
- (void)didBindToModel;
- (id)errorController;
- (id)volumeErrorController;
- (id)volumeSource;

@end

