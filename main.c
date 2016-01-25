#include "T112_Lab04_2.h"

int main()
{
    int integer_n;
    double double_n;

    printf("Please input an integer: ");
    integer_n = int_input();
    printf("You entered %d\n", integer_n);

    printf("Please input a real number: ");
    double_n = real_input();
    printf("You entered %lf\n", double_n);

    return 0;
}

