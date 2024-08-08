#include <iostream>

using namespace std;

int a[10][10];

int main() {
    int t;
    char x;
    cin >> t;
    while(t--) {
        int pts = 0;
        for(int i = 0; i < 10; i++) {
            for(int j = 0; j < 10; j++) {
                cin >> x;
                if(x == 'X') {
                    if(i == 0 || j == 0 || i == 9 || j == 9) {
                        pts+=1;
                    }
                    else if(i == 1 || j == 1 || i == 8 || j == 8) {
                        pts+=2;
                    }
                    else if(i == 2 || j == 2 || i == 7 || j == 7) {
                        pts+=3;
                    }
                    else if(i == 3 || j == 3 || i == 6 || j == 6) {
                        pts+=4;
                    }
                    else if(i == 4 || j == 4 || i == 5 || j == 5) {
                        pts+=5;
                    }
                
                }
            }
        }
        cout << pts << endl;
    }
    return 0;
}
