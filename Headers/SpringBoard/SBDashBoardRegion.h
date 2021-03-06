typedef NS_ENUM(NSInteger, SBDashBoardRegionRole) {
    SBDashBoardRegionRoleNone,
    SBDashBoardRegionRoleAccessory,
    SBDashBoardRegionRoleContent,
    SBDashBoardRegionRoleOverlay,
};

@interface SBDashBoardRegion : NSObject
@property (assign, nonatomic) SBDashBoardRegionRole role;

+ (instancetype)regionForCoordinateSpace:(id<UICoordinateSpace>)coordinateSpace;

- (instancetype)role:(SBDashBoardRegionRole)role;

@end