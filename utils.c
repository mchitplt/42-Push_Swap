/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat < mupolat@student.42.fr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:04:06 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/08 01:04:06 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include    "push_swap.h"

int ft_atoi(char *str)
{
    int i = 0;
    long result = 0;
    int sign = 1;

    if (str[0] == '-' || str[0] == '+')
    {
        if (str[1] == '\0')
            show_error();
        if (str[0] == '-')
            sign = - sign;
        i++;
    }
    while (str[i])
    {
        if (str[i] < '0' || str[i] > '9')
            show_error();
        result = (result * 10) + str[i++] - '0';
    }
    result = result * sign;
    if ((result <= -2147483648) || (result >= 2147483647))
		show_error();
    return (result);
}

void    ft_putstr_fd(char *s, int fd)
{
    int i = 0;

    if (!s)
        return;
    while (s[i])
    {
        write (fd, &s[i], 1);
        i++;
    }
}

void    butterfly_last_inf(t_stack *stack, int flag)
{
    if (flag == 1)
    {
        ft_putstr_fd("pa\n", 1);
        ft_push_a(stack, stack->na, stack->nb);
        stack->nb--;
        stack->na++;
    }
    if(flag == 2)
    {
        ft_putstr_fd("rb\n", 1);
        ft_rotate(stack, 'b', stack->nb);
    }
    if (flag == 3)
	{
		ft_putstr_fd("rrb\n", 1);
		ft_reverse_rotate(stack, 'b', stack->nb);
	}
}

void	sort_5_inf(t_stack *stack, int len, int i, int j)
{
	while (j < 2)
	{
		if (stack->a[0] == stack->sorted[j])
		{
			butterfly_infrastructure(stack, 2);
			j++;
			i = 0;
		}
		else
		{
			while (stack->a[i] != stack->sorted[j])
				i++;
			if (i < len / 2)
				butterfly_infrastructure(stack, 3);
			else if (i >= len / 2)
			{
				ft_putstr_fd("rra\n", 1);
				ft_reverse_rotate(stack, 'a', stack->na);
			}
		}
	}
	sort_3(stack);
	while (stack->nb > 0)
		butterfly_last_inf(stack, 1);
}