#include<stdio.h>
//10.1
void yesterday(int *y,int *m,int *d){
printf("%d年%d月%d日的前一天是 %d年%d月%d日\n",*y,*m,*d,*y,*m,*d-1);
}
void tomorrow(int *y,int *m,int *d){
printf("%d年%d月%d日的后一天是 %d年%d月%d日\n",*y,*m,*d,*y,*m,*d+1);
}
//10.2
void sort3(int *n1,int *n2,int *n3){
int t1,t2,t3;
t1=*n1;
t2=*n2;
t3=*n3;
//先取到最大值
if (t1>=t2&&t1>=t3)
{
    *n1+=*n3,*n3=*n1-*n3,*n1-=*n3;
    t2<=t3?*n2+=*n1,*n1=*n2-*n1,*n2-=*n1:1;
    //
}else if (t2>=t1&&t2>=t3)
{
    *n2+=*n3,*n3=*n2-*n3,*n2-=*n3;
    t1>=t3?*n2+=*n1,*n1=*n2-*n1,*n2-=*n1:1;
}else if (t3>=t1&&t3>=t2)
{
    t1>=t2?*n2+=*n1,*n1=*n2-*n1,*n2-=*n1:1;
}


//*n1>*n2?*n1+=*n2,*n2=*n1-*n2,*n1-=*n2;

printf("\*n1=%d,\*n2=%d,\*n3=%d,--->%d,%d,%d",t1,t2,t3,*n1,*n2,*n3);
}
int main(void){
int year=2020,month=10,day=16;
yesterday(&year,&month,&day);
tomorrow(&year,&month,&day);
sort3(&year,&month,&day);
}