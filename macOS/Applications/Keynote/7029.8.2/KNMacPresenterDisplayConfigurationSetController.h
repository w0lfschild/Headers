//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class KNMacPresenterDisplayConfigurationSet, NSArray, NSMutableArray;

@interface KNMacPresenterDisplayConfigurationSetController : NSObject
{
    KNMacPresenterDisplayConfigurationSet *_activeConfigurationSet;
    NSMutableArray *_presenterDisplayConfigurationSets;
}

+ (id)keyPathsForValuesAffectingAllPresenterDisplayConfigurationSets;
+ (BOOL)presenterDisplayConfigurationManagerEnabled;
- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *presenterDisplayConfigurationSets; // @synthesize presenterDisplayConfigurationSets=_presenterDisplayConfigurationSets;
@property(retain, nonatomic) KNMacPresenterDisplayConfigurationSet *activeConfigurationSet; // @synthesize activeConfigurationSet=_activeConfigurationSet;
- (id)p_exportFilePropertyListRepresentation;
- (void)exportConfigurationSetsWithSavePanel;
- (void)updateConfigurationsInUserDefaults;
- (void)p_importDataFromPropertyListRepresentation:(id)arg1;
- (void)importConfigurationSetsFromFileAtPath:(id)arg1;
- (void)importConfigurationSetsWithOpenPanel;
- (void)p_saveData;
- (void)p_createDefaultConfiguration;
- (void)p_upgradeExistingConfigurations;
- (void)p_loadConfigurations;
- (BOOL)selectConfigurationSetForFunctionKey:(long long)arg1;
- (void)removeFunctionKeyForConfigurationSet:(id)arg1;
- (void)assignFunctionKey:(long long)arg1 toConfigurationSet:(id)arg2;
- (id)configurationSetForFunctionKey:(long long)arg1;
- (id)p_configurationWithUUID:(id)arg1;
@property(readonly, nonatomic) NSArray *allPresenterDisplayConfigurationSets;
- (id)duplicateAndActivateCurrentConfigurationSetWithName:(id)arg1;
- (void)lockConfigurationSet:(id)arg1 locked:(BOOL)arg2;
- (void)deleteConfigurationSet:(id)arg1;
- (void)renameConfigurationSet:(id)arg1 name:(id)arg2;
@property(readonly, nonatomic) NSArray *activeConfigurations;
- (void)updateActiveConfigurationSetWithConfigurations:(id)arg1;
- (id)defaultConfigurationSetName;
- (id)initWithPropertyList:(id)arg1;
- (id)init;

@end

