//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSArray;

@interface NSPersistentStoreRequest : NSObject <NSCopying>
{
    NSArray *_affectedStores;
}

+ (void)initialize;
@property(retain, nonatomic) NSArray *affectedStores;
@property(readonly) unsigned long long requestType;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (BOOL)_secureOperation;
- (void)_setSecureOperation:(BOOL)arg1;

@end

