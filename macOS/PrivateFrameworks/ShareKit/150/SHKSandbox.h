//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface SHKSandbox : NSObject
{
}

+ (void)releaseExtensionTokens:(id)arg1;
+ (id)consumeExtensions:(id)arg1;
+ (id)extensionsForSharingItems:(id)arg1;
+ (id)safeUnarchiveObjectWithData:(id)arg1;
+ (id)safeClassNamesForArchiving;
+ (id)filteredItemsFromItems:(id)arg1 processWithPID:(int)arg2;
+ (id)filteredItemsFromSingleItem:(id)arg1 processWithPID:(int)arg2;
+ (id)filteredItemsFromAttributedString:(id)arg1 processWithPID:(int)arg2 textView:(id)arg3;
+ (id)filteredItemsFromAttributedString:(id)arg1 processWithPID:(int)arg2;
+ (BOOL)_canReadFileAtURL:(id)arg1 pid:(int)arg2;
+ (BOOL)canAccessURL:(id)arg1 processWithPID:(int)arg2;

@end

