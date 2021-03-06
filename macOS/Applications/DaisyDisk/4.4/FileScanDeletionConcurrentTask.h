//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "FileScanDeletionConcurrentTaskProtocol-Protocol.h"

@class DirectoryItem;
@protocol FileScanDeletionConcurrentTaskContext, FileScanDeletionConcurrentTaskProtocol, OS_dispatch_semaphore;

@interface FileScanDeletionConcurrentTask : NSObject <FileScanDeletionConcurrentTaskProtocol>
{
    id <FileScanDeletionConcurrentTaskContext> _context;
    id <FileScanDeletionConcurrentTaskProtocol> _parentTask;
    char *_path;
    unsigned long long _pathLength;
    BOOL _hasUnlockedCurrDir;
    DirectoryItem *_currDir;
    NSObject<OS_dispatch_semaphore> *_survivedMutex;
    unsigned long long _refCount;
    BOOL _shouldRefreshCurrDirHardlinkedness;
    id _hardLinksTableRecord;
    BOOL _isRestricted;
    BOOL _hasSurvived;
    BOOL _hasHardLinks;
    long double _relProgressFactor;
}

+ (unsigned long long)recommendedAttributeBufferSize;
+ (void)makeAttributeList:(struct attrlist *)arg1 supportsPhysicalSize:(BOOL)arg2;
@property BOOL hasHardLinks; // @synthesize hasHardLinks=_hasHardLinks;
@property(readonly, nonatomic) BOOL hasSurvived; // @synthesize hasSurvived=_hasSurvived;
@property(nonatomic) long double relProgressFactor; // @synthesize relProgressFactor=_relProgressFactor;
@property(readonly, nonatomic) unsigned long long pathLength; // @synthesize pathLength=_pathLength;
@property(readonly, nonatomic) const char *path; // @synthesize path=_path;
@property BOOL hasUnlockedCurrDir; // @synthesize hasUnlockedCurrDir=_hasUnlockedCurrDir;
@property(readonly, nonatomic) DirectoryItem *currDir; // @synthesize currDir=_currDir;
- (void).cxx_destruct;
- (void)outputLog;
- (void)completeCurrentTask;
- (void)childTaskDidComplete:(id)arg1;
- (const char *)parentPath;
- (id)performWithBuffer:(char *)arg1;
- (void)dealloc;
- (id)initWithContext:(id)arg1 path:(const char *)arg2 pathLength:(unsigned long long)arg3 currDir:(id)arg4 shouldRefreshCurrDirHardlinkedness:(BOOL)arg5 isRestricted:(BOOL)arg6;
- (id)initWithContext:(id)arg1 path:(char *)arg2 pathLength:(unsigned long long)arg3 parentTask:(id)arg4 currDir:(id)arg5 shouldRefreshCurrDirHardlinkedness:(BOOL)arg6 isRestricted:(BOOL)arg7;

@end

