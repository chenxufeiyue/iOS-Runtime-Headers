/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
 */

@interface AVPlayTimecodeMonitorOutputConsumer : AVPlayVideoOutputConsumer {
    struct tm { 
        int tm_sec; 
        int tm_min; 
        int tm_hour; 
        int tm_mday; 
        int tm_mon; 
        int tm_year; 
        int tm_wday; 
        int tm_yday; 
        int tm_isdst; 
        long tm_gmtoff; 
        char *tm_zone; 
    }  _lastTimecodeSeen;
    long  _lastVariantIndexSeen;
    struct ACBSConfig { } * quaggaConfig;
}

@property (nonatomic, readonly) struct tm { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; long x10; char *x11; } lastTimecodeSeen;
@property (nonatomic, readonly) long lastVariantIndexSeen;

- (void)dealloc;
- (void)doSomethingInterestingWithBuffer:(struct __CVBuffer { }*)arg1;
- (void)doSomethingInterestingWithString:(id)arg1 andIndex:(id)arg2;
- (id)init;
- (id)initWithPixelBufferAttributes:(id)arg1;
- (struct tm { int x1; int x2; int x3; int x4; int x5; int x6; int x7; int x8; int x9; long x10; char *x11; })lastTimecodeSeen;
- (long)lastVariantIndexSeen;

@end