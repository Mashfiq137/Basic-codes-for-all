#include<stdio.h>

int main(){

            int i,count,sum;

            int n;

            printf("Enter n terms:");

            scanf("%d",&n);

            i=0;

            sum=0;

            count=0;

            while(count<=n){

                            sum+=i*i;

                            i++;

                            count++;

            }

            printf("sum is:%d",sum);

}
