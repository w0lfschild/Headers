//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGSurveyQuestionFactory.h>

@interface PGRelationshipQuestionFactory : PGSurveyQuestionFactory
{
}

+ (id)localFactoryScoreByRelationshipLabels;
+ (id)relationshipTypesByRelationshipLabel;
- (id)generateQuestionsWithLimit:(unsigned long long)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (long long)questionOptions;
- (unsigned short)questionType;

@end

