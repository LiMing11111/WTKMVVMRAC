//
//  WTKSearchViewModel.h
//  WTKWineMVVM
//
//  Created by 王同科 on 16/10/31.
//  Copyright © 2016年 王同科. All rights reserved.
//

#import "WTKBasedViewModel.h"

@interface WTKSearchViewModel : WTKBasedViewModel

/// 搜索
@property(nonatomic,strong)RACCommand       *searchCommand;

@end
