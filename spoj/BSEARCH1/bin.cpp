#include <iostream>

using namespace std;

int binarySearch(int arr[], int lower, int higher, int num) {
    int medium = (lower + higher)/2;
    if(num == arr[lower]) return lower;
    else if(num == arr[medium]) return medium;
    else if(num == arr[higher]) return higher;
    
    if(num < arr[medium] && num > arr[lower]) return binarySearch(arr, lower, medium - 1, num);
    else if(num > arr[medium] && num < arr[higher]) return binarySearch(arr, medium + 1, higher, num);
    return -1;
}

int main() {

    char buffer[256];
    ios_base::sync_with_stdio(false);
    
    int size, lines, num;
    cin >> size >> lines;
    int a[size];
    for(int i = 0; i < size; i++) {
        cin >> num;
        a[i] = num;
    }

    for(int i = 0; i < lines; i++) {
        cin >> num;
        int selected = binarySearch(a, 0, size-1, num);
        while(a[selected - 1] == a[selected] && selected != -1) selected--;
        cout << selected << endl;
    }

    return 0;
    
}
