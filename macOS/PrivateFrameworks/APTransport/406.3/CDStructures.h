//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Function Pointers and Blocks

typedef void (*CDUnknownFunctionPointerType)(void); // return type and parameters are unknown

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct LogCategory {
    int _field1;
    int _field2;
    char *_field3;
    unsigned int _field4;
    char *_field5;
    char *_field6;
    int _field7;
    struct LogCategory *_field8;
    struct LogOutput *_field9;
    struct LogOutput *_field10;
    unsigned long long _field11;
    unsigned long long _field12;
    unsigned int _field13;
    unsigned int _field14;
    char *_field15;
    struct LogCategoryPrivate *_field16;
};

struct LogCategoryPrivate;

struct LogOutput;

struct NSMutableDictionary {
    Class _field1;
};

#pragma mark Typedef'd Structures

typedef struct {
    unsigned char flags;
    unsigned char config;
    unsigned char ipv4[4];
} CDStruct_b2d45402;

