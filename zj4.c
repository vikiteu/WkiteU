#include<stdio.h>
int main(void){
    //4.1
    int num;
    do{
        printf("请输入一个非负整数：");scanf("%d",&num);
        if (num<0)
        {
            puts("请不要输入负整数。");
        }       
    }while(num<0);
    printf("%d逆向显示的结果是",num);
    do
    {
        printf("%d",num%10);
        num=num/10;
    } while (num>0);
    puts("。");
    //4.2
    int dig,sz;
    do{
        printf("请输入一个非负整数：");scanf("%d",&num);
        if (num<0)
        {

            puts("\a请不要输入负整数。");
        }      
    }while(num<0);
    dig=0;
    sz=num;
    do
    {
      num=num/10;
      dig=dig+1;
    } while (num>0);
    printf("%d的位数是%d。\n",sz,dig);
    //4.3
    printf("请输入两个整数。\n");
    int zs1,zs2,sum,t;
    printf("整数1");
    scanf("%d",&zs1);
    printf("整数2");
    scanf("%d",&zs2);  
    if (zs1<=zs2)
    {
        t=zs1;
    }else
    {
        zs1=zs1+zs2;
        zs2=zs1-zs2;
        zs1=zs1-zs2;
        t=zs2;
    } 
    sum=0;
    do
    {
        sum+=zs1;
        zs1++;
    } while (zs1<=zs2);
    printf("大于等于%d小于等于%d的所有整数的和是%d\n",t,zs2,sum);
    //4.4
    do{
        printf("请输入一个非负整数：");scanf("%d",&num);
        if (num<0)
        {
            puts("\a请不要输入负整数。");
        }      
    }while(num<0);
    dig=0;
    sz=num;
    do
    {
      num/=10;
      dig=dig+1;
    } while (num>0);
    printf("%d的位数是%d。\n",sz,dig);
    //4.5
    printf("请输入两个整数。\n");
    printf("整数1");
    scanf("%d",&zs1);
    printf("整数2");
    scanf("%d",&zs2);
    if (zs1<=zs2)
    {
        t=zs1;
    }else
    {
        zs1+=zs2;
        zs2=zs1-zs2;
        zs1-=zs2
        t=zs2;
    } 
    sum=0;   
    do
    {
        sum+=zs1;
        zs1++;
    } while (zs1<=zs2);
    printf("大于等于%d小于等于%d的所有整数的和是%d\n",t,zs2,sum);
    //4.6
    int no;
    printf("请输入一个整数:");
    scanf("%d",&no);
    if (no>=0)
    {
        while (no>=0)
        {
          printf("%d",no);
          no--;
        }
        putchar('\a');
    }
    //4.7
    printf("请输入一个正整数:");
    scanf("%d",&no);
    while (no>0)
    {
        printf("%d",no--);
        putchar('\a');
    }
    //4.8
    int i;
    printf("请输入一个正整数：");
    scanf("%d",&no);
    i=1;
    if (no>=0)
    {
      while (i<=no)
      {
        printf("%d",i);
        i++;
        putchar('\a');
      } 
    }
    //4.9
    printf("请输入一个整数：");
    scanf("%d",&no);
    int os=2;
    while (os<=no)
    {
        printf("%d ",os);
        os+=2;

    }
    //4.10
    printf("请输入一个整数：");
    scanf("%d",&no);
    os=2;
    while (os<=no)
    {
        printf("%d ",os);
        os*=2;
    }
    //4.11
    printf("请输入一个整数：");
    scanf("%d",&no);
    if (no>0)
    {
        while (no-->0)
        {
            printf("*\n");
        }
        
    }
    //4.12
    no=1;sum=0;
    for (int ii = 0; ii < 5; ii++)
    {
        sum+=no;no++;
    }
    printf("1到5的合计值是%d。\n",sum);
    //4.13
     printf("请输入一个整数：");
     scanf("%d",&no);
     int dd=1;
     for (int i = 0; i < no; i++)
     {
         if (dd==10)
         {
            dd=1;
         }
         printf("%d",dd);
         dd+=1;
     }
     putchar('\n');
     //4.14
     int ks,js,jg;
     float tz;
     printf("开始数值（cm）:");
     scanf("%d",&ks);
     printf("结束数值（cm）:");
     scanf("%d",&js);
     printf("间隔数值（cm）:");
     scanf("%d",&jg);
     
     for (int i = ks; i < js; i+=jg)
     {
         tz=(i-100)*0.9;
         printf("%d cm   %.2f kg\n",i,tz);
     }
     //4.15
     for (int i = 1; i <= 9; i++)
     {
         printf(" %d ",i);
     }
     putchar('\n');
     for (int i = 0; i < 30; i++)
     {
         printf("-");
     }
     putchar('\n');
     for (int i = 1; i <= 9; i++)
     {
         printf("%d ",i);
         printf("| ");
         for (int ii = i; ii <=i*9; ii+=i)
         {
             if(ii<10){
             printf("  ");
             }else{
             printf(" ");
             }
             printf("%d",ii);
         }
         putchar('\n');
         
     }
     //4.16
     int chang,kuan;
     printf("让我们来画一个长方形。\n");
     printf("一边:");scanf("%d",&chang);
     printf("另一边:");scanf("%d",&kuan);
     if (chang>kuan)
     {
         
     }else
     {
         chang+=kuan;
         kuan=chang-kuan;
         chang-=kuan;
     }
     for (int i = 0; i < kuan; i++)
     {
         for (int ii = 0; ii < chang; ii++)
         {
             printf("*");
         }
         putchar('\n');
     }
     //4.17
     int hang,ge,hh;
     printf("三角形有几层：");
     scanf("%d",&hh);
     for (int i = hh; i >= 1; i--)
     {
         for (int j = 1; j <=i; j++)
         {
             putchar('*');putchar(' ');
         }
         printf("\n");
     }
     printf("三角形有几层：");
     scanf("%d",&hh);
     for (int i = hh; i >= 1; i--)
     {
         for (int j = 1; j <=hh-i; j++)
         {
             putchar(' ');
         }
         for (int j = 1; j <=i; j++)
         {
             putchar('*');
         }
         printf("\n");
     }
     
    //4.18
    int hs;
    printf("让我们来描绘一个金字塔。\n");
    printf("金字塔有几层：");
    scanf("%d",&hs);
    // hs-1*
    // hs-2 2i-1
    for (int i = 1; i <= hs; i++)
    {
        for (int j = 0; j < hs-i; j++)
        {
            putchar(' ');
        }
        for (int k = 0; k <i*2-1; k++)
        {
            printf("*");
        }
        printf("\n");
        
    }
     


     
    

    
}
