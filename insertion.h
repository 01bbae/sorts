#ifndef INSERTION_H
#define INSERTION_H

#include <iostream>
#include <vector>
#include "sorts.h"

using namespace std;

class Insertion : public Sorts{
    public:
        Insertion();
        Insertion(vector<int> &nums) : Sorts(nums){}
        ~Insertion();

        void sort();
};

#endif