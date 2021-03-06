//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSSecureCoding-Protocol.h"

@class NSMutableArray, NSString;

@interface TopoNode : NSObject <NSSecureCoding>
{
    id _context;
    id _owner;
    unsigned int _lastArchiveFileHash;
    TopoNode *_parent;
    NSMutableArray *_children;
    NSString *_interface;
    unsigned int topoSequenceNumber;
}

+ (BOOL)supportsSecureCoding;
@property(nonatomic) unsigned int topoSequenceNumber; // @synthesize topoSequenceNumber;
@property(copy, nonatomic) NSString *interface; // @synthesize interface=_interface;
@property(readonly, nonatomic) NSMutableArray *children; // @synthesize children=_children;
@property(retain, nonatomic) TopoNode *parent; // @synthesize parent=_parent;
@property(nonatomic) id context; // @synthesize context=_context;
@property(nonatomic) unsigned int lastArchiveFileHash; // @synthesize lastArchiveFileHash=_lastArchiveFileHash;
@property(nonatomic) id owner; // @synthesize owner=_owner;
- (id)debugDescription;
- (id)describeOne:(id)arg1 node:(id)arg2 indent:(unsigned long long)arg3;
- (long long)localizedCompareDeviceNode:(id)arg1;
@property(readonly, nonatomic) NSString *comparisonKey;
@property(readonly, nonatomic) NSString *deviceIdentifier;
- (void)removeChild:(id)arg1;
- (void)addChild:(id)arg1;
- (id)childAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfChildren;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)initTopoNodeCommon;

@end

