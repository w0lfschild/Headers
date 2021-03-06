//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "CLgPopupMenuHandler.h"
#import "NSMenuDelegate.h"

@class NSString, NSView<LgSectionView>;

@interface ContextMenuCreator : NSObject <CLgPopupMenuHandler, NSMenuDelegate>
{
    const struct TContextMenuItem *m_items;
    CFlagSet_880f38d3 m_options;
    NSView<LgSectionView> *m_view;
    int m_createMenuType;
    BOOL m_fLastItemWasSeparator;
    long long m_customName;
    NSString *m_imageAssetName;
    NSString *m_recentMenuName;
}

- (id).cxx_construct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (void)menu:(id)arg1 willHighlightItem:(id)arg2;
- (void)popupMenuItemCall:(id)arg1;
- (void)_popupMenuItemCall:(id)arg1;
- (int)doCreatePopupMenu:(id)arg1;
- (void)addList:(const struct TContextMenuItem *)arg1 to:(id)arg2;
- (void)addCMenu:(struct CMenu *)arg1 to:(id)arg2;
- (void)addRecentItems:(const struct TContextMenuItem *)arg1 to:(id)arg2;
- (void)addToRecentItems:(short)arg1 customName:(long long)arg2;
- (int)maxRecent;
- (void)writeRecentItems:(id)arg1;
- (id)recentItems;
- (id)recentItemKey;
- (void)addSubmenu:(const struct TContextMenuItem *)arg1 to:(id)arg2;
- (BOOL)addBefehl:(const struct BEFEHL *)arg1 to:(id)arg2;
- (BOOL)addEntry:(struct ENTRY *)arg1 to:(id)arg2;
- (void)addDisabledItem:(id)arg1 to:(id)arg2;
- (int)addToolsTo:(id)arg1 reverseOrder:(BOOL)arg2;
- (id)image;
- (id)customName:(id)arg1;
- (void)present:(const struct TContextMenuItem *)arg1 options:(CFlagSet_880f38d3)arg2 withEvent:(id)arg3 inView:(id)arg4;
- (void)appendItems:(const struct TContextMenuItem *)arg1 options:(CFlagSet_880f38d3)arg2 toMenu:(id)arg3 inView:(id)arg4 menuType:(int)arg5;
- (void)setTool:(BOOL)arg1 forClick:(int)arg2;
- (int)createMenuType;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

