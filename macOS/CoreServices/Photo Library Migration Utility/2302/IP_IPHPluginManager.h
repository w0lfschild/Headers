//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

#import "IPHPluginManagerProtocol-Protocol.h"

@class NSLock, NSMutableDictionary, NSString, XTThread;

@interface IP_IPHPluginManager : NSObject <IPHPluginManagerProtocol>
{
    NSMutableDictionary *_plugins;
    NSMutableDictionary *_pluginClasses;
    NSString *_defaultUserAgent;
    NSString *_defaultAuthoringClient;
    NSMutableDictionary *_credentialsValidationInfoCache;
    NSLock *_credentialsValidationInfoCacheLock;
    XTThread *_checkThread;
    NSMutableDictionary *_publishUpdateRequestTimestamps;
}

+ (id)dotMacUtils;
+ (void)setPluginManagerClass:(Class)arg1;
+ (id)sharedPluginManager;
+ (unsigned long long)messageCategory;
+ (void)initialize;
- (BOOL)shouldLoadPluginWithBundleIdentifier:(id)arg1;
- (id)movieDurationWarningMessageForLimit:(double)arg1 movieCount:(unsigned long long)arg2;
- (id)sharedPhotoStreamController;
- (void)requestPublishServiceUpdateForServiceKey:(id)arg1 username:(id)arg2;
- (BOOL)hasRecentlyRequestedServiceUpdateForServiceKey:(id)arg1 username:(id)arg2;
- (void)resetRecentlyRequestedServiceUpdateForServiceKey:(id)arg1 username:(id)arg2;
- (id)galleryURLForServiceKey:(id)arg1 serviceUsername:(id)arg2;
- (void)cacheCredentialsValidationInfo:(id)arg1 forServiceKey:(id)arg2 username:(id)arg3;
- (id)cachedCredentialsValidationInfoForServiceKey:(id)arg1 username:(id)arg2;
- (struct CGSize)sizeOfPhotoWithUID:(id)arg1;
- (BOOL)startWebExportForMovieRef:(id)arg1 exportOptions:(id)arg2 delegate:(id)arg3;
- (id)refForPhotoRef:(id)arg1 format:(unsigned int)arg2 quality:(int)arg3 maxDimensions:(unsigned long long)arg4;
- (void)setDefaultAccountIdentifier:(id)arg1 forAccountType:(id)arg2;
- (id)defaultAccountIdentifierForAccountType:(id)arg1;
- (id)loadAccountInformationForAccountIdentifier:(id)arg1 accountType:(id)arg2;
- (BOOL)storeAccountInformation:(id)arg1;
- (BOOL)managesAccountConfigurationsForAccountType:(id)arg1;
- (void)addUpdateOperation:(id)arg1;
- (id)unpublishOperationForDB:(id)arg1 URL:(id)arg2 service:(id)arg3;
- (id)errorDisplayStringForError:(id)arg1 url:(id)arg2;
- (id)errorFromDMKitTransaction:(id)arg1;
- (id)mimeTypeForExtension:(id)arg1;
- (unsigned int)imageFormatForExtension:(id)arg1;
- (id)extensionForImageFormat:(unsigned int)arg1;
- (void)showNetDiagnostics;
- (BOOL)isNetworkDisconnected;
- (BOOL)canDoNetDiagnostics;
- (void)tickleInsertionPoint:(id)arg1;
- (id)ellipsizerWithAttributes:(id)arg1;
- (id)incrementTrailingCount:(id)arg1 delim:(id)arg2 base:(id)arg3;
- (unsigned long long)sizeAtPath:(id)arg1 physical:(BOOL)arg2;
- (id)generateUUID;
- (id)albumNamesForProtectionUsername:(id)arg1 serviceKey:(id)arg2 serviceUsername:(id)arg3;
- (void)updateProtectionUsername:(id)arg1 fromOldUsername:(id)arg2 serviceKey:(id)arg3 serviceUsername:(id)arg4;
- (id)albumsForServiceKey:(id)arg1;
- (void)removeKeychainInformationForURL:(id)arg1;
- (id)loadKeychainInformationForURL:(id)arg1;
- (void)saveKeychainInformationForURL:(id)arg1 andPassword:(id)arg2;
- (BOOL)canSkipWebExportForMovieAtPath:(id)arg1 options:(id)arg2;
- (void)_plugin:(id)arg1 retrievedAlbumContents:(id)arg2 error:(id)arg3 contextInfo:(void *)arg4;
- (void)listAlbumContentsReplyHandler:(id)arg1;
- (void)retrieveAlbumContents:(id)arg1;
- (void)listContentsOfAlbum:(id)arg1 forServiceKey:(id)arg2 username:(id)arg3 replyToMessage:(id)arg4 contextInfo:(id)arg5;
- (void)listContentsOfAlbum:(id)arg1 forServiceKey:(id)arg2 replyToMessage:(id)arg3 contextInfo:(id)arg4;
- (void)_plugin:(id)arg1 retrievedAlbumList:(id)arg2 error:(id)arg3 contextInfo:(void *)arg4;
- (void)processAlbumsReplyHandler:(id)arg1;
- (void)listAlbumsReplyHandler:(id)arg1;
- (void)retrieveAlbumList:(id)arg1;
- (void)invokeValidationError:(id)arg1 plugin:(id)arg2 selector:(SEL)arg3;
- (void)listAlbumsForServiceKey:(id)arg1 username:(id)arg2 contextInfo:(id)arg3;
- (void)listAlbumsForServiceKey:(id)arg1 contextInfo:(id)arg2;
- (id)dotMacUtils;
- (void)initializePlugin:(id)arg1;
- (id)newPluginForServiceKey:(id)arg1 username:(id)arg2;
- (id)newAnonymousPluginForServiceKey:(id)arg1;
- (id)newPluginForServiceKey:(id)arg1;
- (id)pluginForServiceKey:(id)arg1;
- (Class)pluginClassForServiceKey:(id)arg1;
- (id)allPluginClasses;
- (void)_scanDirectoryForPlugins:(id)arg1 foundBundles:(id)arg2;
- (id)_validPluginClass:(Class)arg1;
- (void)scanForPlugins;
- (id)directoriesToScan;
- (id)serviceAuthorizationDictionary;
- (void)removeObjectForUuid:(id)arg1 fromMutableDictionary:(id)arg2;
- (id)objectForUuid:(id)arg1 inDictionary:(id)arg2;
- (id)objectForUuid:(id)arg1 inSet:(id)arg2;
- (BOOL)containsUuid:(id)arg1 inSet:(id)arg2;
- (unsigned long long)indexOfUuid:(id)arg1 inArray:(id)arg2;
- (BOOL)compareUuid:(id)arg1 toUuid:(id)arg2;
- (id)normalizedUuid:(id)arg1;
- (BOOL)uidsAreCaseInsensitive;
- (id)supportedPhotoSizes;
- (id)applicationKeychainFQDN;
- (id)applicationKeychainDomain;
- (id)applicationKeychainHost;
- (id)applicationResourcePrefix;
- (id)applicationID;
- (void)initCache;
- (void)initUserAgents;
- (void)dealloc;
- (id)init;
- (void)setDefaultAuthoringClient:(id)arg1;
- (id)defaultAuthoringClient;
- (void)setDefaultUserAgent:(id)arg1;
- (id)defaultUserAgent;

@end

