#include<stdio.h>

int main(){

            int n,i,ara[10],prod=1,j;

            scanf("%d",&n);

            for(i=0,j=1;i<n,j<=n;i++,j++){

                                prod=prod*j;

                                ara[i]=prod;


            }
            for(i=0;i<n;i++)
            printf("%d ",ara[i]);


}
