/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/WebKit.framework/WebKit
 */

@class <WebInspectorXPCWrapperDelegate>, NSObject<OS_xpc_object>, NSString;

@interface WebInspectorXPCWrapper : NSObject {
    NSObject<OS_xpc_object> *_connection;
    NSObject<OS_xpc_object> *_currentMessage;
    <WebInspectorXPCWrapperDelegate> *_delegate;
    NSString *_tag;
}

@property(readonly) BOOL available;
@property NSObject<OS_xpc_object> * connection;
@property NSObject<OS_xpc_object> * currentMessage;
@property <WebInspectorXPCWrapperDelegate> * delegate;
@property(copy) NSString * tag;

- (id)_deserializeMessage:(id)arg1;
- (void)_handleEvent:(id)arg1;
- (BOOL)available;
- (void)barrierWithCompletionHandler:(id)arg1;
- (void)close;
- (id)connection;
- (id)currentMessage;
- (void)dealloc;
- (id)delegate;
- (id)initWithConnection:(id)arg1;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2 replyHandler:(id)arg3;
- (void)sendMessage:(id)arg1 userInfo:(id)arg2;
- (void)setConnection:(id)arg1;
- (void)setCurrentMessage:(id)arg1;
- (void)setDelegate:(id)arg1;
- (void)setTag:(id)arg1;
- (id)tag;

@end
