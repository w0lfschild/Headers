//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class DXSettings;

@interface DXCloudWatcher : NSObject
{
    DXSettings *_settings;
}

- (void).cxx_destruct;
@property __weak DXSettings *settings; // @synthesize settings=_settings;
- (id)boxSyncPaths;
- (id)oneDrivePaths;
- (id)googleDrivePaths;
- (id)dropboxPaths;
- (id)iCloudPaths;
- (void)start:(CDUnknownBlockType)arg1;
- (id)initWithSettings:(id)arg1;

@end

