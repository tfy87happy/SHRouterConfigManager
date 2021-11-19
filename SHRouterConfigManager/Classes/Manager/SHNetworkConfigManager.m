//
//  SHNetworkConfigManager.m
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/16.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import "SHNetworkConfigManager.h"
#import "SHNetworkConfigHandlerFactory.h"


@interface SHNetworkConfigManager (){
    
}

@property (nonatomic, strong) SHNetworkConfigBaseHandler *handler;

@end

@implementation SHNetworkConfigManager

+ (instancetype)sharedInstance{
    static SHNetworkConfigManager *instance = nil;
    static dispatch_once_t onceToken;
    dispatch_once(&onceToken, ^{
        instance = [[SHNetworkConfigManager alloc] init];
    });
    return instance;
}

- (instancetype)init{
    self = [super init];
    if (self) {
        [self initDatas];
    }
    return self;
}

- (void)initDatas{
    
}

- (void)creatHandlerWithType:(SHAddType)type{
     self.handler = [SHNetworkConfigHandlerFactory creatHandlerWithType:type];
}

#pragma mark - Public
- (void)clearDatas{
    
}

- (void)scanDeviceWithCompletion:(void(^)(NSError *error,NSString *ssid,NSString *ssidPrefix,NSString *password))completion{
    [self.handler scanDeviceWithCompletion:completion];
}

- (void)startConfigWithCompletion:(SHAPNetworkConfigCompletion)completion{
    [self.handler startConfigWithCompletion:completion];
}

- (void)bindDeviceWithCompletion:(SHBindDeviceCompletion)compeltion{
    [self.handler bindDeviceWithCompletion:compeltion];
}

- (void)cancelConfigWithCompletion:(SHAPNetworkConfigCompletion)completion{
    [self.handler cancelConfigWithCompletion:completion];
}

@end
