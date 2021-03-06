//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class CalUICalendarListCellView, NSColor, NSString;
@protocol CalUICalendarListViewNode;

@protocol CalUICalendarListCellViewDelegate <NSObject>
- (BOOL)isExpandedNode:(id <CalUICalendarListViewNode>)arg1;
- (void)calendarListCellView:(CalUICalendarListCellView *)arg1 didChangeName:(NSString *)arg2;
- (void)calendarListCellView:(CalUICalendarListCellView *)arg1 didSelectCalendarColor:(NSColor *)arg2;
- (void)calendarListCellView:(CalUICalendarListCellView *)arg1 didChangeCheckboxState:(long long)arg2 withModifierFlags:(unsigned long long)arg3;
- (id <CalUICalendarListViewNode>)currentlyInspectedSharingNode;
- (struct CGRect)disclosureFrameForCell:(CalUICalendarListCellView *)arg1;
- (void)showSharingSettingsFromCalendarListCellView:(CalUICalendarListCellView *)arg1;
- (void)displayErrorFromCalendarListCellView:(CalUICalendarListCellView *)arg1;
- (void)calendarListCellViewDidEndEditing:(CalUICalendarListCellView *)arg1;
- (void)calendarListCellViewDidBeginEditing:(CalUICalendarListCellView *)arg1;
@end

