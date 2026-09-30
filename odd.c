#include<stdio.h>
void main()
{
    int i, m,n;
    printf("enter m value");
    scanf("%d",&m);
    printf("enter n value");
    scanf("%d",&n);
    i=m;
    do
    {
    if (i%2!=0)
    printf("%d \n",i);
    i++;
    }while(i<=n);
}
