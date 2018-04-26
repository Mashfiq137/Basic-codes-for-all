#include<stdio.h>

int main(){

            int i,count,n,sum;

            printf("Enter n terms:");

            scanf("%d",&n);

            sum=0;

            count=1;

            i=2;

            while(count<=n){

                            sum+=i;

                            i=i+2;

                            count++;

            }

            printf("sum is:%d",sum);


}
