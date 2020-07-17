#include "sorts.h"

Sorts::Sorts(vector<int> &nums){
    this->nums = nums;
}

Sorts::~Sorts(){
    //delete
    //try making nums a pointer for a challenge
}

void Sorts::print(){
    for(int i=0;i<nums.size();++i){
        cout << nums.at(i) << ", ";
    }
    cout << endl;
}