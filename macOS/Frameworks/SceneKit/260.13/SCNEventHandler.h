//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class SCNView;

@interface SCNEventHandler : NSObject
{
    id _reserved;
    SCNView *_view;
}

- (BOOL)wantsRedraw;
- (void)viewDidDraw;
- (void)viewWillDraw;
- (void)cameraDidChange;
- (void)sceneDidChange;
- (void)cameraWillChange;
- (void)sceneWillChange;
- (BOOL)magnifyWithEvent:(id)arg1;
- (BOOL)rotateWithEvent:(id)arg1;
- (BOOL)mouseUp:(id)arg1;
- (BOOL)mouseDragged:(id)arg1;
- (BOOL)mouseDown:(id)arg1;
- (BOOL)scrollWheel:(id)arg1;
- (void)resignFirstResponder;
- (void)becomeFirstResponder;
- (void)setView:(id)arg1;
@property(readonly) SCNView *view;
- (void)dealloc;
- (id)init;

@end

