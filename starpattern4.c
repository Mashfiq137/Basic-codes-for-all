#include<stdio.h>

int main(){

           int n,i,j;

           printf("Enter number of rows:");

           scanf("%d",&n);

           for(i=1;i<=n;i++){

                            for(j=1;j<=n;j++){

                                                if(j>=n+1-i) printf("*");

                                                else printf(" ");

                            }

                            printf("\n");

           }


}
