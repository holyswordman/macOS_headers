//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Jun  9 2015 22:53:21).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2014 by Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VK3DObjectGroup : NSObject
{
    struct unique_ptr<ggl::MeshVendor<ggl::Building::BuildingMesh>, std::__1::default_delete<ggl::MeshVendor<ggl::Building::BuildingMesh>>> _meshVendor;
    shared_ptr_6e6219d6 _styleQuery;
    _Bool _hasBounds;
    Box_7ca49197 _bounds;
}

@property(readonly, nonatomic) Box_7ca49197 bounds; // @synthesize bounds=_bounds;
@property(nonatomic) shared_ptr_6e6219d6 styleQuery; // @synthesize styleQuery=_styleQuery;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addBoundingBox:(Box_7ca49197)arg1;
- (id)initWithStyleQuery:(shared_ptr_6e6219d6)arg1;
@property(readonly, nonatomic) MeshVendor_3faa0a72 *meshVendor;

@end

