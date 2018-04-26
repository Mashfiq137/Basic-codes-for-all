#include<stdio.h>

int main(){

           int n,pos,i;

           printf("Enter the size of the array:");

           scanf("%d",&n);

           int ara[n];

           printf("Enter the elements of the array:");

           for(i=0;i<n;i++){

                            scanf("%d",&ara[i]);

           }

           printf("Enter the position you want to delete:");

           scanf("%d",&pos);

           for(i=pos-1;i<n;i++){

                            ara[i]=ara[i+1];

           }

           printf("array after deletion:\n");

           for(i=0;i<n-1;i++){


                            printf("%d ",ara[i]);

           }

           return 0;

}
