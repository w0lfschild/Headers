//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <PhotoLibraryServices/NSObject-Protocol.h>

@protocol PLFaceRebuildDescription <NSObject>
@property(readonly, nonatomic, getter=isClusterRejected) BOOL clusterRejected;
@property(readonly, nonatomic) int cloudNameSource;
@property(readonly, nonatomic) int nameSource;
@property(readonly, nonatomic, getter=isRepresentative) BOOL representative;
@property(readonly, nonatomic, getter=isManual) BOOL manual;
@property(readonly, nonatomic, getter=isHidden) BOOL hidden;
@property(readonly, nonatomic) double size;
@property(readonly, nonatomic) double centerY;
@property(readonly, nonatomic) double centerX;
@end

