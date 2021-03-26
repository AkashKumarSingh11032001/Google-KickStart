#include <bits/stdc++.h>
using namespace std;
 
string LexicographicalMinString(string str)
{
    // loop to find the max leicographic
    // substring in the substring array
    string mx = "";
    for (int i = 0; i < str.length(); ++i)
        mx = min(mx, str.substr(i));
 
    return mx;
}
 
// Driver code
int main()
{
    int T;
    cin >> T;
    while (T--)
    {
        /* code */
        string str;
    cin >>str;
    cout << LexicographicalMinString(str);
    
    }
    return 0;

    
}