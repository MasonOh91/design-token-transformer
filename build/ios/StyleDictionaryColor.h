
//
// StyleDictionaryColor.h
//

// Do not edit directly
// Generated on Thu, 24 Mar 2022 19:17:08 GMT


#import <UIKit/UIKit.h>

typedef NS_ENUM(NSInteger, StyleDictionaryColorName) {
ColorGray1,
ColorGray2,
ColorGray3,
ColorGray4,
ColorGray5,
ColorGray6,
ColorRed,
ColorOrange,
ColorYellow,
ColorGreen1,
ColorGreen2,
ColorGreen3,
ColorBlue1,
ColorBlue2,
ColorBlue3,
ColorPurple1,
ColorPurple2
};

@interface StyleDictionaryColor : NSObject
+ (NSArray *)values;
+ (UIColor *)color:(StyleDictionaryColorName)color;
@end
