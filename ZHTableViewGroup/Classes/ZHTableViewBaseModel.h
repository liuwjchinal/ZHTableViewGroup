//
//  ZHTableViewBaseModel.h
//  Pods
//
//  Created by 张行 on 2017/3/18.
//
//

/**
 配置 Cell Header Footer 的数据 Model
 */
@interface ZHTableViewBaseModel : NSObject

/**
  标识符
 */
@property (nonatomic, copy) NSString *identifier;
/**
  自定义类 Class
 */
@property (nonatomic, strong) Class anyClass;
/**
  高度 默认为 NSNotFound
 */
@property (nonatomic, assign) CGFloat height;

@end
