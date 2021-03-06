//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <AppKit/NSImageRep.h>

@class ISIcon;

__attribute__((visibility("hidden")))
@interface NSISIconImageRep : NSImageRep
{
    ISIcon *_icon;
}

- (struct CGImage *)CGImageForProposedRect:(struct CGRect *)arg1 context:(id)arg2 hints:(id)arg3;
- (BOOL)draw;
- (BOOL)_isValid;
- (BOOL)_wantsToBeCached;
- (BOOL)_drawOnlyUsesOneDrawingOperation;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIcon:(id)arg1 size:(double)arg2 scale:(double)arg3 appearanceName:(id)arg4;

@end

