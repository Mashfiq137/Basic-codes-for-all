#include<stdio.h>

int main(){

        int i,j,n;

        printf("Enter number of rows:");

        scanf("%d",&n);

        for(i=1;i<=n;i++){

                        for(j=1;j<=n;j++){

                                            if(j<=i){

                                                            if(j%2==0) printf("0");

                                                            else printf("1");

                                            }

                                            else printf(" ");

                        }
        printf("\n");
        }

        return 0;

}
