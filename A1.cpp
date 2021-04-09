#include <iostream>
using namespace std;
void f(int xval)
{
 int x;
 x = xval;
 cout << &x << " ";
}
void g(int yval)
{
 int y;
 cout << &y << " ";
}
int main()
{
 f(7);
 g(11);
 return 0;
}

//Dia chi cua 2 bien giong nhau vi cac bien khoi tao trong f( ) va g( ) giong kieu du lieu truyen vao ham main .
