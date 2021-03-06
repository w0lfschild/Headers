//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#pragma mark Blocks

typedef void (^CDUnknownBlockType)(void); // return type and parameters are unknown

#pragma mark Named Structures

struct CGAffineTransform {
    double a;
    double b;
    double c;
    double d;
    double tx;
    double ty;
};

struct CGPoint {
    double x;
    double y;
};

struct CGRect {
    struct CGPoint origin;
    struct CGSize size;
};

struct CGSize {
    double width;
    double height;
};

struct CGVector {
    double _field1;
    double _field2;
};

struct ComponentInstanceRecord {
    long long _field1[1];
};

struct _NSRange {
    unsigned long long location;
    unsigned long long length;
};

struct mach_task_basic_info {
    unsigned long long virtual_size;
    unsigned long long resident_size;
    unsigned long long resident_size_max;
    struct time_value user_time;
    struct time_value system_time;
    int policy;
    int suspend_count;
};

struct os_unfair_lock_s {
    unsigned int _os_unfair_lock_opaque;
};

struct task_vm_info {
    unsigned long long virtual_size;
    int region_count;
    int page_size;
    unsigned long long resident_size;
    unsigned long long resident_size_peak;
    unsigned long long device;
    unsigned long long device_peak;
    unsigned long long internal;
    unsigned long long internal_peak;
    unsigned long long external;
    unsigned long long external_peak;
    unsigned long long reusable;
    unsigned long long reusable_peak;
    unsigned long long purgeable_volatile_pmap;
    unsigned long long purgeable_volatile_resident;
    unsigned long long purgeable_volatile_virtual;
    unsigned long long compressed;
    unsigned long long compressed_peak;
    unsigned long long compressed_lifetime;
    unsigned long long phys_footprint;
    unsigned long long min_address;
    unsigned long long max_address;
    long long ledger_phys_footprint_peak;
    long long ledger_purgeable_nonvolatile;
    long long ledger_purgeable_novolatile_compressed;
    long long ledger_purgeable_volatile;
    long long ledger_purgeable_volatile_compressed;
    long long ledger_tag_network_nonvolatile;
    long long ledger_tag_network_nonvolatile_compressed;
    long long ledger_tag_network_volatile;
    long long ledger_tag_network_volatile_compressed;
    long long ledger_tag_media_footprint;
    long long ledger_tag_media_footprint_compressed;
    long long ledger_tag_media_nofootprint;
    long long ledger_tag_media_nofootprint_compressed;
    long long ledger_tag_graphics_footprint;
    long long ledger_tag_graphics_footprint_compressed;
    long long ledger_tag_graphics_nofootprint;
    long long ledger_tag_graphics_nofootprint_compressed;
    long long ledger_tag_neural_footprint;
    long long ledger_tag_neural_footprint_compressed;
    long long ledger_tag_neural_nofootprint;
    long long ledger_tag_neural_nofootprint_compressed;
    unsigned long long limit_bytes_remaining;
    int decompressions;
};

struct time_value {
    int seconds;
    int microseconds;
};

struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
};

#pragma mark Typedef'd Structures

typedef struct {
    double *values;
    double scaleMinimum;
    double scaleMaximum;
    double valueMinimum;
    double valueMaximum;
    double count;
} CDStruct_79de6ffd;

typedef struct {
    int _field1;
    int _field2;
} CDStruct_1ef3fb1f;

typedef struct {
    long long _field1;
    int _field2;
    unsigned int _field3;
    long long _field4;
} CDStruct_198678f7;

typedef struct {
    struct {
        long long location;
        long long length;
    } range;
    unsigned long long attributes;
} CDStruct_573f6e06;

// Template types
typedef struct vector<int, std::__1::allocator<int>> {
    int *_field1;
    int *_field2;
    struct __compressed_pair<int *, std::__1::allocator<int>> {
        int *_field1;
    } _field3;
} vector_3203cf93;

