//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Cocoa/NSScriptCommand.h>

@class NSScriptObjectSpecifier;

@interface SelectVerb : NSScriptCommand
{
    NSScriptObjectSpecifier *_keySpecifier;
}

- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)performDefaultImplementation;
- (id)keySpecifier;
- (id)directParameter;
- (void)dealloc;
- (void)setReceiversSpecifier:(id)arg1;

@end

