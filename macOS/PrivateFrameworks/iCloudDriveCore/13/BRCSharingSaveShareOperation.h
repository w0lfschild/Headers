//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <iCloudDriveCore/BRCSharingModifyShareOperation.h>

@interface BRCSharingSaveShareOperation : BRCSharingModifyShareOperation
{
    CDUnknownBlockType _saveShareCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType saveShareCompletionBlock; // @synthesize saveShareCompletionBlock=_saveShareCompletionBlock;
- (void).cxx_destruct;
- (void)finishWithResult:(id)arg1 error:(id)arg2;
- (void)main;
- (id)createActivity;
- (id)initWithShare:(id)arg1 zone:(id)arg2;

@end

