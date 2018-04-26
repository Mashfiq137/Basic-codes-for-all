#include<stdio.h>

int main(){

            int n,i,e;

            printf("Enter the size of the array:");

            scanf("%d",&n);

            int ara[n];

            printf("Enter the elements of the array:");

            for(i=0;i<n;i++) scanf("%d",&ara[i]);

            printf("Enter the element you want to search:");

            scanf("%d",&e);


            for(i=0;i<=n;i++){

                                if(ara[i]==e) break;

                                else if(i==n) printf("item not found:");

            }




            if(i==n) printf("Element is at position no: %d",++i);

return 0;
}
