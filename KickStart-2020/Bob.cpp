#include <bits/stdc++.h>
using namespace std;


int binomialCoeff(int n, int r)
{
 
    if (r > n)
        return 0;
    long long int m = 1000000007;
    long long int inv[r + 1] = { 0 };
    inv[1] = 1;
 
    
    for (int i = 2; i <= r; i++) {
        inv[i] = m - (m / i) * inv[m % i] % m;
    }
 
    int ans = 1;
 
    
    for (int i = 2; i <= r; i++) {
        ans = ((ans % m) * (inv[i] % m)) % m;
    }
 
    
    for (int i = n; i >= (n - r + 1); i--) {
        ans = ((ans % m) * (i % m)) % m;
    }
    return ans;
}
int array[]
int val_to_array(long int x){

}
int series_val(int n) {

    if(n == 0){
        return 0;
    }else{
        long int sub1,sub2;
        for(int i = 0; i< n; i++){
            sub1 = 2^binomialCoeff(n, 2);
            sub2 += series_val(i)*binomialCoeff(n,i);
            return  sub1 - sub2;
        }
    }

}

int main() {

    int N;
    cin >> N;
    if(N>=2 && N<= 100000){
        cout << series_val(N) << endl;
    }
}