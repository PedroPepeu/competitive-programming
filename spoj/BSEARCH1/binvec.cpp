#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int num;
vector<int> arr;

int binarySearch(int lower, int higher) {
    
    int medium = (lower + higher)/2;
    
    if(lower > higher) return -1;

    if(num == arr[medium]) {
        if(arr[medium -1 ] == num) return binarySearch(lower, medium -1);
        else return medium;
    }
    
    if(num <= arr[medium]) return binarySearch(lower, medium - 1);
    else if(num >= arr[medium]) return binarySearch(medium + 1, higher);
    return -1;
}

int main() {
    
    ios_base::sync_with_stdio(false);
    
    int size, lines;
    cin >> size >> lines;

    for(int i = 0; i < size; i++) {
        cin >> num;
        arr.push_back (num);
    }

    for(int i = 0; i < lines; i++) {
        cin >> num;
        cout << binarySearch(-1, size) << endl;
    }

    return 0;
    
}
