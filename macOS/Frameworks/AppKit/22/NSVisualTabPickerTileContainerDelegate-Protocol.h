//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSVisualTabPickerTileContainerView;

@protocol NSVisualTabPickerTileContainerDelegate <NSObject>
- (void)didRequestNewTabForNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
- (void)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 didSelectTileAtIndex:(unsigned long long)arg2;
- (void)visualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1 closeTileAtIndex:(unsigned long long)arg2;
- (BOOL)canCloseNSVisualTabPickerTileContainerView:(NSVisualTabPickerTileContainerView *)arg1;
@end

