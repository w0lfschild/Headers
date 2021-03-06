//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <PhotoFoundation/PFUtilityAction.h>

@class NSWindow;
@protocol IPXFastEnumeration;

__attribute__((visibility("hidden")))
@interface IPXSharedAlbumDeleteAction : PFUtilityAction
{
    BOOL _hasSubscribedSharedAlbums;
    BOOL _skipPrompt;
    id <IPXFastEnumeration> _sharedAlbums;
    NSWindow *_hostWindow;
}

- (void).cxx_destruct;
@property(retain) NSWindow *hostWindow; // @synthesize hostWindow=_hostWindow;
@property(readonly) id <IPXFastEnumeration> sharedAlbums; // @synthesize sharedAlbums=_sharedAlbums;
- (int)executeAction:(CDUnknownBlockType)arg1;
- (int)executeAction;
- (int)performAction;
- (id)initWithSharedAlbums:(id)arg1 skipPrompt:(BOOL)arg2;
- (void)_promptUser:(CDUnknownBlockType)arg1;
- (BOOL)_validateSharedAlbumsAndUpdateState;

@end

