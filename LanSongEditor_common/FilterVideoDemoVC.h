//
//  VideoFilterDemoVC.h
//  LanSongEditor_all
//
//  Created by sno on 2018/6/6.
//  Copyright © 2018年 sno. All rights reserved.
//

#import <Foundation/Foundation.h>

#import <UIKit/UIKit.h>

@interface FilterVideoDemoVC : UIViewController <UICollectionViewDataSource,UICollectionViewDelegateFlowLayout>

@property UILabel *labProgress;

@property(nonatomic,strong)UICollectionView *collectionView;

@end
