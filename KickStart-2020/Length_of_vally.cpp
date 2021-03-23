//Tanmay
#include <bits/stdc++.h>
using namespace std;
//equalElements
int main()
{
    int t, lov, n, l, r;
    cin >> t;
    while (t--)
    {
        // inp size of arr
        cin >> n;
        int arr[n];
        //input arr
        for (int i = 0; i < n; i++)
            cin >> arr[i];

        //logic
        for (int i = 0; i < n; i++)
        {
        //left loop till a[i-1]>a[i] and i>=0
        left:
            if (i == 0)
            {
                l = 0;
                goto right;
            }
            l = i;
            for (int j = i; j > 0; j--)
            {
                if (arr[j - 1] > arr[j])
                {
                    l = j - 1;
                }
                else
                    break;
            }

        //right loop till a[i+1]>a[i] and i<n
        right:
            if (i == n - 1)
            {
                r = n - 1;
                goto print;
            }
            r = i;
            for (int j = i; j < n - 1; j++)
            {
                if (arr[j] < arr[j + 1])
                {
                    r = j + 1;
                }
                else
                    break;
            }
        print:
            cout << (r - l + 1) << " ";
        }
        cout << endl;

        //output
    }
}