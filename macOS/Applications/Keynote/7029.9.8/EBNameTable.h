//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface EBNameTable : NSObject
{
}

+ (struct XlNameTable *)createXlNameTableFromNamesCollection:(id)arg1 state:(id)arg2;
+ (void)writeNamesCollection:(id)arg1 state:(id)arg2;
+ (void)readFromState:(id)arg1;
+ (struct XlName *)xlNameFromEDName:(id)arg1 state:(id)arg2;
+ (id)edNameFromXlName:(struct XlName *)arg1 name:(struct OcText)arg2 state:(id)arg3;

@end

