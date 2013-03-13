//
//  UIColor+MCUIColorsUtils.h
//  Mechanics.IOS
//
//  Created by Martin Gagnon on 10-03-23.
//  Copyright (c) 2012 Mirego Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface UIColor (MCUIColorsUtils)

/////////////////////////////////////////////////////
#pragma mark macros for generating colors
/////////////////////////////////////////////////////

#define RGBCOLOR(r,g,b) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:1]
#define RGBACOLOR(r,g,b,a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)]
#define HEXCOLOR(c,a) [UIColor colorWithRed:((c>>16)&0xFF)/255.0 green:((c>>8)&0xFF)/255.0 blue:((c>>0)&0xFF)/255.0 alpha:a]

/////////////////////////////////////////////////////
#pragma mark methods for modifying colors
/////////////////////////////////////////////////////

+ (UIColor *) colorForHex:(NSString*)hex;

- (UIColor *) colorWithMultiplier:(CGFloat) multiplier;

+ (UIColor *)colorWithRed:(CGFloat)red green:(CGFloat)green blue:(CGFloat)blue;
+ (UIColor *)colorWithGray:(CGFloat)gray;
+ (UIColor *)colorWithGray:(CGFloat)gray alpha:(CGFloat)alpha;
+ (UIColor *)colorWithIntegerRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue;
+ (UIColor *)colorWithIntegerRed:(NSUInteger)red green:(NSUInteger)green blue:(NSUInteger)blue alpha:(CGFloat)alpha;
+ (UIColor *)colorWithIntegerGray:(NSUInteger)gray;
+ (UIColor *)colorWithIntegerGray:(NSUInteger)gray alpha:(CGFloat)alpha;
+ (UIColor *)colorWithHexRGB:(NSUInteger)hexRGB;
+ (UIColor *)colorWithHexRGBString:(NSString*)hexRGBString; 
+ (UIColor *)colorWithHexRGBA:(NSUInteger)hexRGBA;
+ (UIColor *)colorWithHexRGBAString:(NSString*)hexRGBString; 

- (NSString *)hexRGB;
- (NSString *)hexRGBA;

@end
