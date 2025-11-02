#include<stdio.h>
int main(){
    int n,min=9,max=0,last;
    scanf("%d",&n);
    while(n!=0){
        last=n%10;
        if(last>max){
            max=last;
        }
        else if(last<min){
            min=last;
        }
        n/=10;
    }
    printf("Max :%d\n",max);
    printf("Min :%d",min);
    return 0;
}