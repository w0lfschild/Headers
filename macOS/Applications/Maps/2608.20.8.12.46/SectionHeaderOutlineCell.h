//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "SidebarOutlineCell.h"

@protocol SectionHeaderOutlineCellModel;

__attribute__((visibility("hidden")))
@interface SectionHeaderOutlineCell : SidebarOutlineCell
{
    id <SectionHeaderOutlineCellModel> _cellModel;
}

- (void).cxx_destruct;
@property(retain, nonatomic) id <SectionHeaderOutlineCellModel> cellModel; // @synthesize cellModel=_cellModel;
- (void)_accessoryButtonTapped:(id)arg1;
- (void)_hoverGestureRecognizerStateDidChange:(id)arg1;
- (void)_updateAccessoryConfigurations;
- (void)setHovering:(BOOL)arg1;
- (void)_updateFromModel:(BOOL)arg1;

@end

