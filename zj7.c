#include <stdio.h>
int main(void){
//7.1
int c2(unsigned int a1,int no1){
   while (no1-->0)
   {
       a1*=2;
   }
   return a1;
}
int c3(unsigned int a,int no){
    a<<=no;
    return a;
}
if (c2(100,3)==c3(100,3))
{
    printf("无符号整数左移后的值等于乘以2的指数幂后的值\n");
}
int c4(unsigned int a1,int no1){
   while (no1-->0)
   {
       a1/=2;
   }
   return a1;
}
int c5(unsigned int a,int no){
    a>>=no;
    return a;
}
if (c4(100,3)==c5(100,3))
{
    printf("无符号整数右移后的值等于除以2的指数幂后的值\n");
}
//7.2
int rrotate(unsigned int a,int no){
    a>>=no;
    return a;
}
int lrotate(unsigned int a,int no){
    a<<=no;
    return a;
}
//7.3
unsigned set(unsigned x,int pos){
    return x = x | (1 << pos - 1);
    //或运算有一个为真便为真，
    //位移运算优先级小于减法
}
printf("%d\n",set(17,2));
// 10001 | 00010=10011
unsigned reset(unsigned x,int pos){
    return x = x & (~ (1 << pos - 1));
    //与运算 都1才为1
    //~按位取反 0变1 1变0
}
printf( "%d\n",reset(17,5));
//10001 &  ~100-1=~00000010=11111101  ->00001
unsigned inverse(unsigned x,int pos){
    return x = x ^ (1 << pos-1);
    //异或运算 0 1为1 0 0为0，1 1为0 ，1 0为1 
}
printf( "%d\n",inverse(17,2));
//10001 ^ 00010  ->10011
//7.4
int m(int x,int cm){
    for (int i = 0; i < cm; i++)
    //这里多乘一个2 后面再减去一个1 就可以获得pos位开始的n个1
    {
        x*=2;
    }
    return x;
}
unsigned set_n(unsigned x,int pos,int n){
//借鉴pos位设为1的经验  需要进行 或运算  pos位运算 对象位为1 其它位为0 以下同理
return x=x | m(1,n)-1<<pos-1;
}
unsigned reset_n(unsigned x,int pos,int n){
    return x=x & (~(m(1,n)-1)<<pos-1);
}
unsigned inverse_n(unsigned x,int pos,int n){
    return x=x^((m(1,n)-1)<<pos-1);
}
//7.5
unsigned short t=600000;unsigned short tt=65534;
unsigned short ii;ii=t+tt;
printf("ii=%d(665534)->",ii);
printf("看见这句话 说明 无符号整数 执行算术运算 不会发生溢出");
}
