//
//  SHNetworkConfigHandlerFactory.m
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/16.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import "SHNetworkConfigHandlerFactory.h"
#import "SHNetworkConfigMideaHandler.h"
#import "SHNetworkConfigAPGeLiHandler.h"
#import "SHNetworkConfigAPEZCameraHandler.h"


@implementation SHNetworkConfigHandlerFactory

+ (SHNetworkConfigBaseHandler *)creatHandlerWithType:(SHAddType)type{
    if (type == SHAddType_Media) {
        return [[SHNetworkConfigMideaHandler alloc] init];
    }else if (type == SHAddType_Gree){
        return [[SHNetworkConfigAPGeLiHandler alloc] init];
    }else if (type == SHAddType_EZVIZ){
        return [[SHNetworkConfigAPEZCameraHandler alloc] init];
    }
    return nil;
}
@end
