//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class AXElementGroup, AXElementGrouper;

@protocol AXElementGroupingTransformationPass <NSObject>
- (AXElementGroup *)transformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;
- (BOOL)shouldTransformGroup:(AXElementGroup *)arg1 forGrouper:(AXElementGrouper *)arg2;
@end

