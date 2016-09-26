//
//  PrivacyPermissionsManager.h
//  RobotClient
//
//  Created by hanarobot on 16/9/19.
//  Copyright © 2016年 hanarobot. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface PrivacyPermissionsManager : NSObject
//是否开启远程通知
+ (BOOL)fxwIsOpenAPNS;

//是否开启定位
+ (BOOL)fxwIsOpenLocation;

//是否开启相册访问
+ (BOOL)fxwIsOpenScanPhotos;

//是否开启相机
+ (BOOL)fxwIsOpenCamera;

//是否开启运动与健康[这个地方可能不需要单独判断]
+ (BOOL)fxwIsOpenHealthData;

//是否开启麦克风
+ (BOOL)fxwIsOpenMicrophone;

@end
