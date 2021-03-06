//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSURLSessionDataDelegate.h"
#import "NSURLSessionDelegate.h"
#import "NSURLSessionTaskDelegate.h"
#import "NSUserNotificationCenterDelegate.h"

@class NSButton, NSDictionary, NSMutableArray, NSMutableData, NSMutableDictionary, NSProgressIndicator, NSString;

@interface MF_PluginManager : NSObject <NSURLSessionDataDelegate, NSURLSessionDelegate, NSURLSessionTaskDelegate, NSUserNotificationCenterDelegate>
{
    NSMutableArray *pluginsArray;
    NSMutableDictionary *installedPluginDICT;
    NSMutableDictionary *needsUpdate;
    NSButton *downloadButton;
    NSProgressIndicator *progressObject;
    float _downloadSize;
    NSMutableData *_dataToDownload;
    NSDictionary *_plugin;
}

+ (long long)compareVersion:(id)arg1 toVersion:(id)arg2;
+ (id)pluginGetIcon:(id)arg1;
+ (void)folderinstall:(id)arg1;
+ (unsigned char)installItem:(id)arg1;
+ (id)arrayOfFoldersInFolder:(id)arg1;
+ (id)MacEnhancePluginPaths;
+ (id)sharedInstance;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *plugin; // @synthesize plugin=_plugin;
@property(nonatomic) float downloadSize; // @synthesize downloadSize=_downloadSize;
@property(retain, nonatomic) NSMutableData *dataToDownload; // @synthesize dataToDownload=_dataToDownload;
- (void)checkforPluginUpdates:(id)arg1;
- (id)getItemLocalVersion:(id)arg1;
- (void)notifyUser:(unsigned char)arg1;
- (void)installPackages;
- (BOOL)userNotificationCenter:(id)arg1 shouldPresentNotification:(id)arg2;
- (void)checkforPluginUpdates:(id)arg1:(id)arg2;
- (id)getInstalledPlugins;
- (id)getNeedsUpdate;
- (void)checkforPluginUpdatesAndInstall:(id)arg1;
- (void)updateApplicationIcon;
- (unsigned char)pluginRevealFinder:(id)arg1;
- (unsigned char)pluginDelete:(id)arg1;
- (id)pluginLocalPath:(id)arg1;
- (unsigned char)pluginUpdateOrInstall:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (unsigned char)pluginUpdateOrInstall:(id)arg1 withButton:(id)arg2 andProgress:(id)arg3;
- (unsigned char)pluginDownloaded:(id)arg1;
- (void)installBundles:(id)arg1;
- (void)readPlugins:(id)arg1;
- (void)readFolder:(id)arg1:(id)arg2;
- (void)replaceFile:(id)arg1:(id)arg2;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

