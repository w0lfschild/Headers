//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MTResultsController.h"

#import "MTResultsChangeGeneratorDelegate-Protocol.h"

@class MTResultsChangeGenerator, NSArray, NSString;

@interface MTListResultsController : MTResultsController <MTResultsChangeGeneratorDelegate>
{
    NSArray *_objects;
    MTResultsChangeGenerator *_changeGenerator;
}

@property(retain, nonatomic) MTResultsChangeGenerator *changeGenerator; // @synthesize changeGenerator=_changeGenerator;
@property(retain, nonatomic) NSArray *objects; // @synthesize objects=_objects;
- (void).cxx_destruct;
- (void)generator:(id)arg1 didChangeObject:(id)arg2 atIndexPath:(id)arg3 forChangeType:(unsigned long long)arg4 newIndexPath:(id)arg5;
- (id)allObjects;
- (unsigned long long)numberOfObjectsInSection:(unsigned long long)arg1;
- (id)indexPathForObject:(id)arg1;
- (id)objectAtIndexPath:(id)arg1;
- (unsigned long long)startingIndexForDisplay;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

