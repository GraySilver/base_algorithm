//
// Created by Allen on 2017/12/2.
//

#include "binarySearch.h"
#include <vector>
#include <iostream>

using namespace std;


/*
 * 给定一个排序的整数数组（升序）和一个要查找的整数target，
 * 用O(logn)的时间查找到target第一次出现的下标（从0开始），
 * 如果target不存在于数组中，返回-1。
 */



int binarySearch::binarysearch(vector<int> &array, int target) {

    int m;
    int l = 0;
    //闭区间[0, n - 1]
    int r = array.size();
    while (l < r)
    {
        m = (r+l)/2;
        if (array[m] < target) l = m + 1;
        else r = m;
    }
    if (array[r] == target) return r;
    return -1;

}



