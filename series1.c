#include<stdio.h>

int main(){

            int i,n,count=0,sum=0;
            printf("Enter n terms:");
            scanf("%d",&n);
            i=0;
            while(count<=n){
                            sum+=i;

                            i++;

                            count++;
            }
            printf("sum of n terms is:%d",sum);
}
