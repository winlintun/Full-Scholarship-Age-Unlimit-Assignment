#include <stdio.h>


int pricevalue(int qty, int amount);
int subvalue(int x, int y);

int main() 
{
    int index = 0;
    char fruits[10] = {'a', 'b', 'o', 'm', 'w', '\0'};
    char data;
    char* fptr;
    char* cptr;
    
    int qty = 0;
    char name[1000];
    int bank=0;
    int total = 0;
    
    printf("Setup Data!\n");
    printf("Enter username: ");
    scanf("%s", &name);
    printf("Your money amount: ");
    scanf(" %d", &bank);
    
    printf("username: %s\n", name);
    printf("your bank card: %d ks\n", bank);
    
    while (bank > 0){
        if (bank > 0) {
        printf("\nWelcome Fruit Shop!\n");
        printf("================================\n");    
        printf("'a':Apple,\n'b':Banana,\n'o':Orange,\n'm':Mango,\n'w':Watermelon\n");
        
        printf("Enter the fruit: ");
        scanf(" %c", &data);
        
        
        if (data == 'a'){
            
            cptr = &data; // user data get 
            
            for(int i=0; fruits[i] != '\0'; i++) {
                fptr = &fruits[i]; // char array data get 
                if (*cptr == *fptr) { // check user data == char array data
                    printf("Your fruits found!\n");
                    printf("Your fruits Value %d and Address %p.\n", *fptr, fptr);
                }
            }
            
            printf("You Choose Apple.\n 1 apple are 500ks.\n");
            printf("Quantity : ");
            scanf("%d", &qty);
            int amount = 500;
            
            total = pricevalue(qty, amount);
            printf("Payment amount: %d ks\n", total);
            
            char check='N';
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &check);
            printf("\n%c\n", check);
            
            if (check != 'n' || check != 'N') {
                printf("Purchase Successfully.\n");
                printf("Bank value: %d ks\n", bank);
                printf("Payment value: %d ks\n", total);
                bank = subvalue(bank, total);
                printf("Your bank amount remain: %d ks\n", bank);
            }
           
            
        }
        else if (data == 'b') {
            cptr = &data; // user data get 
            
            for(int i=0; fruits[i] != '\0'; i++) {
                fptr = &fruits[i]; // char array data get 
                if (*cptr == *fptr) { // check user data == char array data
                    printf("Your fruits found!\n");
                    printf("Your fruits Value %d and Address %p.\n", *fptr, fptr);
                }
            }
            
            printf("You Choose Banana.\n 1 banana are 300ks.\n");
            printf("Quantity : ");
            scanf("%d", &qty);
            int amount = 300;
            
            total = pricevalue(qty, amount);
            printf("Payment amount: %d ks\n", total);
            
            char check='N';
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &check);
            printf("\n%c\n", check);
            
            if (check != 'n' || check != 'N') {
                printf("Purchase Successfully.\n");
                printf("Bank value: %d ks\n", bank);
                printf("Payment value: %d ks\n", total);
                bank = subvalue(bank, total);
                printf("Your bank amount remain: %d ks\n", bank);
            }
            
        }
        else if (data == 'o'){
            cptr = &data; // user data get 
            
            for(int i=0; fruits[i] != '\0'; i++) {
                fptr = &fruits[i]; // char array data get 
                if (*cptr == *fptr) { // check user data == char array data
                    printf("Your fruits found!\n");
                    printf("Your fruits Value %d and Address %p.\n", *fptr, fptr);
                }
            }
            
            printf("You Choose Orange.\n 1 orange are 400ks.\n");
            printf("Quantity : ");
            scanf("%d", &qty);
            int amount = 400;
            
            total = pricevalue(qty, amount);
            printf("Payment amount: %d ks\n", total);
            
            char check='N';
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &check);
            printf("\n%c\n", check);
            
            if (check != 'n' || check != 'N') {
                printf("Purchase Successfully.\n");
                printf("Bank value: %d ks\n", bank);
                printf("Payment value: %d ks\n", total);
                bank = subvalue(bank, total);
                printf("Your bank amount remain: %d ks\n", bank);
            }
        }
        else if (data == 'm'){
            cptr = &data; // user data get 
            
            for(int i=0; fruits[i] != '\0'; i++) {
                fptr = &fruits[i]; // char array data get 
                if (*cptr == *fptr) { // check user data == char array data
                    printf("Your fruits found!\n");
                    printf("Your fruits Value %d and Address %p.\n", *fptr, fptr);
                }
            }
            
            printf("You Choose Mango.\n 1 mango are 800ks.\n");
            printf("Quantity : ");
            scanf("%d", &qty);
            int amount = 800;
            
            total = pricevalue(qty, amount);
            printf("Payment amount: %d ks\n", total);
            
            char check='N';
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &check);
            printf("\n%c\n", check);
            
            if (check != 'n' || check != 'N') {
                printf("Purchase Successfully.\n");
                printf("Bank value: %d ks\n", bank);
                printf("Payment value: %d ks\n", total);
                bank = subvalue(bank, total);
                printf("Your bank amount remain: %d ks\n", bank);
            }
        }
        else if (data == 'w'){
            cptr = &data; // user data get 
            
            for(int i=0; fruits[i] != '\0'; i++) {
                fptr = &fruits[i]; // char array data get 
                if (*cptr == *fptr) { // check user data == char array data
                    printf("Your fruits found!\n");
                    printf("Your fruits Value %d and Address %p.\n", *fptr, fptr);
                }
            }
            
            printf("You Choose Watermelom.\n 1 watermelon are 1500ks.\n");
            printf("Quantity : ");
            scanf("%d", &qty);
            int amount = 1500;
            
            total = pricevalue(qty, amount);
            printf("Payment amount: %d ks\n", total);
            
            char check='N';
            printf("Are you sure? (Y/N): ");
            scanf(" %c", &check);
            printf("\n%c\n", check);
            
            if (check != 'n' || check != 'N') {
                printf("Purchase Successfully.\n");
                printf("Bank value: %d ks\n", bank);
                printf("Payment value: %d ks\n", total);
                bank = subvalue(bank, total);
                printf("Your bank amount remain: %d ks\n", bank);
            }
        }
        else {
            printf("Invalid input!\n");
            break;
        }
    }
	
    }
	



	return 0;
}


int pricevalue(int qty, int amount) { // pass by value 
       
    int sum = qty * amount;
    return sum;
    
}

int subvalue(int x, int y){
    
    if(x >= y){
        int value = x - y;
        return value;
    }
    else if (x == 0) {
        printf("Your balnce is %d\nPlz topup.", x);
    }
    else {
        printf("Low balance.\n");
    }
    
}
