//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

@class NSArray, NSImage, NSString, WebBookmarkLeaf;

@protocol BookmarkSource
- (NSString *)imageURLStringForContentItem:(id)arg1;
- (NSImage *)imageForContentItem:(id)arg1;
- (NSString *)titleStringForContentItem:(id)arg1;
- (NSString *)addressStringForContentItem:(id)arg1;
- (NSImage *)bookmarkSourceImage;
- (NSArray *)bookmarksFromContentItems:(NSArray *)arg1;
- (void)openDescendantsOfContentItemInNewTabs:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)replaceTabsWithDescendantsOfContentItem:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToContentItemInNewTab:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (void)goToContentItemInNewWindow:(id)arg1;
- (void)goToContentItem:(id)arg1 tabPlacementHint:(const struct TabPlacementHint *)arg2;
- (BOOL)canGoToContentItem:(id)arg1;
- (WebBookmarkLeaf *)bookmarkFromContentItem:(id)arg1;
- (NSArray *)contentItemsToExpandOnReload;
- (NSArray *)contentItemsToInitiallyExpand;
- (void)didExpandContentItem:(id)arg1;
- (void)didCollapseContentItem:(id)arg1;
- (id)parentOfContentItem:(id)arg1;
- (unsigned int)numberOfChildrenOfContentItem:(id)arg1;
- (id)child:(unsigned int)arg1 ofContentItem:(id)arg2;
- (BOOL)contentItemCanHaveChildren:(id)arg1;
- (BOOL)contentItemCanBeSearchResult:(id)arg1;
- (BOOL)deleteContentItems:(NSArray *)arg1;
- (BOOL)canDeleteContents;
- (BOOL)canCopyContents;
- (void)refreshContents;
@end

