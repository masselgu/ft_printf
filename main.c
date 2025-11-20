#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
    int r1, r2;

    printf("\n============================\n");
    printf("       BASIC TESTS\n");
    printf("============================\n");

    r1 = printf("1- Char     : %c\n", 'A');
    r2 = ft_printf("1- Char     : %c\n", 'A');
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("2- String   : %s\n", "Hello");
    r2 = ft_printf("2- String   : %s\n", "Hello");
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("3- Pointer  : %p\n", (void *)12345);
    r2 = ft_printf("3- Pointer  : %p\n", (void *)12345);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("4- Signed   : %d\n", -42);
    r2 = ft_printf("4- Signed   : %d\n", -42);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("5- Unsigned : %u\n", 424242);
    r2 = ft_printf("5- Unsigned : %u\n", 424242);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("6- Hex low  : %x\n", 255);
    r2 = ft_printf("6- Hex low  : %x\n", 255);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("7- Hex up   : %X\n", 255);
    r2 = ft_printf("7- Hex up   : %X\n", 255);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("8- Percent  : %%\n");
    r2 = ft_printf("8- Percent  : %%\n");
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);


    printf("\n============================\n");
    printf("       SPECIAL CASES\n");
    printf("============================\n");

    r1 = printf("Empty string: \"%s\"\n", "");
    r2 = ft_printf("Empty string: \"%s\"\n", "");
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("NULL string : %s\n", (char *)NULL);
    r2 = ft_printf("NULL string : %s\n", (char *)NULL);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);

    r1 = printf("INT_MIN: %d\n", -2147483648);
    r2 = ft_printf("INT_MIN: %d\n", -2147483648);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);


    printf("\n============================\n");
    printf("       MULTIPLE CONVERSIONS\n");
    printf("============================\n");

    r1 = printf("Mix: %c %s %d %u %x %X %%\n",
                 'A', "Hi", -42, 42u, 255, 255);
    r2 = ft_printf("Mix: %c %s %d %u %x %X %%\n",
                   'A', "Hi", -42, 42u, 255, 255);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);


    printf("\n============================\n");
    printf("       IDENTICAL SEQUENCES\n");
    printf("============================\n");

    r1 = printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
    r2 = ft_printf("%d %d %d %d %d\n", 1, 2, 3, 4, 5);
    printf("ret printf = %d | ret ft_printf = %d\n\n", r1, r2);


    printf("\n============================\n");
    printf("       EDGE PRINTF CASES\n");
    printf("============================\n");

    r1 = printf(0);  // UB, but included for defense
    printf("printf(NULL) returned : %d\n", r1);

    r2 = ft_printf(0);
    printf("ft_printf(NULL) returned : %d\n\n", r2);


    return 0;
}
