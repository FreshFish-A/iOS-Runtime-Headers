/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FTServices.framework/FTServices
 */

@class FTMessageQueue, NSArray, NSString, FTMessage, NSNumber, IMTimer;

@interface FTMessageDelivery : NSObject <FTMessageQueueDelegate> {
    unsigned int _maxConcurrentMessages;
    NSNumber *_protocolVersion;
    FTMessageQueue *_queue;
    unsigned int _retries;
    BOOL _retryInAirplaneMode;
    IMTimer *_timer;
    NSString *_userAgent;
}

@property(readonly) BOOL busy;
@property(readonly) FTMessage * currentMessage;
@property(readonly) BOOL hasQueuedItems;
@property unsigned int maxConcurrentMessages;
@property(readonly) int maxMessageSize;
@property(copy) NSNumber * protocolVersion;
@property(readonly) NSArray * queuedMessages;
@property BOOL retryInAirplaneMode;
@property(copy) NSString * userAgent;

+ (Class)APNSMessageDeliveryClass;
+ (Class)HTTPMessageDeliveryClass;
+ (id)_errorForTDMessageDeliveryStatus:(int)arg1 userInfo:(id)arg2;
+ (id)alloc;

- (void)_clearRetryTimer;
- (void)_informDelegateAboutMessage:(id)arg1 error:(id)arg2 result:(id)arg3 resultCode:(int)arg4;
- (id)_queue;
- (void)_retryTimerHit:(id)arg1;
- (BOOL)_sendMessageAsynchronously:(id)arg1 error:(id*)arg2;
- (void)_setRetryTimer:(double)arg1;
- (BOOL)busy;
- (void)cancelMessage:(id)arg1;
- (id)currentMessage;
- (void)dealloc;
- (BOOL)hasQueuedItems;
- (id)init;
- (void)invalidate;
- (unsigned int)maxConcurrentMessages;
- (int)maxMessageSize;
- (id)protocolVersion;
- (void)queue:(id)arg1 hitTimeoutForMessage:(id)arg2;
- (id)queuedMessages;
- (BOOL)retryInAirplaneMode;
- (BOOL)sendMessage:(id)arg1;
- (void)setMaxConcurrentMessages:(unsigned int)arg1;
- (void)setProtocolVersion:(id)arg1;
- (void)setRetryInAirplaneMode:(BOOL)arg1;
- (void)setUserAgent:(id)arg1;
- (id)userAgent;

@end