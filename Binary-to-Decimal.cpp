#include<bits/stdc++.h>
using namespace std;

int main()
{
    int bi, dc=0, i=1, rem;            // bi = binary, dc= decimal, rem = remainder;
    cin>> bi;

    while(bi !=0)
    {
        rem = bi%10;
        dc = dc + (rem*i);
        i=i*2;
        bi = bi/10;
    }

    cout<< dc <<endl;
    return 0;
}