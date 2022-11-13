#include<bits/stdc++.h>
using namespace std;

int main()
{
    int Oct, dc=0, i=1, rem;            // Oct = Octal, dc= decimal, rem = remainder;
    cin>> Oct;

    while(Oct !=0)
    {
        rem = Oct%10;
        dc = dc + (rem*i);
        i=i*8;
        Oct = Oct/10;
    }

    cout<< dc <<endl;
    return 0;
}