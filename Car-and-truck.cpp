#include<bits/stdc++.h>
using namespace std;

int main()
{
    long N, P, M, Speed, Truck, Car;
    cin>> N >> P >> M;

    Speed = N/P;                            //Speed = Distance / Time;
    Truck = (Speed-M)/2;
    Car = (Truck+M);                      //If the car drives M km/hr faster than the truck.

    cout << Truck << " " << Car <<endl;
    return 0;
}
