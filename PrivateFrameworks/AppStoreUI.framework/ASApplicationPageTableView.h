/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AppStoreUI.framework/AppStoreUI
 */

@class UIEvent, UIView;

@interface ASApplicationPageTableView : SUTableView {
    UIEvent *_resetEventAfterAnimation;
    UIView *_screenshotsView;
    BOOL _snapLocked;
    float _snapToBottomY;
}

@property(retain) UIView * screenshotsView;
@property float snapToBottomY;

- (void)_reenableScrolling;
- (void)_safeResetScrollingWithUIEvent:(id)arg1;
- (void)_snapIntoPlaceIfNeededForEvent:(id)arg1;
- (void)dealloc;
- (void)resetAfterAnimation;
- (id)screenshotsView;
- (void)screenshotsViewBeganScroll:(id)arg1;
- (void)setContentOffset:(struct CGPoint { float x1; float x2; })arg1;
- (void)setScreenshotsView:(id)arg1;
- (void)setSnapToBottomY:(float)arg1;
- (float)snapToBottomY;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end
