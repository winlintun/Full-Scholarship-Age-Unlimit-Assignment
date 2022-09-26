#include <stdio.h>


#define SIZE 100



int main()
{
    int num;
    int data[SIZE] = {10, 20, 30, 40, 50, 60, 70, 80, 90, 5};

    int temp = data[0];
    
    for(int i=0; i<SIZE; i++) {
        if(data[0] < data[i]) {
            data[0] = data[i];
        }
    }
    
    printf("Largest value or array: %d\n", data[0]);
    
    data[0] = temp;
    
    printf("\nall elements form array\n");
    
    for(int j=0; j<SIZE; j++) {
        printf(" %d", data[j]);
    }
    
    return 0;
}
