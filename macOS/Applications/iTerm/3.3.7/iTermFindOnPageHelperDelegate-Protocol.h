//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class FindContext, NSMutableArray, NSString;

@protocol iTermFindOnPageHelperDelegate <NSObject>
- (void)findOnPageFailed;
- (void)findOnPageRevealRange:(CDStruct_7a47e81c)arg1;
- (void)findOnPageDidWrapForwards:(BOOL)arg1;
- (void)findOnPageSelectRange:(CDStruct_7a47e81c)arg1 wrapped:(BOOL)arg2;
- (BOOL)continueFindAllResults:(NSMutableArray *)arg1 inContext:(FindContext *)arg2;
- (void)findOnPageSaveFindContextAbsPos;
- (void)findOnPageSetFindString:(NSString *)arg1 forwardDirection:(BOOL)arg2 mode:(unsigned long long)arg3 startingAtX:(int)arg4 startingAtY:(int)arg5 withOffset:(int)arg6 inContext:(FindContext *)arg7 multipleResults:(BOOL)arg8;
@end

