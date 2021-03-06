//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSData, NSFileHandle, NSString;

@interface FLChunkFileWrapper : NSObject
{
    BOOL _finished;
    unsigned long long _size;
    NSString *_parentWrapperPath;
    unsigned long long _index;
    NSFileHandle *_fileHandle;
    CDStruct_6f2b243e _range;
}

@property(retain, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property(nonatomic) unsigned long long index; // @synthesize index=_index;
@property(copy, nonatomic) NSString *parentWrapperPath; // @synthesize parentWrapperPath=_parentWrapperPath;
@property(nonatomic) BOOL finished; // @synthesize finished=_finished;
@property(nonatomic) unsigned long long size; // @synthesize size=_size;
@property(nonatomic) CDStruct_6f2b243e range; // @synthesize range=_range;
- (void).cxx_destruct;
- (void)makeFileHandleIfNeeded;
- (BOOL)truncateData;
- (BOOL)appendData:(id)arg1;
@property(readonly, nonatomic) NSData *data;
- (id)jsonObjectRepresentation;
@property(readonly, nonatomic) NSString *filePath;
@property(readonly, nonatomic) NSString *filename;
@property(readonly, nonatomic) unsigned long long downloadedSize;
@property(readonly, nonatomic) CDStruct_6f2b243e downloadRange;
- (id)initWithIndex:(unsigned long long)arg1 range:(CDStruct_6f2b243e)arg2 size:(unsigned long long)arg3;

@end

