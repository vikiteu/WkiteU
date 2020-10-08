#include<stdio.h>
int main(void){
    // 2.1
    printf("请输入两个整数\n");
    float a ,b;
    printf("整数A:");
    scanf("%f",&a);
    printf("整数B:");
    scanf("%f",&b);
    int c=a*100/b;
    printf("A的值是B的%d%%\n",c);
    //2.2
    printf("请输入两个整数\n");
    int a1 ,b1;
    printf("整数A:");
    scanf("%d",&a1);
    printf("整数B:");
    scanf("%d",&b1);
    printf("它们的和是%d积是%d\n",a1+b1,a1*b1);
    //2.3
    printf("请输入一个数实数:");
    int c1;
    scanf("%d",&c1);
    float c2=c1;
    printf("你输入的是%f\n",c2);
    //2.4
    int c3=1;float c4=1.000;double c5=1.000000000000;
    printf("int 和 float 进行隐式转换为了 double %f\n",c3+c4+c5);
    //2.5
    printf("请输入两个整数\n");
    float a4 ,b4;
    printf("整数A:");
    scanf("%f",&a4);
    printf("整数B:");
    scanf("%f",&b4);
    printf("A的值是B的%f%%\n",a4*100/b4);
    //2.6
    printf("请输入您的身高:");
    int a5;
    scanf("%d",&a5);
    printf("您的标准体重是%.1f公斤\n",(a5-100)*0.9);

}