//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class NSString;

@interface CSProfile : NSObject <NSCopying>
{
    struct {
        unsigned int size;
        int cmmId;
        unsigned int version;
        int deviceClass;
        int colorSpace;
        int pcs;
        struct {
            unsigned short year;
            unsigned short month;
            unsigned short day;
            unsigned short hours;
            unsigned short minutes;
            unsigned short seconds;
        } date;
        int magic;
        int platform;
        unsigned int flags;
        int manufacturer;
        unsigned int model;
        unsigned int attributes[2];
        unsigned int renderingIntent;
        CDStruct_c62ef2c1 illuminant;
        int creator;
        char reserved[44];
    } _header;
    struct __CFURL *_url;
    NSString *_name;
    struct ColorSyncProfile *_ref;
    CDStruct_a7139fa6 _md5;
    struct __CFArray *_signatures;
}

+ (id)profileWithSpace:(int)arg1;
+ (id)profileWithInfo:(struct __CFDictionary *)arg1;
+ (id)profileWithURL:(id)arg1;
+ (id)profileWithRef:(struct ColorSyncProfile *)arg1;
- (BOOL)saveAs:(id)arg1;
- (BOOL)saveTo:(id)arg1;
- (BOOL)save;
- (void)close;
- (BOOL)isDirty;
- (void)open;
- (struct ColorSyncProfile *)profRef;
- (id)profCreation;
- (BOOL)isEqual:(id)arg1;
- (id)profPathStrPretty;
- (id)profPathStr;
- (struct __CFURL *)profURL;
- (BOOL)getElementInfoAtIndex:(long long)arg1 tagSig:(int *)arg2 tagType:(int *)arg3 dataSize:(unsigned long long *)arg4;
- (CDStruct_a7139fa6)profMD5;
- (id)profConnSpaceStr;
- (int)profConnSpace;
- (id)profClassStr;
- (int)profClass;
- (id)profSpaceStr;
- (int)profSpace;
- (id)profVersStr;
- (unsigned int)profVers;
- (unsigned int)profSize;
- (void)setDescription:(id)arg1;
- (id)description;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithSpace:(int)arg1;
- (id)initWithInfo:(struct __CFDictionary *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithRef:(struct ColorSyncProfile *)arg1;
- (id)initializeWithRef:(struct ColorSyncProfile *)arg1;

@end

