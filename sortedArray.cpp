#include <cassert>
#include <iostream>
using namespace std;

//state the function to implement.
bool isSorted(const int* arr, const int size){
    for (int i = 0; i < size; i++) {
        if (arr[i] >= arr[i+1]) { //element greater than the element coming after it.
            return false;
        }
    }
    return true;
}

//making test functions for test cases.
//testSortedArray(); testUnsortedArray(); testDuplicateValues(); 
//testSingleElement(); testDescendingArray(); testNegativeValues();

void testSortedArray() {
    int arr[] = {5, 7, 9, 11, 12, 13};//hardcoded array.
    bool result = isSorted(arr, 6);
    assert(result == true); //already sorted, shud return true.
    cout << "done\n";
}

void testUnsortedArray() {
    int arr[] = {17, 11, 8, 6, 9, 20};
    bool result = isSorted(arr, 6);
    assert(result == false); //not sorted, shud return false.
    cout << "done\n";
}

void testDuplicateValues() {
    int arr[] = {5, 8, 10, 10, 10, 11, 20};
    bool result = isSorted(arr, 7);
    assert(result == true); //sorted, shud return true.
    cout << "done\n";
}

void testSingleElement() {
    int arr[] = {5};
    bool result = isSorted(arr, 1);
    assert(result == true); //sorted, shud return true.
    cout << "done\n";
}

void testDescendingArray() {
    int arr[] = {43, 23, 20, 19, 4, 1};
    bool result = isSorted(arr, 6);
    assert(result == false); //not sorted, shud return false.
    cout << "done\n";
}

void testNegativeValues() {
    int arr[] = {-10, -5, -2, 0, 3};
    bool result = isSorted(arr, 5);
    assert(result == true); //sorted, shud return true.
    cout << "done\n";
}

void testEmptyArray() {
    int arr[] = {};
    bool result = isSorted(arr, 0);
    assert(result == true); //sorted, shud return true. nothing to sort here.
    cout << "done\n";
}

void testIdenticalArray() {
    int arr[] = {-10, -10, -10, -10, -10, -10};
    bool result = isSorted(arr, 6);
    assert(result == true); //sorted as all equal, shud return true.
    cout << "done\n";
} 

int main() {

    testSortedArray(); 
    testUnsortedArray(); 
    testDuplicateValues(); 
    testSingleElement(); 
    testDescendingArray(); 
    testNegativeValues();
    testEmptyArray();
    testIdenticalArray();

    return 0;
}