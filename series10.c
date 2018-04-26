#include<stdio.h>

int main(){

            int i,sum=0,n,count;

            printf("Enter n terms:");

            scanf("%d",&n);

            count=1;

            for(i=1;count<=n;i++){

                                if(i%2==0) sum-=i;

                                else sum+=i;

                                count++;
            }

            printf("sum is:%d",sum);

}
