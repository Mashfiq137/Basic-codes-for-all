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

                    temp=ara[0];

                    for(i=0;i<n;i++){



                            ara[i]=ara[i+1];




                    }

                    ara[n-1]=temp;
shift--;
            }



            printf("array after shifting:");

            for(i=0;i<n;i++) printf("%d",ara[i]);



}
