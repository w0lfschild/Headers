//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "XSDefinitionProvider.h"

@class EWSPathToExtendedFieldType, NSString;

@interface EWSExtendedPropertyType : NSObject <XSDefinitionProvider>
{
    EWSPathToExtendedFieldType *_ExtendedFieldURI;
    id _Item;
}

+ (id)definition;
- (void).cxx_destruct;
@property(retain, nonatomic) id Item; // @synthesize Item=_Item;
@property(retain, nonatomic) EWSPathToExtendedFieldType *ExtendedFieldURI; // @synthesize ExtendedFieldURI=_ExtendedFieldURI;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

