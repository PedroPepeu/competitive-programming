            #include <bits/stdc++.h>

            using namespace std;

            int main() {
                int n;
                cin >> n;

                int A[n], B[n], C[n], D[n];

                for(int i = 0; i < n; i++) {
                    cin >> A[i] >> B[i] >> C[i] >> D[i];
                }

                int AB[n*n], CD[n*n];
                int pos = 0;
                for(int i = 0; i < n; i++) {
                    for(int j = 0; j < n; j++) {
                        AB[pos] = A[i]+B[j];
                        CD[pos] = C[i]+D[j];
                        pos++;
                    }
                }
                sort(CD, CD+(n*n));

                int count = 0;
                for(int i = 0; i < n*n; i++) {
                    int posI = lower_bound(CD, CD+(n*n), -1*AB[i]) - CD;
                    if(posI != -1) {
                        while(posI != n*n && CD[posI] == -1*AB[i]) {
                            count++;
                            posI++;
                        }
                    }
                }

                cout << count << endl;
                return 0;
            }
