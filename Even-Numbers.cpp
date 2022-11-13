#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, V, W, X, Y, Z;

    while(cin>> N)
    {
    
        V = (N/5)-4;
        W = (V+2);
        X = (W+2);
        Y = (X+2);
        Z = (Y+2);

        cout<< V << " " << W << " " << X << " " << Y << " " << Z <<endl;
        
    }

    return 0;
}