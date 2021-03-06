//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class MPMediaItemArtwork, NSString;

@interface MPContentItem : NSObject
{
    void *_mediaRemoteContentItem;
    MPMediaItemArtwork *_artwork;
}

+ (BOOL)shouldPushArtworkData;
+ (void)performSuppressingChangeNotifications:(CDUnknownBlockType)arg1;
+ (BOOL)isSuppressingChangeNotifications;
@property(retain, nonatomic) MPMediaItemArtwork *artwork; // @synthesize artwork=_artwork;
@property(readonly, nonatomic) void *_mediaRemoteContentItem; // @synthesize _mediaRemoteContentItem;
- (void).cxx_destruct;
- (void)_loadArtwork:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_postItemChangedNotificationWithDeltaBlock:(CDUnknownBlockType)arg1;
@property(nonatomic, getter=isPlayable) BOOL playable;
@property(nonatomic, getter=isStreamingContent) BOOL streamingContent;
@property(nonatomic, getter=isExplicitContent) BOOL explicitContent;
@property(nonatomic, getter=isContainer) BOOL container;
@property(nonatomic) float playbackProgress;
@property(copy, nonatomic) NSString *subtitle;
@property(copy, nonatomic) NSString *title;
@property(readonly, copy, nonatomic) NSString *identifier;
- (BOOL)isEqual:(id)arg1;
- (id)createExternalRepresentation;
- (id)description;
- (void)dealloc;
- (id)_initWithMediaRemoteContentItem:(void *)arg1;
- (id)initWithExternalRepresentation:(id)arg1;
- (id)initWithIdentifier:(id)arg1;
- (id)init;

@end

