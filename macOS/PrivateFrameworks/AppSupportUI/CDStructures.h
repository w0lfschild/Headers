//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#pragma mark Named Structures

struct CGPoint {
    double _field1;
    double _field2;
};

struct CGRect {
    struct CGPoint _field1;
    struct CGSize _field2;
};

struct CGSize {
    double width;
    double height;
};

struct NSEdgeInsets {
    double top;
    double left;
    double bottom;
    double right;
};

struct _NSRange {
    unsigned long long _field1;
    unsigned long long _field2;
};

struct _NUIGridArrangement {
    id container;
    char baselineRelative;
    long long horzDist;
    long long vertDist;
    vector_f7a18e83 cells;
    vector_29d414c0 columns;
    vector_29d414c0 rows;
};

struct _NUIGridArrangementCell;

struct _NUIGridArrangementDimension;

struct _NUIGridViewDimensionConfiguration;

struct __hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>;

struct __hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>;

struct nui_size_cache {
    struct __tree<std::__1::__value_type<long, CGSize>, std::__1::__map_value_compare<long, std::__1::__value_type<long, CGSize>, std::__1::less<long>, true>, std::__1::allocator<std::__1::__value_type<long, CGSize>>> {
        struct __tree_node<std::__1::__value_type<long, CGSize>, void *> *__begin_node_;
        struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *>*>, std::__1::allocator<std::__1::__tree_node<std::__1::__value_type<long, CGSize>, void *>>> {
            struct __tree_end_node<std::__1::__tree_node_base<void *>*> {
                struct __tree_node_base<void *> *__left_;
            } __first_;
        } __pair1_;
        struct __compressed_pair<unsigned long, std::__1::__map_value_compare<long, std::__1::__value_type<long, CGSize>, std::__1::less<long>, true>> {
            unsigned long long __first_;
        } __pair3_;
    } __tree_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>>> {
    struct __compressed_pair<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>**, std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>>> {
        struct __hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *> **__first_;
        struct __bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>> {
            struct __compressed_pair<unsigned long, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>> {
                unsigned long long __first_;
            } __data_;
        } __second_;
    } __ptr_;
};

struct unordered_map<NSView *, const std::__1::pair<_NSRange, _NSRange>, std::__1::hash<NSView *>, std::__1::equal_to<NSView *>, std::__1::allocator<std::__1::pair<NSView *const, const std::__1::pair<_NSRange, _NSRange>>>> {
    struct __hash_table<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::__unordered_map_hasher<NSView *, std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<NSView *>, true>, std::__1::__unordered_map_equal<NSView *, std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<NSView *>, true>, std::__1::allocator<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<NSView *, std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::hash<NSView *>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<NSView *, std::__1::__hash_value_type<NSView *, const std::__1::pair<_NSRange, _NSRange>>, std::__1::equal_to<NSView *>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct unordered_map<const NSView *, nui_size_cache, std::__1::hash<const NSView *>, std::__1::equal_to<const NSView *>, std::__1::allocator<std::__1::pair<const NSView *const, nui_size_cache>>> {
    struct __hash_table<std::__1::__hash_value_type<const NSView *, nui_size_cache>, std::__1::__unordered_map_hasher<const NSView *, std::__1::__hash_value_type<const NSView *, nui_size_cache>, std::__1::hash<const NSView *>, true>, std::__1::__unordered_map_equal<const NSView *, std::__1::__hash_value_type<const NSView *, nui_size_cache>, std::__1::equal_to<const NSView *>, true>, std::__1::allocator<std::__1::__hash_value_type<const NSView *, nui_size_cache>>> {
        struct unique_ptr<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*[], std::__1::__bucket_list_deallocator<std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>>> __bucket_list_;
        struct __compressed_pair<std::__1::__hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*>, std::__1::allocator<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>>> {
            struct __hash_node_base<std::__1::__hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *>*> {
                struct __hash_node<std::__1::__hash_value_type<const NSView *, nui_size_cache>, void *> *__next_;
            } __first_;
        } __p1_;
        struct __compressed_pair<unsigned long, std::__1::__unordered_map_hasher<const NSView *, std::__1::__hash_value_type<const NSView *, nui_size_cache>, std::__1::hash<const NSView *>, true>> {
            unsigned long long __first_;
        } __p2_;
        struct __compressed_pair<float, std::__1::__unordered_map_equal<const NSView *, std::__1::__hash_value_type<const NSView *, nui_size_cache>, std::__1::equal_to<const NSView *>, true>> {
            float __first_;
        } __p3_;
    } __table_;
};

struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__first_;
    } __end_cap_;
};

struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__first_;
    } __end_cap_;
};

struct vector<_NUIGridViewDimensionConfiguration, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
    struct _NUIGridViewDimensionConfiguration *__begin_;
    struct _NUIGridViewDimensionConfiguration *__end_;
    struct __compressed_pair<_NUIGridViewDimensionConfiguration *, std::__1::allocator<_NUIGridViewDimensionConfiguration>> {
        struct _NUIGridViewDimensionConfiguration *__first_;
    } __end_cap_;
};

struct vector<double, std::__1::allocator<double>> {
    double *__begin_;
    double *__end_;
    struct __compressed_pair<double *, std::__1::allocator<double>> {
        double *__first_;
    } __end_cap_;
};

#pragma mark Typedef'd Structures

// Template types
typedef struct vector<_NUIGridArrangementCell, std::__1::allocator<_NUIGridArrangementCell>> {
    struct _NUIGridArrangementCell *__begin_;
    struct _NUIGridArrangementCell *__end_;
    struct __compressed_pair<_NUIGridArrangementCell *, std::__1::allocator<_NUIGridArrangementCell>> {
        struct _NUIGridArrangementCell *__first_;
    } __end_cap_;
} vector_f7a18e83;

typedef struct vector<_NUIGridArrangementDimension, std::__1::allocator<_NUIGridArrangementDimension>> {
    struct _NUIGridArrangementDimension *__begin_;
    struct _NUIGridArrangementDimension *__end_;
    struct __compressed_pair<_NUIGridArrangementDimension *, std::__1::allocator<_NUIGridArrangementDimension>> {
        struct _NUIGridArrangementDimension *__first_;
    } __end_cap_;
} vector_29d414c0;

