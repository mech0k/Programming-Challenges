#include <bits/stdc++.h>
using namespace std;

bool checkValidString(string s){
    int l = 0;
    int u = 0;
    for(char c:s){
        if(c == '('){
            l++;
            u++;
        }else if(c == ')'){
            l--;
            u--;
            if(l < 0) l = 0;
        }else{
            l--;
            u++;
            if(l < 0) l = 0;
        }
        if(u < 0) return false;
    }
    return l==0;
}


int main(){
    std::ios_base::sync_with_stdio(false);

    string t0 = "()";
    string t1 = "(*)";

    string t2 = "(*)((*";

    string t3 = "(())((())()()(*)(*()(())())())()()((()())((()))(*";
    string t4 = "(())(())(((()*()()()))()((()()(*()())))(((*)()";
    string t5 = "(((*))(((*)))(((*)";
    string t6 = "()";
    cout << checkValidString(t0) << endl;
    cout << checkValidString(t1) << endl;
    cout << checkValidString(t2) << endl;
    cout << checkValidString(t3) << endl;
    cout << checkValidString(t4) << endl;
    cout << checkValidString(t5) << endl;
    cout << checkValidString(t6) << endl;
    return 0;
}

