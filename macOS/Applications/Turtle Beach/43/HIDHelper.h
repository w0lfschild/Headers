//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSMutableArray;

@interface HIDHelper : NSObject
{
    struct __IOHIDManager *hidManagerRef;
    NSMutableArray *_hidDeviceArray;
}

- (void).cxx_destruct;
@property(retain) NSMutableArray *hidDeviceArray; // @synthesize hidDeviceArray=_hidDeviceArray;
@property(nonatomic) struct __IOHIDManager *hidManagerRef; // @synthesize hidManagerRef;
- (void)deattachDeviceWithHidReference:(struct __IOHIDDevice **)arg1 forVendorId:(unsigned long long)arg2 andProductId:(unsigned long long)arg3;
- (void)attachDeviceWithHidReference:(struct __IOHIDDevice **)arg1 forVendorId:(unsigned long long)arg2 andProductId:(unsigned long long)arg3;
- (struct __CFDictionary *)createDeviceMatchingDictionaryForVendor:(int)arg1 product:(int)arg2;
- (struct __CFDictionary *)createDeviceMatchingDictionaryForVendor:(int)arg1 product:(int)arg2 usagePage:(int)arg3;
- (struct __CFDictionary *)createDeviceMatchingDictionaryForVendor:(int)arg1 usagePage:(int)arg2;
- (struct __CFDictionary *)createDeviceMatchingDictionaryForVendor:(int)arg1;
- (struct __CFDictionary *)createDeviceMatchingDictionaryForUsagePage:(int)arg1;
- (BOOL)hidDeviceExistsInArrayForVid:(unsigned long long)arg1 pid:(unsigned long long)arg2;
- (id)hidDeviceForReference:(void *)arg1;
- (id)init;

@end

