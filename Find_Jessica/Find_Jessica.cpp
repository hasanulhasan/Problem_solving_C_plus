#include <bits/stdc++.h>
using namespace std;

bool checkIsStr(string t){
    string s = "Jessica";
        if(s.size() != t.size()){
        return false;
    } else{
        
        for (int i = 0; i < s.size(); i++) {
            if(s[i] != t[i]){
                return false;
            }
        }
        return true;
    }
};

int main() {
    string strLine;
    getline(cin, strLine);
    istringstream iss(strLine); 
    string word;

    while (iss >> word) {
        if(checkIsStr(word)){
        cout << "YES" << std::endl;
        return 0;
     }
    }
    cout << "NO" << std::endl;
    return 0;
}

