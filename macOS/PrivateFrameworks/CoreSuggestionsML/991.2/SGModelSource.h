//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class PMLSessionDescriptor;

@interface SGModelSource : NSObject
{
    PMLSessionDescriptor *_sessionDescriptor;
    Class _modelClass;
}

@property(retain, nonatomic) Class modelClass; // @synthesize modelClass=_modelClass;
@property(retain, nonatomic) PMLSessionDescriptor *sessionDescriptor; // @synthesize sessionDescriptor=_sessionDescriptor;
- (void).cxx_destruct;
- (id)initWithSessionDescriptor:(id)arg1 modelClass:(Class)arg2;

@end

