/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/NearField.framework/NearField
 */

@interface NFReaderSession : NFSession <NFReaderSessionCallbacks> {
    NFWeakReference * _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property <NFReaderSessionDelegate> *delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (bool)checkNdefSupportsRead:(bool*)arg1 andWrite:(bool*)arg2;
- (bool)checkPresence;
- (bool)connectTag:(id)arg1;
- (void)dealloc;
- (id)delegate;
- (void)didDetectTags:(id)arg1;
- (void)didEndUnexpectedly;
- (bool)disconnectTag;
- (void)endSession;
- (id)felicaState;
- (id)felicaStateForSystemCode:(id)arg1 withRequestService:(id)arg2 withBlockReadList:(id)arg3 performSearchServiceCode:(bool)arg4;
- (bool)formatNdefWithKey:(id)arg1;
- (id)ndefRead;
- (bool)ndefWrite:(id)arg1;
- (unsigned int)runScript:(id)arg1 results:(id*)arg2 lastStatus:(unsigned long long*)arg3;
- (void)setDelegate:(id)arg1;
- (bool)startPolling;
- (bool)stopPolling;
- (id)transceive:(id)arg1;

@end
