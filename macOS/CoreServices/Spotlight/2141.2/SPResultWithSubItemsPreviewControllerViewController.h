//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <Spotlight/SPPreviewController.h>

@class NSArray, NSString, SPQLLoadingWrapperView, SPResultWithSubitemsHelper, SPResultWithoutSubitemsHelper;

@interface SPResultWithSubItemsPreviewControllerViewController : SPPreviewController
{
    BOOL _awoke;
    NSArray *_subItems;
    NSString *_secondaryString;
    NSString *_filePath;
    NSString *_displayName;
    SPQLLoadingWrapperView *_qlWrapper;
    SPResultWithSubitemsHelper *_itemWithSubItemHelper;
    SPResultWithoutSubitemsHelper *_itemWithoutSubItemHelper;
}

+ (id)newPreviewController;
- (void).cxx_destruct;
@property(retain) SPResultWithoutSubitemsHelper *itemWithoutSubItemHelper; // @synthesize itemWithoutSubItemHelper=_itemWithoutSubItemHelper;
@property(retain) SPResultWithSubitemsHelper *itemWithSubItemHelper; // @synthesize itemWithSubItemHelper=_itemWithSubItemHelper;
@property(retain) SPQLLoadingWrapperView *qlWrapper; // @synthesize qlWrapper=_qlWrapper;
@property(retain) NSString *displayName; // @synthesize displayName=_displayName;
@property(retain) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain) NSString *secondaryString; // @synthesize secondaryString=_secondaryString;
@property(retain) NSArray *subItems; // @synthesize subItems=_subItems;
- (void)openItem:(BOOL)arg1;
- (void)setRepresentedObject:(id)arg1;
- (void)awakeFromNib;
- (void)doubleClick:(id)arg1;
- (void)setupForObject:(id)arg1;
- (void)loadView;
- (id)icon;
- (id)init;

@end

