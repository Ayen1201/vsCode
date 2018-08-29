//
//  functions.cpp
//  pratice
//
//  Created by Danny on BE 2561/8/11.
//  Copyright © 2561 Danny. All rights reserved.
//

#include "functions.h"

void SelectionSort(int *a, int n){
    for (int i=0; i<n; i++){
        int j=i;
        for (int k=j+1; k<n; k++){
            if (a[k]<a[j])
                j=k;
        }
        swap(a+i, a+j);
    }
}

int BinarySearch(int *a, int x, int left, int right){
    if (left <= right){
        int middle =(left+right)/2;
        if (x < a[middle]) return BinarySearch(a, x, left, middle-1);
        else if (x > a[middle]) return BinarySearch(a, x, middle+1, right);
        return middle;
    }
    return -1;
}

void swap(int *a, int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}


