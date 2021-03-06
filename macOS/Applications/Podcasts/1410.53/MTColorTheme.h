//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor;

@interface MTColorTheme : NSObject
{
    BOOL _isBackgroundLight;
    UIColor *_backgroundColor;
    UIColor *_primaryTextColor;
    UIColor *_secondaryTextColor;
}

@property(nonatomic) BOOL isBackgroundLight; // @synthesize isBackgroundLight=_isBackgroundLight;
@property(retain, nonatomic) UIColor *secondaryTextColor; // @synthesize secondaryTextColor=_secondaryTextColor;
@property(retain, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (BOOL)isBackgroundDark;
- (BOOL)isEqual:(id)arg1;

@end

