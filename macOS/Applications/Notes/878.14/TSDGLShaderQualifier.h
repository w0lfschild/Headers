//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TSDGLShaderQualifier : NSObject
{
    int _uniformLocation;
    BOOL _needsUpdate;
    NSString *_name;
}

@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(nonatomic) int uniformLocation; // @synthesize uniformLocation=_uniformLocation;
@property(readonly, nonatomic) BOOL needsUpdate; // @synthesize needsUpdate=_needsUpdate;
- (void)updateUniformLocationWithShaderProgramObject:(int)arg1;
- (void)setGLUniformCheckWithShader:(id)arg1;
- (void)setGLUniformWithShader:(id)arg1;
- (void)dealloc;
- (id)initWithName:(id)arg1;

@end

