//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "TransitDirectionsIconCell.h"

#import "TransitDirectionsExpandableCell-Protocol.h"

@class NSColor, NSString, NVInlineButton, TransitDirectionsColoredLine, TransitDirectionsListItem;
@protocol TransitDirectionsExpandableCellDelegate, TransitDirectionsListExpandableItem;

__attribute__((visibility("hidden")))
@interface TransitDirectionsExpandStopsCell : TransitDirectionsIconCell <TransitDirectionsExpandableCell>
{
    TransitDirectionsColoredLine *_line;
    BOOL _checkedItemIsExpandable;
    TransitDirectionsListItem<TransitDirectionsListExpandableItem> *_expandableItem;
    id <TransitDirectionsExpandableCellDelegate> _expandableCellDelegate;
    NVInlineButton *_detailButton;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NVInlineButton *detailButton; // @synthesize detailButton=_detailButton;
@property(nonatomic) __weak id <TransitDirectionsExpandableCellDelegate> expandableCellDelegate; // @synthesize expandableCellDelegate=_expandableCellDelegate;
- (void)setNavigationState:(long long)arg1;
- (void)updateExpandButton;
- (void)_updateLinkColors;
@property(readonly, nonatomic) __weak TransitDirectionsListItem<TransitDirectionsListExpandableItem> *expandableItem;
@property(retain, nonatomic) NSColor *lineColor;
- (void)configureWithItem:(id)arg1;
- (void)_updateFonts;
- (void)_detailButtonTapped:(id)arg1;
- (id)_imageViewPositionConstraints;
- (id)_initialConstraints;
- (void)_createSubviews;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

