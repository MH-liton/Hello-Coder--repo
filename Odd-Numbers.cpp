#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, W, X, Y, Z;

    while(cin>> N)
    {
    
        W = (N/4)-3;
        X = (W+2);
        Y = (X+2);
        Z = (Y+2);

        cout<< W << " " << X << " " << Y << " " << Z <<endl;
        
    }

    return 0;
}