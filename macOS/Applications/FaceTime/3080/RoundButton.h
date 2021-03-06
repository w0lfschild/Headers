//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSButton.h>

@interface RoundButton : NSButton
{
    int _style;
}

+ (id)buttonWithImage:(id)arg1 style:(int)arg2;
+ (id)colorForImageWithState:(int)arg1;
+ (id)colorForBackgroundWithState:(int)arg1 style:(int)arg2;
+ (double)radius;
+ (Class)cellClass;
@property(nonatomic) int style; // @synthesize style=_style;
- (BOOL)allowsVibrancy;
- (void)drawRect:(struct CGRect)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

