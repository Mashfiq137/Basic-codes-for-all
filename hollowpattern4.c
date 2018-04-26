#include<stdio.h>

int main(){

            int i,j,n;

            printf("Enter number of rows:");

            scanf("%d",&n);

            for(i=1;i<=n;i++){

                                for(j=1;j<=n;j++){

                                                    if(j==1 && i%2==0) printf("$");

                                                    else if(i==j && i%2==0) printf("$");

                                                    else if(j==n && i%2==0) printf("$");

                                                    else if(j==1) printf("*");

                                                    else if(i==j) printf("*");

                                                    else if(j==n) printf("*");

                                                    else printf(" ");

                                }

            printf("\n");
            }


}
