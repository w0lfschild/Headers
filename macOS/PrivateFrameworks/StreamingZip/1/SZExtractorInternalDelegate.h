//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

#import <StreamingZip/StreamingUnzipDelegateProtocol-Protocol.h>

@protocol SZExtractorDelegate;

__attribute__((visibility("hidden")))
@interface SZExtractorInternalDelegate : NSObject <StreamingUnzipDelegateProtocol>
{
    id <SZExtractorDelegate> delegate;
}

@property __weak id <SZExtractorDelegate> delegate; // @synthesize delegate;
- (void).cxx_destruct;
- (void)extractionEnteredPassThroughMode;
- (void)extractionCompleteAtArchivePath:(id)arg1;
- (void)setExtractionProgress:(double)arg1;

@end

