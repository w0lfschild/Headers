//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "NSCopying-Protocol.h"

@class GEOSearchCategory, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface BrowseCategory : NSObject <NSCopying>
{
    NSArray *_subCategories;
    GEOSearchCategory *_category;
}

- (void).cxx_destruct;
@property(retain, nonatomic) GEOSearchCategory *category; // @synthesize category=_category;
@property(readonly, nonatomic) NSArray *subCategories; // @synthesize subCategories=_subCategories;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)description;
@property(readonly, nonatomic) NSString *alternativeName;
@property(readonly, nonatomic) NSString *name;
- (void)imageWithScale:(double)arg1 isCarplay:(BOOL)arg2 resultHandler:(CDUnknownBlockType)arg3;
- (void)imageWithResultHandler:(CDUnknownBlockType)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithCategory:(id)arg1;

@end

