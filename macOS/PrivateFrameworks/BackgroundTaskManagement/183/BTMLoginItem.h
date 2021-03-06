//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSSecureCoding.h"

@class NSData, NSString, NSUUID;

@interface BTMLoginItem : NSObject <NSSecureCoding>
{
    BOOL _hidden;
    NSUUID *_identifier;
    NSData *_bookmark;
    NSData *_installerBookmark;
    unsigned long long _type;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property BOOL hidden; // @synthesize hidden=_hidden;
@property unsigned long long type; // @synthesize type=_type;
@property(retain) NSData *installerBookmark; // @synthesize installerBookmark=_installerBookmark;
@property(readonly) NSData *bookmark; // @synthesize bookmark=_bookmark;
@property(readonly) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLoginItem:(id)arg1;
@property(readonly) NSString *name;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 bookmark:(id)arg3 hidden:(BOOL)arg4;
- (id)initWithType:(unsigned long long)arg1 identifier:(id)arg2 bookmark:(id)arg3;
- (id)initWithURL:(id)arg1 hidden:(BOOL)arg2;
- (id)initWithURL:(id)arg1;
- (BOOL)isIdenticalToLoginItem:(id)arg1;
- (void)getURLByResolvingBookmarkCompletion:(CDUnknownBlockType)arg1;
- (id)initWithBookmark:(id)arg1 hidden:(BOOL)arg2;

@end

