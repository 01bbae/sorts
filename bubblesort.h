#ifndef BUBBLESORT_H
#define BUBBLESORT_H

#include <iostream>
#include <vector>
#include "sorts.h"


using namespace std;

class BubbleSort : public Sorts{
    public:
        BubbleSort();
        BubbleSort(vector<int> nums) : Sorts(nums){}
        ~BubbleSort();
        void sort();
};

#endif