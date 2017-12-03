//
// Created by Allen on 2017/12/3.
//

#include "digitCounts.h"
#include <iostream>
using namespace std;


int digitCounts::digitcounts(int k ,int n){


    int count = 0;
    for(int i=0;i<=n;i++)
    {
        int cur = i;
        // 特殊情况，若i=0时
        if(i==0&k==0){count++;}
        while(cur> 0)
        {
            int temp = cur % 10; //取当前数字的个位数
            if (temp == k) count++;
            cur /= 10;
        }

    }


    return count;



}