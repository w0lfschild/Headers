//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <FileProvider/FPTransformOperation.h>

@interface FPTrashOperation : FPTransformOperation
{
}

- (id)fp_prettyDescription;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (id)finalItemsForStitcherForResult:(id)arg1;
- (void)presendNotifications;
- (unsigned long long)transformItem:(id)arg1 atIndex:(unsigned long long)arg2;
- (void)subclassPreflightWithCompletion:(CDUnknownBlockType)arg1;
- (id)initWithItems:(id)arg1;
- (id)replicateForItems:(id)arg1;

@end

