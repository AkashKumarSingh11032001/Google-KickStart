// from sympy.core.cache import cacheit

// from sympy import binomial

// @cacheit
// def a(n):
//     if n == 0:
//         return 1
//     else:
//         for k in range(n):
//             return (2**binomial(n, 2) - sum(a(k)*binomial(n, k)))

// print([a(n) for n in range(21)])

#include <bits/stdc++.h>
using namespace std;


int binomialCoefficients(int n, int k)
{
    // Base Cases
    if (k > n)
        return 0;
    if (k == 0 || k == n)
        return 1;
 
    // Recur
    return binomialCoefficients(n - 1, k - 1)
           + binomialCoefficients(n - 1, k);
}

int series_val(int x)
{

    if (x == 0)
    {
        return 1;
    }
    else
    {
        int sub2 = 0;
        for (int i = 0; i < x; i++)
        {
            
            int sub1 = 2^binomialCoefficients(x, 2);
            int sub2 = sub2 + series_val(i)*binomialCoefficients(x, i);
            //cout << typeid(sub2).name() << endl;
            int res = (sub1 - sub2);
        }
    }
}
int main()
{

    int N;
    cin >> N;

    cout << series_val(N) << endl;
}
