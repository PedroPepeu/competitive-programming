#include <bits/stdc++.h>

using namespace std;

// may the force be with us
//         "code"??
// "with us the code may be" minch, master yoda - 2024

#define pb push_back

typedef struct ss {
	int size;
	int freq [26] = {0};
	char orig[11]; // original
	char ordn[11]; // ordened
	int dominated = 0;
} s;

// s1 dominated
// s2 dominate

bool cmp_freq(s &s1, s &s2) {
	for(int i = 0; i < 26; i++) {
		if(s1.freq[i] > s2.freq[i]) {
			return false;
		}
	}
	return true;
}

bool cmp_orig(s &s1, s&s2) {
    int minSize = min(s1.size, s2.size);

    for(int i = 0; i < minSize; i++) {
        if(s1.orig[i] != s2.orig[i]) { return s1.orig[i] < s2.orig[i]; }
    }

    return s1.size < s2.size;
}

int main() {
	s s1;
	vector<s> strings;
	while(fgets(s1.orig, 11, stdin)) {
		memset(s1.freq, 0, 26*4);

		s1.size = strlen(s1.orig);
		strcpy(s1.ordn, s1.orig);
		sort(s1.ordn, s1.ordn+s1.size-1);
		
		for(int i = 0; i < s1.size; i++) {
			s1.freq[s1.ordn[i]-'a']++;
		}

		strings.pb(s1);
	}

    vector<s> domin;
	for(int i = 0; i < strings.size(); i++) {
		int domNum = 0;

        for(int j = 0; j < strings.size(); j++) {
			if(i == j) continue;
			if(strlen(strings[i].ordn) > strlen(strings[j].ordn)) {
				continue;
			}

			if(cmp_freq(strings[i], strings[j])) {
                domNum = 1;
                break;
            }
		}

        if(!domNum) {
            domin.pb(strings[i]);
        }
	}
	
	sort(domin.begin(), domin.end(), cmp_orig);

	for(int i = 0; i < domin.size(); i++) {
		printf("%s", domin[i].orig);
	}

	return 0;
}
