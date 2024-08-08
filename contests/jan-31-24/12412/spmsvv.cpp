#include <bits/stdc++.h>

using namespace std;

string menu = "Welcome to Student Performance Management System (SPMS).\n\n1 - Add\n2 - Remove\n3 - Query\n4 - Show ranking\n5 - Show Statistics\n0 - Exit\n";

string chc1 = "Please enter the SID, CID, name and four scores. Enter 0 to finish.";
string chc23 = "Please enter SID or name. Enter 0 to finish.";
string chc4 = "Showing the ranklist hurts students' self-esteem. Don't do that.";
string chc5 = "Please enter class ID, 0 fo the whole statistics.";

vector<pair<string, pair<int, pair<string, vector<double>>>>> db;

typedef vector<pair<int, pair<int, pair<string, vector<double>>>>>::iterator it;

it find(string sid) {
    for(it x = db.begin(); x != db.end(); x++) {
        if(x->first == sid) return x;
    }
    
    return db.end();
}


int count(string sid) {
    for(auto &x : db) {
        if(x.first == sid) return 1;
    }
    return 0;
}

int findN(string name) {
    for(auto &x : db) {
        if(x.second.second.first == name) return 1;
    }
    return 0;
}

int remove(string sid) {
    int count = 0;
    for(vector<pair<int, pair<int, pair<string,vector<double>>>>>::iterator x = db.begin(); x != db.end(); ++x) {
        if(x->first == sid) {
            count++;
            db.erase(x);
            return 1;
        }
    }
    return 1;
}

int remove(string name) {
    int count = 0;
    for(vector<pair<int, pair<int,pair<string,vector<double>>>>>::iterator it = db.begin(); it != db.end(); ++it) {
        if(it->second.second.first == name) {
            count++;
            db.erase(it);
            break;
        }
    }
    if(count == 0) return count;
    else return count+remove(name);
}

int adding(int sid, int cid, string name, double scoreC, double scoreM, double scoreE, double scoreP) {
    //check if equals
    if(count(sid)>0) {
        return 1;
    }
 
    vector<double> v = {scoreC, scoreM, scoreE, scoreP};
    db.push_back(make_pair(sid, make_pair(cid, make_pair(name, v))));
    return 0;
}

vector<string> stsC(int cid) {
    vector<double> C (3, 0);
    vector<double> M (C);
    vector<double> I (C);
    vector<double> P (C);
    vector<double> O (5, 0);
    int stds = 0;
    //CG  CP  CF

    for(auto &x : db) {
        if(x.second.first == cid) {
            stds = 0;

            stds++;
            C[0] += x.second.second.second[0];
            if(x.second.second.second[0]>=60) {
                C[1]++;
                stds++;
            }
            else C[2]++;

            M[0] += x.second.second.second[1];
            if(x.second.second.second[1]>=60) {
                M[1]++;
                stds++;
            }
            else M[2]++;
            
            I[0] += x.second.second.second[2];
            if(x.second.second.second[2]>=60) {
                I[1]++;
                stds++;
            }
            else I[2]++;
        
            P[0] += x.second.second.second[3];
            if(x.second.second.second[3]>=60) {
                P[1]++;
                stds++;
            }
            else P[2]++;

            O[stds]++;
        }
    }

    vector<string> out;
    out.push_back("Chinese:");
    out.push_back("Average Score: "+to_string(C[0]/stds));
    out.push_back("Number of passed students: "+to_string(C[1]));
    out.push_back("Number of failed students: "+to_string(C[2]));

    out.push_back("Mathematics:");
    out.push_back("Average Score: "+to_string(M[0]/stds));
    out.push_back("Number of passed students: "+to_string(M[1]));
    out.push_back("Number of failed students: "+to_string(M[2]));

    out.push_back("English:");
    out.push_back("Average Score: "+to_string(I[0]/stds));
    out.push_back("Number of passed students: "+to_string(I[1]));
    out.push_back("Number of failed students: "+to_string(I[2]));

    out.push_back("Programming:");
    out.push_back("Average Score: "+to_string(P[0]/stds));
    out.push_back("Number of passed students: "+to_string(P[1]));
    out.push_back("Number of failed students: "+to_string(P[2]));

    out.push_back("Overall:");
    out.push_back("Number of students who passed all subjects: "+to_string(O[4]));
    out.push_back("Number of students who passed 3 or more subjects: "+to_string(O[3]));
    out.push_back("Number of students who passed 2 or more subjects: "+to_string(O[2]));
    out.push_back("Number of students who passed 1 or more subjects: "+to_string(O[1]));
    out.push_back("Number of students who failed all subjects: "+to_string(O[0]));

    return out;
}

