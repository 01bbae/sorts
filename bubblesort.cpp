#include "bubblesort.h"

BubbleSort::~BubbleSort(){
    //delete
}

void BubbleSort::sort(){
    bool sorted = false;

    while(!sorted){
        for(int i=0;i<nums.size()-1;++i){
            if(nums.at(i)>nums.at(i+1)){
                swap(nums.at(i),nums.at(i+1));
            }
        }
        
        sorted = true;
        for(int i=0;i<nums.size()-1;i++){
            if(nums.at(i) > nums.at(i+1)){
                sorted = false;
            }
        }
    }
}

