//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@interface OAITTextBody : NSObject
{
}

+ (void)mapTextBody:(id)arg1 textBodyParent:(id)arg2 toStorage:(id)arg3 textBodyState:(id)arg4;
+ (void)mapTextBodyProperties:(id)arg1 textBodyWidth:(double)arg2 toPropertyMap:(id)arg3 textBody:(id)arg4 drawingState:(id)arg5;
+ (id)paddingFromTextBodyProperties:(id)arg1 isWordArt:(_Bool)arg2;
+ (void)mapBasicTextBodyProperties:(id)arg1 textBodyWidth:(double)arg2 toPropertyMap:(id)arg3;
+ (void)mapVerticalAlignmentFromTextBodyProperties:(id)arg1 toPropertyMap:(id)arg2;
+ (void)mapEmptyTextToShape:(id)arg1 shapeState:(id)arg2;

@end

