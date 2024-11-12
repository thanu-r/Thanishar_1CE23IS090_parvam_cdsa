//using array to store the strinngs.
#include<stdio.h>
void main(){
     int count=0;
    char name[12]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    printf("%s\n",name);
    for(int i=0; name[i] !='\0';i++ )
         if (name[i]=='a'  || name[i]  == 'e'  || name[i]== 'i' || name[i]== 'o' ||name[i]== 'u' )
       { printf("%c\n",name[i]);
        count++;
       }
       printf("%d\n",count);
}

