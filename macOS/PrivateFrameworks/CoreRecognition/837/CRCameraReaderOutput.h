//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class CRCameraReaderOutputInternal, NSString;

@interface CRCameraReaderOutput : NSObject
{
    CRCameraReaderOutputInternal *_objectInternal;
}

@property(retain) CRCameraReaderOutputInternal *objectInternal; // @synthesize objectInternal=_objectInternal;
- (void).cxx_destruct;
@property(readonly) NSString *formattedStringValue;
@property(readonly) NSString *stringValue;
@property(readonly) NSString *type;
- (void)dealloc;
- (id)initWithImageReaderOutput:(id)arg1;
- (id)init;

@end

