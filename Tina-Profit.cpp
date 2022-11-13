#include<bits/stdc++.h>
using namespace std;

int main()
{
    double p,n,r,total;
    cin>> p >> n >> r;

    total = (p*n*r)/100;

    cout<< fixed << setprecision(2) << total <<endl;
    return 0;
}