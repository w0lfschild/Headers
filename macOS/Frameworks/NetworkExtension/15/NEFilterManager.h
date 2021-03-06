//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NEPrettyDescription.h"

@class NEConfiguration, NEConfigurationManager, NEFilterProviderConfiguration, NSString;

@interface NEFilterManager : NSObject <NEPrettyDescription>
{
    BOOL _hasLoaded;
    NEConfigurationManager *_configurationManager;
    NEConfiguration *_configuration;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(retain) NEConfiguration *configuration; // @synthesize configuration=_configuration;
@property(readonly) NEConfigurationManager *configurationManager; // @synthesize configurationManager=_configurationManager;
@property BOOL hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property long long grade;
- (id)description;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
@property(copy) NSString *localizedDescription;
@property(getter=isEnabled) BOOL enabled;
@property(retain) NEFilterProviderConfiguration *providerConfiguration;
- (void)saveToPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)removeFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadFromPreferencesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initFilterManagerWithPluginType:(id)arg1;
- (void)createEmptyConfiguration;
- (id)init;

@end

