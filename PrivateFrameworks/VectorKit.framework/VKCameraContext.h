/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VectorKit.framework/VectorKit
 */

@class VKPuckAnimatorLocationProjector;

@interface VKCameraContext : NSObject {
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct { 
        double latitude; 
        double longitude; 
    struct vector<GEOLocationCoordinate2D, std::__1::allocator<GEOLocationCoordinate2D> > { 
        struct { /* ? */ } *__begin_; 
        struct { /* ? */ } *__end_; 
        struct __compressed_pair<GEOLocationCoordinate2D *, std::__1::allocator<GEOLocationCoordinate2D> > { 
            struct { /* ? */ } *__first_; 
        } __end_cap_; 
    long long _courseSource;
    } _courseTargetLocation;
    int _focusStyle;
    double _heading;
    double _lastCameraFocusCourse;
    VKPuckAnimatorLocationProjector *_locationProjector;
    } _pointOfFocus;
    } _pointOfReference;
    } _pois;
    int _style;
    double _verticalGroundspanScale;
    bool_allowVerticalPanning;
    bool_animated;
    bool_applied;
}

@property(readonly) bool allowVerticalPanning;
@property(readonly) bool animated;
@property bool applied;
@property long long courseSource;
@property struct { double x1; double x2; } courseTargetLocation;
@property int focusStyle;
@property(readonly) double heading;
@property(readonly) struct { double x1; double x2; } pointOfFocus;
@property(readonly) struct { double x1; double x2; } pointOfReference;
@property int style;
@property(readonly) double verticalGroundspanScale;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_setPointOfReference:(struct { double x1; double x2; })arg1 heading:(double)arg2 routeMatch:(id)arg3 onRoute:(bool)arg4;
- (void)_updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(bool)arg3 speedMultiplier:(double)arg4 onRoute:(bool)arg5 animated:(bool)arg6 defaultCourse:(double)arg7;
- (void)addPointOfInterest:(struct { double x1; double x2; })arg1;
- (bool)allowVerticalPanning;
- (bool)animated;
- (bool)applied;
- (void)clearPointsOfInterest;
- (long long)courseSource;
- (struct { double x1; double x2; })courseTargetLocation;
- (void)dealloc;
- (id)description;
- (void)enumeratePointsOfInterestUsingBlock:(id)arg1;
- (int)focusStyle;
- (double)heading;
- (id)init;
- (struct { double x1; double x2; })pointOfFocus;
- (struct { double x1; double x2; })pointOfReference;
- (void)setApplied:(bool)arg1;
- (void)setCourseSource:(long long)arg1;
- (void)setCourseTargetLocation:(struct { double x1; double x2; })arg1;
- (void)setFocusStyle:(int)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)updateForLocation:(id)arg1 routeMatch:(id)arg2 isRouteMatch:(bool)arg3 speedMultiplier:(double)arg4 onRoute:(bool)arg5 animated:(bool)arg6;
- (double)verticalGroundspanScale;

@end