/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutput.framework/ScreenReaderOutput
 */

@class NSSet, NSMutableDictionary;

@interface SCROMobileBrailleDisplayInputManager : NSObject {
    NSSet *_brailleKeys;
    NSMutableDictionary *_displayInfoDict;
}

+ (id)allocWithZone:(struct _NSZone { }*)arg1;
+ (void)initialize;
+ (id)sharedManager;

- (id)autorelease;
- (id)buttonNamesAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)buttonNamesForInputIdentifier:(id)arg1 forDisplayWithToken:(long)arg2;
- (id)commandAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)commandForBrailleKey:(id)arg1;
- (void)configureWithDriverConfiguration:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (NSUInteger)countForDisplayWithToken:(long)arg1;
- (void)dealloc;
- (id)driverIdentifierForDisplayWithToken:(long)arg1;
- (id)init;
- (id)inputIdentifierAtIndex:(NSUInteger)arg1 forDisplayWithToken:(long)arg2;
- (id)modelIdentifierForDisplayWithToken:(long)arg1;
- (void)release;
- (id)retain;
- (NSUInteger)retainCount;

@end