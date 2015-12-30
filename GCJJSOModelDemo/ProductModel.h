//
//  ProductModel.h
//  GCJJSOModelDemo
//
//  Created by qianfeng on 15/11/25.
//  Copyright © 2015年 GCJ. All rights reserved.
//

#import <JSONModel/JSONModel.h>

@interface ProductModel : JSONModel

@property (nonatomic, copy) NSString *id;
@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *price;

@end
