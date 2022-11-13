#include<bits/stdc++.h>
using namespace std;

int main()
{
    float M,N,A,B,Result;
    cin>> M >> N;

    for(int i=0; i<M; i++)
    {
        if (M<100 && N<100)
        {
            A = pow(M,2);
            B = pow(N,2);
            Result = sqrt(A+B);
        }
    }
    cout<<fixed << setprecision (2) << Result <<endl;
    return 0;
}
