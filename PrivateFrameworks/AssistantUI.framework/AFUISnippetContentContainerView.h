/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AssistantUI.framework/AssistantUI
 */

@class AFUIPerforatedBackgroundView, UIView;

@interface AFUISnippetContentContainerView : UIView <AFUISnippetPaperViewDelegate> {
    BOOL _backgroundIsPaper;
    BOOL _backgroundNeedsRegeneration;
    UIView *_backgroundView;
    BOOL _perforated;
    AFUIPerforatedBackgroundView *_perforatedBackground;
    UIView *_userContent;
}

@property(retain) UIView * backgroundView;
@property BOOL perforatedEdges;
@property(retain) UIView * userContent;

- (void).cxx_destruct;
- (void)_regeneratePerforatedBackground;
- (id)backgroundView;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (void)paperViewPropertyChanged:(id)arg1;
- (BOOL)perforatedEdges;
- (void)setBackgroundView:(id)arg1;
- (void)setPerforatedEdges:(BOOL)arg1;
- (void)setUserContent:(id)arg1;
- (struct CGSize { float x1; float x2; })sizeThatFits:(struct CGSize { float x1; float x2; })arg1;
- (id)userContent;

@end
