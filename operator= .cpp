//
//#include <iostream>
//
//using namespace std;
//class coord
//{
//    int x,y;
//public:
//    coord ()
//    {
//        x = 0;
//        y= 0;
//    }
//    coord (int i , int j)
//    {
//        x = i;
//        y = j;
//    }
//    void get_xy (int &i , int &j)
//    {
//        i = x ;
//        j = y;
//    }
//    coord operator =( coord ob2);
//};
//coord coord :: operator =(coord ob2)
//{
//
//    x = ob2 .x;
//    y = ob2 .y;
//    return *this ;
//}
//int main()
//{
//    coord ob1 ( 10,10 ), ob2 (5,3 ), ob3;
//    int x,y;
//    ob3 = ob1 = ob2;
//    ob3. get_xy ( x, y);
//    cout << "(ob1 = ob2) X: " << x << " , Y " << y << endl;
//    return 0;
//}
//
