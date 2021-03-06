//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import "GQDGroup.h"

@class GQDIBAContainerNode, GQDIBAFrameBackground, GQDSStyle, GQDShape, NSArray, NSString;

@interface GQDIBAWidget : GQDGroup
{
    GQDSStyle *_style;
    NSString *_placeholderImageDataFilename;
    GQDIBAContainerNode *_widgetNode;
    struct CGRect _stage;
}

+ (const struct StateSpec *)stateForReading;
+ (long long)layoutModeFromStringPropertyValue:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) GQDIBAContainerNode *widgetNode; // @synthesize widgetNode=_widgetNode;
@property(readonly, nonatomic) NSString *placeholderImageDataFilename; // @synthesize placeholderImageDataFilename=_placeholderImageDataFilename;
@property(retain, nonatomic) GQDSStyle *style; // @synthesize style=_style;
@property(nonatomic) struct CGRect stage; // @synthesize stage=_stage;
@property(readonly, nonatomic) struct CGRect stageFromLayout;
- (struct CGRect)constrainedWidgetAreaRect:(struct CGRect)arg1;
@property(readonly, nonatomic) long long layoutMode;
@property(readonly, nonatomic) NSString *emptyPlaceholderText;
@property(readonly, nonatomic) NSString *placeholderText;
@property(readonly, nonatomic) BOOL importAsPlaceholder;
- (id)nameInSidecarWithWidgetNumber:(unsigned long long)arg1;
- (void)getSidecarDataWithState:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)keyDataBundle;
- (id)externalTextWrap;
@property(readonly, nonatomic) GQDIBAFrameBackground *background;
@property(readonly, nonatomic) BOOL hasBackground;
@property(readonly, nonatomic) GQDShape *title;
@property(readonly, nonatomic) GQDShape *caption;
- (id)backgroundOfPrivilegeType:(unsigned long long)arg1;
- (id)shapeOfPrivilegeType:(unsigned long long)arg1;
- (id)drawableOfPrivilegeType:(unsigned long long)arg1;
@property(readonly, nonatomic) NSArray *nonPrivilegedChildren;
@property(readonly, nonatomic) NSArray *children;
- (id)initWithContainerNode:(id)arg1;

@end

