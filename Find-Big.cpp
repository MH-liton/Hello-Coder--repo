#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M, N;

    while (cin>> M >> N)
    {
        if(N<M)
        {
            cout<< M <<endl;
        }
        else if(N>M)
        {
            cout<< N <<endl;
        }
        else if(N==M || M==N)
        {
            cout<< M <<endl;
        }
    }
    

    return 0;
}