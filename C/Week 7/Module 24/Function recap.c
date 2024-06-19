#include <stdio.h>
int take_radius()
{
    printf("Please enter 3 sides of triangles:");
    scanf("%d", &r);
    return r;
}
calculate_area(int n)
{
    float ans=3.14159*r*r;
    printf("%f",ans);
}

int main(void)
{
    int r;
    r = take_radius();
    calculate_area(r);
    printf("Area of the circle:%f", area);

    return 0;
}