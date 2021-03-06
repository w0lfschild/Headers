//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSUUID, TSPComponent, TSPObject;
@protocol TSPLazyReferenceDelegate;

@interface TSPLazyReference : NSObject <NSCopying>
{
    TSPObject *_strongObject;
    TSPObject *_weakObject;
    struct {
        unsigned int ownershipMode:2;
        unsigned int isExternal:1;
        unsigned int allowUnknownObject:1;
    } _flags;
    id <TSPLazyReferenceDelegate> _delegate;
    long long _identifier;
    TSPComponent *_component;
    Class _objectClass;
}

+ (id)weakReferenceForObject:(id)arg1 retainedUntilArchived:(BOOL)arg2;
+ (id)weakReferenceForObject:(id)arg1;
+ (id)referenceForObject:(id)arg1;
@property(nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
@property(nonatomic) __weak TSPComponent *component; // @synthesize component=_component;
@property(readonly, nonatomic) long long identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <TSPLazyReferenceDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (id)additionalDescription;
- (id)description;
- (void)resetToIdentifier:(long long)arg1;
- (void)resetIdentifierFromCopy:(BOOL)arg1;
- (BOOL)discardStrongObjectIfPossible;
@property(nonatomic) BOOL isExternal;
@property(readonly, nonatomic) long long ownershipMode;
@property(retain, nonatomic) TSPObject *strongObject;
@property(readonly, nonatomic) TSPObject *weakObject;
@property(readonly, nonatomic) NSUUID *objectUUID;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)addLoadObserver:(id)arg1 action:(SEL)arg2;
- (BOOL)referencesObject:(id)arg1;
- (BOOL)isEqualToLazyReference:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) id objectIfLoaded;
@property(readonly, nonatomic) id object;
- (id)initWithObject:(id)arg1 ownershipMode:(long long)arg2;
- (id)initWeakReferenceWithObject:(id)arg1 retainedUntilArchived:(BOOL)arg2;
- (id)initWeakReferenceWithObject:(id)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithDelegate:(id)arg1 identifier:(long long)arg2 ownershipMode:(long long)arg3 allowUnknownObject:(BOOL)arg4;
- (id)init;

@end

