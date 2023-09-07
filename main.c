/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat < mupolat@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:02:57 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/08 01:02:57 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "push_swap.h"

int main(int ac, char **av)
{

    int ta;
    int i;
    t_stack *stack;

    if (ac == 1)
        return (0);
    ta = total_element(av);
    stack = malloc(sizeof(t_stack));
    stack->b = malloc(sizeof(int) * ta);
    stack->a = parse_check(av, ta);
    stack->sorted = parse_check(av, ta);
    i = 0;
    while (i < ta)
        same_numbers_check(stack->a, i++);
    if (sort_check(stack->a, ta))
        return (0);
    stack->sorted = sorted_numbers(stack->sorted, ta);
    stack->op = logaritma(ta) + square_root(ta);
    which_function(stack, ta);
    return (0);
}