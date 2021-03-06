//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class ML3MusicLibrary;

@interface ML3DatabaseValidation : NSObject
{
    BOOL _truncateBeforeValidating;
    ML3MusicLibrary *_library;
    id <ML3DatabaseValidationDelegate> _delegate;
    CDUnknownBlockType _completionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property(nonatomic) __weak id <ML3DatabaseValidationDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) ML3MusicLibrary *library; // @synthesize library=_library;
@property(nonatomic) BOOL truncateBeforeValidating; // @synthesize truncateBeforeValidating=_truncateBeforeValidating;
- (BOOL)_internalUserAgreesToRebuildUnmigratableDatabase;
- (BOOL)_performDatabasePreprocessingWithLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)_performSchemaUpgradeWithLibrary:(id)arg1 error:(id *)arg2;
- (BOOL)_validateLibraryDatabaseIfNecessary:(id)arg1 withError:(id *)arg2;
- (BOOL)_truncateDatabaseFileForLibrary:(id)arg1 withError:(id *)arg2;
- (void)runValidation;
- (id)initWithLibrary:(id)arg1 delegate:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

