#include<stdio.h>
int main(){
    int a,b;
    scanf("%d%d",&a,&b);
    if(a>b){
        printf("Max :%d\n",a);
        printf("Min :%d",b);
    }
    else if(b>a){
         printf("Max :%d\n",b);
          printf("Min :%d",a);
    }
    else{
        printf("Both are equal");
    }
    return 0;
}