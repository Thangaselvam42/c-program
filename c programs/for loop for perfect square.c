#include<stdio.h>
int main()
{
    int a,i,p=0;
    scanf("%d",&a);
    for(i=1;i<a/2;i++){
        if(i*i==a){
            p=1;
            break;
        }

    }
    if(p==1)
        printf("the given number %d is a perfect square",a);
        else
            printf("%d not a perfect square",a);
        return 0;
}


