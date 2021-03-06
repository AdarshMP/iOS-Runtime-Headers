/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
 */

@interface TLVibrationRecorderTouchSurfaceRecordedDataWrapper : NSObject {
    BOOL _displayLinkHasRefreshedAtLeastOnce;
    BOOL _hasActuallyStartedRecording;
    unsigned int _maximumFramesPerSecondRate;
    void *_recordedData;
    unsigned long _recordedDataCursor;
    unsigned long _recordedDataElementsCount;
    double _startTime;
    double _vibrationPatternMaximumDuration;
    BOOL _warmUpMode;
}

- (void)_prepareRecordedDataBufferForStoringEnoughElementsForRecordingDuration:(double)arg1 maximumFramesPerSecondsRate:(unsigned int)arg2;
- (void)_recordFinalDataWithTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(int)arg2 timeIntervalSinceBeginningOfPattern:(double)arg3;
- (void)_updateMaximumFramesPerSecondRate:(id)arg1;
- (void)dealloc;
- (void)didStopRecording;
- (BOOL)getTouchLocation:(struct CGPoint { float x1; float x2; }*)arg1 touchPhase:(int*)arg2 forTimeInterval:(double)arg3;
- (id)initWithVibrationPatternMaximumDuration:(double)arg1;
- (void)recordTouchLocation:(struct CGPoint { float x1; float x2; })arg1 touchPhase:(int)arg2;

@end
