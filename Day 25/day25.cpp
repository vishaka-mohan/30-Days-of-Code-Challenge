#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int t;
    cin>>t;

    while(t--)
    {
        int n;
        cin>>n;
        int c = 0;
        for(int i=2; i<=sqrt(n); i++)
        {
            if(n%i==0)
                c++;
        }

        if(n==1)
        {
            cout<<"Not prime"<<endl;
            continue;
        }
        if(c==0)
            cout<<"Prime"<<endl;
        else
            cout<<"Not prime"<<endl;
    }
    return 0;
}

