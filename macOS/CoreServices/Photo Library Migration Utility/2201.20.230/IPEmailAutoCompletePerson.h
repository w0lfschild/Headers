//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSObject.h>

@class ABRecord, NSString;

@interface IPEmailAutoCompletePerson : NSObject
{
    ABRecord *mPerson;
    NSString *mEmail;
    NSString *mName;
}

@property(retain, nonatomic) NSString *name; // @synthesize name=mName;
@property(retain, nonatomic) NSString *email; // @synthesize email=mEmail;
@property(retain, nonatomic) ABRecord *person; // @synthesize person=mPerson;
- (void)dealloc;

@end

