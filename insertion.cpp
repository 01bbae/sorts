#include "insertion.h"

Insertion::~Insertion(){
    //delete
}
void Insertion::sort(){
    for(int i=1;i<nums.size();++i){
        // forloop method
        // for(int j=i;j>0;--j){
        //     if(nums[j]<nums[j-1]){
        //         int temp = nums[j-1];
        //         nums[j-1] = nums [j];
        //         nums[j] = temp;
        //     }else{
        //         break;
        //     }
        // }


        // whileloop method
        int j=i;
        while(j>0 && nums[j]<nums[j-1]){
            int temp = nums[j-1];
            nums[j-1] = nums[j];
            nums[j] = temp;
            j--;
        }
    }
}
