#include <bits/stdc++.h>

using namespace std;



int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    int ans = 0;
    int s;
    for(int i = 0; i < 4; i++) {
        for(int j = 0; j < 4; j++) {
            s = 0;

            s += arr[i][j];
            s += arr[i][j+1];
            s += arr[i][j+2];

            s += arr[i+1][j+1];

            s += arr[i+2][j];
            s += arr[i+2][j+1];
            s += arr[i+2][j+2];

            //if first hourglass, set as max
            if(s > ans || i == 0 && j == 0)
                ans = s;
        }
    }
    printf("%d",ans) ;

    return 0;
}

