//
//  SHViewController.m
//  SHRouterConfigManager
//
//  Created by thb87happy on 11/19/2021.
//  Copyright (c) 2021 thb87happy. All rights reserved.
//

#import "SHViewController.h"
#import "SHRouterManager.h"
#import "SHRouterProtocol.h"


@interface SHViewController ()

@end

@implementation SHViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    self.view.backgroundColor = [UIColor grayColor];
    UIButton *btn = [UIButton buttonWithType:UIButtonTypeCustom];
    [btn setTitle:@"跳转" forState:UIControlStateNormal];
    btn.frame = CGRectMake(100, 200, 100, 40);
    [btn setTitleColor:[UIColor purpleColor] forState:UIControlStateNormal];
    [self.view addSubview:btn];
    [btn addTarget:self action:@selector(clickBtnEvent) forControlEvents:UIControlEventTouchUpInside];
}

- (void)clickBtnEvent{
    SHRouterURLRequest *URLRequest = [[SHRouterURLRequest alloc] initWithURL:[NSURL URLWithString:@"SHProject-Internal://SHTestPushViewController"]];
    [[SHRouterManager sharedManager] openURLWithRouterRequest:URLRequest callback:^(NSURL *URL, NSError *error) {
        
    }];
}

+ (NSString *)schemeForRouter {
    NSLog(@"%s", __func__);
    return @"SHProject-Internal";
}

+ (SHRouterTargetConfig *)targetConfigForRouter {
    NSLog(@"%s", __func__);
    //基类默认
    SHRouterTargetConfig *config = [[SHRouterTargetConfig alloc]init];
    config.className = NSStringFromClass([self class]);
    config.showType = SHRouterShowType_Push;
    return config;
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
