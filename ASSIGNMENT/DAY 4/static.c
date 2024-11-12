# include<stdio.h>

void myfank();
int main()
{
    printf("hello world\n");
    myfank();
    printf("hello world 2\n");
    myfank();
    printf("hello world 3\n");
    return 0;
}
void myfank()
{
     static int x=5;
    printf("%d\n",x);
    x++;
}