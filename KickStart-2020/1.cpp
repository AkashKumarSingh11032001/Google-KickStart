#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, arr[5];
    cin >> t;

    while (t--)
    {
        cin >> arr[0] >> arr[1] >> arr[2] >> arr[3] >> arr[4];
        int inc = arr[1] - arr[0], rangeL = arr[2] * arr[4], rangeH = arr[3] * arr[4];
        cout << (inc >= rangeL && inc <= rangeH) << endl;
    }
}