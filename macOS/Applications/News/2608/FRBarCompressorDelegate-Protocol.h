//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class FRBarCompressor, UIScrollView;

@protocol FRBarCompressorDelegate <NSObject>

@optional
- (void)barCompressorScrollViewDidScroll:(UIScrollView *)arg1;
- (void)barCompressor:(FRBarCompressor *)arg1 didChangeToState:(long long)arg2;
- (void)barCompressorScrollViewDidScrollOffTop:(FRBarCompressor *)arg1;
- (void)barCompressorScrollViewDidHitTop:(FRBarCompressor *)arg1;
@end

