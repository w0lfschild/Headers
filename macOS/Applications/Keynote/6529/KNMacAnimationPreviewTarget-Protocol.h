//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class KNAnimationInfo, KNSlideNode, NSIndexSet;

@protocol KNMacAnimationPreviewTarget <NSObject>
- (void)cancelAnimationPreview;
- (void)previewAnimationInfo:(KNAnimationInfo *)arg1 type:(long long)arg2 previewAddedActionBuilds:(BOOL)arg3;
- (void)previewAnimationForSlideNode:(KNSlideNode *)arg1 buildEventIndexes:(NSIndexSet *)arg2;
@end

