//
//  main.m
//  LinearList
//
//  Created by Allen on 2017/7/27.
//  Copyright © 2017年 Allen. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "LinearList.h"

int main(int argc, const char * argv[]) {
    @autoreleasepool {

        LinearList * list =  listCreate(10);
        listAddObject(list, 5);
        listAddObject(list, 15);
        listAddObject(list, 3);
        listAddObject(list, 2);
        listAddObject(list, 4);
        listAddObject(list, 3);
        
        listInster(list, 2, 8);
        
        listRemoveObjectWithValue(list, 3);
        
        listPrint(list);
        
        
        
        linearListRelease(list);
        
    }
    return 0;
}
