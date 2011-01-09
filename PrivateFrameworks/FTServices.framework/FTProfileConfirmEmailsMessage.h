/* Generated by RuntimeBrowser on iPhone OS 4.1
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class NSString;



@interface FTProfileConfirmEmailsMessage : FTProfileMessage 
{
    NSString *_emailAddress;
    NSString *_vettingToken;
}

@property(copy) NSString *emailAddress;
@property(copy) NSString *vettingToken;


- (id)vettingToken;
- (void)setVettingToken:(id)arg1;
- (id)requiredKeys;
- (id)emailAddress;
- (void)setEmailAddress:(id)arg1;
- (void)dealloc;
- (id)messageBody;
- (id)bagKey;

@end