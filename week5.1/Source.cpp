#include<stdio.h>
#include <iostream>
using namespace std;
int main()
{
    const int money = 8;
    int coin[money] = { 1000, 500, 100, 50, 20, 10, 5, 1 };
    int count[money] = { 0, 0, 0, 0, 0, 0, 0, 0 };
    int *price,p;
    price = &p;
    printf("Input price: ");
    scanf_s("%d", &p);

    for (int i = 0; i < money; i++)
    {
        count[i] = p / coin[i];
        p %= coin[i];
    }
    printf("\nYou pay\n");
    for (int i = 0; i < money; i++)
    {
        if (count[i] == 0 || count[i] < 0) 
        {
            continue;
        }
        printf("%d Baht = %d \n", coin[i], count[i]);
    }

    return 0;
}