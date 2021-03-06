#import <UIKit/UIKit.h>
#import "NUAFlipswitchToggle.h"

@interface NUATogglesContentView : UIView {
    CGFloat _startingWidth;
    CGFloat _widthDifference;

    NSArray<NUAFlipswitchToggle *> *_topRow;
    NSArray<NUAFlipswitchToggle *> *_middleRow;
    NSArray<NUAFlipswitchToggle *> *_bottomRow;

    UIView *_topContainerView;
    UIView *_middleContainerView;
    UIView *_bottomContainerView;
}

@property (assign, nonatomic) CGFloat expandedPercent;

@property (copy, nonatomic) NSArray<NUAFlipswitchToggle *> *togglesArray;

- (void)_layoutToggles;
- (void)_updateToggleIdentifiers;

@end