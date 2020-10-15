#include<stdio.h>
#define diff(a,b) (a-b)//8.1
#define max(x,y) (((x)>(y))?(x):(y))//8.2
//max(max(a,b),max(c,d))=(((a)>(b))?(a):(b)) > (((c)>(d))?(c):(d))?
//max(max(max(a,b),c),d)=(((((a)>(b))?(a):(b))>c? : )>d? : )
//8.3
#define swap(type,x,y) type c;c=x;x=y;y=c;
#define jj {january,february,march}
enum jj jij(){
    int g;
    printf("请输入123，1是一月 2是二月，3是三月：");
    scanf("%d",&g);
    return g;
}
int main(void){
    int a=1;int b=3;
    swap(int,a,b);
    // printf("%d,,,%d,%d,%d",a,b,diff(a,b),max(3,99));
    //8.4
    enum jj tt;
    
    void exam(){
        tt=jij();
        switch (tt-1)
    {
    case january:printf("一月\n");
        break;
    case february:printf("二月\n");
        break;
    case march:printf("三月\n");
        break;
    default:
        printf("请重新输入 ");exam();
    }
    

    }
    exam();
    //8.5
    int fact(int n){
        int res=1;
        for (int i = 1; i <=n; i++)
        {
            res*=i;
        }
        return res;       
    }
    printf("9的阶乘是%d\n",fact(9));
    //8.6
    int comb(int n,int r){
            if (r>1&&r!=n)
            {
                return (comb(n-1,r)+comb(n-1,r-1));
            }
            if (r==1)
            {
                return n;
            }
            if (r==0)
            {
            return 1;
            }        
    }
    printf("%d,%d,%d\n",comb(9,3),comb(4,1),comb(5,4));
    //8.7
    int i,ch;
    int cnt[10]={0};
    while (1)
    {
        ch==getchar();
        if (ch==EOF)
        {
            break;
        }
        if (ch>='0'&&ch<='9')
        {
            cnt[ch-'0']++;
        }
    }
        puts("数字字符出现的个数");
        for (int i = 0; i < 10; i++)
        {
            for (int j = 0; j < cnt[i]; j++)
            {
                printf("*");
            }
            putchar("\n");
        }
    //8.8
    // 利用char=='\n'判断
    int t;
    int num=0;
    while ((t=getchar())!=EOF)
    {
        if (t=='\n')
        {
            num++;
        }
        
    }
    printf("共有%d行",num);
}