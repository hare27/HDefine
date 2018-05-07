//
//  HDefine.h
//  HDefineDemo
//
//  Created by 张文军 on 2018/5/7.
//  Copyright © 2018年 fine. All rights reserved.
//

/** 自定义log*/
#ifdef DEBUG
#define HDLog(...) NSLog(@"%s[%d]:\n%@\n\n",__func__,__LINE__,[NSString stringWithFormat:__VA_ARGS__])
#else
#define HDLog(...)D
#endif

#define HDUD [NSUserDefaults standardUserDefaults]

/** 随机整数*/
/** [0,x)*/
#define HDRandInt(x) (arc4random()%x)
/** [0,256)*/
#define HDRand256 HDRandInt(256)

/** rgb颜色*/
#define HDRGBColor(r, g, b) HDRGBAColor(r, g, b, 255)
#define HDRGBAColor(r, g, b, a) [UIColor colorWithRed:(r)/255.0 green:(g)/255.0 blue:(b)/255.0 alpha:(a)/255.0]

/** 随机色*/
#define HDRandColor HDRGBAColor(HDRand256, HDRand256, HDRand256, 255)
#define HDRandAColor HDRGBAColor(HDRand256, HDRand256, HDRand256, HDRand256)

/** 屏幕宽*/
#define HDScreenW [UIScreen mainScreen].bounds.size.width

/** 屏幕高*/
#define HDScreenH [UIScreen mainScreen].bounds.size.height
