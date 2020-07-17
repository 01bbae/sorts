#include "selection.h"

Selection::~Selection(){
    //delete
}
void Selection::sort(){
    int minIndex;

    for(int i = 0; i<nums.size()-1; i++){
        minIndex = i;
        for(int j = i+1; j<nums.size();j++){
            if(nums.at(minIndex) > nums.at(j)){
                minIndex = j;
            }
        }
        int temp = nums.at(i);
        nums.at(i) = nums.at(minIndex);
        nums.at(minIndex) = temp;
        
    }
}
