#include<stdio.h>
int main(){
    int ye;
    scanf("%d",&ye);
    if(ye%4==0){
        if(ye%400==0 || ye%100!=0){
            printf("Leap year");

        }

    }
    else{
        printf("Not leap year");
    }
    return 0;
}