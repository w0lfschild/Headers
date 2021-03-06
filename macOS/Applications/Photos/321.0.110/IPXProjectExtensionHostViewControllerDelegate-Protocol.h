//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class IPXProjectExtensionHostViewController, NSPasteboard, PHAsset, PHPhotoLibrary, PHProject;

@protocol IPXProjectExtensionHostViewControllerDelegate <NSObject>
- (void)hostViewController:(IPXProjectExtensionHostViewController *)arg1 performDragOperationWithPasteboard:(NSPasteboard *)arg2 sequenceNumber:(long long)arg3;
- (void)hostViewController:(IPXProjectExtensionHostViewController *)arg1 showEditorForAsset:(PHAsset *)arg2 inProject:(PHProject *)arg3;
- (PHPhotoLibrary *)photoLibraryForHostViewController:(IPXProjectExtensionHostViewController *)arg1;
- (void)completedSessionOnHostViewController:(IPXProjectExtensionHostViewController *)arg1;
@end

