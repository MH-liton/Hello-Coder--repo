#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int N, X;
    float One , dayP;

    while (cin>> N >> X)
    {
        One = (float) X / N;
        dayP = (One/365);
        cout<< fixed << setprecision(3) << dayP << " taka" <<endl;
    }
    
    return 0;
}