//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSDictionary, NSString, ProfileModel, iTermProfilePreferencesBaseViewController, iTermSizeRememberingView;

@protocol iTermProfilePreferencesBaseViewControllerDelegate <NSObject>
- (BOOL)profilePreferencesRevealViewController:(iTermProfilePreferencesBaseViewController *)arg1;
- (void)profilePreferencesViewController:(iTermProfilePreferencesBaseViewController *)arg1 willSetObjectWithKey:(NSString *)arg2;
- (BOOL)editingTmuxSession;
- (void)profilePreferencesContentViewSizeDidChange:(iTermSizeRememberingView *)arg1;
- (ProfileModel *)profilePreferencesCurrentModel;
- (NSDictionary *)profilePreferencesCurrentProfile;
@end

