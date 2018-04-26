#include<stdio.h>

int main(){

            int i,j,n,sum=0;

            printf("Enter n:");

            scanf("%d",&n);

            for(i=1,j=2;i<=n,j<=n+1;i++,j++){

                                            sum+=i*j;

            }

            printf("sum is:%d",sum);
return 0;
}
