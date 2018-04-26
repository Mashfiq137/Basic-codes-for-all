#include<stdio.h>

int main(){

            int i,j,sum=0;

            int n;

            printf("Enter n:");

            scanf("%d",&n);

            for(i=1;i<=n;i=i+2){

                                sum+=i*i;

            }

            printf("sum is:%d",sum);


}
