#include<stdio.h>
int main(){
    char n;
    scanf("%c",&n);
    if(n>='a' && n<='z'){
        printf("Lowercase");
    }
    else if(n>='A' && n<='Z'){
        printf("Uppercase");
    }
    else if(n>='0' && n<='9'){
        printf("Digit");
    }
    else{
        printf("Special Symbol");
    }
    return 0;
}