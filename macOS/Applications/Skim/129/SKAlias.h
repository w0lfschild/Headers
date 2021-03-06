//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSURL;

__attribute__((visibility("hidden")))
@interface SKAlias : NSObject
{
    struct AliasRecord **aliasHandle;
}

+ (id)aliasWithURL:(id)arg1;
+ (id)aliasWithData:(id)arg1;
@property(readonly, nonatomic) NSURL *fileURLNoUI; // @dynamic fileURLNoUI;
@property(readonly, nonatomic) NSURL *fileURL; // @dynamic fileURL;
- (id)fileURLWithMountFlags:(unsigned int)arg1;
@property(readonly, nonatomic) NSData *data; // @dynamic data;
- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (id)initWithData:(id)arg1;

@end

