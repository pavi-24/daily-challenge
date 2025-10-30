#include<stdio.h>
int main(){
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c){
        printf("Max :%d\n",a);
        if(b<a && b<c){
            printf("Min :%d",b);
        }
        else{
            printf("Min :%d",c);
        }
    }
    else if(b>a && b>c){
        printf("Max :%d\n",b);
        if(a<b && a<c){
            printf("Min :%d",a);
        }
        else{
            printf("Min :%d",c);
        }
   }
   else if(c>b && c>a){
        printf("Max :%d\n",c);
        if(b<a && b<c){
            printf("Min :%d",b);
        }
        else{
            printf("Min :%d",a);
        }
   }
   return 0;
}  