
#include <stdio.h>

int fibonacci(int n) {
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

int main() {
    int n;

    printf("Enter the number of Fibonacci terms to display: ");
    scanf("%d", &n);

    printf("First %d Fibonacci numbers:\n", n);
    for(int i = 0; i < n; i++) {
        printf("%d ", fibonacci(i));
    }

    return 0;
}
