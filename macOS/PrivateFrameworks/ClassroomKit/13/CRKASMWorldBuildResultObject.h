//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface CRKASMWorldBuildResultObject : NSObject
{
    id <CRKASMRoster> _roster;
    NSArray *_locationsWithManagePermissions;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *locationsWithManagePermissions; // @synthesize locationsWithManagePermissions=_locationsWithManagePermissions;
@property(readonly, nonatomic) id <CRKASMRoster> roster; // @synthesize roster=_roster;
- (id)initWithRoster:(id)arg1 locationsWithManagePermissions:(id)arg2;
- (id)init;

@end

