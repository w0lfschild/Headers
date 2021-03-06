//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "NSObject-Protocol.h"

@class NSArray, NSKeyboardShortcut, NSOperationQueue, NSPasteboard, NSResponder, NSSet, NSString, NSUUID;

@protocol _NSServiceAction <NSObject>
@property(nonatomic, readonly) BOOL isSpellChecker;
@property(nonatomic) BOOL isAvailableInServicesMenu;
@property(nonatomic) BOOL isAvailableInContextMenu;
@property(nonatomic, readonly) BOOL isRestricted;
@property(nonatomic, readonly) BOOL isWorkflow;
@property(nonatomic, readonly) NSString *bundleIdentifier;
@property(nonatomic, readonly) NSUUID *serviceUUID;
@property(nonatomic, copy) NSString *keyEquivalent;
- (void)resetToDefaultAvailability;
- (void)resetToDefaultKeyboardShortcut;
@property(nonatomic, copy) NSKeyboardShortcut *keyboardShortcut;
@property(nonatomic, readonly) NSKeyboardShortcut *defaultKeyboardShortcut;
- (void)validateWithResponder:(NSResponder *)arg1 completionHandler:(void (^)(BOOL))arg2;
- (BOOL)invokeWithPasteboard:(NSPasteboard *)arg1;
- (BOOL)invokeWithResponder:(NSResponder *)arg1;
@property(nonatomic, readonly) NSArray *returnTypes;
@property(nonatomic, readonly) NSArray *sendFileTypes;
@property(nonatomic, readonly) NSArray *combinedSendTypes;
@property(nonatomic, readonly) BOOL hasBackgroundColor;
- (void)loadBackgroundColorOnQueue:(NSOperationQueue *)arg1 completionHandler:(void (^)(NSColor *))arg2;
@property(nonatomic, readonly) BOOL hasCustomIcon;
- (void)loadImageOnQueue:(NSOperationQueue *)arg1 completionHandler:(void (^)(NSImage *))arg2;
@property(nonatomic, readonly) NSSet *availablePresentationModes;
@property(nonatomic, readonly) NSSet *defaultPresentationModes;
@property(nonatomic, copy) NSSet *presentationModes;
@property(nonatomic, readonly) NSString *localizedServiceDescription;
@property(nonatomic, readonly) NSString *bundlePath;
@property(nonatomic, readonly) NSString *localizedCategoryTitle;
@property(nonatomic, readonly) NSString *categoryTitle;
@property(nonatomic, readonly) NSString *localizedTitle;
@property(nonatomic, readonly) NSString *title;
@end

