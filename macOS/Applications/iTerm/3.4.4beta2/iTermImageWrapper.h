//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSImage;

@interface iTermImageWrapper : NSObject
{
    id _cgimage;
    NSImage *_image;
}

+ (id)withImage:(id)arg1;
+ (id)withContentsOfFile:(id)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSImage *image; // @synthesize image=_image;
@property(readonly, nonatomic) struct CGImage *cgimage;
- (id)initWithImage:(id)arg1;

@end

