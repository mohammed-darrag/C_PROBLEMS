# 1 "file1.h"
#ifndef FILE1_H 
#define FILE1_H

#define MAX 100 

extern int x, y; 

void array_print(int arr[], int size);

#endif
# 1 "file1.c"
#include <stdio.h>
#include <stdlib.h>
#include "file1.h" 

int x = 20; 
int y = 50; 

void array_print(int arr[], int size) 
{
    for (int i = 0; i < size; i++) 
    {
        printf("%3d ", arr[i]);
    }
    printf("\n");
}
