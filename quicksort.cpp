#include "quicksort.h"

QuickSort::~QuickSort(){
    //delete
}

void QuickSort::sort(){
    sort(0,nums.size()-1);
}

void QuickSort::sort(int start, int end){
    if(start<end){ //if more than one element in the split array
        int pIndex = partition(start, end);
        sort(start, pIndex-1);
        sort(pIndex+1, end);
    }    

}

int QuickSort::partition(int start, int end){
    int pivot = nums.at(end);
    int pIndex = start; //everything left of the pIndex is smaller than the value of pivot and right greater
    for(int i=start;i<end;++i){
        if(nums.at(i) <= pivot){
            swap(nums.at(i), nums.at(pIndex));
            pIndex++;
        }
    }
    swap(nums.at(pIndex),nums.at(end));

    return pIndex;
}