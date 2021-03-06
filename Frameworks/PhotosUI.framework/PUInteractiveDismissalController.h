/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
 */

@interface PUInteractiveDismissalController : NSObject {
    <PUInterruptibleViewControllerTransition> * __interruptibleViewControllerTransition;
    BOOL  __needsUpdateGestureRecognizers;
    UIViewController * __viewController;
    UIView * __viewHostingGestureRecognizers;
    <PUInteractiveDismissalControllerDelegate> * _delegate;
    struct { 
        BOOL respondsToCanBeginDismissalAtLocationFromProvider; 
        BOOL respondsToTilingView; 
        BOOL respondsToDesignatedTileController; 
    }  _delegateFlags;
}

@property (setter=_setInterruptibleViewControllerTransition:, nonatomic, retain) <PUInterruptibleViewControllerTransition> *_interruptibleViewControllerTransition;
@property (setter=_setNeedsUpdateGestureRecognizers:, nonatomic) BOOL _needsUpdateGestureRecognizers;
@property (setter=_setViewController:, nonatomic) UIViewController *_viewController;
@property (setter=_setViewHostingGestureRecognizers:, nonatomic, retain) UIView *_viewHostingGestureRecognizers;
@property (nonatomic) <PUInteractiveDismissalControllerDelegate> *delegate;
@property (nonatomic, readonly) PUTileController *designatedTileController;
@property (nonatomic, readonly) PUTilingView *tilingView;
@property (nonatomic, readonly) <PUTilingViewControllerTransition> *tilingViewControllerTransition;

- (void).cxx_destruct;
- (id)_interruptibleViewControllerTransition;
- (void)_invalidateGestureRecognizers;
- (void)_invalidateInterruptibleViewControllerTransition;
- (void)_invalidateViewController;
- (void)_invalidateViewHostingGestureRecognizers;
- (BOOL)_needsUpdateGestureRecognizers;
- (int)_preferredDismissalTransitionType;
- (void)_setInterruptibleViewControllerTransition:(id)arg1;
- (void)_setNeedsUpdateGestureRecognizers:(BOOL)arg1;
- (void)_setViewController:(id)arg1;
- (void)_setViewHostingGestureRecognizers:(id)arg1;
- (void)_updateGestureRecognizersIfNeeded;
- (void)_updateIfNeeded;
- (void)_updateInterruptibleViewControllerTransitionIfNeeded;
- (void)_updateViewControllerIfNeeded;
- (void)_updateViewHostingGestureRecognizersIfNeeded;
- (id)_viewController;
- (id)_viewHostingGestureRecognizers;
- (void)beginDismissal;
- (BOOL)canBeginDismissalAtLocationFromProvider:(id)arg1;
- (id)delegate;
- (id)designatedTileController;
- (void)endDismissal:(BOOL)arg1;
- (void)invalidateDelegateData;
- (void)setDelegate:(id)arg1;
- (id)tilingView;
- (id)tilingViewControllerTransition;
- (void)updateDismissalWithInteractionProgress:(float)arg1 interactionWillFinish:(BOOL)arg2;
- (void)updateGestureRecognizersWithHostingView:(id)arg1;

@end
