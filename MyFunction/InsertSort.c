/*
 * @Description: 直接插入排序
 * @Author: 陈柱松
 * @Date: 2023-04-14 19:59:54
 * @LastEditTime: 2023-04-16 22:06:07
 * @LastEditors: 陈柱松
 */
#include "stdio.h"
#include "stdlib.h"

void InsertSort(int Array[],int n){ 
    int i,j;
    for(i = 2; i <= n; i++){
        if(Array[i] < Array[i-1]){ //如果待插入元素小于有序序列中最大元素
            Array[0] = Array[i]; //复制在哨兵位
            for(j = i-1; Array[0] < Array[j]; j--){
                Array[j+1] = Array[j]; //后移元素
            }
            Array[j+1] = Array[0];
        }
    }
}

void InsertSort_Mid(int Array[],int n){   //{0,49,38,65,97,76,13,27,49};
    int low,high,mid,i,j;
    for(i = 2; i <= n; i++){
        Array[0] = Array[i]; //待插入元素放在哨兵位
        low = 1;  //low和heigh分别是已经有序的序列的下标
        high = i - 1;
        while (low <= high){
            mid = (low + high) / 2;
            if (Array[mid] > Array[0]){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        for(j = i-1; j >= high+1; j--){
            Array[j+1] = Array[j];
        }
        Array[low] = Array[0];
    }
}