//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@interface iTermSubscriber : NSObject <NSCopying>
{
    id _object;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(readonly, nonatomic) __weak id object; // @synthesize object=_object;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)description;
- (id)initWithWeakReferenceToObject:(id)arg1 block:(CDUnknownBlockType)arg2;

@end

