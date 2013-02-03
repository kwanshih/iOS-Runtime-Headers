/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

@class NSURL, NSString, SAPersonAttribute;

@interface SAPhoneCall : SABaseClientBoundCommand {
}

@property(retain) SAPersonAttribute * callRecipient;
@property BOOL faceTime;
@property(copy) NSString * recipient;
@property(copy) NSURL * targetAppId;

+ (id)call;
+ (id)callWithDictionary:(id)arg1 context:(id)arg2;

- (id)callRecipient;
- (id)encodedClassName;
- (BOOL)faceTime;
- (id)groupIdentifier;
- (id)recipient;
- (BOOL)requiresResponse;
- (void)setCallRecipient:(id)arg1;
- (void)setFaceTime:(BOOL)arg1;
- (void)setRecipient:(id)arg1;
- (void)setTargetAppId:(id)arg1;
- (id)targetAppId;

@end