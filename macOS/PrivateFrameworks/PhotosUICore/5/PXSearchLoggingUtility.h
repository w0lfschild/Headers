//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PXSearchLoggingUtility : NSObject
{
    BOOL _nextTokenSuggestionTappedInCurrentSearchSession;
    BOOL _wordCompletionTappedInCurrentSearchSession;
}

@property(nonatomic) BOOL wordCompletionTappedInCurrentSearchSession; // @synthesize wordCompletionTappedInCurrentSearchSession=_wordCompletionTappedInCurrentSearchSession;
@property(nonatomic) BOOL nextTokenSuggestionTappedInCurrentSearchSession; // @synthesize nextTokenSuggestionTappedInCurrentSearchSession=_nextTokenSuggestionTappedInCurrentSearchSession;
- (void)logCurrentState;
- (void)setWordCompletionTappedInCurrentSearchSession;
- (void)setNextTokenSuggestionTappedInCurrentSearchSession;

@end

