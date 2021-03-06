//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSImageView.h>

@class BookEditingController, NSImage;

__attribute__((visibility("hidden")))
@interface BookCoverImageView : NSImageView
{
    BookEditingController *_editingController;
    NSImage *_rawImage;
}

@property(retain) NSImage *rawImage; // @synthesize rawImage=_rawImage;
@property BookEditingController *editingController; // @synthesize editingController=_editingController;
- (void)paste:(id)arg1;
- (void)setImage:(id)arg1;
- (void)renderBooksWithImage:(id)arg1;
- (void)concludeDragOperation:(id)arg1;
- (void)dealloc;

@end

