//
//  User.h
//  GeoTappy
//
//  Created by Dylan Marriott on 11/10/14.
//  Copyright (c) 2014 Dylan Marriott. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "Favourite.h"

typedef void (^UserCompletionBlock)();

@interface User : NSObject <NSCoding, Favourite>

@property (nonatomic) NSString* identifier;
@property (nonatomic) NSString* name;
@property (nonatomic) UIImage* profileImage;
@property (nonatomic) UIImage* coverImage;
@property (nonatomic) NSArray* friends; // User
@property (nonatomic) NSMutableArray* selectedFavourites; // id<Favourite>
@property (nonatomic) NSMutableArray* unselectedFavourites; // id<Favourite>

- (BOOL)isComplete;
- (void)save;
- (void)refreshWithCompletion:(UserCompletionBlock)completion;

@end
