#include<stdio.h>
void find(char *ara,char k);
int main(){

           char ara[100];

           char key;

           printf("Enter your string:");

           gets(ara);

           printf("Enter the letter you want to find:");


           scanf("%c",&key);


           find(ara,key);

           return 0;
}

void find(char *ara,char k){

           int i;

           for(i=0;ara[i]!='\0';i++){

                                        if(ara[i]==k){

                                                        break;

                                        }
           }

           if(ara[i]==k)printf("Your letter is at: %d position",++i);

           if(ara[i]=='\0') printf("cant find that nigga");


}
