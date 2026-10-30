#include <stdio.h>
int main()
{

    float amount, sugar, milk, change;
    printf("amount:kes.");
    scanf("%f", &amount);

    printf("sugar:kes.");
    sacnf("%f",&sugar);

    printf("milk: kes.");
    scanf("%f", milk);

    change = amount- (sugar + milk);

    print("change: kes.%.2f\n", change);

    return 0;


}
