//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import "TNewAliasOperationDelegate.h"

@interface TBBVCNewAliasDelegate : TNewAliasOperationDelegate
{
    long long _bvcValidatorID;
    struct TFENodeVector _aliases;
}

+ (id)delegateWithBrowserViewController:(id)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)asyncNodeOperation:(id)arg1 subOperationCompleted:(unsigned int)arg2 targetNode:(const struct TFENode *)arg3;

@end

