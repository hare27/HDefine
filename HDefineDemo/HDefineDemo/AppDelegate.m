//
//  AppDelegate.m
//  HDefineDemo
//
//  Created by 张文军 on 2018/5/7.
//  Copyright © 2018年 fine. All rights reserved.
//



#import "AppDelegate.h"

#import "HDefine.h"

@interface AppDelegate ()

@end

@implementation AppDelegate


- (BOOL)application:(UIApplication *)application didFinishLaunchingWithOptions:(NSDictionary *)launchOptions {
    
    HDLog(@"");
    HDLog(@"%d",HDRand256);
    HDLog(@"%@",HDRGBColor(5, 5, 5));
    HDLog(@"%lf",HDScreenW);
    HDLog(@"%lf",HDScreenH);
    
    return YES;
}


@end
