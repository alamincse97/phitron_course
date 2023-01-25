/*#include<stdio.h>

void warning()
{
    printf("Fire in the building! Please evacuate!\n ");
}

int main()
{
    warning();

    return 0;
}
*/

/*#include<stdio.h>

void solve()
{
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d\n", a+b);
}

int main()
{
    int t, i;
    scanf("%d", &t);

    for(i=0; i<t; i++)
    {
        solve();
    }
    return 0;
}
*/

// function no return

#include<stdio.h>

int take_radius()
{
    int r;
    printf("Please enter the radius of a circle: ");
    scanf("%d", &r);
    return r;
}

float calculate_area(int radius)
{
    float ans = 3.14159*r*r;
    return ans;
}

int main()
{
    int r;
    r = take_radius();

    float area = calculate_area(r);
    printf("Area of the circle is %f\n", area);

    return 0;

}


