#import <UIKit/UIKit.h>
#import "NUANotificationShadePageContentProvider.h"
#import "NUANotificationShadePanelView.h"

@class NUANotificationShadePageContainerViewController;

@protocol NUANotificationShadePageContainerViewControllerDelegate <NSObject>
@required

- (void)containerViewControllerWantsDismissal:(NUANotificationShadePageContainerViewController *)containerViewController completely:(BOOL)completely;
- (void)containerViewControllerWantsExpansion:(NUANotificationShadePageContainerViewController *)containerViewController;

@end

@interface NUANotificationShadePageContainerViewController : UIViewController <NUANotificationShadePageContentViewControllerDelegate>
@property (weak, nonatomic) id<NUANotificationShadePageContainerViewControllerDelegate> delegate;
@property (readonly, nonatomic) UIViewController<NUANotificationShadePageContentProvider> *contentViewController;
@property (nonatomic) CGFloat presentedHeight;

- (instancetype)initWithContentViewController:(UIViewController<NUANotificationShadePageContentProvider> *)viewController andDelegate:(id<NUANotificationShadePageContainerViewControllerDelegate>)delegate;

- (NUANotificationShadePanelView *)_panelView;

@end