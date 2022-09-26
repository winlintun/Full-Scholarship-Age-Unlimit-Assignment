#include "stdio.h"
#include "string.h"


void getNames(struct Human_data *hd);



struct Human_data{

    char name[20];
    char fname[20];
    char hobby[20];
    int age=0;

};

int main(){
    struct Human_data p1;
    

    strcpy(p1.name , "Win Lin");
    strcpy(p1.fname , "Tun");
    strcpy(p1.hobby , "Coding");
    p1.age=20;



    getNames(&p1);
    

    return 0;

}

void getNames(struct Human_data *hd){
    printf("Name:%s\n",hd->name);
    printf("Father Name:%s\n",hd->fname);
    printf("Hobby :%s\n",hd->hobby);
    printf("Age :%d\n",hd->age);
}