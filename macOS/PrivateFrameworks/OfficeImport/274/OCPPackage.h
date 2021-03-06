//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, OCPPackageProperties, OCPPackageRelationshipCollection;

__attribute__((visibility("hidden")))
@interface OCPPackage : NSObject
{
    OCPPackageRelationshipCollection *mRelationships;
    OCPPackageProperties *mProperties;
    NSMutableDictionary *mDefaultContentTypes;
    NSMutableDictionary *mContentTypeOverrides;
}

- (void).cxx_destruct;
- (id)properties;
- (id)mainDocumentPart;
- (id)partByRelationshipType:(id)arg1;
- (id)relationshipsByType:(id)arg1;
- (id)relationshipForIdentifier:(id)arg1;
- (void)resetPartForLocation:(id)arg1;
- (id)partForLocation:(id)arg1;
- (id)init;
- (id)contentTypeForPartLocation:(id)arg1;
- (id)initWithRelationshipsXml:(struct _xmlDoc *)arg1 corePropertiesXml:(struct _xmlDoc *)arg2 appPropertiesXml:(struct _xmlDoc *)arg3 contentTypesXml:(struct _xmlDoc *)arg4;
- (void)readContentTypeOverrideFromElement:(struct _xmlNode *)arg1;
- (void)readDefaultContentTypeFromElement:(struct _xmlNode *)arg1;
- (void)readContentTypesXml:(struct _xmlDoc *)arg1;

@end

