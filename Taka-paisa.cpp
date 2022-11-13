#include<bits/stdc++.h>
using namespace std;

int main()
{
    float T;
    int Result,S,B;
   cin>> T;

   Result = (T*100);

   S = Result / 100;
   B = Result % 100;

    cout<< S <<" Taka " << B << " Paisa" <<endl;
    return 0;
}
