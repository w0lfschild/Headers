//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MRSScriptingObject.h"

@class MRSFileKindManager;

@interface MRSUTIScriptingObject : MRSScriptingObject
{
    MRSFileKindManager *_kindManager;
}

+ (id)_coerceUTI:(id)arg1 toString:(Class)arg2;
+ (void)activateScripting;
- (void).cxx_destruct;
- (id)scriptingActionTestConformance:(id)arg1;
- (id)scriptingValueForUTIConformingSystemDefinedType;
- (id)scriptingValueForUTIIsSystemDefined;
- (id)scriptingValueForUTILocalizedDescription;
- (id)scriptingValueForUTIName;
- (id)objectSpecifier;
- (BOOL)scriptingContains:(id)arg1;
- (BOOL)scriptingIsEqualTo:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithUTI:(id)arg1 forProductScriptingObject:(id)arg2 kindManager:(id)arg3;

@end

