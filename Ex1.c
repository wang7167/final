#include <stdio.h>
#include <math.h>

int main(){
    float a,b;
    float c,d;
    printf("输入两个数:");
    scanf("%e%e",&a,&b);
    c=a+b;
    d=c*c;
    printf("和的平方=%.2f\n",d);
}
