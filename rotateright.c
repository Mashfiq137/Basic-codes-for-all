#include<stdio.h>

int main(){

            int temp,n,i,shift;


            printf("Enter the size of the array:\n");


            scanf("%d",&n);

            int ara[n];

            printf("Enter the elements of the array:");

            for(i=0;i<n;i++) scanf("%d",&ara[i]);

            printf("array before rotation:");

            for(i=0;i<n;i++) printf("%d ",ara[i]);

            printf("Enter number of index's you want to shift(left):");

            scanf("%d",&shift);





            while(shift!=0){

                    temp=ara[n-1];

                    for(i=n-1;i>=0;i--){



                            ara[i+1]=ara[i];




                    }

                    ara[0]=temp;
shift--;
            }



            printf("array after shifting:");

            for(i=0;i<n;i++) printf("%d",ara[i]);



}
