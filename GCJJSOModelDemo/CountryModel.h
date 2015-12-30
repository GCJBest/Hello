//
//  CountryModel.h
//  GCJJSOModelDemo
//
//  Created by qianfeng on 15/11/25.
//  Copyright © 2015年 GCJ. All rights reserved.
//

#import <JSONModel/JSONModel.h>

//{"id":"10", "country":"Germany", "dialCode": 49, "isInEurope":true}
@interface CountryModel : JSONModel

@property (copy, nonatomic) NSString *id;
@property (copy, nonatomic) NSString* country;
@property (copy, nonatomic) NSString* dialCode;
@property (assign, nonatomic) BOOL isInEurope;

@end
