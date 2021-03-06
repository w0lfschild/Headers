//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSAppleScript, NSDate, NSURL;

@interface DXUserScript : NSObject
{
    NSURL *_scriptURL;
    NSDate *_modificationDate;
    NSAppleScript *_script;
}

+ (id)scriptAtURL:(id)arg1;
+ (id)scriptWithName:(id)arg1 forApplication:(id)arg2;
- (void).cxx_destruct;
@property(retain) NSAppleScript *script; // @synthesize script=_script;
@property(retain) NSDate *modificationDate; // @synthesize modificationDate=_modificationDate;
@property(retain) NSURL *scriptURL; // @synthesize scriptURL=_scriptURL;
- (void)showErrorMessage:(id)arg1 withError:(id)arg2;
- (id)descriptorForObject:(id)arg1;
- (id)containerEventForHandler:(id)arg1 withArguments:(id)arg2;
- (void)runHandler:(id)arg1 withArguments:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)runHandler:(id)arg1 withArguments:(id)arg2;
- (id)initWithURL:(id)arg1;

@end

