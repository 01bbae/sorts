#ifndef SORTS_H
#define SORTS_H
#include <iostream>
#include <vector>

using namespace std;

class Sorts{
    public:
    Sorts();
    Sorts(vector<int> &nums);
    ~Sorts();

    void print();
    vector<int> nums;
};

#endif