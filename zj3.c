#include<stdio.h>
int main(void){
    //3.1
    printf("请输入两个整数。\n");
    int a6 ,b6;
    printf("整数A:");
    scanf("%d",&a6);
    printf("整数B:");
    scanf("%d",&b6);
    if(a6%b6==0)
        printf("B是A的约数\n");
     else
        printf("B不是A的约数\n");
    //3.2
     if('=')
         printf("=符号的运算结果是1\n");
     if ('&')
     
         printf("&符号的运算结果是0\n");
    //3.3
    int a2;
    printf("请输入一个整数");scanf("%d",&a2);
    if(a2>=0)
        printf("绝对值是%d",a2);
    else
        printf("绝对值是%d",-a2);
    //3.4
    int a3 ,a4;
    printf("请输入两个整数。\n");
    printf("整数A:");scanf("%d",&a3);
    printf("整数B:");scanf("%d",&a4);
    if(a3==a4)
        printf("A和B相等。\n");
    else if (a3>a4)
    
        printf("A大于B。\n");
    else
        printf("A小于B。\n");
    //3.5
    int s1,s2,s3;
    puts("请输入三个整数");
    printf("请输入第一个整数");scanf("%d",&s1);
    printf("请输入第二个整数");scanf("%d",&s2);
    printf("请输入第三个整数");scanf("%d",&s3);
    if(s1<=s2&&s1<=s3)
        printf("最小的数是%d\n",s1);
    if(s2<=s1&&s2<=s3)
        printf("最小的数是%d\n",s2);
    if(s3<=s2&&s3<=s1)
        printf("最小的数是%d\n",s3);
    //3.6
     int ds1,ds2,ds3,ds4;
    puts("请输入四个整数");
    printf("请输入第一个整数");scanf("%d",&ds1);
    printf("请输入第二个整数");scanf("%d",&ds2);
    printf("请输入第三个整数");scanf("%d",&ds3);
    printf("请输入第四个整数");scanf("%d",&ds4);

    if(ds1>=ds2&&ds1>=ds3&&ds1>=ds4)
        printf("最大的数是%d\n",ds1);
    if(ds2>=ds1&&ds2>=ds3&&ds2>=ds4)
        printf("最大的数是%d\n",ds2);
    if(ds3>=ds2&&ds3>=ds1&&ds3>=ds4)
        printf("最大的数是%d\n",ds3);
    if(ds4>=ds1&&ds4>=ds2&&ds4>=ds3)
        printf("最大的数是%d\n",ds4);
    //3.7
    int n1,n2,t;
    puts("请输入两个整数。");
    printf("整数1:");scanf("%d",&n1);
    printf("整数2:");scanf("%d",&n2);
    if(n1>n2)
       t=n1-n2;
    else
       t=n2-n1;
    printf("它们的差是%d。\n",t);
    //3.8
    puts("请输入三个整数");
    printf("请输入第一个整数");scanf("%d",&s1);
    printf("请输入第二个整数");scanf("%d",&s2);
    printf("请输入第三个整数");scanf("%d",&s3);
    (s1<=s2&&s1<=s3)?printf("最小的数是%d\n",s1):printf("最小的数不是%d\n",s1);
    (s2<=s1&&s2<=s3)?printf("最小的数是%d\n",s2):printf("最小的数不是%d\n",s2);
    (s3<=s2&&s3<=s1)?printf("最小的数是%d\n",s3):printf("最小的数不是%d\n",s3);
    //3.9
    puts("请输入三个整数");
    printf("请输入第一个整数");scanf("%d",&s1);
    printf("请输入第二个整数");scanf("%d",&s2);
    printf("请输入第三个整数");scanf("%d",&s3);
    if (s1==s2&&s1==s3&&s2==s3)
    {
        printf("三个值都相等。\n");
    }else if (s1!=s2&&s1!=s3&&s2!=s3)
    {
        printf("三个值都不相等。\n");
    }else
    {
        printf("有两个值相等。\n");
    }
    //3.10
    puts("请输入两个整数");
    printf("请输入第一个整数");scanf("%d",&s1);
    printf("请输入第二个整数");scanf("%d",&s2);
    if (((s1>s2||s1==s2)?s1-s2:s2-s1)<=10)
    {
        printf("它们的差小于等于10。\n");
    }else
    {
        printf("它们的差大于等于11。\n");
    }
    //3.11
    int no;
    printf("请输入一个整数:");scanf("%d",&no);
    switch (no%2)
    {
     case (0):
        puts("该整数是偶数。");
        break;
    
    default:
        puts("该整数是奇数。");
        break;
    }
    //3.12
    int month;
    printf("请输入月份:");scanf("%d",&month);
    int c1=(month>=3&&month<=5)?1:0,c2=(month>=6&&month<=8)?1:0,c3=(month>=9&&month<=11)?1:0,
    c4=(month==1||month==2||month==12)?1:0;
    if(c1==1){
       month=1;
    }
    if(c2==1){
       month=2;
    }
    if(c3==1){
       month=3;
    }
    if(c4==1){
       month=4;
    }
    switch (month)
    {
    case 1:
        puts("是春天。");
        break;
    case 2:
        puts("是夏天。");
        break;
    case 3:
        puts("是秋天。");
        break;
    case 4:
        puts("是冬天。");
        break;
    
    default:
        puts("输入月份不存在！！\a");
        break;
    }   
}