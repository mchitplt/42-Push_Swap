/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat < mupolat@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:02:03 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/08 01:02:03 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include    "push_swap.h"

void    show_error(void)
{
    ft_putstr_fd("Error\n", 2);
    exit(1);
}

void    same_numbers_check(int *a, int i)
{
    int k = 0;

    while (k < i)
    {
        if (a[k] == a[i])
            show_error();
        k++;
    }
}

int sort_check(int *array, int len)
{
    int i = 0;

    while (i + 1 < len)
    {
        if (array[i] > array[i + 1])
            return (0);
        i++;
    }
    return (1);
}