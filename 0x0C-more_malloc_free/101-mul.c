#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int multiply(char *num1, char *num2);

int main(int argc, char **argv)
{
    if (argc != 3) {
        printf("Error\n");
        return 98;
    }

    char *num1 = argv[1];
    char *num2 = argv[2];

    for (int i = 0; num1[i] != '\0'; i++) {
        if (!isdigit(num1[i])) {
            printf("Error\n");
            return 98;
        }
    }

    for (int i = 0; num2[i] != '\0'; i++) {
        if (!isdigit(num2[i])) {
            printf("Error\n");
            return 98;
        }
    }

    int result = multiply(num1, num2);
    printf("%d\n", result);
    return 0;
}

int multiply(char *num1, char *num2)
{
    int len1 = 0, len2 = 0, i, j;
    int *result, carry = 0;

    while (num1[len1])
        len1++;
    while (num2[len2])
        len2++;

    result = calloc(len1+len2, sizeof(int));

    for (i = len1-1; i >= 0; i--) {
        carry = 0;
        for (j = len2-1; j >= 0; j--) {
            int prod = (num1[i]-'0') * (num2[j]-'0') + carry + result[i+j+1];
            carry = prod / 10;
            result[i+j+1] = prod % 10;
        }
        result[i+j+1] += carry;
    }

    i = 0;
    while (result[i] == 0 && i < len1+len2-1)
        i++;

    int res = 0;
    for (; i < len1+len2; i++)
        res = res*10 + result[i];

    free(result);
    return res;
}

