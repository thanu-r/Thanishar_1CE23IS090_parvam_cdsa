#include<stdio.h>
#include<string.h>
int issubsequence(char *s,char *t){
    int i =0,j=0;
    int s_len=strlen(s);
    int t_len=strlen(t);
    while(i<s_len && j<t_len){
        if(s[i]==t[j]){
            i++;
        }
        j++;
    }  return i==s_len;
}
int main(){
    char s[101],t[101];
    prinrf("Enter string s:");
    scanf("%s",s);
    printf("Enter string t:");
    scanf("%s",t);
    if(isSubsequence(s,t)){
        printf("Output:True\n");
        printf("Output:False\n");
    }
    return;
}