# include<stdio.h>
int main()
{
    int i=0,n,a[100],esum=0,osum=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    scanf("%d",&a[i]);
    for(i=0;i<n;i++)
    { 
        if(a[i]%2==0)
            esum+=a[i];
          else
              osum+=a[i];
    }
    printf("%d %d",esum,osum);
return 0;
}