#import <UIKit/UIKit.h>
#import "NUABrightnessSectionController.h"
#import "headers.h"

//TODO: make UIScrollView for more than one page of toggles?
@interface NUADrawerPanel : UIView {
    NUABrightnessSectionController *_brightnessSection;
}

@property (strong, readonly, nonatomic) NSMutableArray *toggleArray;

- (void)refreshTogglePanel;

@end
