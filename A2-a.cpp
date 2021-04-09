#include <iostream>
using namespace std;
int main( )
{
 char a[4] = "abc";
 for (char *cp = a; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}

//Output trich dan cac thanh phan cua chuoi a vao cac dia chi cac o nho .
