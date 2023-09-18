/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:04:06 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/18 13:35:38 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	ft_isdigit(int c)
{
	return (c <= '9' && c >= '0');
}

void	ft_check(char *str)
{
	size_t	i;

	i = 0;
	if (!ft_isdigit(str[i]) && str[i] != '+' && str[i] != '-')
		show_error();
	if ((str[i] == '+' || str[i] == '-') && !ft_isdigit(str[i + 1]))
		show_error();
	i = 1;
	while (str[i])
	{
		if (!ft_isdigit(str[i]))
		{
			show_error();
		}
		i++;
	}
}

int	ft_atoi(char *str)
{
	long	i;
	long	sign;
	long	result;

	i = 0;
	sign = 1;
	result = 0;
	ft_check(str);
	while (str[i] == 32 || (str[i] <= 13 && str[i] >= 9))
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign *= -1;
		i++;
	}
	while (str[i] <= '9' && str[i] >= '0')
	{
		result = result * 10 + (str[i++] - '0');
		if (result > 2147483648)
			show_error();
	}
	if ((result * sign) == 2147483648)
		show_error();
	return ((int)result * sign);
}

void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	if (!s)
		return ;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}
