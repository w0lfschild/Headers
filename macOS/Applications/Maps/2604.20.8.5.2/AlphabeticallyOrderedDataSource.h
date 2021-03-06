//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "OrderedDataSource-Protocol.h"

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AlphabeticallyOrderedDataSource : NSObject <OrderedDataSource>
{
    NSArray *_sectionIndexTitles;
    unsigned long long _numberOfSectionsNotEmpty;
    NSArray *_orderedObjects;
    NSArray *_sections;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *sections; // @synthesize sections=_sections;
@property(copy, nonatomic) NSArray *orderedObjects; // @synthesize orderedObjects=_orderedObjects;
@property(readonly, nonatomic) unsigned long long numberOfSectionsNotEmpty; // @synthesize numberOfSectionsNotEmpty=_numberOfSectionsNotEmpty;
@property(copy, nonatomic) NSArray *sectionIndexTitles; // @synthesize sectionIndexTitles=_sectionIndexTitles;
- (id)objectAtIndexPath:(id)arg1;
- (long long)numberOfRowsInSection:(long long)arg1;
@property(readonly, nonatomic) long long numberOfSections;
- (id)initWithAlphabeticallySortableObject:(id)arg1;
- (id)initWithObjects:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

