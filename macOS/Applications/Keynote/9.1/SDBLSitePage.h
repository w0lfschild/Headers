//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "SDBLSiteNode.h"

@interface SDBLSitePage : SDBLSiteNode
{
}

+ (unsigned long long)childDescriptionCount;
+ (const CDStruct_183601bc **)childDescriptionArray;
+ (struct __CFSet **)childDescriptionSetPointer;
+ (struct __CFSet *)childDescriptionSet;
+ (void)initialize;
- (BOOL)isLeaf;
- (id)hyperlinkStyleForState:(int)arg1;
- (BOOL)isLinkFilesOverridden;
- (id)overrideLinkFiles;
- (id)linkFiles;
- (BOOL)isTaggedDrawablesOverridden;
- (id)overrideTaggedDrawables;
- (id)taggedDrawables;
- (BOOL)isDrawablesOverridden;
- (id)overrideDrawables;
- (id)drawables;
- (id)styleSheet;
- (id)pageInfo;

@end

