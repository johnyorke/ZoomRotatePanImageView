#import <UIKit/UIKit.h>
#import <RMShapedImageView.h>

@protocol ZoomRotatePanImageViewDelegate;

@interface ZoomRotatePanImageView : RMShapedImageView <UIGestureRecognizerDelegate> {
    
@protected
    UIPinchGestureRecognizer *_pinchRecogniser;
    UIRotationGestureRecognizer *_rotateRecogniser;
    UIPanGestureRecognizer *_panRecogniser;
    UITapGestureRecognizer *_tapRecogniser;
    UITapGestureRecognizer *_doubleTapRecogniser;
}

@property (nonatomic, weak) id <ZoomRotatePanImageViewDelegate> delegate;

- (void) reset;
- (void) resetWithAnimation:(BOOL)animation;

@end

@protocol ZoomRotatePanImageViewDelegate

- (void)zoomRotatePanImageViewWillMove:(ZoomRotatePanImageView *)view;

- (void)zoomRotatePanImageViewWasRemovedFromCanvas:(ZoomRotatePanImageView *)view;

@end
