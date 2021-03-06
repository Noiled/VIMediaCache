//
//  VIMediaCacheWorker.h
//  VIMediaCacheDemo
//
//  Created by Vito on 4/21/16.
//  Copyright © 2016 Vito. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "VICacheConfiguration.h"

@class VICacheAction;

@interface VIMediaCacheWorker : NSObject

- (instancetype)initWithURL:(NSURL *)url;

@property (nonatomic, strong, readonly) VICacheConfiguration *cacheConfiguration;
@property (nonatomic, strong, readonly) NSError *setupError; // Create fileHandler error, can't save/use cache

- (void)cacheData:(NSData *)data forRange:(NSRange)range;
- (NSArray<VICacheAction *> *)cachedDataActionsForRange:(NSRange)range;
- (NSData *)cachedDataForRange:(NSRange)range;

- (void)setContentInfo:(VIContentInfo *)contentInfo;

- (void)save;

- (void)startWritting;
- (void)finishWritting;

@end
