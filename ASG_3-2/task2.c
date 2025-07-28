#include <stdio.h>

int fibonacci_recursive(int n) {
    if (n==0)
        return 0;
    else if (n==1)
        return 1;
    else
        return fibonacci_recursive(n-1) + fibonacci_recursive(n-2);
}

void fibonacci_iterative(int n) {
    int a = 0, b = 1, next;

    printf("Fibonacci sequence (Iterative): ");
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        next = a + b;
        a = b;
        b = next;
    }
    printf("\n");
}

int main() {
    int terms;

    printf("Enter number of terms: ");
    scanf("%d", &terms);

    fibonacci_iterative(terms);

    printf("Fibonacci sequence (Recursive): ");
    for (int i = 0; i < terms; i++) {
        printf("%d ",fibonacci_recursive(i));
    }
    printf("\n");
    
    return 0;
}