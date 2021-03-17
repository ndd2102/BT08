#include<iostream>
using namespace std;
void swap_pointers(char** x, char** y)
{
   char *tmp;
   tmp = *x;
   *x = *y;
   *y = tmp;
}
int main()
{
   char a[] = "I should print second";
   char b[] = "I should print first";

   char *s1 = a;
   char *s2 = b;

   char **x = &s1;
   char **y = &s2;
   swap_pointers(x,y);
   cout << "s1 is " << s1 << endl;
   cout << "s2 is " << s2 << endl;
   return 0;
}

