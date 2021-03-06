#import <UIKit/UIKit.h>

@protocol NUANotificationShadePageContentViewControllerDelegate <NSObject>
@required

- (void)contentViewControllerWantsDismissal:(UIViewController *)contentViewController completely:(BOOL)completely;
- (void)contentViewControllerWantsExpansion:(UIViewController *)contentViewController;

@end

@protocol NUANotificationShadePageContentProvider <NSObject>
@property (weak, nonatomic) id<NUANotificationShadePageContentViewControllerDelegate> delegate;
@property (assign, nonatomic) CGFloat presentedHeight;

@required
- (void)setPresentedHeight:(CGFloat)height;
- (CGFloat)presentedHeight;

- (void)setDelegate:(id<NUANotificationShadePageContentViewControllerDelegate>)delegate;
- (id<NUANotificationShadePageContentViewControllerDelegate>)delegate;

@end