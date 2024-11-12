# include<stdio.h>
int sod(int);
int main()
{
    int no=0;
    scanf("%d",&no);
    printf("sum of digits of %d is %d",no,sod(no));
    return 0;
}   
int sod(int n)
{
    if (n<=0) return 0;
    if(n==1) return 1;
    return (n%10)+sod(n/10);
}
