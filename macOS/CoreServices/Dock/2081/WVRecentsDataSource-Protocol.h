//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class ECEvent, NSDictionary, NSString;

@protocol WVRecentsDataSource <NSObject>
- (void)performRecentsActionAtIndex:(unsigned long long)arg1 withEvent:(ECEvent *)arg2 sender:(id)arg3 changeMode:(_Bool)arg4;
- (id)recentsValueForKey:(NSString *)arg1 atIndex:(unsigned long long)arg2 withItemInfo:(NSDictionary *)arg3;
- (unsigned long long)numberOfRecentsItems;
@end

