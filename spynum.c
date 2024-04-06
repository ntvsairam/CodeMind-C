#include<stdio.h>
int main()
{
    int a,b,c=0;
    scanf("%d",&a);
    for(int i=0;i<=a;i++){
        c+=a*a%10;
        a/=10;
    }
    if(b==c){
        printf(" Neon Number");
    }
    else{
        printf("Not  Neon Number");
    }
    return 0;
}