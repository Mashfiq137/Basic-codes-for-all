#include<stdio.h>

int main(){

            int n,i,pos,e;

            printf("Enter the size of the array:");

            scanf("%d",&n);

            int ara[n];

            printf("Enter the elements of the array:");

            for(i=0;i<n;i++){

                                scanf("%d",&ara[i]);

            }

            printf("Enter the element you want to delete:\n");

            scanf("%d",&e);

            //searching the position of the element.

            for(i=0;i<n;i++){


                                if(ara[i]==e) break;

            }

            pos=i;

            //deletion

            for(i=pos;i<n;i++){

                                ara[i]=ara[i+1];

            }

            printf("array after deletion:");

            for(i=0;i<n-1;i++) printf("%d ",ara[i]);

            return 0;

}
