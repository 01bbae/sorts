#include <iostream>
#include <random>
#include "insertion.h"
#include "selection.h"
#include "quicksort.h"
#include "bubblesort.h"


using namespace std;

int main(int argc, char** argv){
    vector<int> nums;
    for(int i=0;i<10; ++i){
        nums.push_back(rand()%10);
        // cout << nums.at(i) << endl;
    }
    

    // Insertion* i = new Insertion(nums);
    // i->print();
    // i->sort();
    // i->print();

    // Selection* s = new Selection(nums);
    // s->print();
    // s->sort();
    // s->print();

    // QuickSort* q = new QuickSort(nums);
    // q->print();
    // q->sort();
    // q->print();

    BubbleSort* b = new BubbleSort(nums);
    b->print();
    b->sort();
    b->print();


    return 0;
}