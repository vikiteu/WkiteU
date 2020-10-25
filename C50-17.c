#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(void){
    int m,n,j,temp=4;
    scanf("%d %d",&m,&n);
    int box[10000]={0};
    box[0]=2;
    box[1]=3;
    box[2]=5;
    box[3]=7;
    int *p=box;
    p+=3;
    if (m==n)
    {
        return 0;
    }else
    { 
    for (int i = 9; i < 12000; i+=2)
    {   
        for ( j = 0; j < temp; )
        {
            if (i%box[j]!=0)
            {
                j++;
            }else
            {
                break;
            }     
        } 
        if (j==temp)
        {
            *(++p)=i;
        }else
        {
            continue;
        } 
        temp++;
    }
    int t=0;
    for (int i = m-1; i < n-1; i++)
    {
        if (t==10&&i!=n-2)
        {
            printf("\n");
            t=0;
        } 
        printf("%d ",box[i]);
        t++;

    }
    printf("%d",box[n-1]);
     }

}