//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNDocumentRoot, KNImager, NSMapTable;
@protocol KNDrawableThumbnailControllerDelegate, OS_dispatch_queue;

@interface KNDrawableThumbnailController : NSObject
{
    NSObject<OS_dispatch_queue> *_thumbnailGenerationQueue;
    id <KNDrawableThumbnailControllerDelegate> _delegate;
    NSMapTable *_thumbnailCache;
    KNDocumentRoot *_documentRoot;
    KNImager *_imager;
    struct CGSize _thumbnailSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) KNImager *imager; // @synthesize imager=_imager;
@property(retain, nonatomic) KNDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property(retain, nonatomic) NSMapTable *thumbnailCache; // @synthesize thumbnailCache=_thumbnailCache;
@property(nonatomic) struct CGSize thumbnailSize; // @synthesize thumbnailSize=_thumbnailSize;
@property(nonatomic) __weak id <KNDrawableThumbnailControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)invalidateThumbnailForDrawables:(id)arg1;
- (void)invalidateAllThumbnails;
- (id)p_createThumbnailForDrawable:(id)arg1 alternate:(BOOL)arg2;
- (void)createThumbnailForDrawable:(id)arg1;
- (id)cachedThumbnailForDrawable:(id)arg1;
- (id)initWithDocumentRoot:(id)arg1;

@end

