#include<stdio.h>

int main(){

            int n,i,prod=1,count=1,sum=0;

            printf("Enter n terms:");

            scanf("%d",&n);

            i=1;

            while(count<=n){

                            prod=prod*i;

                            sum+=prod;

                            i++;

                            count++;

            }

            printf("sum is:%d",sum);

            return 0;

}
