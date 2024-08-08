#include<bits/stdc++.h>
using namespace std;

int main(){
    string txt;
    bool aspas = false; // false inicio,  true o fim
    while(getline(cin, txt)){
        for(int i = 0; i < txt.size(); i++){
            if(txt[i] == '"'){
                if(aspas){
                    cout << "''";
                    aspas = false;
                }
                else{
                    cout << "``";
                    aspas = true;
                }
            }
            else if(txt[i] == ' ') {
                cout << " ";
            }
            //else if(txt[i] == '.') {
            //    cout << "." << endl;
            //}
            else{
                cout << txt[i];
            }
        }
    }
    return 0;
}
