//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ESDBlipContext.h"

@interface ESDMetafileBlipContext : ESDBlipContext
{
    unsigned int mCb;
    unsigned int defaultHeaderSize;
}

@property unsigned int defaultHeaderSize; // @synthesize defaultHeaderSize;
- (_Bool)loadDelayedNode:(id)arg1;
- (id)initWithOffset:(unsigned int)arg1 byteCount:(unsigned int)arg2 uncompressed:(unsigned int)arg3 stream:(struct SsrwOOStream *)arg4 streamID:(unsigned int)arg5;

@end

