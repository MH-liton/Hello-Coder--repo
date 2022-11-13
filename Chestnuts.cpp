#include<bits/stdc++.h>
using namespace std;

int main()
{
    int S, N, Priyom, Priyonti, Odry;
    cin>> S >> N;

    Priyom = (S-N)/4;
    Priyonti = Priyom*2;
    Odry = Priyom+N;

    cout<< "Priyom: " <<Priyom <<"Kg." <<endl << "Priyonti: " << Priyonti <<"Kg." <<endl << "Odry: " <<Odry <<"Kg."<<endl;
    return 0;
}