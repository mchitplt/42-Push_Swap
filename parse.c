/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:03:45 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/18 11:21:49 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	total_element(char **av)
{
	char	**array;
	int		i;
	int		k;
	int		j;

	i = 1;
	k = 0;
	while (av[i])
	{
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j])
		{
			j++;
			k++;
		}
		i++;
		be_free(array);
	}
	if (k == 0)
		return (0);
	return (k);
}

int	*parse_check(char **av, int ta)
{
	char	**array;
	int		i;
	int		k;
	int		j;
	int		*res;

	i = 1;
	k = 0;
	res = malloc(sizeof(int) * (ta));
	while (av[i])
	{
		if (av[i][0] == '\0')
			show_error();
		array = ft_split(av[i], ' ');
		j = 0;
		while (array[j])
		{
			res[k] = ft_atoi(array[j]);
			k++;
			j++;
		}
		i++;
		be_free(array);
	}
	return (res);
}

void	be_free(char **array)
{
	int	i;

	i = 0;
	while (array[i])
		free(array[i++]);
	free(array);
}
