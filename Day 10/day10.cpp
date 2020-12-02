#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int c = 0;
    while (n) {
        n = (n & (n << 1));
        c++;
    }
    printf ("%d\n", c);

    return 0;
}

