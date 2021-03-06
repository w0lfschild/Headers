//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface IPAPhotoEffect : NSObject
{
    BOOL _template;
    BOOL _is3D;
    BOOL _isPortrait;
    BOOL _isLegacy;
    NSString *_name;
    long long _version;
    long long _number;
    NSString *_portraitGlyphPrefix;
    NSString *_portraitV1Name;
    NSString *_portraitV2Name;
}

+ (id)effectWithNumber:(long long)arg1 version:(long long)arg2;
+ (id)effectWithNumber:(long long)arg1;
+ (id)effectWithName:(id)arg1 version:(long long)arg2;
+ (id)effectWithName:(id)arg1;
+ (id)noneEffect;
+ (long long)currentVersionForEffectName:(id)arg1;
+ (long long)currentVersionForEffectNumber:(long long)arg1;
+ (id)_templateEffectWithName:(id)arg1;
+ (id)_templateEffectWithNumber:(long long)arg1;
+ (BOOL)isValidEffectNumber:(unsigned long long)arg1;
+ (id)portraitEffects;
+ (id)allEffects;
+ (id)supportedEffects;
+ (id)_createPortraitWithName:(id)arg1;
+ (id)_createEffectWithName:(id)arg1;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *portraitV2Name; // @synthesize portraitV2Name=_portraitV2Name;
@property(readonly, nonatomic) NSString *portraitV1Name; // @synthesize portraitV1Name=_portraitV1Name;
@property(readonly, nonatomic) NSString *portraitGlyphPrefix; // @synthesize portraitGlyphPrefix=_portraitGlyphPrefix;
@property(readonly, nonatomic) BOOL isLegacy; // @synthesize isLegacy=_isLegacy;
@property(readonly, nonatomic) BOOL isPortrait; // @synthesize isPortrait=_isPortrait;
@property(readonly, nonatomic) BOOL is3D; // @synthesize is3D=_is3D;
@property(readonly, nonatomic) long long number; // @synthesize number=_number;
@property(readonly, nonatomic) long long version; // @synthesize version=_version;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
- (BOOL)isEqualToEffect:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)debugDescription;
- (id)description;
- (id)_effectWithVersion:(long long)arg1;
- (long long)legacyVersion_iOS7;
- (long long)currentVersion;
- (BOOL)_isValidVersion:(long long)arg1;
@property(readonly, nonatomic) NSString *filterName;
@property(readonly, nonatomic) BOOL isIdentity;

@end

