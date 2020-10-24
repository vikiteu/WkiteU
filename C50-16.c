#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[5][100]={0};
    char str[100];
    char *p=str;
    char temp;
    char yy[5]={'a','e','i','o','u'};
    char t;
    scanf("%c",&t);
    for(int j=0;j<n;j++){
        scanf("%c",&temp);
        *(p++)=temp;
    while (temp!='\n')
    {
        scanf("%c",&temp);
        *(p++)=temp;
    }
    while(p>=str){
        if(*p=='a'){
            a[0][j]++;
        }else if(*p=='e'){
            a[1][j]++;
        }else if(*p=='i'){
            a[2][j]++;
        }else if(*p=='o'){
            a[3][j]++;
        }else if(*p=='u'){
            a[4][j]++;
        }
        p--;
    }
    p=str;
}
for (int i = 0; i < n; i++)
{
    for (int j = 0; j < 5; j++)
    {
        printf("%c : %d\n",yy[j],a[j][i]);
    }
    puts(" ");
}

}