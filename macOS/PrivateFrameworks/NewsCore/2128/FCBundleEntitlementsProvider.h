//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCBundleEntitlementsProviderType-Protocol.h>

@protocol FCCoreConfigurationManager, FCEntitlementsOverrideProviderType;

@interface FCBundleEntitlementsProvider : NSObject <FCBundleEntitlementsProviderType>
{
    id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider;
    id <FCCoreConfigurationManager> _configurationManager;
}

@property(readonly, nonatomic) id <FCCoreConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(retain, nonatomic) id <FCEntitlementsOverrideProviderType> entitlementsOverrideProvider; // @synthesize entitlementsOverrideProvider;
- (void).cxx_destruct;
- (void)_fetchEntitlementsWithIgnoreCache:(BOOL)arg1 configuration:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)fetchEntitlementsWithIgnoreCache:(BOOL)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithConfigurationManager:(id)arg1;

@end

