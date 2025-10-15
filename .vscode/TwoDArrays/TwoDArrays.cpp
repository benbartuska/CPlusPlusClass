#include <iostream>

using namespace std;

int main(){
    // We can initialize all the elements of a 2d array at once, but it makes 
    // the indexing far less readable
    // string names[2][4] = {
    //     "Fred", "Wilma", "Pebbles", "Dino", "Barney", "Betty", "Bamm-Bamm", "Hoppy"
    // };

    string names[2][4] = {
        {"Fred", "Wilma", "Pebbles", "Dino"},
        {"Barney", "Betty", "Bamm-Bamm", "Hoppy"}
    };

    //Using a single subscript gives us a row
    cout << names[1] << ", " << endl; // This prints the pointer to an array of elements
    cout << "Corrected:\n";
    for (int i = 0; i < 4; ++i) {
        cout << names[1][i] << ", ";
    };
    cout << endl;

    //With two subscripts, we get a column within a row
    cout << "names[1][2] = " << names[1][2] << endl;

    cout << "The elements of names are:\n";
    for(int row = 0; row < 2; ++row){
        for(int col = 0; col < 4; ++col){
            cout << names[row][col] << ", ";
        }
        cout << "\n";
    }
}