//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface MSACWrapperExceptionManager : NSObject
{
}

+ (id)loadWrapperExceptionWithBaseFilename:(id)arg1;
+ (void)deleteWrapperExceptionWithBaseFilename:(id)arg1;
+ (void)saveWrapperException:(id)arg1 withBaseFilename:(id)arg2;
+ (void)correlateLastSavedWrapperExceptionToReport:(id)arg1;
+ (void)deleteAllWrapperExceptions;
+ (void)deleteWrapperExceptionWithUUIDString:(id)arg1;
+ (void)saveWrapperException:(id)arg1;
+ (id)loadWrapperExceptionWithUUIDString:(id)arg1;
+ (void)load;

@end

