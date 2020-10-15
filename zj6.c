<<<<<<< HEAD
#include<stdio.h>
int main(void){
    //6.1
    int min(int a,int b){
        return a<b?a:b;
    }
    //6.2
    int min3(int a,int b,int c){
        return (a<b? a:b)<c?(a<b?a:b):c;
    }
    //6.3
    int cube(int x){
        return x*x*x;
    }
    //6.4
    int cube(int x){
        return x*x*x*x;
    }
    //6.5
    int alert(int no){
        while (no-->0)
        {
            printf("alert");
        }
        
    }
    //6.6
    void hello(){
        printf("你好。\n")
    }
    //6.7
    int minof(const int vc[],int no){
        int t;
        for (int i = 0; i < no-1; i++)
        {
            t=vc[i]<vc[i+1]?vc[i]:vc[i+1];
        }
        
    }
    //6.8
    void revint(int vc[],int no){
        for (int i = 0; i<(int)(no/2); i++)
        {
            vc[i]+=vc[no-1-i];
            vc[no-1-i]=vc[i]-vc[no-1-i];
            vc[i]-=vc[no-1-i];
        }
        
    }
    //6.9
    void intrev(int v1[],const int v2[],int no){
        for (int i = 0; i < no; i++)
        {
            v1[i]=v2[no-1-i];
        }
        
    }
    //6.10
    void mul(const int ma[2][3],const int mb[3][2],int mc[2][2]){
        for(int i=0; i<2; ++i){
            for(int j=0; j<2; ++j){
                for(int k=0; k<3; ++k){
                    mc[i][j]+=ma[i][k]*mb[k][j];
                }
            }
        }       
    }
    //6.11
    int ws(int k[5][3],int z[3],float p[5]){
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 4; i++)
            {
               z[j]=k[i][j]>k[i+1][j]?k[i][j]:k[i+1][j];
            }
            for (int i = 0; i < 5; i++)
            {
                p[i]+=k[i][j]/3;
            }         
        }      
    }
    //6.12
    static int a[9]={0};
    for (int i = 0; i < 9; i++)
    {
        printf("%d",a[i]);
    }    
=======
#include<stdio.h>
int main(void){
    //6.1
    int min(int a,int b){
        return a<b?a:b;
    }
    //6.2
    int min3(int a,int b,int c){
        return (a<b? a:b)<c?(a<b?a:b):c;
    }
    //6.3
    int cube(int x){
        return x*x*x;
    }
    //6.4
    int cube(int x){
        return x*x*x*x;
    }
    //6.5
    int alert(int no){
        while (no-->0)
        {
            printf("alert");
        }
        
    }
    //6.6
    void hello(){
        printf("你好。\n")
    }
    //6.7
    int minof(const int vc[],int no){
        int t;
        for (int i = 0; i < no-1; i++)
        {
            t=vc[i]<vc[i+1]?vc[i]:vc[i+1];
        }
        
    }
    //6.8
    void revint(int vc[],int no){
        for (int i = 0; i<(int)(no/2); i++)
        {
            vc[i]+=vc[no-1-i];
            vc[no-1-i]=vc[i]-vc[no-1-i];
            vc[i]-=vc[no-1-i];
        }
        
    }
    //6.9
    void intrev(int v1[],const int v2[],int no){
        for (int i = 0; i < no; i++)
        {
            v1[i]=v2[no-1-i];
        }
        
    }
    //6.10
    void mul(const int ma[2][3],const int mb[3][2],int mc[2][2]){
        for(int i=0; i<2; ++i){
            for(int j=0; j<2; ++j){
                for(int k=0; k<3; ++k){
                    mc[i][j]+=ma[i][k]*mb[k][j];
                }
            }
        }       
    }
    //6.11
    int ws(int k[5][3],int z[3],float p[5]){
        for (int j = 0; j < 3; j++)
        {
            for (int i = 0; i < 4; i++)
            {
               z[j]=k[i][j]>k[i+1][j]?k[i][j]:k[i+1][j];
            }
            for (int i = 0; i < 5; i++)
            {
                p[i]+=k[i][j]/3;
            }         
        }      
    }
    //6.12
    static int a[9]={0};
    for (int i = 0; i < 9; i++)
    {
        printf("%d",a[i]);
    }    
>>>>>>> 13fe535348f6f86ba46791905bfa0adb6734aa2c
}