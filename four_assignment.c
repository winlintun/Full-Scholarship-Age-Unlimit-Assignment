#include "stdio.h"
#include "stdlib.h"


// resource
// https://www.geeksforgeeks.org/c-program-count-number-lines-file/
// https://www.guru99.com/c-file-input-output.html

struct Person {
    int id;
    char username[30];
    char password[30];
    int amount;
};


void insert_data(struct Person *sptr);
void read_data(struct Person *sptr);
void update_data(struct Person *sptr);

int main()
{
    
    struct Person *ptr;
    int q=0;

//    sptr = (struct Person*) malloc(sizeof(struct Person));
//    
//    printf("id, username, password, amount\n>:");
//    scanf(" %d %s %s %d", &sptr->id, &sptr->username, &sptr->password, &sptr->amount);
//    printf("%d\t%s\t%s\t%d\n", sptr->id, sptr->username, sptr->password, sptr->amount);
    
    
    while(q != 4 || q != NULL){
        printf("\n>>>>>>>>>>>Welcome Min Database>>>>>>>>>>>\n");
        printf("1.Insert Data\n2.Read Data\n3.Update Data\n4.Exit\n");
        printf(">:");
        scanf("%d", &q);
        if(q==1){
            insert_data(ptr);

        }else if (q==2){
            read_data(ptr);

        }else if(q==3){
            read_data(ptr);
            update_data(ptr);
        }else{
            printf("Exiting program.\n");
            break;
        }
    }
    

//    insert_data(ptr);    
//    read_data(ptr);
//    update_data(ptr);
    
    return 0;
}

void insert_data(struct Person *sptr){
    FILE *fptr;
    sptr = (struct Person*) malloc(sizeof(struct Person));
    
    if((fptr=fopen("mydata.txt", "a"))!=NULL){
        printf("\n---------------Insert Data---------------\n");
        printf("id, username, password, amount\n>:");
        scanf(" %d %s %s %d", &sptr->id, &sptr->username, &sptr->password, &sptr->amount);
        printf("%d\t%s\t%s\t%d\n", sptr->id, sptr->username, sptr->password, sptr->amount);
        fprintf(fptr, " %d\t %s\t %s\t %d %c", sptr->id, sptr->username, sptr->password, sptr->amount, '\n');
        fclose(fptr);
    }else {
        printf("File can't open!\n");
        fclose(fptr);
        exit(1);
    }
}

void update_data(struct Person *sptr){
    FILE *fptr;
    FILE *tptr;
    sptr = (struct Person*) malloc(sizeof(struct Person));
    
    if((fptr=fopen("mydata.txt", "r"))!=NULL){
        printf("\n---------------Update Data---------------\n");
        printf("\n*******  update data are add end of file  **********\n");
        char c;
        int num;
        
        // scan file data
        //updata data are add end of line.
        
        printf("enter id: ");
        scanf("%d", &num);
        for(c=getc(fptr); c!=EOF; c=getc(fptr)){
            fscanf(fptr," %d %s %s %d", &sptr->id, &sptr->username, &sptr->password, &sptr->amount);
//            printf("%d\t%s\t%s\t%d\n", t_id, t_user, t_pass, t_amt);
            
            if(sptr->id == num){
                printf("temp id: %d\n", sptr->id);
                printf("temp u: %s\n", sptr->username);
                printf("temp p: %s\n", sptr->password);
                printf("temp a: %d\n", sptr->amount);
                
                // change state here
                printf("\n1.id, 2.username, 3.password, 4.amount\n: ");
                scanf("%d", &num);
                
                if(num == 1){
                    printf("change id value: ");
                    scanf("%d", &sptr->id);
                } else if (num == 2){
                    printf("change useranme: ");
                    scanf("%s", &sptr->username);
                } else if (num ==3 ){
                    printf("change password: ");
                    scanf("%s", &sptr->password);
                } else if (num == 4){
                    printf("change amount: ");
                    scanf("%s", &sptr->amount);
                }
                
                if((tptr=fopen("mydata.txt", "a"))!=NULL){
                    fprintf(tptr, " %d\t %s\t %s\t %d %c", sptr->id, sptr->username, sptr->password, sptr->amount, '\n');
                    fclose(fptr);
                }              
                fclose(fptr);
            }
        }
        fclose(fptr);
    }else {
        printf("File can't open!\n");
        exit(1);
    }
}

void read_data(struct Person *sptr){
    FILE *fptr;
    sptr = (struct Person*) malloc(sizeof(struct Person));
    char c;
   
    printf("\n---------------Read Data---------------\n");
    if((fptr=fopen("mydata.txt", "r"))!=NULL){
           while((c =getc(fptr)) != EOF) {
            printf("%c", c);
           }
        fclose(fptr);
    }else {
        printf("file can't open!");
    }
}
