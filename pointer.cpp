#include <iostream> 
using namespace std;

void analyze_pointer(int *ptr) {
    cout << ptr << endl; //prints the address pointer points to
    cout << *ptr << endl; //prints the value ptr is pointing to, not the address.
}

int main() { 
    int firstValue = 90; //created on stack
    analyze_pointer(&firstValue);

    int* ptrValue = new int (88); //created on heap.
    analyze_pointer(ptrValue);
    delete ptrValue;
    return 0;
}