//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface CHXErrorBar : NSObject
{
}

+ (void)writeErrorBar:(id)arg1 isDirectional:(_Bool)arg2 state:(id)arg3;
+ (id)chdErrorBarFromXmlErrorBarElement:(struct _xmlNode *)arg1 state:(id)arg2;
+ (id)chxErrorBarValueTypeFromEnum:(int)arg1;
+ (id)chxErrorBarTypeFromEnum:(int)arg1;
+ (int)chdErrorBarDirectionFromXmlElement:(struct _xmlNode *)arg1;
+ (int)chdErrorBarValueTypeFromXmlElement:(struct _xmlNode *)arg1;
+ (int)chdErrorBarTypeFromXmlElement:(struct _xmlNode *)arg1;

@end

