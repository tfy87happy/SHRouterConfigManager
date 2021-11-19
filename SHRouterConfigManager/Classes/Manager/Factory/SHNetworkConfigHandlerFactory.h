//
//  SHNetworkConfigHandlerFactory.h
//  SHNetworkConfig
//
//  Created by 汤浩博 on 2020/6/16.
//  Copyright © 2020 汤浩博. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "SHNetworkConfigProtocol.h"
#import "SHNetworkConfigBaseHandler.h"


NS_ASSUME_NONNULL_BEGIN

@interface SHNetworkConfigHandlerFactory : NSObject

+ (SHNetworkConfigBaseHandler *)creatHandlerWithType:(SHAddType)type;

@end

NS_ASSUME_NONNULL_END
