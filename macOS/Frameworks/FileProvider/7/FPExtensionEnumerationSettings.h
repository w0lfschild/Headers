//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPEnumerationSettings.h>

@class FPItemID;

@interface FPExtensionEnumerationSettings : FPEnumerationSettings
{
    BOOL _presenterEnumeration;
    BOOL _wantsDirectExtensionEnumeration;
    BOOL _wantsTrashEnumeration;
    FPItemID *_enumeratedItemID;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) BOOL wantsTrashEnumeration; // @synthesize wantsTrashEnumeration=_wantsTrashEnumeration;
@property(nonatomic) BOOL wantsDirectExtensionEnumeration; // @synthesize wantsDirectExtensionEnumeration=_wantsDirectExtensionEnumeration;
@property(nonatomic, getter=isPresenterEnumeration) BOOL presenterEnumeration; // @synthesize presenterEnumeration=_presenterEnumeration;
@property(copy, nonatomic) FPItemID *enumeratedItemID; // @synthesize enumeratedItemID=_enumeratedItemID;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

