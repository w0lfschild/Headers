//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeUI/HUControlPanelConfiguration-Protocol.h>

@class NSString;
@protocol HUControlPanelRule;

@interface HUSwitchControlPanelConfiguration : NSObject <HUControlPanelConfiguration>
{
}

- (BOOL)shouldShowSectionTitleForItem:(id)arg1;
- (id)valueTransformerForControlItem:(id)arg1;
- (void)setupControlsForCell:(id)arg1 item:(id)arg2;
@property(readonly, nonatomic) Class cellClass;
@property(readonly, nonatomic) id <HUControlPanelRule> rule;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

