//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <MapKit/MKTableViewCell.h>

@class MKViewWithHairline, NSColor;

@interface MKCustomSeparatorTableViewCell : MKTableViewCell
{
    MKViewWithHairline *_separatorView;
}

- (void).cxx_destruct;
@property(nonatomic) double trailingSeparatorInset;
@property(nonatomic) double leadingSeparatorInset;
@property(retain, nonatomic) NSColor *separatorColor;
@property(nonatomic) double rightSeparatorInset;
@property(nonatomic) double leftSeparatorInset;
@property(nonatomic, getter=isSeparatorHidden) BOOL separatorHidden;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

