#include<stdio.h>
typedef struct{

                char name[100];

                char id[20];

                char fav_sport[10];

                char address[100];

}data;

int main(){

                data s1;

                printf("Enter name of  the student:");

                gets(s1.name);

                fflush(stdin);

                printf("Enter id of the student:");

                gets(s1.id);

                fflush(stdin);

                printf("Enter favourite sport of the student:");

                gets(s1.fav_sport);

                fflush(stdin);

                printf("Enter the address of the student:");

                gets(s1.address);

                fflush(stdin);


                prints(&s1);

                return 0;
}

void prints(data *s1){

                printf("Name of the student is:%s\n",(*s1).name);
                printf("fav_sport of the student is:%s\n",(*s1).fav_sport);
                printf("id of the student is:%s\n",(*s1).id);
                printf("address of the student is:%s\n",(*s1).address);

}
