//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <NewsCore/FCFetchOperation.h>

@class FCInterestToken, FRWebArchiveSource, NSString;

@interface FRWebArchiveFetchOperation : FCFetchOperation
{
    FRWebArchiveSource *_webArchiveSource;
    NSString *_key;
    FCInterestToken *_holdToken;
    FCInterestToken *_fetchToken;
}

- (void).cxx_destruct;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (id)initWithWebArchiveSource:(id)arg1 key:(id)arg2;

@end