vector<string> pushV (vector<string> v, vector<string> in) {
    for(int i = 0; i < in.size(); i++) {
        v.push_back(in[i]);
    }
    return v;
}

vector<string> stsAll() {
    vector<string> out;
    vector<int> classesV;
    for(auto &x : db) {
        if(binary_search(classesV.begin(), classesV.end(), x.second.first)) continue;
        out = pushV(out, stsC(x.second.first));
        classesV.push_back(x.second.first);
    }
    return out;
}

string qury(int sid) {
    int rank = 1;
    it std = find(sid);
    double average = std->second.second.second[0]+
        std->second.second.second[1]+
        std->second.second.second[2]+
        std->second.second.second[3];
    average/=4;
    for(auto &x : db) {
        if(((x.second.second.second[0]+
        x.second.second.second[1]+
        x.second.second.second[2]+
        x.second.second.second[3])/4)>average) rank++;
    }
    string out = "";
    out+=to_string(std->first);
    out+=to_string(std->second.first);
    out+=std->second.second.first;
    out+=to_string(std->second.second.second[0]);
    out+=to_string(std->second.second.second[1]);
    out+=to_string(std->second.second.second[2]);
    out+=to_string(std->second.second.second[3]);
    return out;
}

vector<string> qury(string name) {
    vector<string> out;
    for(auto &x : db) {
        if(x.second.second.first == name) {
            out.push_back(qury(x.first));
        }
    }
    return out;
}

int main() {
    
    int chck = 1;
    while(chck) {
        cout << menu;

        string sid
        int cid, scoreC, scoreM, scoreE, scoreP;
        string name;

        char chc;
        cin >> chc;
        

        while(chc == '1') { // adding student
            cout << chc1 << endl;
            cin >> sid;
            if(sid == 0) break;
            //read all four input, if the SID is equals than print
            cin  >> cid >> name >> scoreC >> scoreM >> scoreE >> scoreP;
            if(sid == 0) break;

            int ai = adding(sid, cid, name, scoreC, scoreM, scoreE, scoreP);
            if(ai) {
                cout << "Duplicated SID." << endl;
                continue;
            }
        }
        while(chc == '2') { // remove
            cout << chc23 << endl;
            
            string tst;
            cin >> tst;

            if(tst == "0") break;
            int rm;

            try {
                sid = stoi(tst);
                if(sid == 0) break;
                rm = remove(sid);
            } catch (const exception& e) {
                name = tst;
                rm = remove(name);
            }

            cout << rm << " student(s) remove." << endl;
        }
        while(chc == '3') { // query
            cout << chc23 << endl;

            string tst;
            cin >> tst;

            vector<string> out;

            try {
                sid = stoi(tst);
                if(sid == 0) break;
                if(count(sid) <= 0) continue;
                cout << qury(sid) << endl;
                // look for students
            } catch (const exception& e) {
                if(tst == "0") break;
                name = tst;
                if(findN(name) == 0) continue;
                out = qury(name);
                for(int i = 0; i < out.size(); i++) {
                    cout << out[i] << endl;
                }
                // look for students
            }

        }
        if(chc == '4') { // hsow ranking
            cout << chc4 << endl;
        }
        if(chc == '5') { // show statistics
            cout << chc5 << endl;

            int inp;
            cin >> inp;

            vector<string> sts;

            if(inp == 0) sts = stsAll();//...
            else {
                // statistics >60 (passed)
                sts = stsC(inp);
            }

            for(int i = 0; i < sts.size(); i++) {
                cout << sts[i] << endl;
            }
            
        }
        if(chc == '0') break; // exit
    }
    return 0;
}
