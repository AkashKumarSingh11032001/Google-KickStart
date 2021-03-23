#include <bits/stdc++.h>
using namespace std;

void findAndReplaceAll(string &data, string toSearch, string replaceStr)
{
    
    size_t pos = data.find(toSearch);
    
    while (pos != string::npos)
    {
        
        data.replace(pos, toSearch.size(), replaceStr);
        
        pos = data.find(toSearch, pos + replaceStr.size());
    }
}
int main()
{
    int T;
    cin >> T;
    string data;
    while (T--)
    {
        /* code */
        cin >> data;
        findAndReplaceAll(data, "party", "pawri");
        cout << data << endl;
    }

    return 0;
}