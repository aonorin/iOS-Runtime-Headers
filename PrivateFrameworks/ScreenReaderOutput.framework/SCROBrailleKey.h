/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSMutableArray, NSString;

@interface SCROBrailleKey : NSObject <NSCoding> {
    id _appToken;
    NSInteger _displayToken;
    BOOL _hasRouterInfo;
    NSString *_identifier;
    NSMutableArray *_maskArray;
    NSInteger _routerIndex;
    NSInteger _routerLocation;
    NSInteger _routerToken;
}

- (void)addKeyMask:(unsigned long)arg1;
- (void)dealloc;
- (id)description;
- (long)displayToken;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)getRouterIndex:(NSInteger*)arg1 token:(NSInteger*)arg2 location:(NSInteger*)arg3 appToken:(id*)arg4;
- (id)identifier;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)keyMasks;
- (void)setDisplayToken:(long)arg1;
- (void)setRouterIndex:(long)arg1 token:(NSInteger)arg2 location:(long)arg3 appToken:(id)arg4;

@end