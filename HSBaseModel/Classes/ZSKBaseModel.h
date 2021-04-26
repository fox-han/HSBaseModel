//
//  ZSKBaseModel.h
//  ZSKRepositoryFrameWork
//
//  Created by hanwenguang on 17/6/15.
//  Copyright © 2017年 Apple. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface ZSKBaseModel : NSObject

- (id)initWithDictionary:(NSDictionary *)dic;

- (void)setAttributes:(NSDictionary *)dic;

@property (nonatomic,copy) NSDictionary *map;

@end
