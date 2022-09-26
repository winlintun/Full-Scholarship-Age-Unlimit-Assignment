#include <stdio.h>
#include <stdlib.h>


struct Personal{
    char *name;
    char *hobby;
    int age;
};



int main()
{
    struct Personal *winlintun;
    
    winlintun = (struct Personal*)malloc(sizeof(Personal)); // memory create data type
    
    winlintun->name = "WinLinTun";
    winlintun->hobby = "Reading";
    winlintun->age = 24;
    
    printf("Personal Name: %s\n", winlintun->name);
    printf("Personal Hobby: %s\n", winlintun->hobby);
    printf("Personal age: %d\n", winlintun->age);
    
    
    
    
    
    return 0;
}
