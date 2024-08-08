#include <iostream>
#include <vector>
#include <map>
#include <utility>
#include <cmath>

using namespace std;

double diagonal(double x1, double y1, double x2, double y2) {
    double diagonal = sqrt(pow(abs(x1 - x2),2) + pow(abs(y1-y2), 2));
    return diagonal;
}

double triSize(double x1, double y1, double x2, double y2, double x3, double y3) {
    double l1 = diagonal(x1, y1, x2, y2);
    double l2 = diagonal(x2, y2, x3, y3);
    double l3 = diagonal(x3, y3, x1, y1);
    
    double semiP = (l1 + l2 + l3)/2;

    return sqrt(semiP*(semiP-l1)*(semiP-l2)*(semiP-l3));
}

int main() {
    int n;
    map<pair<int, char>, vector<double>> m;
    for(int i = 0; i < 10; i++) {
        char c;
        cin >> c;
        if(c == '*') break;
        if(c == 't') {
            double x, y;
            n = 6;
            vector<double> v;
            while(n--) {
                cin >> x >> y;
                v.push_back(x);
                v.push_back(y);
            }
            pair<int, char> p (i+1, c);
            m[p] = v;
        } else if(c == 'c') {
            double x, y, r;
            cin >> x >> y >> r;
            vector<double> v;
            v.push_back(x);
            v.push_back(y);
            v.push_back(r);
            pair<int, char> p (i+1, c);
            m[p] = v;
        } else if(c == 'r') {
            n = 2;
            double x, y;
            vector<double> v;
            while(n--) {
                cin >> x >> y;
                v.push_back(x);
                v.push_back(y);
            }
            pair<int, char> p (i+1, c);
            m[p] = v;
        }
    }

    int point = 1;
    double x, y;
    while(cin >> x >> y && (x != 9999.9 && y != 9999.9)) {
        int check = 0;
        for(auto &mm : m) {
            if(mm.first.second == 't') {
                double A = triSize(mm.second[0], mm.second[1], mm.second[2], mm.second[3], mm.second[4], mm.second[5]);
                double A1 = triSize(x, y, mm.second[2], mm.second[3], mm.second[4], mm.second[5]);
                double A2 = triSize(mm.second[0], mm.second[1], x, y, mm.second[4], mm.second[5]);
                double A3 = triSize(mm.second[0], mm.second[1], mm.second[2], mm.second[3], x, y);
                if((A1 + A2 + A3) == A) {
                    printf("Point %d is contained in figure %d\n", point, mm.first.first);
                    check = 1;
                    continue;
                }
            } else if(mm.first.second == 'c') {
                if(sqrt(pow(abs(mm.second[0] - x), 2) + pow(abs(mm.second[1] - y), 2)) < mm.second[2]) {
                    printf("Point %d is contained in figure %d\n", point, mm.first.first);
                    check = 1;
                    continue;
                }
            } else if(mm.first.second == 'r') {
                if(x > mm.second[0] && x < mm.second[2] && y < mm.second[1] && mm.second[3]) {
                    printf("Point %d is contained in figure %d\n", point, mm.first.first);
                    check = 1;
                    continue;
                }
            }
        }

        if(check == 0) printf("Point %d is not contained in any figure\n", point);
        point++;
    }

    return 0;
}
