#include <stdio.h>



int add(int n) {
    if(n>0) {
        return n + add(n-1);
    } else {
        return 0;
    }
}


int main()
{
    int result = add(10);
    
    printf("%d", result);
    
    
    return 0;
}
