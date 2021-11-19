//
//  SHNetworkConfigManager.h
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/16.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHNetworkConfigDefine.h"
#import "SHNetworkConfigBaseHandler.h"

NS_ASSUME_NONNULL_BEGIN

@interface SHNetworkConfigManager : NSObject

+ (instancetype)sharedInstance;

/// 通过类型创建具体的handler
/// @param type 类型
- (void)creatHandlerWithType:(SHAddType)type;

/**
 清除数据
 */
- (void)clearDatas;

/**
 扫描设备

 @param completion 回调
 */
- (void)scanDeviceWithCompletion:(void(^)(NSError *error,NSString *ssid,NSString *ssidPrefix,NSString *password))completion;

/**
 进行配网,可能是AP配网或者快连

 @param completion 状态及结果回调

 */
- (void)startConfigWithCompletion:(SHAPNetworkConfigCompletion)completion;

/**
 绑定设备
 
 @param compeltion 完成回调
 */
- (void)bindDeviceWithCompletion:(SHBindDeviceCompletion)compeltion;

/**
 取消配网

 @param completion 回调
 */
- (void)cancelConfigWithCompletion:(SHAPNetworkConfigCompletion)completion;
@end

NS_ASSUME_NONNULL_END
