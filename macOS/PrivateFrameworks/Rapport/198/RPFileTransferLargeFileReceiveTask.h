//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSObject<OS_dispatch_queue>, RPFileTransferItem;

__attribute__((visibility("hidden")))
@interface RPFileTransferLargeFileReceiveTask : NSObject
{
    int _fileFD;
    struct CC_SHA256state_st _sha256Ctx;
    RPFileTransferItem *_fileItem;
    NSObject<OS_dispatch_queue> *_queue;
    unsigned long long _taskID;
}

- (void).cxx_destruct;
@property(nonatomic) unsigned long long taskID; // @synthesize taskID=_taskID;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property(retain, nonatomic) RPFileTransferItem *fileItem; // @synthesize fileItem=_fileItem;
@property(nonatomic) int fileFD; // @synthesize fileFD=_fileFD;

@end

