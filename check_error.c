/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_error.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:02:03 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/18 12:48:50 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	show_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(1);
}

void	same_numbers_check(int *a, int i)
{
	int	k;

	k = 0;
	while (k < i)
	{
		if (a[k] == a[i])
			show_error();
		k++;
	}
}

void	ft_ws_control(char **str)
{
	int	i;
	int	j;
	int	flag;

	i = 1;
	flag = 0;
	j = 0;
	while (str[i])
	{
		j = 0;
		while (str[i][j])
		{
			if (str[i][j] <= '9' && str[i][j] >= '0')
			{
				flag = 1;
				break ;
			}
			j++;
		}
		if (flag == 0)
			show_error();
		flag = 0;
		i++;
	}
}

int	sort_check(int *array, int len)
{
	int	i;

	i = 0;
	while (i + 1 < len)
	{
		if (array[i] > array[i + 1])
			return (0);
		i++;
	}
	return (1);
}
