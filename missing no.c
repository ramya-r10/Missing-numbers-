#include <stdio.h>

int main() {
    int num, ans;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("%d² = ?\n", num);

    printf("Enter the missing value: ");
    scanf("%d", &ans);

    if(ans == num * num)
        printf("Correct Answer!");
    else
        printf("Wrong Answer! %d² = %d", num, num * num);

    return 0;
}
