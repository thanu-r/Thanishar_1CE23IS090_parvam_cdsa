# include<stdio.h>
int main()
{
    int x=-99,*ptr=&x;
    printf("value off var is%d add of var is%p",x,&x);
    printf("tar value off ptr is%d tar of ptr is %p",*ptr,ptr,&ptr);
    return 0;
}