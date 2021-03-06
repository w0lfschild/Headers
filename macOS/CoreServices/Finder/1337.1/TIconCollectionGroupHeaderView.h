//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TUpdateLayerView.h"

#import "NSCollectionViewReusable-Protocol.h"
#import "NSCollectionViewSectionHeaderView-Protocol.h"
#import "NSCollectionViewSectionHeaderViewPrivate-Protocol.h"

@class NSButton, NSImage, NSLayoutConstraint, NSStackView, NSString, TButton, TImageView, TTextField;

@interface TIconCollectionGroupHeaderView : TUpdateLayerView <NSCollectionViewReusable, NSCollectionViewSectionHeaderView, NSCollectionViewSectionHeaderViewPrivate>
{
    NSStackView *_stackView;
    TImageView *_tagImageView;
    TTextField *_titleField;
    TButton *_collapseButton;
    TUpdateLayerView *_topHorizontalLineView;
    struct TNSRef<NSView, void> _blurBackgroundView;
    unsigned long long _nodeCount;
    _Bool _isCollapsed;
    _Bool _isCollapseButtonHiddenManually;
    BOOL _isFloating;
    NSLayoutConstraint *_stackViewLeadingConstraint;
    NSLayoutConstraint *_stackViewTrailingConstraint;
}

+ (id)buttonTitleColor;
+ (id)buttonTitleFont;
+ (id)titleColor;
+ (id)titleFont;
+ (id)nibName;
- (id).cxx_construct;
- (void).cxx_destruct;
@property(nonatomic, getter=isCollapseButtonHiddenManually) _Bool collapseButtonHiddenManually; // @synthesize collapseButtonHiddenManually=_isCollapseButtonHiddenManually;
@property(nonatomic, getter=isCollapsed) _Bool collapsed; // @synthesize collapsed=_isCollapsed;
@property(nonatomic) unsigned long long nodeCount; // @synthesize nodeCount=_nodeCount;
@property __weak NSButton *sectionCollapseButton;
@property(readonly) NSString *reuseIdentifier;
- (void)updateLayer;
- (void)layout;
@property(getter=isFloating) BOOL floating; // @synthesize floating=_isFloating;
- (void)setCollapseButtonPressedFunc:(const function_fa9a3333 *)arg1;
@property(nonatomic, getter=isCollapseButtonHidden) _Bool collapseButtonHidden; // @dynamic collapseButtonHidden;
@property(copy, nonatomic) NSString *titleStr; // @dynamic titleStr;
@property(retain, nonatomic) NSImage *tagImage; // @dynamic tagImage;
- (void)awakeFromNib;
- (void)initCommon;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *identifier;
@property(readonly) Class superclass;

@end

