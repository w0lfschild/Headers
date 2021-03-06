//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSMenuDelegate.h"

@class CNFuture, CNPromise, CNQuickActionView, CNUIUserActionListModel, NSMenu, NSString;

@interface CNQuickActionViewClickHelper : NSObject <NSMenuDelegate>
{
    BOOL _menuVisible;
    CNUIUserActionListModel *_model;
    CNFuture *_future;
    CNPromise *_disambiguationPromise;
    NSString *_actionType;
    NSMenu *_menu;
    CNQuickActionView *_quickActionView;
}

@property BOOL menuVisible; // @synthesize menuVisible=_menuVisible;
@property(nonatomic) __weak CNQuickActionView *quickActionView; // @synthesize quickActionView=_quickActionView;
@property(retain, nonatomic) NSMenu *menu; // @synthesize menu=_menu;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
@property(retain, nonatomic) CNPromise *disambiguationPromise; // @synthesize disambiguationPromise=_disambiguationPromise;
@property(retain, nonatomic) CNFuture *future; // @synthesize future=_future;
@property(retain, nonatomic) CNUIUserActionListModel *model; // @synthesize model=_model;
- (void).cxx_destruct;
- (void)menuDidClose:(id)arg1;
- (void)menuWillOpen:(id)arg1;
- (struct CGRect)confinementRectForMenu:(id)arg1 onScreen:(id)arg2;
- (void)didChooseActionMenuItem:(id)arg1;
- (void)updateMenu:(id)arg1 toMenu:(id)arg2;
- (void)presentMenu:(id)arg1;
- (void)presentDisambiguationUI;
- (id)disambiguatedAction;
- (id)defaultAction;
- (id)action;
- (id)initWithQuickActionView:(id)arg1 actionType:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

