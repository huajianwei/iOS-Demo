//
//  ImageCollectionViewCell.h
//  ExampleBIZCollectionViewLayout4plus1Grid
//
//  Created by IgorBizi@mail.ru on 12/11/15.
//  Copyright © 2015 IgorBizi@mail.ru. All rights reserved.
//

#import <UIKit/UIKit.h>


@interface ImageCollectionViewCell : UICollectionViewCell
+ (NSString *)reuseIdentifier;
@property (weak, nonatomic) IBOutlet UIImageView *imageView;
@end
// 版权属于原作者
// http://code4app.com (cn) http://code4app.net (en)
// 发布代码于最专业的源码分享网站: Code4App.com