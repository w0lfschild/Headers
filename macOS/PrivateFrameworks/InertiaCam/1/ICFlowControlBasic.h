//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <InertiaCam/ICFlowControl-Protocol.h>

@interface ICFlowControlBasic : NSObject <ICFlowControl>
{
    CDUnknownBlockType shouldBeCanceled;
    CDUnknownBlockType reportProgress;
}

@property(copy, nonatomic) CDUnknownBlockType reportProgress; // @synthesize reportProgress;
@property(copy, nonatomic) CDUnknownBlockType shouldBeCanceled; // @synthesize shouldBeCanceled;
- (void).cxx_destruct;
- (_Bool)ICShouldBeCanceled;
- (void)ICReportProgress:(float)arg1;
- (id)initWithProgress:(CDUnknownBlockType)arg1;
- (id)initWithCancel:(CDUnknownBlockType)arg1;

@end

