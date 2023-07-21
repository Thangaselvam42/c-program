#include<stdio.h>
int main()
{
    int a,i,flag=0;
    scanf("%d",&a);
    for(int i=2;i<a;i++){
        if(a%i==0)
            flag=1;
            break;}
        if(flag==0)
            printf("the given number %d is prime number",a);
        else
            printf("%d is not prime number",a);
    }



