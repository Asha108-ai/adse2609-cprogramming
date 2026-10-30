
#include <stdio.h>

int main() {
    int score;

    printf("Enter your exam score: ");
    scanf("%d", &score);

    (score < 0 || score > 100)
        ? printf("Invalid score! Enter a score between 0 and 100.\n")
        : (score >= 55)
            ? printf("Congratulations! You have passed.\n")
            : printf("Sorry! You have failed.\n");

    return 0;
}
