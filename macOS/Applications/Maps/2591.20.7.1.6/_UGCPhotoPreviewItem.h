//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "QLPreviewItem-Protocol.h"

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UGCPhotoPreviewItem : NSObject <QLPreviewItem>
{
    NSURL *_url;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *previewItemTitle;
@property(readonly, nonatomic) NSURL *previewItemURL;
- (id)initWithURL:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

