# include<stdio.h>
long fib(int);
int main()
{
    int n=0,f=1;
    scanf("%d",&n);
    printf("%ld",fib(n));
    return 0;
}
long fib(int no)
{
    if(no<=0) return(long)0;
    if(no==1) return 1;
    return fib(no-1)+fib(no-2);

}