//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class GkChordTrainerGridView, NSString;

@protocol GkChordTrainerGridView_Delegate <NSObject>

@optional
- (struct CGImage *)GkChordTrainerGridView:(GkChordTrainerGridView *)arg1 createCGImageForLayer:(unsigned long long)arg2 withSize:(struct CGSize)arg3;
- (NSString *)GkChordTrainerGridView:(GkChordTrainerGridView *)arg1 nameForLayer:(unsigned long long)arg2;
@end

