#include<stdio.h>
#include<ctype.h>
int main(void){
//9.1
char str[]="ABC\0DEF";
printf("字符串str为%s。",str);
//9.2
char str1[]="ABC";
for (int i = 0; i < 3; i++)
{
    str1[i]='\0';
}
printf("现在str1为%s----\n",str1);

//9.3
int str_char(const char str[],int c){
    int len=0;
    int cc='0';
    c=cc+c;
    while (str[len]!=c)
    {
        //printf("%d,%d\n",str[len],cc);
        len++;
    }
    if (len<=sizeof(str)/sizeof(str[0]))
    {
        return len;
    }else
    {
        return -1;
    }
}
char ty[]="223dd32";
printf("9.3应该输出  2实际是%d\n",str_char(ty,3));
//9.4
int chnum(const char str[],int c){
    int len=0;
    int cc='0';
    c=cc+c;
    for (int i = 0; i < sizeof(str)/sizeof(str[0]); i++)
    {
        if (str[i]==c)
        {
            len++;
        }
        
    }
    return len;
}
printf("9.4应该输出  3实际是%d\n",chnum(ty,2));
//9.5
void put_string(const char str[]){
    unsigned i=0;
    while (str[i])
    {
        printf("%c",str[i++]);
    }
}
char str11[1000];
printf("请输入字符串：");
scanf("%s",str11);
put_string(str11);
printf("\n");
//9.6
void put_stringn(const char str[],int no){
    for (int i = 0; i < no; i++)
    {
        printf("%s\n",str);
    }
}
printf("abc*3 expected\n");
put_stringn("abc",3);
//9.7
void put_rstring(const char str[]){
    unsigned i=0;
    int len=0;
    while (str[len])
    {
       len++;
    }
    printf("%d rstring\n",len);
    while (str[len-1])
    {
        printf("%c",str[--len]);
    }
}
char str22[1000];
printf("请输入字符串：");
scanf("%s",str22);
put_rstring(str22);
printf("\n");
//9.8
void rev_stringn(char str[]){
   char temp;
   int len=0;
   while (str[len])
    {
       len++;
    }
    printf("%d \n",len);
   for (int i = 0; i <len/2; i++)
   {
       temp=str[i];
       str[i]=str[len-1-i];
       str[len-1-i]=temp;
   }
}
char str33[1000];
printf("请输入字符串：");
scanf("%s",str33);
rev_stringn(str33);
printf("rev_string\n%s\n",str33);
//9.9
void null_string(char str[]){
    int i=0;
    while (str[i]!='\0')
    {
        str[i++]='\0';
    }
}
char t[]="abb";
null_string(t);
printf("%s %s\n","abb->",t);
//9.10
void del_digit(char str[]){
    int len=0;
    while (str[len])
    {
       len++;
    }
    for (int i = 0; i < len; i++)
    {
        if (str[i]>='0' && str[i]<='9')
        {
            str[i]='\0';
        }
        printf("%c",str[i]);
    }
}
char ss[]="wwww412eee2";
printf("wwww412eee2->\n");
del_digit(ss);
}