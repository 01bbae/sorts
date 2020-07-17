#ifndef QUICKSORT_H
#define QUICKSORT_H

#include <iostream>
#include <vector>
#include "sorts.h"

using namespace std;

class QuickSort : public Sorts{
    public:
        QuickSort();
        QuickSort(vector<int> nums) : Sorts(nums){}
        ~QuickSort();
        void sort();
        void sort(int start, int end);
        int partition(int start, int end);
};

#endif
