#include <bits/stdc++.h>
using namespace std;
bool oddFactorChecker(int num){
    int count=2;
    for(int i=2;i<num;i++){
        if(num%i==0)count++;
    }
    if(count%2==0)return false;
    else return true;
}
int main()
{
    int n;
    cin >> n;
    //int result;
    if (n <= 2000)
    {
        for (int i = 0; i < n; i++)
        {
            long long int guess;
            cin >> guess;
            long long int r = rand() % 1000000 + 1;
            // for(long j=1; j<= 1000000; j++)
            // {
            if (guess == r && oddFactorChecker(r))
            {
                cout << 1;
            }

            else
            {
                cout << 0;
            }
            //}
        }
    }
    else
    {
        cout << -1;
    }
    //cout<<result;
}
