//
//  ViewController.m
//  MMHiSingDemo
//
//  Created by Zzz on 2022/4/19.
//

#import "ViewController.h"
#import <MMHiSingKit/MMHiSingClient.h>

@interface ViewController ()

@property (nonatomic, strong) MMHiSingClient *client;

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    self.client = [[MMHiSingClient alloc] initSDKWithContentView:self.view roomId:@"xxx" controller:self channelId:@"xxx" andSeatCount:8 appId:@"xxx"];
    // Do any additional setup after loading the view.
}


@end
