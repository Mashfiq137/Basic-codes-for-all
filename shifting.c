#include<stdio.h>

int main(){

            int n,i,temp;

            printf("Enter the size of the array:");

            scanf("%d",&n);

            int ara[n];

            printf("Enter the elements of the array:");

            for(i=0;i<n;i++) scanf("%d",&ara[i]);

            printf("inserted array:\n");

            for(i=0;i<n;i++) printf("%d ",ara[i]);

            temp=ara[0];

            for(i=0;i<n;i++){

                                ara[i]=ara[i+1];


            }

            ara[n-1]=temp;

            printf("\n\n");


            printf("array after shifting one index to the left:\n");

            for(i=0;i<n;i++) printf("%d ",ara[i]);


            return 0;
}
