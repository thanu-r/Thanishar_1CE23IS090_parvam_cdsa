#include<stdio.h>
#include<stdbool.h>
int main(){
    bool b=true;
    int a=5;
    for(int i=2;i<a;i++){
        if(a%i==0){
            b=false;
            break;
        }
    }
    if(b){
        printf("Yes");
    }
    else{
        printf("No");
    }
}