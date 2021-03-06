//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <MAToolKit/MANinePartImageView.h>

@class MAPopUpButton, NSObject, ScpbContentView, ScpbGroupsView, ScpbTextField;
@protocol ScpbDelegateProtocol;

@interface ScpbHeaderBtn : MANinePartImageView
{
    NSObject<ScpbDelegateProtocol> *m_scpbDelegate3;
    ScpbTextField *m_titleField;
    MAPopUpButton *m_popupButton;
    struct ScpbPresetData *m_setData2;
    ScpbContentView *m_contentView;
    ScpbGroupsView *m_groupsView;
}

- (void)resizeSubviewsWithOldSize:(struct CGSize)arg1;
- (void)undefineScpbDelegate2;
- (void)setSetData:(struct ScpbPresetData *)arg1 contentView:(id)arg2 groupsView:(id)arg3;
- (struct ScpbPresetData *)setData2;
- (void)setPbHeaderTitle1_presetIndex:(int)arg1;
- (void)scpbMenuAction:(id)arg1;
- (void)startSetRenaming;
- (void)stopSetRenaming:(id)arg1;
- (void)menuWillPopUp:(id)arg1;
- (void)setFrame:(struct CGRect)arg1;
- (void)updatePopupMenu;
- (void)updatePopupMenu_priv;
- (int)addPresets_flagsMask:(int)arg1;
- (void)addSeparator;
- (id)addItem_name:(id)arg1 state:(long long)arg2 isEnabled:(BOOL)arg3 tag:(int)arg4;
- (void)setupPopupButton:(BOOL)arg1;
- (void)dealloc;

@end

