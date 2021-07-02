// { Driver Code Starts
// Initial template for C++

// Program to convert Roman Numerals to Numbers
#include <bits/stdc++.h>
using namespace std;

// Returns decimal value of roman numaral
int romanToDecimal(string &);

int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        cout << romanToDecimal(s) << endl;
    }
}// } Driver Code Ends


// User fuunction teemplate for C++

// str given roman number string
// Returns decimal value of roman numaral
int numval(char s){
    if(s=='I')
            return 1;
    if(s=='V')
        return 5;
    if(s=='X')
        return 10;
    if(s=='L')
        return 50;
    if(s=='C')
        return 100;
    if(s=='D')
        return 500;
    return 1000;
            
    
}
int romanToDecimal(string &str) {
    
    // I 1
    // V 5
    // X 10
    // L 50
    // C 100
    // D 500
    // M 1000
    int s=0,x;
    int i;
    for(i=0;i<str.length()-1;i++){
        if(numval(str[i])>=numval(str[i+1]))
            s+=numval(str[i]);
        else{
            s=s-numval(str[i])+numval(str[++i]);
        }
    }
       if(i==str.length()-1||i==0)
        s+=numval(str[str.length()-1]);
    return s;
}