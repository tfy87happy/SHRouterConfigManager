//
//  SHNetworkConfigDefine.h
//  SmartHome
//
//  Created by 汤浩博 on 2019/8/2.
//

#ifndef SHNetworkConfigDefine_h
#define SHNetworkConfigDefine_h


static NSString *const kSHNetworkConfigSsidKey = @"ssid";

static NSString *const kSHNetworkConfigPasswordKey = @"password";

static NSString *const kSHNetworkConfigUUID = @"uuid";

static NSString *const kSHNetworkConfigCode = @"code";

//配网流程
typedef NS_ENUM(NSInteger, SHDeviceNetworkConfigState) {
    SHDeviceNetworkConfigState_Start,//配网开始
    SHDeviceNetworkConfigState_Success,//配网成功
    SHDeviceNetworkConfigState_Failed,//配网失败
    SHDeviceNetworkConfigState_Cancel,//取消
};

// 绑定设备
typedef NS_ENUM(NSInteger,SHAddDeviceState){
    SHAddDeviceState_TCPConnectedFail,
    SHAddDeviceState_QRCodeError,//二维码错误
    SHAddDeviceState_UUIDAndPWDError, //UUID和pwd 验证错误
    SHAddDeviceState_BindTokenOrFamilyIDError,//绑定token错误或者没有家庭ID
    SHAddDeviceState_BindError, //设备绑定错误
    SHAddDeviceState_BindDeviceSuccess, // 设备绑定成功
    SHAddDeviceState_BindCloudSuccess, // 云端绑定都成功
    SHAddDeviceState_BindRouterSuccess // 中控绑定成功
};

// 配网类型
typedef NS_ENUM(NSUInteger, SHNetConfigCategory) {
    SHNetConfigCategory_None,
    SHNetConfigCategory_APConfig,   // AP配网
    SHNetConfigCategory_EasyConfig, // EasyConfig配网
};

typedef NS_ENUM(NSInteger, SHAddType) {
    SHAddType_None = 0,
    SHAddType_Media,
    SHAddType_Gree,//格力
    SHAddType_EZVIZ,//萤石
};

typedef void (^SHAPNetworkConfigCompletion)(SHDeviceNetworkConfigState state ,NSError *error);

typedef void (^SHBindDeviceCompletion) (SHAddDeviceState state,id device,NSString *message, NSError *error);

#endif /* SHNetworkConfigDefine_h */
