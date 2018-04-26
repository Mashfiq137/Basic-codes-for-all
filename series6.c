#include<stdio.h>

#include<math.h>

int main(){

            int i,j,prod=1,count=1,n;

            float sum=0;

            printf("Enter n terms:");

            scanf("%d",&n);

            for(i=1,j=2;count<=n;i++,count++){


                                        prod=prod*i;

                                        sum+=pow(i,j)/prod;

            }

            printf("sum is:%f",sum);


}
