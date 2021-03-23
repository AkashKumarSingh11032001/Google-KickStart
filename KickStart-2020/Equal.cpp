#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, noc = 0, e2 = 0, e3 = 0;
        //input size
        cin >> n;
        int arr[n];
        //input array
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        //logic{minimise cost i.e. noc}
        sort(arr, arr + n);

        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (abs(arr[i] - arr[j]) % 2 == 0)
                {
                    arr[i] += abs(arr[i] - arr[j]);
                    e2++;
                }
                if (abs(arr[i] - arr[j]) % 3 == 0)
                {
                    noc += (arr[j] - arr[i]) / 3;
                    arr[i] += abs(arr[i] - arr[j]);
                    e3++;
                }
            }
        }

        //output
        cout << noc << endl;
    }
}