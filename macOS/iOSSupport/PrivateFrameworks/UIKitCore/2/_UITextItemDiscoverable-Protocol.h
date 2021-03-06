//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Oct 25 2017 03:49:04).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <UIKitCore/NSObject-Protocol.h>

@class NSArray, UITextRange;
@protocol UICoordinateSpace;

@protocol _UITextItemDiscoverable <NSObject>
@property(readonly, nonatomic) id <UICoordinateSpace> textItemCoordinateSpace;
- (NSArray *)textItemsOfType:(long long)arg1 inTextRange:(UITextRange *)arg2;
- (UITextRange *)visibleTextRange;

@optional
- (BOOL)hasTextItemsOfType:(long long)arg1 inTextRange:(UITextRange *)arg2;
@end

