#include<stdio.h>
int main(){
    int a,l,w,b,h;
    float r;
    scanf("%d%d%d%f%d%d",&a,&l,&w,&r,&b,&h);
    printf("Area of Square: %d\n",a*a);
    printf("Area of Rectangle: %d\n",l*w);
    printf("Area of Triangle: %d\n",(b*h)/2);
    printf("Area of Circle: %f\n",3.14*r*r);
    return 0;
}