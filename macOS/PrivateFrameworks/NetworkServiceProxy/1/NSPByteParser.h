//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NetworkServiceProxy/NSCopying-Protocol.h>

@class NSData;

@interface NSPByteParser : NSObject <NSCopying>
{
    NSData *_data;
    const char *_bytes;
    const char *_cursor;
    unsigned long long _offset;
}

@property unsigned long long offset; // @synthesize offset=_offset;
@property const char *cursor; // @synthesize cursor=_cursor;
@property(readonly) const char *bytes; // @synthesize bytes=_bytes;
@property(readonly) NSData *data; // @synthesize data=_data;
- (void).cxx_destruct;
- (id)parseAddressWithFamily:(unsigned char)arg1;
- (const char *)parseBytes:(unsigned long long)arg1;
- (unsigned int)parse32Bits:(char *)arg1;
- (unsigned short)parse16Bits:(char *)arg1;
- (unsigned char)parse8Bits:(char *)arg1;
- (id)parseDomainName;
- (BOOL)advanceBy:(unsigned long long)arg1 andCopyTo:(void *)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithData:(id)arg1;

@end

