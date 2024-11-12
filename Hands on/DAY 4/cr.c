#include<stdio.h>
int  main(){
    char character;
    printf("enter a alphabet=\n");
    scanf("%c",&character);
    if (character>='A'&& character<='Z')
    {
    character+=32;
    printf(" the lower case of the given input is =%c\n",character);
    }
    else if(character>='a'&&character<='z')
    {
    character-=32;
    printf("the upper case of the given input is =%c\n",character);
    }
    else{
        printf("invalid input...!\n");
    }
}
