#include<stdio.h>

int main(){

                int i,j,n,k;

                printf("Enter number of rows:");

                scanf("%d",&n);

                for(i=1;i<=n;i++){

                                    k=n;

                                    for(j=1;j<=n;j++){

                                                        if(j>=i) printf("%d",k);

                                                        else printf(" ");

                                                        k--;

                                    }
                printf("\n");
                }


}
