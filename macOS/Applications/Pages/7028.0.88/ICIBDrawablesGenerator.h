//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ICIDrawablesGenerator.h"

@interface ICIBDrawablesGenerator : ICIDrawablesGenerator
{
}

+ (void)addDetachedInlineDrawablesToState:(id)arg1 atPageIndex:(unsigned long long)arg2 insertContext:(id)arg3;
+ (void)addDrawablesDetachedFromParentDrawable:(id)arg1 withPageDrawable:(id)arg2 withDocument:(id)arg3 atPageIndex:(unsigned long long)arg4 insertContext:(id)arg5;
+ (void)addDrawablesDetachedFromContainerInfo:(id)arg1 withParentDrawable:(id)arg2 withPageDrawable:(id)arg3 withDocument:(id)arg4 atPageIndex:(unsigned long long)arg5 insertContext:(id)arg6;
+ (id)drawablesFromAttachmentsOfStorage:(id)arg1 parentDrawable:(id)arg2 state:(id)arg3;
+ (id)generateAndForgetDrawablesFromDetachedInlineDrawablesForStorage:(id)arg1 ibaState:(id)arg2;
+ (Class)beginTable:(id)arg1;
+ (int)endDrawables:(id)arg1;
+ (int)handleDrawable:(id)arg1 state:(id)arg2;
+ (int)beginDrawables:(id)arg1;

@end

