#include <stdio.h>
int main(void){
//5.1
int vc[5];
for (int i = 0; i < 5; i++)
{
    vc[i]=i;
}
for (int i = 0; i < 5; i++)
{
    printf("vc[%d]=%d\n",i,vc[i]);
}
//5.2
for (int i = 0; i < 5; i++)
{
    vc[i]=5-i;
}
for (int i = 0; i < 5; i++)
{
    printf("vc[%d]=%d\n",i,vc[i]);
}
// 5.3
int vcc[5] = {5,4,3,2,1};
for (int i = 0; i < 5; i++)
{
    printf("vcc[%d]=%d\n",i,vcc[i]);
}
//5.4
int va[5]={15,20,30};
int vb[5];
for (int i = 0; i < 5; i++)
{
    vb[i]=va[4-i];
}
puts(" va vb");puts("-------");
for (int i = 0; i < 5; i++)
{
    printf("%3d%3d\n",va[i],vb[i]);
}
//5.5
int vx[8];
for (int i = 0; i < 8; i++)
{
    printf("vx[%d]:",i);
    scanf("%d",&vx[i]);
}
for (int i = 0; i < 2; i++)
{
    vx[i]+=vx[7-i];
    vx[7-i]=vx[i]-vx[7-i];
    vx[i]-=vx[7-i];
}
for (int i = 0; i < 8; i++)
{
    printf("vx[%d]=%d\n",i,vx[i]);
}
//5.6
//题目 double a；int b；a=b=1.5 ；a，b值各是多少
//答 1.5先赋值给整型a 所以a=1；然后a的值再赋给双精度浮点型b 所以
// b的值为1.000000

//5.7
int x[][3]={1,2,3,4,5,6};
int y[][2]={1,5,5,3,8,1};
int c[3][3]={0};
int d[3][3]={0};

for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
         c[i][j]=x[i][j]*y[j][i];
        //  1,4位
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
         d[i][j]=x[i][j]*y[j][1-i];
        //  2,3位
    }
    
}
for (int i = 0; i < 2; i++)
{
    for (int j = 0; j < 3; j++)
    {
        c[2][i]+=c[i][j];
        d[2][i]+=d[i][j];
    }
    
}
printf("%3d %3d\n%3d %3d\n",c[2][0],d[2][0],c[2][1],d[2][1]);


// c[2][0]=c[0][0]+c[0][1]+c[0][2];35
// d[2][0]=d[0][0]+d[0][1]+d[0][2];14
// c[2][1]=c[1][0]+c[1][1]+c[1][2];41
// d[2][1]=d[1][0]+d[1][1]+d[1][2];77

//这章题目不是很多但是干货满满呢，
// 矩阵相乘的算法题目和寻找1000以内质数的算法优化等
//代码清单5-19
int i,no;
int prime[500];
int ptr=0;
unsigned long counter = 0;
prime[ptr++]=2;
prime[ptr++]=3;
for (no = 5; no <=1000; no+=2)
{
    int flag=0;
    for ( i = 1; counter++,prime[i]*prime[i]<=no; i++)
    {
        counter++;
        if (no%prime[i] == 0)
        {
            flag=1;break;
        }
        
    }
    if (!flag)
    {
        prime[ptr++]=no;
    }
    
    
}
printf("%lu\n",counter);
}