#include <bits/stdc++.h>
using namespace std;

int main()
{

    int T;
    cin >> T;

    long long int N,B;
    

    int tc = 0;

    while (T--)
    {
        /* code */
        tc++;
        cin >> N >> B;

        int arr[N];
        for (int i = 1; i <= N; i++)
        {
            cin >> arr[i];
        }

        sort(arr + 1, arr + N + 1);

        int count = 0;

        for (int i = 1; i <= N; i++)
        {
            /* code */
            if (B >= arr[i])
            {
                B -= arr[i];
                count++;
            }
    
        }
        cout << "Case #" << tc << ": " << count << endl;
    }
    return 0;
}