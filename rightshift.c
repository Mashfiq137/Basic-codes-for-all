#include<stdio.h>

int main(){

            int i,n,temp;

            printf("Enter the size of the array:");


            scanf("%d",&n);

            int ara[n];


            printf("Enter the elements of the array:");

            for(i=0;i<n;i++) scanf("%d",&ara[i]);

            printf("array before shifting to the right:\n");

            for(i=0;i<n;i++) printf("%d",ara[i]);

            temp=ara[n-1];

            for(i=n-1;i>=0;i--) ara[i+1]=ara[i];

            ara[0]=temp;

            printf("\n\n\n");

            printf("array after right shift:\n");

            for(i=0;i<n;i++){

                            printf("%d ",ara[i]);

            }
}
