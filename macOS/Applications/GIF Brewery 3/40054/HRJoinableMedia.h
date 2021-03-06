//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class HRJoinableMediaEnumerator, NSNumber, NSString, NSURL;

@interface HRJoinableMedia : NSObject
{
    struct CGImage *_imageRef;
    NSNumber *_fileSize;
    NSString *_fileName;
    NSString *_fileExtension;
    NSURL *_url;
    HRJoinableMediaEnumerator *_enumerator;
    struct CGSize _size;
}

@property(retain, nonatomic) HRJoinableMediaEnumerator *enumerator; // @synthesize enumerator=_enumerator;
@property(retain, nonatomic) NSURL *url; // @synthesize url=_url;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) NSString *fileExtension; // @synthesize fileExtension=_fileExtension;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSNumber *fileSize; // @synthesize fileSize=_fileSize;
@property(nonatomic) struct CGImage *imageRef; // @synthesize imageRef=_imageRef;
- (void).cxx_destruct;
- (void)resetEnumerator;
- (id)enumeratorWithPixelBufferPool:(struct __CVPixelBufferPool *)arg1 targetSize:(struct CGSize)arg2;
- (id)initWithURL:(id)arg1;

@end

