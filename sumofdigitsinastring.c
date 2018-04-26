#include<stdio.h>

int main(){

            char ch,ara[100];

            int i,sum=0;

            while(ch!='\n'){

                                scanf("%c",&ch);

                                if(ch==' ') {

                                    while(ch!='\n'){

                                        scanf("%c",&ch);

                                    }
                                }

                                else if(ch>='0' && ch<='9') {

                                        ch=ch-48;

                                        sum+=(int)ch;


                                }




            }

            printf("sum is:%d",sum);

}
