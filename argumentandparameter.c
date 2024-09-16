#include<stdio.h>
int hellow(int a ,int b)
{
    return a+b;

}
int main()
{
    int a,b,sum;
    scanf("%d %d",&a,&b );
    sum=hellow(a,b);
    printf(" the answer is %d.",sum);
    return 0;
}