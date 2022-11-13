#include<bits/stdc++.h>
using namespace std;

int main()
{
    int M, E, B, Mathe, English, Total, TT;
    cin>> M >> E >> B;

    Mathe = M-B;
    English = E-B;

    Total = (Mathe+English+B);
    TT = 100 - Total;
    cout << TT << "%" <<endl;
    return 0;
}