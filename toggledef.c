#include<stdio.h>

int main(){

            char ara[100];

            int i;

            printf("Enter your string: ");

            gets(ara);

            for(i=0;i<strlen(ara);i++){

                                        if(ara[i]>='a' && ara[i]<='z') ara[i]-=32;

                                        else if(ara[i]>='A' && ara[i]<='Z') ara[i]+=32;


            }

            puts(ara);


}
