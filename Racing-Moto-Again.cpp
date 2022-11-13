#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n, m, l, total, percent, Tpoints;
    
    
    while(cin>> n >> m >> l)

    {   total = (n*m);
        percent = (l*total)/100;
        Tpoints = (total+percent);
    
        cout<< Tpoints << " Points" <<endl;
    }
        
    return 0;
}