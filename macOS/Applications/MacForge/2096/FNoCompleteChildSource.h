//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "FCompleteChildSource.h"

@class NSString;

@interface FNoCompleteChildSource : NSObject <FCompleteChildSource>
{
}

+ (id)instance;
- (id)childByIndex:(id)arg1 afterChild:(id)arg2 isReverse:(BOOL)arg3;
- (id)completeChild:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

