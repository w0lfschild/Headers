//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface ENNoteContent : NSObject
{
    NSString *_emml;
}

+ (id)noteContentWithENML:(id)arg1;
+ (id)noteContentWithSanitizedHTML:(id)arg1;
+ (id)noteContentWithContentArray:(id)arg1;
+ (id)noteContentWithString:(id)arg1;
@property(copy, nonatomic) NSString *emml; // @synthesize emml=_emml;
- (void).cxx_destruct;
- (id)enml;
- (id)enmlWithNote:(id)arg1;
- (id)initWithENML:(id)arg1;

@end

