#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int d1,d2,m1,m2,y1,y2;
    cin>>d1>>m1>>y1>>d2>>m2>>y2;

    int fine = 0;

    if(m1==m2 && y1==y2)
    {
        if(d1<=d2)
            fine = 0;
        else
            fine = (d1-d2)*15;
    }
    else if(y1==y2 && m1!=m2)
    {
        if(m1<m2)
            fine=0;
        else
            fine = (m1-m2)*500;
    }
    else if(y1!=y2)
    {

        if(y1<y2)
            fine=0;
        else
            fine = 10000;
    }
    cout<<fine;
    return 0;
}

