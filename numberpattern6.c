#include<stdio.h>

int main(){

            int i,j,n,k;

            printf("Enter number of rows:");

            scanf("%d",&n);

            for(i=1;i<=n;i++){

                                    k=0;

                                    for(j=1;j<=2*n-1;j++){



                                                            if(j>=n+1-i && j<=n-1+i){

                                                                j<=n?k++:k--;


                                                                printf("%d",k);

                                                            }

                                                            else printf(" ");


                                    }
            printf("\n");
            }

}
