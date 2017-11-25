#import <objc/runtime.h>
#import <BackBoardServices/BKSDisplayBrightness.h>
#import <QuartzCore/QuartzCore.h>
#import <SpringBoard/SBNotificationCenterController.h>
#import <SpringBoard/SBMainDisplaySystemGestureManager.h>
#import <SpringBoard/SBScreenEdgePanGestureRecognizer.h>
#import <SpringBoard/SBUIController.h>
#import <SpringBoard/SBWiFiManager.h>
#import <SpringBoard/SpringBoard.h>
#import <UIKit/_UIBackdropViewSettings.h>
#import <UIKit/_UIBackdropView.h>
#import <UIKit/UIKit.h>
#import <version.h>

#define kScreenWidth CGRectGetMaxX([UIScreen mainScreen].bounds)
#define kScreenHeight CGRectGetMaxY([UIScreen mainScreen].bounds)

#define NexusDarkColor [UIColor colorWithRed:0.15 green:0.20 blue:0.22 alpha:1.0]
#define NexusTintColor [UIColor colorWithRed:0.39 green:1.00 blue:0.85 alpha:1.0]
#define PixelDarkColor [UIColor colorWithRed:0.13 green:0.13 blue:0.13 alpha:1.0]
#define PixelTintColor [UIColor colorWithRed:0.27 green:0.54 blue:1.00 alpha:1.0]
#define NougatLabelColor [UIColor colorWithRed:0.33 green:0.43 blue:0.48 alpha:1.0]

@interface UIWindow (Private)
@property (getter=_isSecure, setter=_setSecure:) BOOL _secure;
@end
