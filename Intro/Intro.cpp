#include <iostream>
#include <string>
#include <vector>

using namespace std;

void print(const vector<int> &vec) {
    for (auto v: vec)
        cout << v << ", ";

    cout << endl;
}

// int main() {
//     int x{7};
//     string s{"Let us begin"};

//     cout << "x = " << x << endl;
//     cout << "s = " << s << "\"" << endl;

//     // Can be used with multiple initial values
//     vector<int> vec{4,2,3,5,1};
    
//     cout << "vec = ";
//     print(vec);
// }

//typedef vector<int> IntVec;
// type-aliasing
// using IntVec = vector<int>;

// int main() {
//     vector<IntVec> vec_of_vec;
// }

void func(int i) {
    cout << "func(int) called\n";
}

void func(int *i) {
    cout << "func (int *) called\n";
}

int main() {
    func(NULL);
    func(nullptr);
}