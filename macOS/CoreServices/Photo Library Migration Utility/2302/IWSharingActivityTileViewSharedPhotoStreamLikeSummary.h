//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "IWSharingActivityTileView.h"

@class NSButton;

@interface IWSharingActivityTileViewSharedPhotoStreamLikeSummary : IWSharingActivityTileView
{
    NSButton *_likeToggleButton;
    struct CGRect _likeToggleRect;
    long long _likeToggleRectTrackingTag;
    BOOL _mouseDownOnLikeToggleRect;
}

+ (id)sharedPhotoStreamController;
- (void)mouseUp:(id)arg1;
- (void)mouseDown:(id)arg1;
- (id)tileText;
- (id)tileIcon;
- (void)recalculateFrameForContent;
- (void)drawRect:(struct CGRect)arg1;
- (long long)likeCount;
- (void)setLikeToggleButtonEnabled:(BOOL)arg1;
- (void)toggleCurrentUserLikeStatus:(id)arg1;
- (BOOL)currentUserLikeStatus;
- (id)currentUserLikeCommentId;
- (id)publishedAlbum;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_markAsRead;
- (id)_clickableText;

@end

