//
//  LinearList.c
//  LinearList
//
//  Created by Allen on 2017/7/27.
//  Copyright © 2017年 Allen. All rights reserved.
//

#include "LinearList.h"
#include <stdlib.h>


LinearList * listCreate(int capacity){

    if(capacity < 0){
    
        return NULL;
    }
    
    LinearList * list = malloc(sizeof(LinearList));
    
    if(list){
    
        list -> length = 0;
        list ->capacity = capacity;
        list->value = malloc(capacity * sizeof(LinearListNodeValue *));
    }

    return list;
}


void linearListRelease(LinearList * list){

    if(list == NULL){

        return;
    }
    
    
    free(list->value);
    
    free(list);

}

void clearLinearList(LinearList * list){

    if(list == NULL){
    
        return;
    }
    
    list -> length = 0;

}


int linearListLength(LinearList * list){

    if(list == NULL){
    
        return 0;
    }
    
    return list -> length;

}

LinearListNodeValue getLinearListValue(LinearList * list,int index){
    
    if(list == NULL || index > list->length || index < 0){
    
        return 0;
    }
    
    return list->value[index];

}

void listInster(LinearList * list,int index,LinearListNodeValue value){

    if(list == NULL || index < 0 || index > list ->length){
    
        return;
    }
    
    for (int  i = list -> length - 1; i >= index ; i--) {
        
        list->value[i+1] =  list -> value[i];
        
    }
    
    list->value[index] = value;
    
    list->length ++;
}

void listAddObject(LinearList *list,LinearListNodeValue value){

    listInster(list, list->length,value);
    
}

void listSet(LinearList * list,int index,LinearListNodeValue value){

    if(list == NULL || index <  0 || index > list ->length){
    
        return;
    }
    
    list ->value[index] = value;
    
}


void listRemoveObjectAtIndex(LinearList * list,int index){

    if(list == NULL || index < 0 || index >= list -> length){
    
        return;
    }
    
    for (int  i = index + 1 ; i > list ->length ;  i ++) {
    
        list -> value[i - 1] = list ->value[i];
    }
    
    list->length -- ;

}



void listRemoveObjectWithValue(LinearList * list,LinearListNodeValue value){
    
    if(list == NULL){
    
        return;
    }

    int removeCount  =  0 ;
    
    
    for (int i = 0; i < list -> length; i ++ ) {
        
        if(list->value[i] == value){
        
            removeCount ++;
        }else{
        
            list->value[i - removeCount] = list->value[i];
        }
    }
    
    list ->length -= removeCount;

}

void listPrint(LinearList * list){
    if (list == NULL) {
        return;
    }
    printf("list{\n");
    printf("\tlength = %d;\n",list->length);
    printf("\tcapacity = %d;\n",list->capacity);
    printf("\tvalue = [");
    for (int i = 0; i < list->length; i++) {
        printf("%d",list->value[i]);
        if (i < list->length -1) {
            printf(",");
        }
    }
    printf("];\n\t}\n\n");
}











