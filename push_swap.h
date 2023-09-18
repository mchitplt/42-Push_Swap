/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mupolat <mupolat@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/08 01:04:00 by mupolat           #+#    #+#             */
/*   Updated: 2023/09/18 14:02:40 by mupolat          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H

# define PUSH_SWAP_H

# include <unistd.h>
# include <stdlib.h>

typedef struct s_stack
{
	int	*a;
	int	*b;
	int	*sorted;
	int	op;
	int	nb;
	int	na;
	int	tmp;
	int	tmplen;
}	t_stack;

void	ft_check(char *str);
void	ft_ws_control(char **str);
void	show_error(void);
void	same_numbers_check(int *a, int i);
void	which_function(t_stack *stack, int len);
void	sort_2(t_stack *stack);
void	sort_3(t_stack *stack);
void	sort_5(t_stack *stack, int len);
void	butterfly(t_stack *stack, int len);
void	ft_swap(t_stack *stack, char c);
void	ft_rotate(t_stack *stack, char c, int len);
void	ft_reverse_rotate(t_stack *stack, char c, int len);
void	ft_push_a(t_stack *stack, int lena, int lenb);
void	ft_push_b(t_stack *stack, int lena, int lenb);
void	butterfly_infrastructure(t_stack *stack, int flag);
void	butterfly_last_move(t_stack *stack, int len);
void	be_free(char **array);
void	butterfly_last_inf(t_stack *stack, int flag);
void	sort_5_inf(t_stack *stack, int len, int i, int j);
void	ft_putstr_fd(char *s, int fd);
int		sort_check(int *array, int len);
int		*sorted_numbers(int *a, int ta);
int		logaritma(int ta);
int		ft_isdigit(int c);
int		square_root(int ta);
int		total_element(char **av);
int		*parse_check(char **av, int ta);
int		ft_atoi(char *str);
char	**ft_split(char const *s, char c);		
#endif
