//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableDictionary, NSMutableSet, NSString, NSURL;

@interface MAContentPackageManager : NSObject
{
    long long _recursivecount;
    NSMutableDictionary *_ignoreMissingPackagesDict;
    NSString *_debugLogPatchFileName;
    struct sqlite3_stmt *_lookForPathStatement;
    struct sqlite3_stmt *_lookForFileNameStatement;
    struct sqlite3_stmt *_lookupPathForFileNameStatement;
    struct sqlite3_stmt *_lookupFilesForPackageIDStatement;
    BOOL _anyFileWasMissing;
    NSString *debugLogFilePath;
    NSMutableSet *_missingPackages;
    struct sqlite3 *_dataBase;
    NSURL *_cacheBaseURL;
}

+ (id)sharedInstance;
+ (id)allocWithZone:(struct _NSZone *)arg1;
@property(retain, nonatomic) NSURL *cacheBaseURL; // @synthesize cacheBaseURL=_cacheBaseURL;
@property(nonatomic) struct sqlite3 *dataBase; // @synthesize dataBase=_dataBase;
@property(retain, nonatomic) NSMutableSet *missingPackages; // @synthesize missingPackages=_missingPackages;
@property(nonatomic) BOOL anyFileWasMissing; // @synthesize anyFileWasMissing=_anyFileWasMissing;
@property(retain, nonatomic) NSString *debugLogFilePath; // @synthesize debugLogFilePath;
- (void)debugLogNeededFile:(id)arg1;
- (void)setDebugLogPatchFileName:(id)arg1;
- (id)debugLogFolderPath;
- (id)packageIDsContainingFilesOrFoldersWithPathPrefix:(id)arg1 packageIDsOfInterest:(id)arg2;
- (id)packageIDsForFilePaths:(id)arg1 includingAlternativPackages:(BOOL)arg2;
- (id)packageIDsForFilePaths:(id)arg1;
- (id)endCollectingMissingFilesSuppressPackageFilter:(BOOL)arg1;
- (id)endCollectingMissingFiles;
- (BOOL)addMissingFilePath:(id)arg1 allPackages:(BOOL)arg2;
- (BOOL)checkIfPathIsPartOfFactoryContent:(id)arg1;
- (id)_filterIgnoredPackageIDs:(id)arg1 forDoc:(id)arg2;
- (void)removeFromIgnoredPackages:(id)arg1;
- (void)_addToIgnoredPackages:(id)arg1 forDoc:(id)arg2;
- (id)filesForPackageID:(id)arg1;
- (id)_filesForPackageID:(id)arg1;
- (id)getPathForFileName:(id)arg1;
- (id)getPathsForFileName:(id)arg1;
- (id)_findPrefix:(id)arg1 inPackages:(id)arg2;
- (id)_findFilePathInPackages:(id)arg1;
- (id)_findPathsForFileName:(id)arg1;
- (void)startCollectingMissingFiles;
- (void)setPackageData:(id)arg1;
- (BOOL)_setPackageData:(id)arg1;
- (BOOL)_setContentDataBase:(id)arg1;
- (id)creationDateOfDatabase;
- (id)_getCreationDateOfDatabase:(struct sqlite3 *)arg1;
- (BOOL)_sanityCheckDatabase:(struct sqlite3 *)arg1;
- (int)_getRowCount:(id)arg1 idColumn:(id)arg2 database:(struct sqlite3 *)arg3;
- (void)_releaseDataBaseStatements;
- (BOOL)_initDataBaseStatements;
- (void)dealloc;
- (id)init;
- (id)dbCachePath;

@end

