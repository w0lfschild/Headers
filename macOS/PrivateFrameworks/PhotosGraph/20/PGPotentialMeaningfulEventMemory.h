//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <PhotosGraph/PGPotentialMemory.h>

@interface PGPotentialMeaningfulEventMemory : PGPotentialMemory
{
    id <PGGraphMeaningfulEvent> _meaningfulEvent;
    unsigned long long _meaning;
}

- (void).cxx_destruct;
@property(readonly) unsigned long long meaning; // @synthesize meaning=_meaning;
@property(readonly) id <PGGraphMeaningfulEvent> meaningfulEvent; // @synthesize meaningfulEvent=_meaningfulEvent;
- (id)initWithCategory:(unsigned long long)arg1 meaningfulEvent:(id)arg2 meaning:(unsigned long long)arg3 controller:(id)arg4;

@end

