//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface ShareItem : NSObject
{
}

+ (id)shareItemForObject:(id)arg1;
+ (id)shareItemWithRoute:(id)arg1 startPOIShape:(id)arg2 endPOIShape:(id)arg3 includeRoutingApps:(BOOL)arg4;
+ (id)shareItemForCurrentLocationIncludingPrintActivity:(BOOL)arg1 withBackingMapItem:(id)arg2;
+ (id)shareItemWithSearchResult:(id)arg1 contact:(id)arg2 includePrintActivity:(BOOL)arg3;

@end

