# include<stdio.h>
int main()
{
    int n=0;
    long fact=1;
    scanf("%d",&n);
    for(int i=2;i<=n;fact*=i++);
    printf("the factorial of the number n is:%ld",fact);
    return 0;
}




