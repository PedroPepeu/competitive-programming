#include <bits/stdc++.h>

#define lli long long int
#define pb push_back

using namespace std;

int main() {
    int t;
    scanf("%d", &t);
    while(t--) {
        int tt, k;
        scanf("%d %d", &tt, &k);


        lli temp;
        unsigned lli O = 0;
        vector<lli> cuts;

        for(int i = 0; i < k; i++) {
            scanf("%lld", &temp);
            cuts.pb(temp);
        }

        sort(cuts.begin(), cuts.end(), [](auto &left, auto &right) {
                return left > right;
                }); 

        for(int i = 1; i < cuts.size(); i++) {
            if(cuts[i] != 1) O+=((cuts[i]*2)-1);
            else O++;
        }

        printf("%llu\n", O);
    }

    return 0;
}
