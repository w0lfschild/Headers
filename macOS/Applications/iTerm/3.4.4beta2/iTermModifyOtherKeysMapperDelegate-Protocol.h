//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class VT100Output, iTermModifyOtherKeysMapper;

@protocol iTermModifyOtherKeysMapperDelegate <NSObject>
- (BOOL)modifyOtherKeysTerminalIsScreenlike:(iTermModifyOtherKeysMapper *)arg1;
- (VT100Output *)modifyOtherKeysOutputFactory:(iTermModifyOtherKeysMapper *)arg1;
- (void)modifyOtherKeys:(iTermModifyOtherKeysMapper *)arg1 getOptionKeyBehaviorLeft:(int *)arg2 right:(int *)arg3;
- (unsigned long long)modifiyOtherKeysDelegateEncoding:(iTermModifyOtherKeysMapper *)arg1;
@end

