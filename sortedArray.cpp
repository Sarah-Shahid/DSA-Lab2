#include <cassert>
#include <iostream>
using namespace std;

//state the function to implement.
bool isSorted(const int* arr, const int size){
    return false;
    //the function is not implememnted yet.
}

//making test functions for test cases.
//testSortedArray(); testUnsortedArray(); testDuplicateValues(); 
//testSingleElement(); testDescendingArray(); testNegativeValues();

void testSortedArray() {
    int arr[] = {5, 7, 9, 11, 12, 13};//hardcoded array.
    bool result = isSorted(arr, 6);
    assert(result == true); //already sorted, shud return true.
}

void testUnsortedArray() {
    int arr[] = {17, 11, 8, 6, 9, 20};
    bool result = isSorted(arr, 6);
    assert(result == false); //not sorted, shud return false.
}

void testDuplicateValues() {
    int arr[] = {5, 8, 10, 10, 10, 11, 20};
    bool result = isSorted(arr, 7);
    assert(result == true); //sorted, shud return true.
}

void testSingleElement() {
    int arr[] = {5};
    bool result = isSorted(arr, 1);
    assert(result == true); //sorted, shud return true.
}

void testDescendingArray() {
    int arr[] = {43, 23, 20, 19, 4, 1};
    bool result = isSorted(arr, 6);
    assert(result == false); //not sorted, shud return false.
}

void testNegativeValues() {
    int arr[] = {-10, -5, -2, 0, 3};
    bool result = isSorted(arr, 5);
    assert(result == true); //sorted, shud return true.
}

void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true); //sorted, shud return true. nothing to sort here.
}

void testIdenticalArray() {
    int arr[] = {-10, -10, -10, -10, -10, -10};
    bool result = isSorted(arr, 6);
    assert(result == true); //sorted as all equal, shud return true.
}

int main() {

    testSortedArray(); 
    testUnsortedArray(); 
    testDuplicateValues(); 
    testSingleElement(); 
    testDescendingArray(); 
    testNegativeValues();

    return 0;
}