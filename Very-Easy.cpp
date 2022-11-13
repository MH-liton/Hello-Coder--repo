#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num, sum=0, r, temp;
    cin>> num;

    temp = num;

    while(temp!=0)
    {
        r = temp%10;
        sum = (sum*10)+r;
        temp = temp/10;
    }

    cout<< sum <<endl;
    return 0;
}