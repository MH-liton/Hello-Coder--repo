#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, X, Y, Z;

    while(cin>> N)
    {
    
        Y = N/3;
        X = Y-1; 
        Z = Y+1;

        cout<< X << " " << Y << " " << Z <<endl;
        
    }

    return 0;
}