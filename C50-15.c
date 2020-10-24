#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    int n;
    scanf("%d",&n);
    int a[1000];
    int *p=a;
    for (int i = 0; i < n; i++)
    {
        scanf("%d",p++);
    }
    char b[1000];
    for (int i = 0; i < n; i++)
    {
        b[i]=a[i];
    }
    for (int i = 0; i < n; i++)
    {
        printf("%c",b[i]);
    }
}