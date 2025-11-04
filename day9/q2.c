#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);
    int temp=num;
    int rev=0;
    while(num!=0){
        int last=num%10;
        rev=rev*10+last;
        num/=10;
    }
    if(rev==temp){
        printf("Palindrome");

    }
    else{
        printf("Not Palindrome");
    }
    return 0;
}