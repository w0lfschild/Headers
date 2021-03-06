//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <ProKit/NSCoding-Protocol.h>
#import <ProKit/NSCopying-Protocol.h>
#import <ProKit/ProThemeImageSource-Protocol.h>

@class NSProThemeFacet;

@interface ProStructuredThemeElement : NSObject <ProThemeImageSource, NSCoding, NSCopying>
{
    unsigned short oldRenditionKeySpaceHolder[12];
    unsigned long long _themeElementStoreIndex;
    long long _validThemeLookIndex;
    long long _renditionType;
    struct CGSize _thumbnailSize;
    struct CGSize _topLeftCapSize;
    struct _PSTEFlags _psteFlags;
    NSProThemeFacet *_facet;
    void *reserved2;
    void *reserved1;
}

+ (id)elementsFromRenditionKeys:(id)arg1 inThemeStoreWithIndex:(unsigned long long)arg2;
+ (void)initialize;
- (BOOL)useHighlightEffectForState:(long long)arg1;
- (BOOL)useDisabledEffectForState:(long long)arg1;
- (BOOL)isOpaqueForState:(long long)arg1;
- (BOOL)isBorderedForState:(long long)arg1;
- (BOOL)hasValueSlices;
- (struct CGSize)imageSize;
- (id)imageForState:(long long)arg1 value:(long long)arg2 variant:(long long)arg3;
- (id)imageForState:(long long)arg1 withValue:(long long)arg2;
- (id)imageForState:(long long)arg1;
- (BOOL)isValidButtonImageSource;
- (BOOL)drawInFrame:(struct CGRect)arg1 state:(long long)arg2 value:(long long)arg3 variant:(long long)arg4 alpha:(double)arg5 isFocused:(BOOL)arg6;
- (void)updateRenditionKey:(id)arg1 getFocus:(char *)arg2 userInfo:(id)arg3;
- (void)drawInFrame:(struct CGRect)arg1 alpha:(double)arg2 isFocused:(BOOL)arg3;
- (id)displayName;
- (struct CGSize)topLeftCapSize;
- (struct CGSize)thumbnailSize;
- (long long)renditionType;
- (id)thumbnail;
- (id)renditionKey;
- (unsigned long long)themeIndex;
- (unsigned long long)themeStoreIndex;
- (void)instantiateWithObjectInstantiator:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithRenditionKey:(id)arg1 storeIndex:(unsigned long long)arg2;
- (id)init;
- (void)setControlSize:(long long)arg1;
- (long long)controlSize;
- (id)_themeFacet;
- (BOOL)isButtonGlyph;
- (struct CGSize)thumbnailSizeForRendition:(id)arg1;
- (id)rendition;
- (long long)validThemeLookIndex;

@end

