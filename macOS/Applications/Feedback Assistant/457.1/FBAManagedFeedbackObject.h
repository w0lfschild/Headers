//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber;

@interface FBAManagedFeedbackObject : NSManagedObject
{
}

+ (id)entityName;
+ (id)importFromJSONArray:(id)arg1 intoContext:(id)arg2;
+ (id)importFromJSONObject:(id)arg1 intoContext:(id)arg2;
- (BOOL)isEqualToFBAObject:(id)arg1;
@property(retain) NSNumber *ID;
- (void)setPropertiesFromJSONObject:(id)arg1;
- (id)entityName;

// Remaining properties
@property(retain) NSNumber *remoteID; // @dynamic remoteID;

@end

