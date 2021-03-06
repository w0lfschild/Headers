//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSCopying-Protocol.h"
#import "NSObject-Protocol.h"

@class NSArray, NSDictionary, NSString;
@protocol IPXPreset;

@protocol IPXPreset <NSObject, NSCopying>
- (BOOL)isNotFolder;
- (void)restoreFactorySettings;
- (void)setFactorySettings:(NSDictionary *)arg1;
- (NSDictionary *)factorySettings;
- (void)setUnlocalizedName:(NSString *)arg1;
- (NSString *)unlocalizedName;
- (void)setName:(NSString *)arg1;
- (NSString *)name;
- (NSDictionary *)archiveDictionary;
- (id)initWithArchiveDictionary:(NSDictionary *)arg1;

@optional
- (void)replaceObjectInChildPresetsAtIndex:(unsigned long long)arg1 withObject:(id <IPXPreset>)arg2;
- (void)removeObjectFromChildPresetsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id <IPXPreset>)arg1 inChildPresetsAtIndex:(unsigned long long)arg2;
- (void)setChildPresets:(NSArray *)arg1;
- (NSArray *)childPresets;
@end

