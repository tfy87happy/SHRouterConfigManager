//
//  SHAPNetworkConfigProtocol.h
//  SmartHome
//
//  Created by 汤浩博 on 2019/8/2.
//

#import <Foundation/Foundation.h>
#import "SHNetworkConfigDefine.h"


NS_ASSUME_NONNULL_BEGIN

@protocol SHNetworkConfigProtocol <NSObject>

/**
 初始化sdk
 */
- (void)initSDK;

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

/**
 配网方式
*/
- (SHNetConfigCategory)netConfigCategory;


@end

NS_ASSUME_NONNULL_END

