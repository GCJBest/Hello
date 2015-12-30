//
//  OrderModel1.h
//  GCJJSOModelDemo
//
//  Created by qianfeng on 15/11/25.
//  Copyright © 2015年 GCJ. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@protocol ProductModel1
@end

@interface ProductModel1 : JSONModel

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *price;

@end

@interface OrderModel1 : JSONModel

@property (copy, nonatomic) NSString *order_id;
@property (copy, nonatomic) NSString *total_price;
@property (nonatomic, strong) NSArray<ProductModel1>*products;

@end
