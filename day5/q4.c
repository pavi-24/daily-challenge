#include<stdio.h>
int main(){
    int p,r,t;float si;
    scanf("%d%d%d",&p,&r,&t);
    if(t>12){
        t=t/12;
    }
    si=(p*r*t)/100;
    printf("%.2f",si);
    return 0;
}