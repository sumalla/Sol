//
//  SOLWeatherViewModel.h
//  Copyright (c) 2014 Comyar Zaheri, http://comyar.io
//
//  Permission is hereby granted, free of charge, to any person obtaining a copy
//  of this software and associated documentation files (the "Software"), to deal
//  in the Software without restriction, including without limitation the rights
//  to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
//  copies of the Software, and to permit persons to whom the Software is
//  furnished to do so, subject to the following conditions:
//
//  The above copyright notice and this permission notice shall be included in
//  all copies or substantial portions of the Software.
//
//  THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
//  IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
//  FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
//  AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
//  LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
//  OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
//  THE SOFTWARE.


#pragma mark - Imports

#import <Foundation/Foundation.h>
#import <CZWeatherKit/CZWeatherKit.h>


#pragma mark - SOLWeatherViewModel Interface

/**
 */
@interface SOLWeatherViewModel : NSObject

// -----
// @name Creating a SOLWeatherViewModel
// -----

/**
 */
+ (SOLWeatherViewModel *)weatherViewModelForPlacemark:(CLPlacemark *)placemark
                              currentWeatherCondition:(CZWeatherCondition *)currentWeatherCondition
                            forecastWeatherConditions:(NSArray *)forecastWeatherConditions
                                              celsius:(BOOL)celsius;

// -----
// @name Properties
// -----

//
@property (nonatomic, readonly) NSString *conditionLabelString;

//
@property (nonatomic, readonly) NSString *locationLabelString;

//
@property (nonatomic, readonly) NSString *currentTemperatureLabelString;

//
@property (nonatomic, readonly) NSString *highLowTemperatureLabelString;

//
@property (nonatomic, readonly) NSString *forecastDayOneLabelString;

//
@property (nonatomic, readonly) NSString *forecastIconOneLabelString;

//
@property (nonatomic, readonly) NSString *forecastDayTwoLabelString;

//
@property (nonatomic, readonly) NSString *forecastIconTwoLabelString;

//
@property (nonatomic, readonly) NSString *forecastDayThreeLabelString;

//
@property (nonatomic, readonly) NSString *forecastIconThreeLabelString;

@end
