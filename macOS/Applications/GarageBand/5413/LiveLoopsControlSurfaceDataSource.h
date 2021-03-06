//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

#import "LiveLoopsControlSurfaceDataSource-Protocol.h"

@class LiveLoopsGridView, NSColor, NSString;
@protocol LiveLoopsControlSurfaceDataSourceDelegate;

@interface LiveLoopsControlSurfaceDataSource : NSObject <LiveLoopsControlSurfaceDataSource>
{
    NSColor *defaultColor;
    LiveLoopsGridView *gridView;
    id <LiveLoopsControlSurfaceDataSourceDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <LiveLoopsControlSurfaceDataSourceDelegate> delegate; // @synthesize delegate=_delegate;
- (const struct GCColor *)gcColorForCSGroupAtIndex:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (unsigned long long)csGroupCount;
- (void)handleUM_TRACKVISIBLE:(id)arg1;
- (void)addNotificationHandler;
- (BOOL)showControlBars;
- (unsigned long long)controlBarsCount;
- (id)colorForControlBarAtIndex:(unsigned long long)arg1 column:(unsigned long long)arg2;
- (id)initWithDelegate:(id)arg1 gridView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

