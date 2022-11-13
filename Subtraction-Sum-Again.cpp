#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m, n, o, p, A, B, Sum;

    while (cin>> m >> n >> o >> p)
    {
        A = m-n;
        B = o-p;
        Sum = A+B;
        cout<< Sum <<endl;
    }
    

    return 0;
}