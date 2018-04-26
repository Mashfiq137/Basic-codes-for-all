#include<stdio.h>

int main(){

            int ara[3][3],i,j,sum=0;

            for(i=0;i<3;i++)
                        for(j=0;j<3;j++)
                                    scanf("%d",&ara[i][j]);


            for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                                        printf("%d ",ara[i][j]);

                        }
                        printf("\n");

            }


            for(i=0;i<3;i++){
                        for(j=0;j<3;j++){


                                                    if(i==0) sum+=ara[i][j];

                                                    if(i==2) sum+=ara[i][j];

                                                    if(j==0) sum+= ara[i][j];

                                                    if(j==2) sum+=ara[i][j];

                            }


                    }

printf("sum is:%d",sum);

}
