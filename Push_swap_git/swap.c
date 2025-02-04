/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: matomas <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 13:39:44 by matomas           #+#    #+#             */
/*   Updated: 2024/10/15 13:41:57 by matomas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*	Swaps the top 2 elements of a stack. 
    Does nothing if there is only one or no elements. */

static void	swap(t_stack **stack)
{
	t_stack	*tmp;

	if (!*stack || (*stack)->next == NULL)
		return ;
	tmp = *stack;
	*stack = (*stack)->next;
	tmp->next = (*stack)->next;
	(*stack)->next = tmp;
}

/*	Swaps the top 2 elements of stack a. Prints "sa" to the standard output. */

void	do_sa(t_stack **stack_a)
{
	swap(stack_a);
	ft_putstr("sa\n");
}

/*	Swaps the top 2 elements of stack b. Prints "sb" to the standard output. */

void	do_sb(t_stack **stack_b)
{
	swap(stack_b);
	ft_putstr("sb\n");
}

/*	Swaps the top 2 elements of stack a and the top 2 elements
	of stack b. Prints "ss" to the standard output. */

void	do_ss(t_stack **stack_a, t_stack **stack_b)
{
	swap(stack_a);
	swap(stack_b);
	ft_putstr("ss\n");
}
