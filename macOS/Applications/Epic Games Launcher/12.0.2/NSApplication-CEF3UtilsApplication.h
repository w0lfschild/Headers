//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSApplication.h"

#import "CefAppProtocol.h"

@interface NSApplication (CEF3UtilsApplication) <CefAppProtocol>
+ (void)load;
- (void)cef3UtilsSendEvent:(id)arg1;
- (void)setHandlingSendEvent:(BOOL)arg1;
- (BOOL)isHandlingSendEvent;
@end

