//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "MapsDebugValuesViewController.h"

@class MapsUGCEnvironmentSectionController;

__attribute__((visibility("hidden")))
@interface MapsRAPDebugController : MapsDebugValuesViewController
{
    MapsUGCEnvironmentSectionController *_environmentsSectionController;
}

+ (id)navigationDestinationTitle;
- (void).cxx_destruct;
@property(retain, nonatomic) MapsUGCEnvironmentSectionController *environmentsSectionController; // @synthesize environmentsSectionController=_environmentsSectionController;
- (void)displayMessage:(id)arg1 titled:(id)arg2;
- (void)simulateFixForProblemWithID:(id)arg1;
- (void)openAnalyticsWithURL:(id)arg1;
- (void)prepareContent;
- (void)prepareDefaultSimJanaURL;
- (void)_viewWillAppear;
- (void)viewWillAppear:(BOOL)arg1;
- (id)init;

@end

