#include <iostream>
using namespace std;
int main( )
{
 double i[4] = {1,2,3,4};
 for (double *cp = i; (*cp) != '\0'; cp+=2) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}

//CT se duyet cac phan tu cach nhau 2 o va kich thuoc van la 8 byte.
