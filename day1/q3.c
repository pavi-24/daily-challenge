#include<stdio.h>
int main(){
    char msg[100];
    scanf("%[^\n]s",msg);
    printf("%s",msg);
    return 0;

}