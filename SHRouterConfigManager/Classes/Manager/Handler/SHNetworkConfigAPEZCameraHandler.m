//
//  SHNetworkConfigAPEZCameraHandler.m
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/16.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import "SHNetworkConfigAPEZCameraHandler.h"

@implementation SHNetworkConfigAPEZCameraHandler

- (void)initSDK{
    
}

- (void)scanDeviceWithCompletion:(void(^)(NSError *error,NSString *ssid,NSString *ssidPrefix,NSString *password))completion{
    
}

- (void)startConfigWithCompletion:(SHAPNetworkConfigCompletion)completion{
    
}

- (void)cancelConfigWithCompletion:(SHAPNetworkConfigCompletion)completion{
    
}

- (void)bindDeviceWithCompletion:(SHBindDeviceCompletion)compeltion{
    
}

- (SHNetConfigCategory)netConfigCategory {
    return SHNetConfigCategory_APConfig;
}
@end
