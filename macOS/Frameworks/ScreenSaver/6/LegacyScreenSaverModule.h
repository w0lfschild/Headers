//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <ScreenSaver/ScreenSaverModule.h>

@interface LegacyScreenSaverModule : ScreenSaverModule
{
    BOOL _hasConfigurationSheet;
    CDUnknownBlockType configureSheetCompletionBlock;
}

+ (void)setExtensionModule:(id)arg1;
@property BOOL hasConfigurationSheet; // @synthesize hasConfigurationSheet=_hasConfigurationSheet;
@property(copy) CDUnknownBlockType configureSheetCompletionBlock; // @synthesize configureSheetCompletionBlock;
- (void)presentConfigureSheetWithCompletionBlock:(CDUnknownBlockType)arg1;
- (void)_requestDidCompleteNotification:(id)arg1;
- (id)loadViewForFrame:(struct CGRect)arg1 isPreview:(BOOL)arg2;
- (void)dealloc;
- (id)init;

@end

