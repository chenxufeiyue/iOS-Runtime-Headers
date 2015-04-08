/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/GameController.framework/GameController
 */

/* RuntimeBrowser encountered an ivar type encoding it does not handle. 
   See Warning(s) below.
 */

@class <GameControllerDaemon>, NSMutableDictionary, NSObject<OS_dispatch_queue>, NSString, NSTimer, NSXPCConnection;

@interface GCControllerManager : NSObject <GameControllerDaemonListener> {
    NSXPCConnection *_connection;
    NSMutableDictionary *_controllersByUDID;
    NSObject<OS_dispatch_queue> *_controllersQueue;
    struct __IOHIDManager { } *_hidManager;
    BOOL _idleTimerNeedsReset;
    NSTimer *_idleWatchTimer;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _logger;

    <GameControllerDaemon> *_remote;

  /* Unexpected information at end of encoded ivar type: ? */
  /* Error parsing encoded ivar type info: @? */
    id _requestConnectedHostsCallback;

    unsigned int _usbAddedIterator;
    struct IONotificationPort { } *_usbNotify;
    unsigned int _usbRemovedIterator;
}

@property(retain) NSXPCConnection * connection;
@property(copy,readonly) NSString * debugDescription;
@property(copy,readonly) NSString * description;
@property(readonly) unsigned int hash;
@property struct __IOHIDManager { }* hidManager;
@property BOOL idleTimerNeedsReset;
@property(copy) id logger;
@property(retain) <GameControllerDaemon> * remote;
@property(readonly) Class superclass;

- (void).cxx_destruct;
- (void)addController:(id)arg1;
- (id)connection;
- (void)controllerWithUDID:(unsigned int)arg1 setArrayValue:(struct { float x1[4]; })arg2 forElement:(int)arg3;
- (void)controllerWithUDID:(unsigned int)arg1 setData:(id)arg2;
- (void)controllerWithUDID:(unsigned int)arg1 setValue:(float)arg2 forElement:(int)arg3;
- (id)controllers;
- (void)dealloc;
- (struct __IOHIDManager { }*)hidManager;
- (BOOL)idleTimerNeedsReset;
- (id)init;
- (id)logger;
- (void)open;
- (id)remote;
- (void)removeController:(id)arg1;
- (void)replyConnectedHosts:(id)arg1;
- (void)requestConnectedHostsWithHandler:(id)arg1;
- (void)setConnection:(id)arg1;
- (void)setHidManager:(struct __IOHIDManager { }*)arg1;
- (void)setIdleTimerNeedsReset:(BOOL)arg1;
- (void)setLogger:(id)arg1;
- (void)setRemote:(id)arg1;
- (void)startIdleWatchTimer;
- (void)updateIdleTimer:(id)arg1;

@end