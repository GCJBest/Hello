//
//  ViewController.m
//  GCJJSOModelDemo
//
//  Created by qianfeng on 15/11/25.
//  Copyright © 2015年 GCJ. All rights reserved.
//

#import "ViewController.h"
#import "CountryModel.h"
#import "OrderModel.h"
#import "ProductModel.h"
#import "OrderModel1.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    [self testJXJSON2];
}

- (void)testJXJSON1 {
    //###########################123124123123
    NSString *jsonString = @"{\"id\":\"10\", \"country\":\"Germany\", \"dialCode\": 49, \"isInEurope\":true}";
    CountryModel *model = [[CountryModel alloc] initWithString:jsonString error:nil];
    NSLog(@"%@",model.id);
    NSLog(@"%@",model);
}

- (void)testJXJSON2 {
    NSString *jsonString = @"{\"order_id\": 104,\"total_price\":13.45,\"product\" : {\"id\": \"123\",\"name\": \"Product name\",\"price\": 12.95}}";
    
    OrderModel *model = [[OrderModel alloc] initWithString:jsonString error:nil];
    ProductModel *product = model.product;
    NSLog(@"%@",model.order_id);
    NSLog(@"%@",product.price);
}

- (void)testJXJSON3 {
    NSString *jsonString = @"{\"order_id\": 104,\"total_price\": 103.45,\"products\" : [{\"id\": \"123\",\"name\": \"Product #1\",\"price\": 12.95},{\"id\": \"137\",\"name\": \"Product #2\",\"price\": 82.95}]}";
    
    OrderModel1 *model = [[OrderModel1 alloc] initWithString:jsonString error:nil];
    ProductModel1 *product1 = model.products[0];
    ProductModel1 *product2 = model.products[1];
    NSLog(@"--%@",product2.id);
    NSLog(@"--%@",product1.name);
   // NSLog(@"%@",model);
   // NSLog(@"%@",model.products);
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
