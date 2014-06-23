//
//  NonSyncableEntity.h
//  ParcelKit
//
//  Created by Liron Yahdav on 6/23/14.
//  Copyright (c) 2014 Overcommitted, LLC. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface NonSyncableEntity : NSManagedObject

@property (nonatomic, retain) NSString * someAttribute;

@end
