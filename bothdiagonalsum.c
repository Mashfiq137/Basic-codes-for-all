#include<stdio.h>

int main(){

            int ara[3][3];

            int i,j,sum=0;

            for(i=0;i<3;i++){
                                for(j=0;j<3;j++) scanf("%d",&ara[i][j]);

            }

            for(i=0;i<3;i++){
                        for(j=0;j<3;j++){
                                    printf("%d ",ara[i][j]);
                        }

                        printf("\n");
            }
            for(i=0;i<3;i++){
                        for(j=0;j<3;j++){

                                                if(j+i==2){

                                                                sum+=ara[i][j];

                                                }

                                                if(j==i){

                                                                sum+=ara[i][j];

                                                }




                                        }
                            }

                            printf("sum is:%d \n",sum);
}
