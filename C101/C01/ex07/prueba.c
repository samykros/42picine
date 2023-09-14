#include <stdio.h>

void ft_rev_int_tab(int *tab, int size);

int main()
{
    int tab[3] = {1, 2, 3};
    int *ptr = tab;

    ft_rev_int_tab(ptr, 3);

    for (int i = 0; i < 3; i++) {
        printf("%d ", tab[i]);
    }

    return 0;
}

void ft_rev_int_tab(int *tab, int size)
{
    int temp[size];
    int *ptr_temp = temp;
    int i = size - 1;

    while (i >= 0) {
        *ptr_temp = tab[i];
        ptr_temp++;
        i--;
    }

    ptr_temp = temp;
    i = 0;
    while (i < size) {
        tab[i] = *ptr_temp;
        ptr_temp++;
        i++;
    }
}

