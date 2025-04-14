#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int* p1 = nullptr;
    double* p2 = nullptr;
    unsigned long long* p3 = nullptr;
    vector<string>* p4 = nullptr;
    string* p5 = nullptr;

    cout << "Size of int*              : " << sizeof(p1) << " bytes" << endl;
    cout << "Size of double*           : " << sizeof(p2) << " bytes" << endl;
    cout << "Size of unsigned long long*: " << sizeof(p3) << " bytes" << endl;
    cout << "Size of vector<string>*   : " << sizeof(p4) << " bytes" << endl;
    cout << "Size of string*           : " << sizeof(p5) << " bytes" << endl;

    return 0;
}
