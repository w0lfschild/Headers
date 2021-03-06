//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class IMChat, IMHandle, NSArray, NSString;

@protocol IMAssistantChatDataSource <NSObject>
@property(readonly, nonatomic) NSArray *allExistingChats;
- (NSArray *)chatGUIDsForChat:(IMChat *)arg1;
- (IMChat *)chatForIMHandles:(NSArray *)arg1;
- (IMChat *)chatForIMHandle:(IMHandle *)arg1;
- (IMChat *)existingChatForAddresses:(NSArray *)arg1 allowRetargeting:(BOOL)arg2 bestHandles:(id *)arg3;
- (IMChat *)existingChatWithChatIdentifier:(NSString *)arg1;
@end

