//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSManagedObjectModel;

__attribute__((visibility("hidden")))
@interface NSConstraintValidator : NSObject
{
    NSManagedObjectModel *_model;
    id *_cachesByEntity;
}

- (void)reset;
- (id)validateForSave;
- (id)validateCaches;
- (void)registerObjects:(id)arg1;
- (void)registerObject:(id)arg1;
- (void)dealloc;
- (void)_addConstraintRoot:(id)arg1 forEntity:(id)arg2;
- (id)initWithManagedObjectModel:(id)arg1;

@end

