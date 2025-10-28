#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("The greatst number is=%d",a);
    }
    else if(b>a && b>a)
        printf("The greastest of give number is=%d",b);
    else{
        printf("the greatest =%d",c);
    }
    return 0;
}
