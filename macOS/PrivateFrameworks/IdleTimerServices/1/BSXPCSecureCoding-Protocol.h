//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <IdleTimerServices/NSObject-Protocol.h>

@protocol BSXPCDecoding, BSXPCEncoding;

@protocol BSXPCSecureCoding <NSObject>
+ (BOOL)supportsBSXPCSecureCoding;
- (id)initWithBSXPCCoder:(id <BSXPCDecoding>)arg1;
- (void)encodeWithBSXPCCoder:(id <BSXPCEncoding>)arg1;
@end

