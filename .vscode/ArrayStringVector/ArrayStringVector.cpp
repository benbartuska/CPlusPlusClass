#include <unordered_map>
#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> visited;
        for (int i = 0; i < nums.size(); ++i){
            auto it = visited.find(target - nums[i]);
            if (it != visited.end()) {
                return {it->second, i};
            }
            visited[nums[i]] = i;
        }
        return {};
    }

int main(){
    // int arr[5]; //Array of 5 ints allocated on the stack
    
    // int nElements = 5; This does not compile. for it to work, nElements would have to be
    //                    labeled const int nElements = 5;
    // int arr[nElements]; 

    int nElements = 5;
    int *pArr = new int[nElements]; //For Dynamic Arrays, we must allocate them on the heap
                                    //by-reference.
    delete [] pArr; // When no longer needed, the array's memory must be explicitly released.

    vector<int> testNums = {2, 7, 11, 15};
    int targetNum = 9;

    vector<int> foundIndices = twoSum(testNums, targetNum);
    
    cout << "Found indices: ";
    for (int i = 0; i < 2; ++i){
        cout << foundIndices[i] << ", ";
    }
    cout << endl;

}