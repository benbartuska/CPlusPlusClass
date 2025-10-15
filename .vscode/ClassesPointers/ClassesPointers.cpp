#include <iostream>

using namespace std;

// int main() {
//     //i is a stack variable
//     int i{1};
//     // p1 is a pointer to int. Its value is the address of i
//     int *p1 = &i;
//     //Displays the address of i
//     cout << "p1 = " << p1 << endl;
//     //Displays the value of i
//     cout << "*p1 = " << *p1 << endl;

//     int *p2 = new int;
//     int *p3 = new int{36};
//     //int *p3 = new int(36); // old syntax
//     cout << "*p2 = " << *p2 << endl;
//     cout << "*p3 = " << *p3 << endl;
// }

// void badfunc() {
//     //memory is allocated
//     int *p4 = new int{42};
//     //...
//     //return without release: Memory Leak!
//     delete p4; // releases this memory, no more leak.
//     return;
// }

void printPointerArray(const int* array, const int size){
        for (int k = 0; k < size; ++k){
            cout << array[k] << ", ";
        }
    }

int main() {
    int i{1};
    int *p1 = &i;
    cout << *p1 << endl;

    //array allocation:
    cout << "Allocating memory for array\n" << endl;
    int *pa = new int[20];
    
    cout << "Populating array\n" << endl;
    for (int j = 0; j < 20; ++j){
        pa[j] = j;
    }

    cout << "Array elements:\n" << endl;
    printPointerArray(pa, 20);

    cout << endl;

    cout << "Releasing array's memory\n" << endl;
    delete [] pa;

    cout << "Finished!\n" << endl;

    int *p2 = new int;
    int *p3 = new int{36};

    // badfunc();
}