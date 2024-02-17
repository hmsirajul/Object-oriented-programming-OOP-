#include<iostream>
using namespace std;
class myclass
{
private :
    int a ,b;
public:
    myclass (int x, int y);
    void show ();
};
myclass :: myclass (int x, int y)
{
    cout << " In constructor \n ";
    a = x;
    b = y;
}
void myclass :: show ()
{
    cout << a << ' ' << b << endl;
}
int main()
{
    myclass ob ( 10, 4);
    ob.show ();
     return 0;
}
