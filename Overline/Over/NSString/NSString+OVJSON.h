//
// Created by yaakaito on 2013/01/02.
//
// To change the template use AppCode | Preferences | File Templates.
//


#import <Foundation/Foundation.h>

@interface NSString (OVJSON)

+ (instancetype)stringFromJSONObject:(id)jsonObject;

- (id)JSON;
- (id)jsonObject;
@end