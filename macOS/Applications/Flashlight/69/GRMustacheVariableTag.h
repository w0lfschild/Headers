//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "GRMustacheTag.h"

@class GRMustacheExpression;

@interface GRMustacheVariableTag : GRMustacheTag
{
    GRMustacheExpression *_expression;
    BOOL _escapesHTML;
    unsigned long long _contentType;
}

+ (id)variableTagWithExpression:(id)arg1 escapesHTML:(BOOL)arg2 contentType:(unsigned long long)arg3;
@property(readonly, nonatomic) BOOL escapesHTML; // @synthesize escapesHTML=_escapesHTML;
@property(readonly, retain, nonatomic) GRMustacheExpression *expression; // @synthesize expression=_expression;
- (id)initWithExpression:(id)arg1 escapesHTML:(BOOL)arg2 contentType:(unsigned long long)arg3;
- (BOOL)acceptTemplateASTVisitor:(id)arg1 error:(id *)arg2;
- (id)renderContentWithContext:(id)arg1 HTMLSafe:(char *)arg2 error:(id *)arg3;
- (id)innerTemplateString;
- (BOOL)isInverted;
- (unsigned long long)type;
- (id)description;
- (void)dealloc;

@end

