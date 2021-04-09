#include <iostream>
using namespace std;
int main( )
{
 double i[4] = {1,2,3,4};
 for (double *cp = i; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}
 //kich thuoc cua kieu double la 8 byte.
