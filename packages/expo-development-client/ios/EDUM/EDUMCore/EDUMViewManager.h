// Copyright © 2018 650 Industries. All rights reserved.

#import <UIKit/UIKit.h>
#import <Foundation/Foundation.h>
#import <EDUMExportedModule.h>

@interface EDUMViewManager : EDUMExportedModule

- (UIView *)view;
- (NSString *)viewName;
- (NSArray<NSString *> *)supportedEvents;

- (NSDictionary<NSString *, NSString *> *)getPropsNames;
- (void)updateProp:(NSString *)propName withValue:(id)value onView:(UIView *)view;

@end
