//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/NSCopying-Protocol.h>

@class NSString, UIColor;

@interface LPImageProperties : NSObject <NSCopying>
{
    NSString *_accessibilityText;
    long long _type;
    UIColor *_overlaidTextColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *overlaidTextColor; // @synthesize overlaidTextColor=_overlaidTextColor;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(copy, nonatomic) NSString *accessibilityText; // @synthesize accessibilityText=_accessibilityText;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

