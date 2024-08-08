#include <iostream>
#include <vector>

using namespace std;

int main() {
    int n, m, k;
    while(scanf("%d %d %d", &n, &m, &k) && (n + m + k != 0)) {
    
        int a[n+m];

        for(int i = 0; i < n + m; i++) {
            if(i < n) a[i] = 1;
            else a[i] = 2;
        }

        int i = 0, size = n + m;
        while(size > 1) {
            i += k-1;

            while(a[i] == -1) i++;
            if(i >= size) i %= size;

            int first = a[i];
            a[i] = -1;

            size--;

            i += k;
            if(first == a[i]) a[i] = 1;
            else a[i] = 2;
            i++;

            while(a[i] == -1) i++;
            if(i >= size) i %= size;
        }


        if() cout << "Gared" << endl;
        else cout << "Keka" << endl; 
    
        v.clear();
    }
    return 0;
}
