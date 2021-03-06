//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class FLUIndexPath, NSColor;

@interface FLUTableCellView : NSTableCellView
{
    BOOL _selected;
    BOOL _highlighted;
    NSColor *_backgroundColor;
    FLUIndexPath *_indexPath;
}

+ (double)viewHeight;
@property(retain, nonatomic) FLUIndexPath *indexPath; // @synthesize indexPath=_indexPath;
@property(nonatomic, getter=isHighlighted) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property(nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property(retain, nonatomic) NSColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (void).cxx_destruct;
- (void)drawRect:(struct CGRect)arg1;
- (id)menuForEvent:(id)arg1;
- (void)viewDidEndLiveResize;
- (BOOL)wantsUpdateLayer;
- (void)setHighlighted:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setSelected:(BOOL)arg1 animated:(BOOL)arg2;
- (id)tableView;
- (void)localizeUserInterface;
- (id)initWithFrame:(struct CGRect)arg1;

@end

