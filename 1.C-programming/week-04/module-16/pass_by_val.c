#include <stdio.h>
int incrementByValue(int x) {
    x++;
    return x;
}
int incrementByReference(int *x) {
    (*x)++;
    return *x;
}

int main() {
    int num = 5;
    incrementByValue(num);
    printf("After incrementByValue: %d\n", num);
        
    incrementByReference(&num);
    printf("After incrementByReference: %d\n", num); 

    return 0;
}
