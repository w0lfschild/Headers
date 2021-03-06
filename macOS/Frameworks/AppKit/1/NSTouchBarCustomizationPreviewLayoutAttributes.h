//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSCollectionViewLayoutAttributes.h"

__attribute__((visibility("hidden")))
@interface NSTouchBarCustomizationPreviewLayoutAttributes : NSCollectionViewLayoutAttributes
{
    long long _itemState;
    BOOL _editable;
    BOOL _isSpace;
    BOOL _showsAppState;
}

@property BOOL showsAppState; // @synthesize showsAppState=_showsAppState;
@property(getter=isSpace) BOOL isSpace; // @synthesize isSpace=_isSpace;
@property long long itemState; // @synthesize itemState=_itemState;
@property(getter=isEditable) BOOL editable; // @synthesize editable=_editable;
- (BOOL)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

