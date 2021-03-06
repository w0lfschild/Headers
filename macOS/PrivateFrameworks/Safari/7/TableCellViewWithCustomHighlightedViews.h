//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSTableCellView.h"

@class NSMapTable;

__attribute__((visibility("hidden")))
@interface TableCellViewWithCustomHighlightedViews : NSTableCellView
{
    NSMapTable *_attributedStringsForBackgroundStyles;
    NSMapTable *_imagesForBackgroundStyles;
}

- (void).cxx_destruct;
- (void)setImage:(id)arg1 forBackgroundStyle:(long long)arg2 ofImageView:(id)arg3;
- (void)setAttributedString:(id)arg1 forBackgroundStyle:(long long)arg2 ofTextField:(id)arg3;
- (void)setBackgroundStyle:(long long)arg1;
- (void)prepareForReuse;

@end

