//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSView.h"

@class NSTextField;

@interface iTermUnreadCountView : NSView
{
    NSView *_bubbleView;
    NSTextField *_textField;
    long long _count;
}

@property(nonatomic) long long count; // @synthesize count=_count;
- (void).cxx_destruct;
- (id)newBubbleViewWithTextField:(id)arg1;
- (BOOL)wantsDefaultClipping;
- (id)init;

@end

