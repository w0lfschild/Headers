//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSDate, NSMutableDictionary, NSString;

@interface ASICloudFilesObject : NSObject
{
    NSString *name;
    NSString *hash;
    unsigned int bytes;
    NSString *contentType;
    NSDate *lastModified;
    NSData *data;
    NSMutableDictionary *metadata;
}

+ (id)object;
- (void)setMetadata:(id)arg1;
- (id)metadata;
- (void)setData:(id)arg1;
- (id)data;
- (void)setLastModified:(id)arg1;
- (id)lastModified;
- (void)setContentType:(id)arg1;
- (id)contentType;
- (void)setBytes:(unsigned int)arg1;
- (unsigned int)bytes;
- (void)setHash:(id)arg1;
- (id)hash;
- (void)setName:(id)arg1;
- (id)name;
- (void)dealloc;

@end

