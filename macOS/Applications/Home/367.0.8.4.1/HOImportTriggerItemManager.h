//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Home/HFItemManager.h>

@class HFStaticItem;

@interface HOImportTriggerItemManager : HFItemManager
{
    HFStaticItem *_instructionsItem;
}

@property(retain, nonatomic) HFStaticItem *instructionsItem; // @synthesize instructionsItem=_instructionsItem;
- (void).cxx_destruct;
- (id)_sectionIdentifierForItem:(id)arg1;
- (id)_identifierForSection:(unsigned long long)arg1;
- (id)_titleForSectionWithIdentifier:(id)arg1;
- (unsigned long long)_numberOfSections;
- (id)_buildItemProvidersForHome:(id)arg1;

@end

