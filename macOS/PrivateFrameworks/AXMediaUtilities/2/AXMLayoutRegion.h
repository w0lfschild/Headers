//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AXMediaUtilities/AXMLayoutItem.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface AXMLayoutRegion : AXMLayoutItem
{
    NSMutableArray *_lines;
}

+ (id)region:(id)arg1;
- (void).cxx_destruct;
- (id)lines;
- (id)firstLine;
- (void)addLine:(id)arg1;
- (struct CGRect)normalizedFrame;
- (struct CGRect)frame;

@end

