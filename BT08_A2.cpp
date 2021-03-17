#include<iostream>

using namespace std;
int main( )
{
   char a[4] = "abc";
   for (char *cp = a; (*cp) != '\0'; cp++) {
      cout << (void*) cp << " : " << (*cp) << endl;
   }
   /*int a[4] = {1, 2, 3, 4};
   for (int *cp = a; (*cp) < *(a+4); cp++) {
      cout <<  cp << " : " << (*cp) << endl;
   }
   double a[4] = {1, 2, 3, 4};
   for (double *cp = a; (*cp) < *(a+4); cp++) {
      cout <<  cp << " : " << (*cp) << endl;
   }*/
   return 0;
}
