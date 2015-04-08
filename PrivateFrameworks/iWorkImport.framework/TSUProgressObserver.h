/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class NSObject<OS_dispatch_queue>;

@interface TSUProgressObserver : NSObject {

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id mHandler;

    BOOL mLastHandledIndeterminate;
    double mLastHandledValue;
    NSObject<OS_dispatch_queue> *mQueue;
    double mValueInterval;
}

@property(readonly) double valueInterval;

- (void)dealloc;
- (void)handleValue:(double)arg1 maxValue:(double)arg2 isIndeterminate:(BOOL)arg3;
- (id)init;
- (id)initWithValueInterval:(double)arg1 queue:(id)arg2 handler:(id)arg3;
- (double)valueInterval;

@end