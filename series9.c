#include<stdio.h>

int main(){

            int i,sum=0,n;

            printf("Enter n:");

            scanf("%d",&n);

            for(i=2;i<=n;i=i+2){

                                sum+=i*i;

            }

            printf("sum is:%d",sum);

return 0;
}
