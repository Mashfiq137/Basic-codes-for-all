#include<stdio.h>

int main(){

            int ara[3][3],ara2[3][3],c[3][3],i,j,sum,k;

            for(i=0;i<3;i++)
                            for(j=0;j<3;j++)
                                        scanf("%d",&ara[i][j]);



            for(i=0;i<3;i++)
                            for(j=0;j<3;j++)
                                        scanf("%d",&ara2[i][j]);


            for(i=0;i<3;i++){

                            for(j=0;j<3;j++){
                                            sum=0;
                                            for(k=0;k<3;k++){
                                                            sum+=ara[i][k]*ara2[k][j];

                                                            c[i][j]=sum;


                                            }

                            }

            }

            for(i=0;i<3;i++){
                    for(j=0;j<3;j++){
                                printf("%d ",c[i][j]);

                                }

                                printf("\n");

                                }
}
