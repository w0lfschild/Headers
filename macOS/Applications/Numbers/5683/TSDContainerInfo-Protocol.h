//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TSDInfo-Protocol.h"

@class NSArray, NSObject, TSKSelectionPath;
@protocol TSDInfo;

@protocol TSDContainerInfo <TSDInfo>
@property(readonly, nonatomic) NSArray *childInfos;
- (NSObject<TSDInfo> *)infoForSelectionPath:(TSKSelectionPath *)arg1;

@optional
- (BOOL)prohibitsModificationToChildren;
@end

