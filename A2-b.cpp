#include <iostream>
using namespace std;
int main( )
{
int i[5] = {1,2,3,4,5};
 for (int *cp = i; (*cp) != '\0'; cp++) {
 cout << (void*) cp << " : " << (*cp) << endl;
 }
 return 0;
}

//kich thuoc cua kieu int la 5 byte.
