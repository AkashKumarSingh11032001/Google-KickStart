#include <bits/stdc++.h>
using namespace std;
int solve()
{
    int n, k;
    cin >> n >> k;
    string s;
    cin >> s;
    int left = 0, right = n - 1, count = 0;
    while (left <= right)
    {
        if (s[left] != s[right])
            count++;
        left++;
        right--;
    }
    return abs(k - count);
}
int main()
{

    int test;
    cin >> test;
    for (int i = 1; i <= test; i++)
    {
        cout << "Case #" << i << ": " << solve() << endl;
    }
    return 0;
}