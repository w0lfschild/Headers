//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSString;

@protocol TSWPEndNoteShimService <NSObject>
- (void)populatedLibraries:(void (^)(BOOL))arg1;
- (void)formatCitationInfos:(NSArray *)arg1 withStyle:(NSString *)arg2 startingAt:(int)arg3 andCallback:(void (^)(NSData *, NSArray *, BOOL))arg4;
- (void)recordXMLsForSearchString:(NSString *)arg1 withCallback:(void (^)(NSArray *))arg2;
- (void)outputStylesWithCallback:(void (^)(NSArray *))arg1;
@end

