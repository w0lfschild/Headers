//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <AppKit/NSViewController.h>

@protocol KNMacPlaybackShroudViewDelegate;

@interface KNMacPlaybackShroudViewController : NSViewController
{
    id <KNMacPlaybackShroudViewDelegate> _delegate;
}

@property(nonatomic) __weak id <KNMacPlaybackShroudViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)changeAttributes:(id)arg1;
- (void)setColor:(id)arg1 forAttribute:(id)arg2;
- (void)changeFont:(id)arg1;
- (void)changeColor:(id)arg1;
- (void)resumeButtonPressed:(id)arg1;
- (id)init;

@end

