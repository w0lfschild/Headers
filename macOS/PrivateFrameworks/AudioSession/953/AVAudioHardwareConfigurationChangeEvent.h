//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray;

@interface AVAudioHardwareConfigurationChangeEvent : NSObject
{
    NSArray *createdObjects;
    NSArray *destroyedObjects;
    NSArray *changedObjects;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *changedObjects; // @synthesize changedObjects;
@property(retain, nonatomic) NSArray *destroyedObjects; // @synthesize destroyedObjects;
@property(retain, nonatomic) NSArray *createdObjects; // @synthesize createdObjects;
- (id)description;
- (id)init;

@end

