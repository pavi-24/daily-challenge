#include<stdio.h>
int main(){
    int a;
    scanf("%d",&a);
    int last=a%10;
    int re=a/10;
    printf("%d\n",last);
    printf("%d",re);
    return 0;
}