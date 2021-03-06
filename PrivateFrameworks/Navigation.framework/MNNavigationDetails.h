/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
 */

@interface MNNavigationDetails : NSObject {
    MNActiveRouteDetails * _activeRouteDetails;
    unsigned int  _closestStepIndex;
    NSString * _currentVoiceLanguage;
    NSString * _displayString;
    double  _distanceUntilManeuver;
    double  _distanceUntilSign;
    int  _guidanceLevel;
    BOOL  _guidancePromptsEnabled;
    GEONavigationGuidanceState * _guidanceState;
    int  _headingOrientation;
    BOOL  _isDetour;
    BOOL  _isNavigating;
    MNLocation * _location;
    int  _navigationState;
    double  _proceedToRouteDistance;
    unsigned int  _reconnectionRouteIndex;
    double  _remainingDistance;
    double  _remainingTime;
    GEOComposedRoute * _route;
    unsigned int  _routeIndex;
    MNRoutePlanningDetails * _routePlanningDetails;
    NSMutableDictionary * _routes;
    double  _timeUntilManeuver;
    double  _timeUntilSign;
    NSArray * _traceBookmarks;
    double  _traceDuration;
    BOOL  _traceIsPlaying;
    NSString * _tracePath;
    double  _tracePosition;
}

@property (nonatomic, retain) MNActiveRouteDetails *activeRouteDetails;
@property (nonatomic) unsigned int closestStepIndex;
@property (nonatomic, retain) NSString *currentVoiceLanguage;
@property (nonatomic, retain) NSString *displayString;
@property (nonatomic) double distanceUntilManeuver;
@property (nonatomic) double distanceUntilSign;
@property (nonatomic) int guidanceLevel;
@property (nonatomic) BOOL guidancePromptsEnabled;
@property (nonatomic, retain) GEONavigationGuidanceState *guidanceState;
@property (nonatomic) int headingOrientation;
@property (nonatomic) BOOL isDetour;
@property (nonatomic) BOOL isNavigating;
@property (nonatomic, readonly) unsigned int legIndex;
@property (nonatomic, retain) MNLocation *location;
@property (nonatomic) int navigationState;
@property (nonatomic, readonly) int navigationType;
@property (nonatomic) double proceedToRouteDistance;
@property (nonatomic, readonly) unsigned int reconnectionRouteIndex;
@property (nonatomic) double remainingDistance;
@property (nonatomic) double remainingTime;
@property (nonatomic, readonly) GEOComposedRoute *route;
@property (nonatomic, readonly) unsigned int routeIndex;
@property (nonatomic, retain) MNRoutePlanningDetails *routePlanningDetails;
@property (nonatomic, readonly) unsigned int stepIndex;
@property (nonatomic) double timeUntilManeuver;
@property (nonatomic) double timeUntilSign;
@property (nonatomic, retain) NSArray *traceBookmarks;
@property (nonatomic) double traceDuration;
@property (nonatomic) BOOL traceIsPlaying;
@property (nonatomic, copy) NSString *tracePath;
@property (nonatomic) double tracePosition;

- (void).cxx_destruct;
- (id)activeRouteDetails;
- (unsigned int)closestStepIndex;
- (id)currentVoiceLanguage;
- (id)displayString;
- (double)distanceUntilManeuver;
- (double)distanceUntilSign;
- (int)guidanceLevel;
- (BOOL)guidancePromptsEnabled;
- (id)guidanceState;
- (int)headingOrientation;
- (BOOL)isDetour;
- (BOOL)isNavigating;
- (unsigned int)legIndex;
- (id)location;
- (int)navigationState;
- (int)navigationType;
- (double)proceedToRouteDistance;
- (unsigned int)reconnectionRouteIndex;
- (double)remainingDistance;
- (double)remainingTime;
- (id)route;
- (id)routeForRouteDetailsID:(id)arg1;
- (unsigned int)routeIndex;
- (id)routePlanningDetails;
- (void)setActiveRouteDetails:(id)arg1;
- (void)setClosestStepIndex:(unsigned int)arg1;
- (void)setCurrentVoiceLanguage:(id)arg1;
- (void)setDisplayString:(id)arg1;
- (void)setDistanceUntilManeuver:(double)arg1;
- (void)setDistanceUntilSign:(double)arg1;
- (void)setGuidanceLevel:(int)arg1;
- (void)setGuidancePromptsEnabled:(BOOL)arg1;
- (void)setGuidanceState:(id)arg1;
- (void)setHeadingOrientation:(int)arg1;
- (void)setIsDetour:(BOOL)arg1;
- (void)setIsNavigating:(BOOL)arg1;
- (void)setLocation:(id)arg1;
- (void)setNavigationState:(int)arg1;
- (void)setProceedToRouteDistance:(double)arg1;
- (void)setRemainingDistance:(double)arg1;
- (void)setRemainingTime:(double)arg1;
- (void)setRoutePlanningDetails:(id)arg1;
- (void)setTimeUntilManeuver:(double)arg1;
- (void)setTimeUntilSign:(double)arg1;
- (void)setTraceBookmarks:(id)arg1;
- (void)setTraceDuration:(double)arg1;
- (void)setTraceIsPlaying:(BOOL)arg1;
- (void)setTracePath:(id)arg1;
- (void)setTracePosition:(double)arg1;
- (unsigned int)stepIndex;
- (double)timeUntilManeuver;
- (double)timeUntilSign;
- (id)traceBookmarks;
- (double)traceDuration;
- (BOOL)traceIsPlaying;
- (id)tracePath;
- (double)tracePosition;

@end
