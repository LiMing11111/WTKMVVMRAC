//
//  WTKUser.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/9/19.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface WTKUser : NSObject<NSCoding>
///头像
@property(nonatomic,strong)UIImage          *headImage;
///昵称
@property(nonatomic,copy)NSString           *nickName;
///名字
@property(nonatomic,copy)NSString           *userName;

///性别 YES-男 NO-女
@property(nonatomic,assign)BOOL             sex;

@property(nonatomic,copy)NSString           *birthDay;
///是否开启指纹验证
@property(nonatomic,assign)BOOL             isTouchID;

///角标
@property(nonatomic,assign)NSInteger        bageValue;


@property(nonatomic,copy)NSString           *bid;

///是否登录
@property(nonatomic,assign)BOOL             isLogin;
///手机号
@property(nonatomic,copy)NSString           *phoneNum;

///是否开启声音
@property(nonatomic,assign)BOOL             isSound;

///是否开始震动
@property(nonatomic,assign)BOOL             isShake;

///密码
@property(nonatomic,copy)NSString           *password;

@property(nonatomic,strong)NSMutableArray   *address;



+ (instancetype)currentUser;



@end
