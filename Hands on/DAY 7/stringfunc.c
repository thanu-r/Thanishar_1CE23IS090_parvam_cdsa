#include<stdio.h>
#include<string.h>
void main(){
    int count =0;
    char arr[12]={'c','i','t','y','c','o','l','l','e','g','e','\0'};
    //int length=strlen(arr);
    //printf("total length=%d\n",length);
    //char str1[20]="city engineering ";
    //char str2[20]="college";
    //strcat(str1,str2);
    //printf("%s",str1);
    for(int i=0; arr[i] !='\0';i++){
    // printf("%c\n",arr[i]);
    count++;
    }
    printf("%d",count);

} 
 
    