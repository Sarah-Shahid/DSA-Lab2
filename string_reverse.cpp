#include <iostream>
#include <string>
using namespace std;

int main () {
    //dynamically allocate memory for a string.
    string *cuteString = new string ();
    cout << "\nEnter your string: ";
    cin >> *cuteString;

    //reverse the string
    int n = cuteString ->length();
    string *reversedString = new string(n, ' ');
    
    for (int i = (n-1); i >= 0; i--) { 
        (*reversedString)[n-i-1] = (*cuteString)[i];
    }

    //after this loop, the reversed string should contain it in reversed form.
    //now print it.
    for (int j = 0; j < n; j++) {
        cout << (*reversedString) [j] << " ";
    }
    cout << endl;
    delete cuteString;
    delete reversedString;
    return 0;
}