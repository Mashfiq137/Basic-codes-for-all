#include<stdio.h>

int main(){

            int i,j,n,k;

            float sum=0;

            printf("Enter n:");

            scanf("%d",&n);

            for(i=1,j=2,k=3;i<=n,j<=n+1,k<=n+2;i++,j++,k++){

                                        sum+=(i*j)/(float)k;

            }


            printf("sum is:%f",sum);


            return 0;

}
