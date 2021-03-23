#include <bits/stdc++.h>
using namespace std;


int main () {

    int T;
    cin>> T;

    int N, M, K;

    while (T--)
    {
        /* code */
        cin >> N >> M >> K;

        int arr[N][M];
        for(int i=1; i<= N; i++){
            for(int j = 1 ; j<= M; j++){
                arr[i][j] = K+i+j;
            }
        }
        int bitxor=0;
        for(int i=1; i<= N; i++){
            for(int j = 1 ; j<= M; j++){
                
                bitxor = bitxor | arr[i][j];
            }
            
            
        }
        cout <<bitxor <<endl;
        

    }
    
}