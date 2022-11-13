#include<bits/stdc++.h>
using namespace std;

int main()
{
    int N, P, D, Total, Div;
    cin>> N >> P >> D;

    Total = P+D;
    Div = Total / N;
    cout << Div <<endl;
    return 0;
}