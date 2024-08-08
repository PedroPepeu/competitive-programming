#include <bits/stdc++.h>

#define pb push_back
#define mk make_pair

using namespace std;

struct dpnd {
    string name;
    vector<string> needs;
    vector<string> needed_for;
};

vector<dpnd> list_dpnd;
vector<string> list_install;

// done
// return 1 (suceed)
// return 0 (error - already installed)
int install(string dependency) {
    for(int i = 0; i < list_install.size(); i++) {
        if(list_install[i].compare(dependency) == 0)
            return 0;
    }
    list_install.pb(dependency);
    return 1;
}

int check_utils(string dpnd) {
    return 0;
}

// return 2 (not installed)
// return 1 (suceed)
// return 0 (error - still needed)
int remove(string dpnd_name) {
    for(int b = 0; b < list_install.size(); b++) {
    
        if(!list_install[b].compare(dpnd_name) == 0)
            continue;

        for(int i = 0; i < list_dpnd.size(); i++) {
            if(dpnd_name.compare(list_dpnd[i].name) == 0) {
                // acesso de dependencia
                for(int j = 0; j < list_dpnd[i].needed_for.size(); j++) {
                    for(int w = 0; w < list_install.size(); w++) {
                        if(list_dpnd[i].needed_for[i].compare(list_install[i]) == 0) {
                            return 0;
                        }
                    }
                }
            } 
        }

        list_install.erase(list_install.begin()+b);
        return 1;   
    }
    return 2;
}

// done
int listing() {
    for(int i = 0; i < list_dpnd.size(); i++) {
        cout << "    " << list_dpnd[i].name << endl;
    }
    return 0;
}

// done
int create_dependent(string name, string needed) {
    dpnd dpnd1;
    dpnd1.name = name;
    dpnd1.needed_for.pb(needed);

    list_dpnd.pb(dpnd1);
    return 0;
}

// done
int dependent_init(string command) {
    int pos = 0;
    string name = "";
    dpnd dpnd1;

    for(string::iterator it = command.begin()+6; it != command.end(); it++) {
        if(*it == ' ') {
            if(name == "")
                continue;

            if(!pos) {
                dpnd1.name = name;
                pos++;
            } else {
                dpnd1.needs.pb(name);
            }

            name = "";
            continue;
        }

        name+=*it;
    }
    list_dpnd.pb(dpnd1);

    for(int i = 0; i < dpnd1.needs.size(); i++) {
        int chck = 0;

        for(int j = 0; j < list_dpnd.size(); j++) {
            if(dpnd1.needs[i].compare(list_dpnd[j].name) == 0) {
                list_dpnd[j].needed_for.pb(dpnd1.name);
                chck = 1;
            }
        }

        if(chck)
            break;
        else {
            create_dependent(dpnd1.needs[i], dpnd1.name);
        }

    }

    return 0;
}

int main() {
    string input;
    while(getline(cin, input)) {
        cout << input << endl;
        
        if(input.compare("END") == 0) 
            break;

        string instruct = "";
        for(string::iterator it = input.begin(); *it != ' '; it++) {
            instruct+=*it;
        }

        if(instruct.compare("INSTALL") == 0) { 
            string inst_dependency = "";
            for(string::iterator it = input.begin()+7; it != input.end(); it++) {
                if(*it == ' ') continue;
                inst_dependency+=*it;
            }
            if(install(inst_dependency)) {
                cout << "Installing " << inst_dependency << endl;
            } else {
                cout << inst_dependency << " is already installed." << endl;
            }
        }
    
        if(instruct.compare("REMOVE") == 0) {
            string remv_dependency = "";
            for(string::iterator it = input.begin()+6; it != input.end(); it++) {
                if(*it == ' ') continue;
                remv_dependency+=*it;
            }

            int retn = remove(remv_dependency);
            if(retn) {
                cout << "Removing " << remv_dependency << endl;
            } else if(!retn) {
                cout << remv_dependency << " is still needed." << endl;
            } else {
                cout << remv_dependency << " is not installed" << endl;
            }
        }

        // done
        if(instruct.compare("LIST") == 0)
            listing();

        // done
        if(instruct.compare("DEPEND") == 0)
            dependent_init(input);
    }

    return 0;
}
