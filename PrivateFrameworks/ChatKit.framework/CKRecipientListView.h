/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
 */

@class CKAtomListView, NSArray, UIImageView, UIScrollView;

@interface CKRecipientListView : UIView <CKOverlayViewProtocol> {
    struct CGSize { 
        float width; 
        float height; 
    } _contentSize;
    id _delegate;
    UIScrollView *_recipientScrollView;
    UIImageView *_recipientSeparatorShadow;
    NSArray *_recipients;
    int _style;
    CKAtomListView *_toField;
}

@property(readonly) struct CGSize { float x1; float x2; } contentSize;
@property id delegate;
@property(readonly) NSArray * recipients;
@property(getter=isSeparatorShadowHidden) BOOL separatorShadowHidden;
@property int style;

+ (float)separatorHeight;

- (void)_adjustContentSize;
- (void)_clearToField;
- (void)_setupToField;
- (void)addressAtomClicked:(id)arg1;
- (void)atomListView:(id)arg1 contentSizeDidChange:(struct CGSize { float x1; float x2; })arg2;
- (struct CGSize { float x1; float x2; })contentSize;
- (void)dealloc;
- (id)delegate;
- (float)heightWithoutSeparator;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 toFieldRecipients:(id)arg2 style:(int)arg3 delegate:(id)arg4;
- (BOOL)isSeparatorShadowHidden;
- (void)layoutSubviews;
- (id)recipients;
- (void)setDelegate:(id)arg1;
- (void)setExpanded:(BOOL)arg1 animate:(BOOL)arg2;
- (void)setSeparatorShadowHidden:(BOOL)arg1;
- (void)setStyle:(int)arg1;
- (int)style;
- (void)timerFired:(id)arg1;

@end
