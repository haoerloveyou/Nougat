#import <UIKit/UIKit.h>
#import "NUANotificationShadePageContentProvider.h"
#import "NUAStatusBarModuleController.h"
#import "NUABrightnessModuleController.h"
#import "NUATogglesModuleController.h"
#import "NUASettingsModuleController.h"

@interface NUAModulesContainerViewController : UIViewController <NUANotificationShadeModuleViewControllerDelegate, NUANotificationShadePageContentProvider> {
    NSMutableArray<NUANotificationShadeModuleViewController *> *_moduleList;
    UIStackView *_verticalStackView;
    NUAStatusBarModuleController *_statusBarModule;
    NUABrightnessModuleController *_brightnessModule;
    NUATogglesModuleController *_togglesModule;
    NUASettingsModuleController *_settingsModule;
}

@property (weak, nonatomic) id<NUANotificationShadePageContentViewControllerDelegate> delegate;
@property (assign, nonatomic) CGFloat presentedHeight;

- (void)moduleWantsNotificationShadeDismissal:(NUANotificationShadeModuleViewController *)module completely:(BOOL)completely;

@end
