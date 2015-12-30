//
//  OrderModel.h
//  GCJJSOModelDemo
//
//  Created by qianfeng on 15/11/25.
//  Copyright © 2015年 GCJ. All rights reserved.
//

#import <JSONModel/JSONModel.h>
#import "ProductModel.h"
/*{
    "order_id": 104,
    "total_price": 13.45,
    "product" : {
        "id": "123",
        "name": "Product name",
        "price": 12.95
    }
}*/
@interface OrderModel : JSONModel

@property (copy, nonatomic) NSString *order_id;
@property (copy, nonatomic) NSString *total_price;
@property (copy, nonatomic) ProductModel *product;

@end
