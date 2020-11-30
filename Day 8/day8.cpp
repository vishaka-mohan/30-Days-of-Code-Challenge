#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <map>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    cin>>n;
    map<string, string>m;

    for(int i=0; i<n; i++){
        string a, b;
        cin>>a>>b;
        m[a] = b;

    }

    while(true){
        string q;
        cin>>q;
        if(q=="")
            break;
        if(m.find(q) != m.end())
            cout<<q<<"="<<m[q]<<endl;
        else
            cout<<"Not found"<<endl;
    }
    return 0;
}
