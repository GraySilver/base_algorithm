#include <iostream>
#include <vector>
#include "algo/binarySearch.h"

using namespace std;


int main() {
    binarySearch b;
    vector<int> list = {2,2,3,4,5,6,8,13,17,18};
    int index = b.binarysearch(list,17);
    cout<<index<<endl;


    return 0;
}