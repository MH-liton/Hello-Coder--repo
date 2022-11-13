#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int m, n, d, p, q, t, person1, Days, Cost1, person2, Days1, Days2, Cost2;
    cin>> m >> n >> d >> p >> q >> t;

    person1 = p;
    Days = (n*d*m);
    Cost1 = ((p*t)*Days);

    person2 = (p+q);
    Days1 = ((Days*m) / (p*person2));
    Days2 = (Days - Days1);
    Cost2 = ((person2*t) * Days2);



    cout<< "Person : " << person1 <<endl << "Days   : " << Days << " Days" <<endl << "Charge : " << Cost1 << " Taka" <<endl << " " <<endl;

    cout<< "Person : " << person2 <<endl << "Days   : " << Days2 << " Days" <<endl << "Charge : " << Cost2 << " Taka" <<endl;

    return 0;
}