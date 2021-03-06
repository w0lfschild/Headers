//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@interface PPMetricsUtils : NSObject
{
}

+ (id)truncatedClientBundleIdOrCurrentBundleId:(id)arg1;
+ (id)truncatedClientBundleId:(id)arg1;
+ (struct PPMTypeSafeBool_)typeSafeBoolOfCond:(BOOL)arg1;
+ (id)osBuild;
+ (int)feedbackTypeForPET2:(unsigned int)arg1;
+ (struct PPMPortraitFeedbackType_)feedbackTypeForPET:(unsigned int)arg1;
+ (struct PPMObjectDonationSource_)donationSourceForBundleId:(id)arg1;
+ (struct PPMLocationDonationSource_)locationSourceForBundleId:(id)arg1;
+ (struct PPMNamedEntityDonationSource_)namedEntitySourceForBundleId:(id)arg1;
+ (struct PPMTopicDonationSource_)topicSourceForBundleId:(id)arg1;
+ (struct PPMTopicAlgorithm_)mapTopicAlgorithm:(unsigned long long)arg1;
+ (struct PPMLocationAlgorithm_)mapLocationAlgorithm:(unsigned short)arg1;
+ (struct PPMNamedEntityAlgorithm_)mapNamedEntityAlgorithm:(unsigned long long)arg1;
+ (id)loggingQueue;

@end

