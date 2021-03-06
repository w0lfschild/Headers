//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <AppKit/NSActionCell.h>

@class NSImage, NSMutableAttributedString, NSString;

@interface DADiskCell : NSActionCell
{
    struct __DADisk *_disk;
    NSImage *_image;
    NSMutableAttributedString *_info;
    NSString *_description;
}

- (void)accessibilityPerformAction:(id)arg1;
- (id)accessibilityActionDescription:(id)arg1;
- (id)accessibilityActionNames;
- (id)accessibilityAttributeValue:(id)arg1;
- (id)accessibilityAttributeNames;
- (void)drawInteriorWithFrame:(struct CGRect)arg1 inView:(id)arg2;
- (float)requiredWidth;
- (void)dealloc;
- (id)buildDiskDescription:(struct __DADisk *)arg1;
- (id)buildDiskString:(struct __DADisk *)arg1;
- (id)diskIcon:(struct __DADisk *)arg1;
- (struct __DADisk *)disk;
- (void)setDisk:(struct __DADisk *)arg1;
- (BOOL)isOpaque;

@end

