//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AudioSettingsTableViewCellConfiguration, AudioSettingsTableViewHeaderFooterConfiguration;

__attribute__((visibility("hidden")))
@interface AudioSettingsViewControllerConfiguration : NSObject
{
    AudioSettingsTableViewCellConfiguration *_cellConfiguration;
    AudioSettingsTableViewHeaderFooterConfiguration *_headerConfiguration;
    AudioSettingsTableViewHeaderFooterConfiguration *_footerConfiguration;
}

+ (id)defaultConfiguration;
+ (id)largeConfiguration;
- (void).cxx_destruct;
@property(readonly, nonatomic) AudioSettingsTableViewHeaderFooterConfiguration *footerConfiguration; // @synthesize footerConfiguration=_footerConfiguration;
@property(readonly, nonatomic) AudioSettingsTableViewHeaderFooterConfiguration *headerConfiguration; // @synthesize headerConfiguration=_headerConfiguration;
@property(readonly, nonatomic) AudioSettingsTableViewCellConfiguration *cellConfiguration; // @synthesize cellConfiguration=_cellConfiguration;

@end

