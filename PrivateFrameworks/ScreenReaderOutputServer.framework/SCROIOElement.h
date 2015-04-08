/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ScreenReaderOutputServer.framework/ScreenReaderOutputServer
 */

@class NSString;

@interface SCROIOElement : NSObject <NSCopying, SCROIOElementProtocol> {
    long _identifier;
    unsigned int _ioObject;
}

@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property(readonly) Class superclass;

- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (unsigned int)hash;
- (long)identifier;
- (id)initWithIOObject:(unsigned int)arg1;
- (unsigned int)ioObject;
- (BOOL)isEqual:(id)arg1;
- (int)transport;

@end