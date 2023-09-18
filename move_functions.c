/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   move_functions.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:03:31 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/18 11:16:48 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	ft_swap(t_stack *stack, char c)
{
	if (c == 'a' || c == 's')
	{
		stack->tmp = stack->a[0];
		stack->a[0] = stack->a[1];
		stack->a[1] = stack->tmp;
	}
	if (c == 'b' || c == 's')
	{
		stack->tmp = stack->b[0];
		stack->b[0] = stack->b[1];
		stack->b[1] = stack->tmp;
	}
}

void	ft_rotate(t_stack *stack, char c, int len)
{
	int	i;

	i = 0;
	if (c == 'a' || c == 'r')
	{
		stack->tmp = stack->a[0];
		while (i < len - 1)
		{
			stack->a[i] = stack->a[i + 1];
			i++;
		}
		stack->a[i] = stack->tmp;
	}
	if (c == 'b' || c == 'r')
	{
		stack->tmp = stack->b[0];
		while (i < len - 1)
		{
			stack->b[i] = stack->b[i + 1];
			i++;
		}
		stack->b[i] = stack->tmp;
	}
}

void	ft_reverse_rotate(t_stack *stack, char c, int len)
{
	if (c == 'a' || c == 'r')
	{
		stack->tmp = stack->a[len - 1];
		while (len - 1 > 0)
		{
			stack->a[len - 1] = stack->a[len - 2];
			len--;
		}
		stack->a[0] = stack->tmp;
	}
	if (c == 'r')
		len = stack->tmplen;
	if (c == 'b' || c == 'r')
	{
		stack->tmp = stack->b[len - 1];
		while (len > 0)
		{
			stack->b[len - 1] = stack->b[len - 2];
			len--;
		}
		stack->b[0] = stack->tmp;
	}
}

void	ft_push_a(t_stack *stack, int lena, int lenb)
{
	int	i;

	i = 0;
	stack->tmp = stack->b[0];
	while (i < lenb - 1)
	{
		stack->b[i] = stack->b[i + 1];
		i++;
	}
	while (0 < lena)
	{
		stack->a[lena] = stack->a[lena - 1];
		lena--;
	}
	if (lena == 0)
		stack->a[0] = stack->tmp;
}

void	ft_push_b(t_stack *stack, int lena, int lenb)
{
	int	i;

	i = 0;
	stack->tmp = stack->a[0];
	while (i < lena - 1)
	{
		stack->a[i] = stack->a[i + 1];
		i++;
	}
	while (0 < lenb)
	{
		stack->b[lenb] = stack->b[lenb - 1];
		lenb--;
	}
	if (lenb == 0)
		stack->b[0] = stack->tmp;
}
