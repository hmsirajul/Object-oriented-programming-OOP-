#include<iostream>
using namespace std;

template <class X> void swapargs(X &a, X &b)
{
    X temp ;
    temp = a;
    a = b;
    b= temp;
}
int main ()
{
    int i = 10;
    int j = 20;
    float x = 10 , y = 23.3;

    cout << " Original i , j : " << i << ' ' <<j<< endl;
    cout << " Original x , y : " << x << ' ' <<y<< endl;

    swapargs ( i , j);
    swapargs ( x , y);

    cout << " swapargs i , j : " << i << ' ' <<j<< endl;
    cout << " swapargs x , y : " << x << ' ' <<y<< endl;

    return 0;
}
