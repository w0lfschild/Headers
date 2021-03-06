//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSArray, NSManagedObject<PLValidatedManagedObject>;

@interface PLManagedObjectValidationResult : NSObject
{
    BOOL _status;
    NSManagedObject<PLValidatedManagedObject> *_validatedObject;
    NSArray *_errorMessages;
    NSArray *_infoMessages;
}

@property(retain, nonatomic) NSArray *infoMessages; // @synthesize infoMessages=_infoMessages;
@property(retain, nonatomic) NSArray *errorMessages; // @synthesize errorMessages=_errorMessages;
@property(retain, nonatomic) NSManagedObject<PLValidatedManagedObject> *validatedObject; // @synthesize validatedObject=_validatedObject;
@property(nonatomic) BOOL status; // @synthesize status=_status;
- (void).cxx_destruct;

@end

