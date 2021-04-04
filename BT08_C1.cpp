#include <iostream>

using namespace std;
int strlen(char *a)
{
    int i=0;
    while(a[i] != '\0')
        i++;
    return i;
}

void Reverse(char *a)
{
    int leng = strlen(a);
    char str[leng + 1];
    for (int i=0; i<leng; i++)
        str[i] = a[leng-i-1];
    cout << str << endl;
}

void delete_char(char *a, char l)
{
    int i=0,leng=strlen(a),k=0;
    char str[leng];
    for (int i=0; i<leng; i++)
        str[i] = a[i];
    while (i != leng)
    {
        while (str[i] == l)
        {
            k++;
            for (int j=i; j<leng; j++)
            {
                str[j]=str[j+1];
            }
            str[leng-k]='\0';
        }
         i++;
    }
     cout << str << endl;
}

void pad_right(char *a, int n)
{
    int leng=strlen(a);
    char str[leng];
    for (int i=0; i<leng; i++)
        str[i] = a[i];
    if (leng < n)
    {
        str[n]='\0';
        for (int i=leng;i<n;i++)
            str[i] = '_';
    }
     cout << str << endl;
}

void pad_left(char *a, int n)
{
    int leng=strlen(a);
    char str[leng];
    str[leng]='\0';
    for (int i=0;i<leng;i++)
        str[i] = a[i];
    if (leng < n)
    {
        a[n]='\0';
        int j=0;
        for (int i=0;i<(n-leng);i++)
        {
            str[i] = '_';
        }
        for (int i=n-leng;i<n;i++)
        {
            str[i]=a[j];
            j++;
        }
    }
    cout << str << endl;
}

void truncate(char *a, int n)
{
    int leng=strlen(a);
    char str[leng];
    for (int i=0; i<leng; i++)
        str[i] = a[i];
    if (leng > n) str[n]='\0';
    cout << str << endl;
}

bool is_palindrome(char *a)
{
    int leng=strlen(a);
    for (int i=0;i<leng/2;i++)
        if (a[i] == a[leng-i-1]) return false;
    return true;
}

void trim_left(char *a)
{
    int i=0;
    while (a[i] == ' ')
    delete_char(a,' ');
}

void trim_right(char *a)
{
    int i=strlen(a);
    while (a[i] == ' ')
    delete_char(a,' ');
}

int main()
{
    char str[]="Hello";
    Reverse(str);
    delete_char(str,'l');
    pad_right(str,7);
    pad_left(str,7);
    truncate(str,3);
    is_palindrome(str);
}
