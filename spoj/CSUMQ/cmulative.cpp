#include <iostream>

using namespace std;

int main() {

    int n, q;
    cin >> n;
    int cur = 0;
    int arr[n];
    while(n--) {
        cin >> arr[cur];
        cur++;
    }
    cin >> q;
    while(q--) {
        int srt, end, totalS = 0;
        cin >> srt >> end;
        while(srt <= end) {
            totalS += arr[srt];
            srt++;
        }
        cout << totalS << endl;
    }

    return 0;
}
