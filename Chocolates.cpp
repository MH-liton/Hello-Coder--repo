#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int M, N, Choco, lates, Total;
    
    while (cin>> M >> N)
    {
                
        Choco = (M-N);
        lates = Choco*365;
        Total = lates % 100;

        cout << lates <<endl << Total <<endl;
    }

    return 0;
}