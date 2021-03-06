//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "SectionHeaderOutlineCellModel-Protocol.h"

@class NSArray, NSString, UICollectionViewCellRegistration;

__attribute__((visibility("hidden")))
@interface SectionHeaderBasicOutlineCellModel : NSObject <SectionHeaderOutlineCellModel>
{
    NSArray *_accessoryModels;
    NSString *_title;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property(readonly, nonatomic) NSArray *accessoryModels; // @synthesize accessoryModels=_accessoryModels;
- (BOOL)needsReloadFromPreviousViewModel:(id)arg1;
@property(readonly, nonatomic) UICollectionViewCellRegistration *cellRegistration;
- (BOOL)isEqual:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)initWithTitle:(id)arg1;
- (void)_addAccessoryModels:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) Class superclass;

@end

