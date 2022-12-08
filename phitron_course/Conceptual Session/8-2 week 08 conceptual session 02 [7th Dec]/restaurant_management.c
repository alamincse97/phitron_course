/*
problem requirements:-

01. খাবার সেট করতে হবে।

name
price
food code
tax

02. সবগুলো food দেখাতে হবে।
*/
#include"stdio.h"

struct Food
{
    char name[100];
    double price;
    double tax;
    int f_code;
};

struct Food input_foods()
{
    struct Food single_food;
    printf("Enter food_name, price, food_code: ");
    scanf(" %s %lf %d", single_food.name, &single_food.price, &single_food.f_code);
    single_food.tax = single_food.price * .5;
    return single_food;
};

void display_foods(struct Food f[], int sz)
{
    for(int i=0; i<sz; i++)
    {
        printf("food name: %d", f[i].name);
    }
}

int main()
{
    printf("How much food input: ");

    int n;
    scanf("%d", &n);

    struct Food food_items[n];

    for(int i=0; i<n; i++)
    {
        food_items[i] = input_foods();
    }
    display_foods(food_items, n);
}
