#ifndef SELECTION_H
#define SELECTION_H

#include <iostream>
#include <vector>
#include "sorts.h"

using namespace std;

class Selection : public Sorts{
    public:
        Selection();
        Selection(vector<int> nums) : Sorts(nums){}
        ~Selection();
        void sort();
        
};

#endif