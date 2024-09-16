#include<stdio.h>
int fndmax(int x, int y)
{
   return (x>y)?x:y;
}
int main()
{
    int max=fndmax(1,5);
    printf(" the value is %d.",max);
    return 0;
} 