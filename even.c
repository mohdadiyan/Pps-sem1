#include<stdio.h>
void main()
{
    int i, m,n;
    printf("enter m value");
    scanf("%d",&m);
    printf("enter n value");
    scanf("%d",&n);
    for(i=m;i<=n;i++)
     if(i%2==0)
        printf("%d\n",i);
}
