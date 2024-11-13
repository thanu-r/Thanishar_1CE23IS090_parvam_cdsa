#include<stdio.h>
#include<ctype.h>
#include<string.h>
int ispalindrome(char* s){
    int left=0,right=strlen(s)-1;
    while(left<right && ! isalnum(s[left])){
        left++;
    }
    while(left < right && ! isalnum(s[left])){
        right--;
    }
    if(tolower(s[left])!=tolower(s[right])){
        return 0;
    }
    left++;
    right--;
return 1;
}
int main(){
    char s[1000];
    printf("Enter a string:");
    scanf("%c[^\n]%*c",s);
    if(isplaindrome(s)){
        printf("True\n");
    }
    else{
        printf("False\n");
    }
    return 0;
}
