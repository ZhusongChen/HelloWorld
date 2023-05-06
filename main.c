/*
 * @Description: 
 * @Author: 陈柱松
 * @Date: 2023-04-14 20:32:32
 * @LastEditTime: 2023-04-16 22:06:23
 * @LastEditors: 陈柱松
 */
#include "stdio.h"
#include "stdlib.h"
#include "./MyFunction/InsertSort.c"

int main(){
    //初始数组
    int A[] = {0,49,38,65,97,76,13,27,49};

    //使用的排序方法
    //InsertSort(A,8); //直接插入排序
    InsertSort_Mid(A,8); //折半插入排序

    //输出排序结果
    for(int i = 1; i <= 8; i++){
        printf("%d ",A[i]);
    }
     return 0;
}