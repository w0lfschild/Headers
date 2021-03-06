//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRKASMCourseCreateProperties, CRKASMCourseUpdateProperties, DMFControlGroupIdentifier, NSArray, NSSet, NSString;

@protocol CRKASMRosterProviding <NSObject>
@property(readonly, copy, nonatomic) NSArray *locationsWithManagePermissions;
@property(readonly, nonatomic) id <CRKASMUserDirectory> userDirectory;
@property(readonly, nonatomic, getter=isPopulated) BOOL populated;
@property(readonly, nonatomic) id <CRKASMRoster> roster;
- (void)updateCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 properties:(CRKASMCourseUpdateProperties *)arg2 completion:(void (^)(NSError *))arg3;
- (void)removeCourseWithIdentifier:(DMFControlGroupIdentifier *)arg1 completion:(void (^)(NSError *))arg2;
- (void)createCourseWithProperties:(CRKASMCourseCreateProperties *)arg1 completion:(void (^)(NSError *))arg2;
- (BOOL)ingestCertificates:(NSSet *)arg1 forTrustedUserIdentifier:(NSString *)arg2 error:(id *)arg3;
- (void)refresh;
@end

