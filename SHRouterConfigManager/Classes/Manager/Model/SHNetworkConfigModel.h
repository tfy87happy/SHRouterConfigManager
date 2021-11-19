//
//  SHNetworkConfigModel.h
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/26.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface SHNetworkConfigModel : NSObject

@property (nonatomic, copy) NSString *wifiSsid;//连接家庭路由的wifi名称

@property (nonatomic, copy) NSString *wifiPassword;//连接家庭路由的wifi密码

@property (nonatomic, copy) NSString *apSsidPrefix;//热点前缀

@property (nonatomic, copy) NSString *apSsid;//热点wifi名

@property (nonatomic, copy) NSString *apPassword;//热点密码

@property (nonatomic, copy) NSString *deviceVerifyCode;//设备序列号

@end

NS_ASSUME_NONNULL_END
