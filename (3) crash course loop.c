// Online C compiler to run C program online
#include <stdio.h>

int main()
{
    int a=87656;
    while (a>0)
    {
        printf( "%d\n",a%10);
        a=a/10;
    }
    
    return 0;
}
