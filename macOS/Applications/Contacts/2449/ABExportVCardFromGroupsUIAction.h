//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "ABAbstractMainWindowViewModelUIAction.h"

@class ABExportVCardService;

@interface ABExportVCardFromGroupsUIAction : ABAbstractMainWindowViewModelUIAction
{
    ABExportVCardService *_exportVCardService;
}

- (void)performWithSender:(id)arg1;
- (void)dealloc;
- (id)initWithMainWindowViewModel:(id)arg1 exportVCardService:(id)arg2;

@end

