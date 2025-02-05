#include <bits/stdc++.h>
using namespace std;

void reaplacingStr(string str, string s){
    while(1) {
        int x =  s.find(str);
        if(x != -1){
        s.erase(x,str.size());
        s.insert(x,"#");
      }else{
          break;
      }
    }
    std::cout << s << std::endl;
}

int main()
{   
    int t;
    cin >> t;
    
    for (int i = 0; i < t; i++) {
        string str;
        string s;
        cin >> s >> str;
        reaplacingStr(str,s);
    }
    
    return 0;
}
