#include <stdio.h>
int power(int n1, int n2);
int main() {
    int base, a, result;
    printf("Enter base number: ");
    fflush(stdin);
    fflush(stdout);
    scanf("%d", &base);
    printf("Enter power number(positive integer): ");
    fflush(stdin);
	fflush(stdout);
    scanf("%d", &a);
    power(base, a);
    printf("%d^%d = %d", base, a,power(base, a));

    return 0;
}

int power(int base, int a) {
    if (a != 0)
        return (base * power(base, a - 1));
    else
        return 1;
}
