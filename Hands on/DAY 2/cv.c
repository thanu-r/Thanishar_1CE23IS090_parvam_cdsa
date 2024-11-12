#include<stdio.h>
void main(){
    int i=27/5;
    switch(i){
        case 5:
        printf("five\n");
        switch('a'){
            case 'a' : puts("pune");
            case 'b' : puts("mysuru");
        }
        case 6:
        printf("six");
        break;
        default:printf("none");
    }
}