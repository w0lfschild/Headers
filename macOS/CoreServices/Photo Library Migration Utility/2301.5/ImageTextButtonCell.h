//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSButtonCell.h>

@class NSString;

@interface ImageTextButtonCell : NSButtonCell
{
    NSString *mText;
}

- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (void)setText:(id)arg1;
- (id)text;
- (void)dealloc;
- (id)initTextCell:(id)arg1;
- (id)initImageCell:(id)arg1;
- (id)initWithCell:(id)arg1;

@end

