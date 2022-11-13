#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M,N,Result;
    cin>> M >> N;

    for(int i=0; i<M; i++)
    {
        if(1<M<1000 || 1<N<1000)
        {
            Result = ((M*N) - (M+N));
        }
    }
    cout<< Result <<endl;
    return 0;
}
