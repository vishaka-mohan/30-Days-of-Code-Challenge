#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    string s;
    cin>>t;
    for(int i=0; i<t; i++){
        cin>>s;
        for(int j=0; j<s.length(); j+=2){
            cout<<s[j];
        }
        cout<<" ";
        for(int j=1; j<s.length(); j+=2){
            cout<<s[j];
        }
        cout<<endl;

    }

    return 0;
}

