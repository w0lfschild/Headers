//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface WXSection : NSObject
{
}

+ (void)writePrinterSettings:(id)arg1;
+ (void)writeHeaderFootersWithState:(id)arg1;
+ (void)writeSectionProperty:(id)arg1 state:(id)arg2;
+ (void)write:(id)arg1 state:(id)arg2;
+ (float)scaleFromPrinterSettings:(id)arg1;
+ (void)readFrom:(struct _xmlNode *)arg1 to:(id)arg2 state:(id)arg3;
+ (void)initialize;
+ (void)writeSectionHeaderFooter:(id)arg1 contentType:(id)arg2 type:(id)arg3 state:(id)arg4;
+ (void)writeSectionProperty:(id)arg1 state:(id)arg2 isSectPrChange:(BOOL)arg3;
+ (void)writeSectionPrChangeToFile:(id)arg1 forSection:(id)arg2 state:(id)arg3;
+ (void)writeSectionPRContentsToFile:(id)arg1 forSection:(id)arg2 state:(id)arg3;
+ (void)writeHeaderFooterReferencesToFile:(id)arg1 forSection:(id)arg2 state:(id)arg3;
+ (void)writeSectionPRAttributesToFile:(id)arg1 forSection:(id)arg2 state:(id)arg3;
+ (void)mapProperties:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapPrinterSettings:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapFooter:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;
+ (void)mapHeader:(struct _xmlNode *)arg1 toSection:(id)arg2 state:(id)arg3;

@end

