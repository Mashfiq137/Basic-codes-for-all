#include<stdio.h>

typedef struct{


                char name[100];

                char id[20];

                int age;
}info;

int main(){

            info s[3];

            int k=0,i;

            for(i=0;i<3;i++){


                             printf("Enter the name of student no %d:",++k);

                             gets(s[i].name);

                             fflush(stdin);

                             printf("Enter the id of student no %d:",k);

                             gets(s[i].id);

                             fflush(stdin);

                             printf("Enter age of student no %d:",k);

                             scanf("%d",&s[i].age);


                             fflush(stdin);


            }

            printf("printing the info of the students:\n");

            printf("\n\n\n\n\n");

            k=0;

            for(i=0;i<3;i++){

                            printf("name of student no. %d is: %s\n",++k,s[i].name);

                            printf("id of student no. %d is:%s\n",k,s[i].id);

                            printf("age of student no. %d is:%d\n",k,s[i].age);

            }

            return 0;

}
